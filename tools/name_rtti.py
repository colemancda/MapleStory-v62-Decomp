#!/usr/bin/env python3
"""Attach RTTI type names to vtables through MSVC exception-handling data.

usage: name_rtti.py PE PROGRESS.csv MODULE VTABLES.csv OUT.csv
The client has RTTI only for thrown types. For each `.?AVName@@` type descriptor:
  TypeDescriptor <- CatchableType.pType <- CatchableTypeArray <- ThrowInfo.pCatchableTypeArray
and each function that pushes that ThrowInfo is a throw site. The object thrown is built on the stack (`lea ecx, [ebp-X]; call ctor`, then `lea eax, [ebp-X]`
is passed to the throw); matching the slot finds the constructor, and the most derived vtable it
installs names the class.
The array also lists the base types, giving the named inheritance of the thrown class.
Output: name, vtable, throw_sites, bases (from the catchable array), evidence.
"""
import csv, collections, re, struct, sys
import capstone, pefile
csv.field_size_limit(1 << 30)

def main(pe_path, progress, module, vt_csv, out):
    pe = pefile.PE(pe_path); base = pe.OPTIONAL_HEADER.ImageBase; img = pe.get_memory_mapped_image()
    dw = lambda a: struct.unpack_from("<I", img, a - base)[0] if base <= a <= base + len(img) - 4 else None
    names = {}                                                   # type descriptor address -> name
    for m in re.finditer(rb"\.\?A[VU](\w+)@@\x00", bytes(img)):
        names[base + m.start() - 8] = m.group(1).decode()
    where = collections.defaultdict(list)                        # dword value -> addresses (aligned)
    for off in range(0, len(img) - 3, 4):
        where[struct.unpack_from("<I", img, off)[0]].append(base + off)
    vts = {int(r["vtable"], 16): r for r in csv.DictReader(open(vt_csv))}
    installs = collections.defaultdict(set)
    for v, r in vts.items():
        for f in r["installers"].split():
            installs[int(f, 16)].add(v)
    # type descriptor -> catchable types -> arrays -> throw infos
    # a catch-handler record has pType at the same offset: a real CatchableType has properties 0..3
    ct_of = {td: [a - 4 for a in where[td] if dw(a - 4) in (0, 1, 2, 3)] for td in names}
    ct_all = {c: td for td, cs in ct_of.items() for c in cs}
    arrays = {}                                                  # array address -> [type descriptors]
    for c in ct_all:
        for p in where[c]:
            for i in range(8):
                q = p - 4 * (i + 1); n = dw(q)
                if n is not None and 1 <= n <= 8 and all(dw(q + 4 * (k + 1)) in ct_all for k in range(n)):
                    arrays[q] = [ct_all[dw(q + 4 * (k + 1))] for k in range(n)]
    throws = {}                                                  # throw info address -> array
    thrown_arrays = {}
    for q, tds in arrays.items():
        for p in where[q]:
            if dw(p - 12) is not None and dw(p - 12) <= 7:       # ThrowInfo.attributes
                throws[p - 12] = tds; thrown_arrays[q] = tds
    rows = [r for r in csv.DictReader(open(progress)) if r["module"] == module and not r["status"].startswith("EXCLUDED")]
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    found = collections.defaultdict(lambda: collections.Counter())  # name -> vtable -> sites
    bases = {}
    sites = collections.Counter()
    hier = {r["vtable"]: r["base"] for r in csv.DictReader(open(vt_csv.replace("_vtables", "_hierarchy"))) if r["base"]}
    def depth(v):
        d, seen = 0, set()
        x = "%08x" % v
        while x in hier and x not in seen:
            seen.add(x); x = hier[x]; d += 1
        return d
    LEA = re.compile(r"^(e[a-z]{2}), \[ebp - (0x[0-9a-f]+)\]$")
    for r in rows:
        f = int(r["addr"], 16); n = int(r["size"])
        slot_ctor = {}                                           # stack slot -> constructor called on it
        prev = []                                                # recent (mnemonic, operands)
        for ins in md.disasm(img[f - base:f - base + n], f):
            m, o = ins.mnemonic, ins.op_str
            if m == "call" and o.startswith("0x"):
                for pm, po in reversed(prev[-4:]):
                    mm = LEA.match(po) if pm == "lea" else None
                    if mm and mm.group(1) == "ecx":
                        slot_ctor[mm.group(2)] = int(o, 16); break
            elif m == "push" and o.startswith("0x") and int(o, 16) in throws:
                tds = throws[int(o, 16)]
                nm = names[tds[0]]
                sites[nm] += 1; bases[nm] = [names[t] for t in tds[1:]]
                slot = None
                for pm, po in reversed(prev[-4:]):
                    mm = LEA.match(po) if pm == "lea" else None
                    if mm:
                        slot = mm.group(2); break
                g = slot_ctor.get(slot)
                if g is not None and installs.get(g):
                    best = max(installs[g], key=lambda v: (depth(v), v))
                    found[nm][best] += 1
            prev.append((m, o))
    # CatchableType {properties, pType, mdisp, pdisp, vdisp, sizeOrOffset, copyFunction}: the type's own
    # record (first entry of an array that begins with it) gives the object size and copy constructor
    size_of, copy_of = {}, {}
    for q, tds in thrown_arrays.items():
        c0 = dw(q + 4)
        nm = names[ct_all[c0]]
        size_of.setdefault(nm, dw(c0 + 20)); copy_of.setdefault(nm, dw(c0 + 24))
    with open(out, "w", newline="") as fo:
        w = csv.writer(fo); w.writerow(["name", "size", "copy_ctor", "vtable", "throw_sites", "bases", "evidence"])
        for nm in sorted(set(names.values())):
            if nm in found:
                v, c = found[nm].most_common(1)[0]
                w.writerow([nm, size_of.get(nm, ""), ("%08x" % copy_of[nm]) if copy_of.get(nm) else "", "%08x" % v, sites[nm], " ".join(bases.get(nm, [])),
                            "%d of %d sites build this vtable" % (c, sites[nm])])
            else:
                w.writerow([nm, size_of.get(nm, ""), ("%08x" % copy_of[nm]) if copy_of.get(nm) else "", "", sites.get(nm, 0), " ".join(bases.get(nm, [])),
                            "no throw site found" if nm not in sites else "thrown by value without a constructor call (no vtable evidence)"])
    print("%d RTTI names, %d with a throw site, %d mapped to a vtable" % (len(set(names.values())), len(sites), len(found)))

if __name__ == "__main__":
    main(*sys.argv[1:6])
