#!/usr/bin/env python3
"""Estimate object sizes and constructor-touched extents for recovered classes.

usage: class_layouts.py PE PROGRESS.csv MODULE VTABLES.csv OUT.csv
For every class (vtable) the constructor that installs it last is found. Then:
  * size votes: at each direct call to that constructor, the `push imm` feeding the call just
    before it (the allocation size passed to operator new / the pool allocator).
  * extent: highest [this+off] (plus access width) touched inside the constructor, a lower bound.
  * inline votes: the same push-imm size when the constructor is inlined into the allocating code
    (`call alloc; mov [eax], vtable`), counted for the last vtable stored to the result.
Output: vtable, ctor, callers, size_votes (size:count ...), extent.
"""
import csv, collections, re, sys
import capstone, pefile
csv.field_size_limit(1 << 30)

MEM = re.compile(r"(byte|word|dword|qword) ptr \[(e[a-z]{2})(?: \+ (0x[0-9a-f]+))?\]")
STORE = re.compile(r"^dword ptr \[(e[a-z]{2})(?: \+ 0)?\], (0x[0-9a-f]+)$")
MOVREG = re.compile(r"^(e[a-z]{2}), (e[a-z]{2})$")
W = {"byte": 1, "word": 2, "dword": 4, "qword": 8}

def main(pe_path, progress, module, vt_csv, out):
    pe = pefile.PE(pe_path); base = pe.OPTIONAL_HEADER.ImageBase; img = pe.get_memory_mapped_image()
    vts = {int(r["vtable"], 16) for r in csv.DictReader(open(vt_csv))}
    rows = [r for r in csv.DictReader(open(progress)) if r["module"] == module and not r["status"].startswith("EXCLUDED")]
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    final_vt, extent = {}, {}                       # ctor function -> last vtable stored at this; max touched offset
    callsites = collections.defaultdict(list)       # callee -> [alloc size or None]
    inline_votes = collections.defaultdict(collections.Counter)   # vtable -> allocation sizes, constructor inlined
    for r in rows:
        f = int(r["addr"], 16); n = int(r["size"])
        this_regs = set(); ecx_this = True; last = None; ext = 0
        window = collections.deque(maxlen=14)
        pending = None; pstores = []                # allocation size of the last call, vtables stored to its result
        def flush():
            nonlocal pending, pstores
            if pending is not None and pstores:
                inline_votes[pstores[-1]][pending] += 1
            pending = None; pstores = []
        for ins in md.disasm(img[f - base:f - base + n], f):
            m, o = ins.mnemonic, ins.op_str
            if m == "call" and o.startswith("0x"):
                tgt = int(o, 16)
                # allocation size: the push imm just before the last earlier call in the window
                size = None
                w = list(window)
                for j in range(len(w) - 1, -1, -1):
                    if w[j][0] == "call":
                        for k in range(j - 1, max(j - 5, -1), -1):
                            if w[k][0] == "push" and re.fullmatch(r"0x[0-9a-f]+", w[k][1]):
                                size = int(w[k][1], 16)
                                break
                        break
                callsites[tgt].append(size)
                flush()
                # inline construction: this call is the allocator, its size is the push just before it
                own = None
                for pm, po in reversed(list(window)[-4:]):
                    if pm == "push" and re.fullmatch(r"0x[0-9a-f]+", po):
                        own = int(po, 16); break
                pending = own if own is not None and 4 <= own <= 0x100000 else None
            window.append((m, o))
            if pending is not None and m == "mov" and (st0 := STORE.match(o)) and st0.group(1) == "eax" \
                    and int(st0.group(2), 16) in vts:
                pstores.append(int(st0.group(2), 16))
            if m == "mov" and (mm := MOVREG.match(o)):
                dst, src = mm.groups()
                holds = src in this_regs or (src == "ecx" and ecx_this)
                if dst == "ecx": ecx_this = holds
                elif holds: this_regs.add(dst)
                else: this_regs.discard(dst)
            elif m in ("lea", "pop", "xor") and o.startswith("ecx"):
                ecx_this = False
            if m == "call":
                ecx_this = False
            if m == "mov" and (st := STORE.match(o)) and int(st.group(2), 16) in vts and \
                    (st.group(1) in this_regs or (st.group(1) == "ecx" and ecx_this)):
                last = int(st.group(2), 16)
            for mm2 in MEM.finditer(o):
                if mm2.group(2) in this_regs or (mm2.group(2) == "ecx" and ecx_this):
                    ext = max(ext, (int(mm2.group(3), 16) if mm2.group(3) else 0) + W[mm2.group(1)])
        flush()
        if last is not None:
            final_vt[f] = last; extent[f] = ext
    byvt = collections.defaultdict(list)
    for f, v in final_vt.items():
        byvt[v].append(f)
    for v in list(inline_votes):
        byvt.setdefault(v, [])
    with open(out, "w", newline="") as fo:
        w = csv.writer(fo); w.writerow(["vtable", "ctor", "callers", "size_votes", "extent"])
        for v in sorted(byvt):
            votes = collections.Counter()
            ctors = byvt[v]
            for c in ctors:
                for s in callsites.get(c, []):
                    if s is not None and 4 <= s <= 0x100000:
                        votes[s] += 1
            votes.update(inline_votes.get(v, {}))
            ncall = sum(len(callsites.get(c, [])) for c in ctors)
            w.writerow(["%08x" % v, " ".join("%08x" % c for c in sorted(ctors))[:400], ncall,
                        " ".join("%d:%d" % kv for kv in votes.most_common(4)), max([extent[c] for c in ctors] or [0])])
    print("%d classes with a constructor" % len(byvt))

if __name__ == "__main__":
    main(*sys.argv[1:6])
