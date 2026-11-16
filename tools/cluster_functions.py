#!/usr/bin/env python3
"""Group functions whose machine code has the same shape (template instantiations,
inlined library code, copy-pasted helpers).

usage: cluster_functions.py PE PROGRESS.csv MODULE OUT.csv
Reads TODO functions of MODULE from PROGRESS.csv, disassembles each body from the PE
and writes OUT.csv: addr,size,strict,loose  (strict/loose are family hashes).
strict masks absolute addresses (>= image base) and branch/call targets;
loose masks every immediate and displacement, keeping only the instruction stream.
"""
import csv, hashlib, re, sys
import capstone, pefile

NUM = re.compile(r"0x[0-9a-f]+")

def norm(md, code, addr, base, loose):
    out = []
    for i in md.disasm(code, addr):
        ops = i.op_str
        if i.mnemonic in ("call", "jmp") or i.mnemonic.startswith("j"):
            ops = "T" if ops.startswith("0x") else ops
        if loose:
            ops = NUM.sub("N", ops)
        else:
            ops = NUM.sub(lambda m: "A" if int(m.group(0), 16) >= base else m.group(0), ops)
        out.append(i.mnemonic + " " + ops)
    return "\n".join(out)

def main(pe_path, progress, module, out):
    pe = pefile.PE(pe_path)
    base = pe.OPTIONAL_HEADER.ImageBase
    img = pe.get_memory_mapped_image()
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    rows = [r for r in csv.DictReader(open(progress)) if r["module"] == module and r["status"] == "TODO"]
    with open(out, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["addr", "size", "strict", "loose"])
        for r in rows:
            a = int(r["addr"], 16); n = int(r["size"])
            code = img[a - base:a - base + n]
            s = hashlib.sha1(norm(md, code, a, base, False).encode()).hexdigest()[:12]
            l = hashlib.sha1(norm(md, code, a, base, True).encode()).hexdigest()[:12]
            w.writerow([r["addr"], n, s, l])
    print(module, len(rows), "functions ->", out)

if __name__ == "__main__":
    main(*sys.argv[1:5])
