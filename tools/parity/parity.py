#!/usr/bin/env python3
"""Differential-emulation parity harness.

Runs a function from the original image (GMSv62.exe) and its reconstruction (compiled by MSVC into a
test DLL) in the same x86-32 emulator (unicorn) on identical randomized inputs, and compares:
  * EAX, ESP (the callee must pop the same number of bytes) and the callee-saved registers,
  * the memory the function may touch (observed regions, with known address pairs normalised),
  * the trace of external calls (imports, COM methods): name and arguments, in order.
External calls land on harness stubs, so neither image needs the rest of the program.

usage (needs unicorn: PYTHONPATH=~/.local/share/parity-libs):
  parity.py SPEC [--cases N] [--seed S] [--new-dll PATH]     # SPEC: com_error ...
Specs live next to this file as spec_<name>.py and define SPEC (see spec_com_error.py).
"""
import importlib, os, random, struct, sys
import pefile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE, UcError
from unicorn.x86_const import *

HALT = 0x0FFF0000
HOOK_BASE = 0x30000000
STACK_BASE, STACK_SIZE = 0x10000000, 0x100000
HEAP_BASE, HEAP_SIZE = 0x20000000, 0x100000
PAGE = 0x1000
CALLEE_SAVED = [("ebx", UC_X86_REG_EBX), ("esi", UC_X86_REG_ESI), ("edi", UC_X86_REG_EDI), ("ebp", UC_X86_REG_EBP)]

def align(n): return (n + PAGE - 1) & ~(PAGE - 1)

class Image:
    def __init__(self, path):
        self.pe = pefile.PE(path)
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        self.data = bytes(self.pe.get_memory_mapped_image())
    def import_slot(self, name):
        """Address of the import-table slot for `name`, or None if the image does not import it."""
        for ent in getattr(self.pe, "DIRECTORY_ENTRY_IMPORT", []):
            for imp in ent.imports:
                if imp.name and imp.name.decode() == name:
                    return imp.address
        return None

def read_map(path):
    """Public symbols from an MSVC link map: name -> address."""
    syms = {}
    for line in open(path, errors="replace"):
        parts = line.split()
        if len(parts) >= 4 and ":" in parts[0] and len(parts[2]) == 8:
            try:
                syms[parts[1]] = int(parts[2], 16)
            except ValueError:
                pass
    return syms

class Harness:
    def __init__(self, orig_path, new_path):
        self.uc = Uc(UC_ARCH_X86, UC_MODE_32)
        self.images = {}
        for key, p in (("orig", orig_path), ("new", new_path)):
            im = Image(p); self.images[key] = im
            self.uc.mem_map(im.base, align(len(im.data))); self.uc.mem_write(im.base, im.data)
        self.uc.mem_map(STACK_BASE, STACK_SIZE)
        self.uc.mem_map(HEAP_BASE, HEAP_SIZE)
        self.uc.mem_map(HOOK_BASE, PAGE)
        self.uc.mem_map(HALT & ~(PAGE - 1), PAGE)
        self.hooks = {}                    # address -> (name, nargs, fn)
        self.next_hook = HOOK_BASE
        self.trace = []
        self.uc.hook_add(UC_HOOK_CODE, self._on_code, begin=HOOK_BASE, end=HOOK_BASE + PAGE)
        self.heap_ptr = HEAP_BASE

    # -- hooks -------------------------------------------------------------------------------------
    def add_hook(self, name, nargs, fn=None):
        """An external function (stdcall/thiscall: callee pops nargs dwords). Returns its address."""
        a = self.next_hook; self.next_hook += 16
        code = b"\xc2" + struct.pack("<H", 4 * nargs) if nargs else b"\xc3"
        self.uc.mem_write(a, code)
        self.hooks[a] = (name, nargs, fn)
        return a

    def _on_code(self, uc, address, size, user):
        h = self.hooks.get(address)
        if not h: return
        name, nargs, fn = h
        esp = uc.reg_read(UC_X86_REG_ESP)
        args = tuple(struct.unpack("<%dI" % nargs, uc.mem_read(esp + 4, 4 * nargs))) if nargs else ()
        self.trace.append((name,) + args)
        uc.reg_write(UC_X86_REG_EAX, (fn(*args) if fn else 0) & 0xFFFFFFFF)

    # -- memory ------------------------------------------------------------------------------------
    def reset(self):
        self.uc.mem_write(HEAP_BASE, b"\0" * HEAP_SIZE)
        self.uc.mem_write(STACK_BASE, b"\0" * STACK_SIZE)
        self.heap_ptr = HEAP_BASE + 0x1000
        self.trace = []
    def alloc(self, data):
        a = self.heap_ptr; self.heap_ptr += (len(data) + 15) & ~15
        self.uc.mem_write(a, bytes(data)); return a
    def read(self, a, n): return bytes(self.uc.mem_read(a, n))

    # -- calling -----------------------------------------------------------------------------------
    def call(self, entry, ecx, args, garbage):
        uc = self.uc
        esp = STACK_BASE + STACK_SIZE - 0x1000
        for a in reversed(args):
            esp -= 4; uc.mem_write(esp, struct.pack("<I", a & 0xFFFFFFFF))
        esp -= 4; uc.mem_write(esp, struct.pack("<I", HALT))
        start_esp = esp
        for (n, reg), g in zip(CALLEE_SAVED, garbage):
            uc.reg_write(reg, g)
        uc.reg_write(UC_X86_REG_ESP, esp); uc.reg_write(UC_X86_REG_ECX, ecx)
        uc.reg_write(UC_X86_REG_EAX, garbage[0] ^ 0x5a5a5a5a); uc.reg_write(UC_X86_REG_EDX, garbage[1] ^ 0xa5a5a5a5)
        try:
            uc.emu_start(entry, HALT, count=200000)
        except UcError as e:
            return {"error": str(e), "eip": uc.reg_read(UC_X86_REG_EIP)}
        regs = {"eax": uc.reg_read(UC_X86_REG_EAX), "esp_delta": uc.reg_read(UC_X86_REG_ESP) - start_esp}
        for (n, reg), g in zip(CALLEE_SAVED, garbage):
            regs[n + "_preserved"] = uc.reg_read(reg) == g
        return regs

