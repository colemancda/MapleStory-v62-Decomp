#!/usr/bin/env python3
"""Set PROGRESS.csv statuses from a raw-port directory and a sweep result.

usage: update_status.py PROGRESS.csv MODULE SRC_DIR FAIL_LIST
Files named in FAIL_LIST (one basename per line, from sweep_msvc.sh) become RAW-draft; the
rest of the directory's files become RAW-src. The file's address comes from its header.
"""
import csv, glob, os, re, sys

def main(progress, module, src, fail_list):
    failed = set(open(fail_list).read().split())
    by_addr = {}
    for f in glob.glob(os.path.join(src, "*.c")):
        m = re.search(r"- 0x([0-9a-f]{8}) in ", open(f).read(2000))
        if m:
            by_addr[m.group(1)] = os.path.basename(f)
    rows = list(csv.DictReader(open(progress)))
    fields = list(rows[0].keys())
    n = {"RAW-src": 0, "RAW-draft": 0}
    for r in rows:
        if r["module"] == module and r["addr"] in by_addr and not r["status"].startswith(("EXCLUDED", "DUP")):
            r["status"] = "RAW-draft" if by_addr[r["addr"]] in failed else "RAW-src"
            n[r["status"]] += 1
    with open(progress, "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=fields); w.writeheader(); w.writerows(rows)
    print(module, n)

if __name__ == "__main__":
    main(*sys.argv[1:5])
