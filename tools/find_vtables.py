#!/usr/bin/env python3
"""Find C++ vtables in a PE image and the functions that install them.

usage: find_vtables.py PE PROGRESS.csv MODULE OUT.csv
A vtable here is an address that some function (a constructor or destructor) stores at offset 0
of an object, `mov dword ptr [reg], imm32`, and that starts a run of 1+ consecutive code pointers
(a class with only a virtual destructor has a one-slot vtable).
The run is read from the stored address, not from known function entries: the first slots (scalar
deleting destructor, pure-virtual stubs) are often code Ghidra did not list as functions. Output: vtable address, slot count, slots, installers.
"""
import csv, re, struct, sys, collections
import capstone, pefile

def main(pe_path, progress, module, out):
    pe = pefile.PE(pe_path); base = pe.OPTIONAL_HEADER.ImageBase; img = pe.get_memory_mapped_image()
    rows = [r for r in csv.DictReader(open(progress)) if r["module"] == module]
    entries = {int(r["addr"], 16) for r in rows if not r["status"].startswith("EXCLUDED")}
    code_lo = min(entries); code_hi = max(int(r["addr"], 16) + int(r["size"]) for r in rows
                                          if not r["status"].startswith("EXCLUDED"))
    import bisect
    bodies = sorted((int(r["addr"], 16), int(r["addr"], 16) + max(int(r["size"]), 1)) for r in rows
                    if not r["status"].startswith("EXCLUDED"))      # not-code rows are the vtables themselves
    starts_ = [b[0] for b in bodies]
    def in_function(v):
        i = bisect.bisect_right(starts_, v) - 1
        return i >= 0 and v < bodies[i][1]
    def code_ptr(v):
        return code_lo <= v < code_hi
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    store = re.compile(r"^dword ptr \[(e[a-z]{2})(?: \+ 0)?\], (0x[0-9a-f]+)$")
    installers = collections.defaultdict(set)
    for r in rows:
        if r["status"].startswith("EXCLUDED"):
            continue
        a = int(r["addr"], 16); n = int(r["size"])
        for ins in md.disasm(img[a - base:a - base + n], a):
            if ins.mnemonic == "mov":
                m = store.match(ins.op_str)
                if m:
                    v = int(m.group(2), 16)
                    if code_lo <= v < base + len(img) - 8 and not in_function(v) and code_ptr(struct.unpack_from("<I", img, v - base)[0]):
                        installers[v].add(a)
    runs = {}
    ordered = sorted(installers)
    nxt = {v: (ordered[i + 1] if i + 1 < len(ordered) else 1 << 32) for i, v in enumerate(ordered)}
    for v in list(installers):
        slots = []; p = v - base
        # vtables sit back to back: a run ends where the next installed vtable begins
        while p + 4 <= len(img) and base + p < nxt[v] and code_ptr(struct.unpack_from("<I", img, p)[0]):
            slots.append(struct.unpack_from("<I", img, p)[0]); p += 4
        if len(slots) >= 1:
            runs[v] = slots
        else:
            del installers[v]
    with open(out, "w", newline="") as f:
        w = csv.writer(f); w.writerow(["vtable", "slots", "installers", "slot_addrs"])
        for v in sorted(installers):
            w.writerow(["%08x" % v, len(runs[v]), " ".join("%08x" % x for x in sorted(installers[v])),
                        " ".join("%08x" % x for x in runs[v])])
    print("%d candidate runs, %d installed as vtables" % (len(runs), len(installers)))

if __name__ == "__main__":
    main(*sys.argv[1:5])