def normalise(data, pairs):
    out = bytearray(data)
    for i in range(0, len(out) - 3, 4):
        v = struct.unpack_from("<I", out, i)[0]
        if v in pairs: struct.pack_into("<I", out, i, pairs[v])
    return bytes(out)

def run_spec(spec, cases, seed, new_dll=None):
    rng = random.Random(seed)
    new_dll = new_dll or spec.NEW_DLL
    h = Harness(spec.ORIG_EXE, new_dll)
    h.new_map = new_dll[:-4] + ".map"                   # the link map sits next to the DLL
    syms = read_map(h.new_map)
    report = {}
    for fn in spec.FUNCTIONS:
        mism, ran, covered = [], 0, {}
        for c in range(cases):
            results = {}
            case = fn.make_case(rng)                       # pure data: shared by both runs
            garbage = [rng.getrandbits(32) for _ in range(4)]
            for which, entry in (("orig", fn.orig), ("new", syms[fn.new_symbol])):
                h.reset()
                ctx = spec.setup(h, which, case)           # builds objects, installs hooks; returns dict
                regs = h.call(entry, ctx["ecx"], ctx["args"], garbage)
                observed = [normalise(h.read(a, n), ctx["pairs"]) for a, n in ctx["observe"]]
                results[which] = (regs, observed, list(h.trace))
            ran += 1
            for tag in fn.coverage(case): covered[tag] = covered.get(tag, 0) + 1
            if results["orig"] != results["new"]:
                mism.append((case, results))
        report[fn.label] = (ran, mism, covered)
    return report

def main(argv):
    if not argv:
        print(__doc__); return 2
    name = argv[0]; cases = 300; seed = 1; new_dll = None
    it = iter(argv[1:])
    for a in it:
        if a == "--cases": cases = int(next(it))
        elif a == "--seed": seed = int(next(it))
        elif a == "--new-dll": new_dll = next(it)
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    spec = importlib.import_module("spec_" + name)
    report = run_spec(spec, cases, seed, new_dll)
    bad = 0
    for label, (ran, mism, covered) in report.items():
        print("%-34s %4d cases  %s   covered: %s" % (label, ran, "PARITY" if not mism else "MISMATCH x%d" % len(mism),
              ", ".join("%s=%d" % kv for kv in sorted(covered.items()))))
        for case, res in mism[:2]:
            print("    case:", case)
            for k in ("orig", "new"): print("    %-5s" % k, res[k])
        bad += len(mism)
    return 1 if bad else 0

if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
