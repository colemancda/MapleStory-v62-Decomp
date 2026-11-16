#!/usr/bin/env python3
"""Recover missing function sizes, group same-shape functions, update PROGRESS.csv.

usage: collapse_families.py PE_DIR PROGRESS.csv FAMILIES.csv
1. Rows with size 0 (vtable methods found by data_code_pointers.py) get an estimated
   size: linear disassembly until a ret that lies past every forward branch seen.
2. TODO rows are hashed by normalised code (absolute addresses and branch targets
   masked). The lowest address in each family stays TODO as the representative; the
   others become DUP-<module>-<representative addr>.
3. FAMILIES.csv lists every family of 2+ members.
Re-runnable: DUP-* rows are reset to TODO first.
"""
import csv, collections, hashlib, os, re, sys
import capstone, pefile

NUM = re.compile(r"0x[0-9a-f]+")
FILES = {"GMSv62": "GMSv62.exe"}

def estimate_size(md, img, base, addr, cap=8192):
    maxfwd = addr
    end = addr
    for i in md.disasm(img[addr - base:addr - base + cap], addr):
        end = i.address + i.size
        m = i.mnemonic
        if (m == "jmp" or m.startswith("j") or m == "call") and i.op_str.startswith("0x"):
            t = int(i.op_str, 16)
            if m != "call" and addr <= t < addr + cap and t > maxfwd:
                maxfwd = t
        if m in ("ret", "retn") and end > maxfwd:
            return end - addr
        if m == "jmp" and not i.op_str.startswith("0x") and end > maxfwd:   # tail jump via register/memory
            return end - addr
        if m in ("int3",) and end > maxfwd:
            return i.address - addr
    return end - addr

def shape(md, img, base, addr, size):
    out = []
    for i in md.disasm(img[addr - base:addr - base + size], addr):
        ops = i.op_str
        if i.mnemonic == "call" or i.mnemonic.startswith("j"):
            ops = "T" if ops.startswith("0x") else ops
        ops = NUM.sub(lambda m: "A" if int(m.group(0), 16) >= base else m.group(0), ops)
        out.append(i.mnemonic + " " + ops)
    return hashlib.sha1("\n".join(out).encode()).hexdigest()[:12]

def main(pe_dir, progress, fam_out):
    rows = list(csv.DictReader(open(progress)))
    fields = list(rows[0].keys())
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    pes = {}
    def pe_for(mod):
        if mod not in pes:
            p = os.path.join(pe_dir, FILES.get(mod, mod + ".dll"))
            pe = pefile.PE(p)
            pes[mod] = (pe.OPTIONAL_HEADER.ImageBase, pe.get_memory_mapped_image())
        return pes[mod]
    fixed = 0
    for r in rows:
        if r["status"].startswith("DUP-"):
            r["status"] = "TODO"
        if r["status"] == "TODO" and r["size"] == "0":
            base, img = pe_for(r["module"])
            r["size"] = str(estimate_size(md, img, base, int(r["addr"], 16)))
            fixed += 1
    groups = collections.defaultdict(list)
    for r in rows:
        if r["status"] != "TODO":
            continue
        base, img = pe_for(r["module"])
        groups[(r["module"], shape(md, img, base, int(r["addr"], 16), int(r["size"])))].append(r)
    dups = 0
    with open(fam_out, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["module", "family", "members", "representative", "size", "total_bytes_saved"])
        for (mod, h), m in sorted(groups.items(), key=lambda kv: -len(kv[1])):
            if len(m) < 2:
                continue
            m.sort(key=lambda r: r["addr"])
            rep = m[0]
            for r in m[1:]:
                r["status"] = "DUP-%s-%s" % (mod, rep["addr"]); dups += 1
            w.writerow([mod, h, len(m), rep["addr"], rep["size"], (len(m) - 1) * int(rep["size"])])
    with open(progress, "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fields); w.writeheader(); w.writerows(rows)
    c = collections.Counter((r["module"], r["status"].split("-")[0]) for r in rows)
    print("sizes recovered:", fixed, "| duplicates marked:", dups)
    for k, v in sorted(c.items()): print("  %-10s %-9s %6d" % (k[0], k[1], v))

if __name__ == "__main__":
    main(*sys.argv[1:4])
