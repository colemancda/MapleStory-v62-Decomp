#!/usr/bin/env python3
"""Infer base classes from constructor/destructor call chains.

usage: class_hierarchy.py PE PROGRESS.csv MODULE VTABLES.csv OUT.csv
For each function that installs a vtable at `this`, find (a) other vtables it installs at `this`
(inlined base constructor) and (b) direct calls made with ecx == this to functions that install a
vtable (base constructor / destructor). Votes are collected per (derived, base) pair; a base needs
to be a different vtable than the derived class.
Output: vtable, base, votes, slots, base_slots, shared_prefix (identical leading slot addresses),
consistent (derived has at least as many slots as the base: vtables are packed with secondary
vtables for virtual bases, so slot counts from address gaps are a check, not a veto).
"""
import csv, collections, re, sys
csv.field_size_limit(1 << 30)
import capstone, pefile

STORE = re.compile(r"^dword ptr \[(e[a-z]{2})(?: \+ 0)?\], (0x[0-9a-f]+)$")
MOVREG = re.compile(r"^(e[a-z]{2}), (e[a-z]{2})$")

def main(pe_path, progress, module, vt_csv, out):
    pe = pefile.PE(pe_path); base = pe.OPTIONAL_HEADER.ImageBase; img = pe.get_memory_mapped_image()
    vts = {int(r["vtable"], 16): r for r in csv.DictReader(open(vt_csv))}
    slots = {v: [int(x, 16) for x in r["slot_addrs"].split()] for v, r in vts.items()}
    installs = collections.defaultdict(set)         # function -> vtables it installs
    for v, r in vts.items():
        for f in r["installers"].split():
            installs[int(f, 16)].add(v)
    rows = {int(r["addr"], 16): r for r in csv.DictReader(open(progress)) if r["module"] == module}
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    votes = collections.Counter()
    for f in installs:
        r = rows.get(f)
        if not r:
            continue
        n = int(r["size"])
        this_regs = set(); ecx_this = True
        stores, calls = [], []                       # (order, vtable) and (order, callee)
        fresh = []                                   # vtables stored into a fresh allocation (eax after a call)
        for k, ins in enumerate(md.disasm(img[f - base:f - base + n], f)):
            m, o = ins.mnemonic, ins.op_str
            if m == "mov":
                mm = MOVREG.match(o)
                if mm:
                    dst, src = mm.groups()
                    holds_this = src in this_regs or (src == "ecx" and ecx_this)
                    if dst == "ecx":
                        ecx_this = holds_this
                    elif holds_this:
                        this_regs.add(dst)
                    else:
                        this_regs.discard(dst)
                st = STORE.match(o)
                if st and st.group(1) == "eax" and int(st.group(2), 16) in vts and "eax" not in this_regs:
                    fresh.append((k, int(st.group(2), 16)))
                if st and int(st.group(2), 16) in vts and (st.group(1) in this_regs or (st.group(1) == "ecx" and ecx_this)):
                    stores.append((k, int(st.group(2), 16)))
                elif o.startswith("ecx,") and not mm:
                    ecx_this = False
            elif m in ("lea", "pop", "xor") and o.startswith("ecx"):
                ecx_this = False
            elif m == "call":
                if o.startswith("0x") and ecx_this:
                    calls.append((k, int(o, 16)))
                ecx_this = False
                fresh = fresh[:0] if not fresh else fresh   # kept: the allocator call precedes the stores
        for i, (_, later) in enumerate(fresh):           # inlined construction of a new object: base first
            for _, earlier in fresh[:i]:
                if earlier != later:
                    votes[(later, earlier)] += 1
        own = [v for _, v in stores]
        for i, (_, later) in enumerate(stores):          # inlined base: an earlier store to this
            for _, earlier in stores[:i]:
                if earlier != later:
                    votes[(later, earlier)] += 1
        for _, g in calls:                               # called base ctor/dtor
            for vb in installs.get(g, ()):
                for vd in own:
                    if vd != vb:
                        votes[(vd, vb)] += 1
    best = {}
    for (d, b), n in votes.items():
        if d not in best or n > best[d][1]:
            best[d] = (b, n)
    with open(out, "w", newline="") as f:
        w = csv.writer(f); w.writerow(["vtable", "base", "votes", "slots", "base_slots", "shared_prefix", "consistent"])
        for v in sorted(vts):
            b, n = best.get(v, (None, 0))
            pre = 0
            if b:
                for x, y in zip(slots[v], slots[b]):
                    if x != y: break
                    pre += 1
            w.writerow(["%08x" % v, ("%08x" % b) if b else "", n, len(slots[v]), len(slots[b]) if b else "", pre,
                        ("1" if len(slots[v]) >= len(slots[b]) else "0") if b else ""])
    roots = sum(1 for v in vts if v not in best)
    print("%d vtables: %d with an inferred base, %d roots" % (len(vts), len(best), roots))

if __name__ == "__main__":
    main(*sys.argv[1:6])
