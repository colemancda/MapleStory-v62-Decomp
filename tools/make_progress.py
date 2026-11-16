#!/usr/bin/env python3
"""Build PROGRESS.csv from per-module Ghidra function exports.

usage: make_progress.py SURVEY_DIR OUT.csv
SURVEY_DIR holds <Module>.functions.csv (addr,size,name,is_thunk,xrefs).
Status values: TODO, THUNK, EXCLUDED-<reason>, RAW-src, PARITY-<file>, MATCH-<file>.
Existing statuses in OUT.csv are preserved when it is regenerated.
"""
import csv, glob, os, sys

LIBRARY_MODULES = {"msvcrt": "EXCLUDED-library-msvcrt", "ijl15": "EXCLUDED-library-ijl15"}

def classify(module, row):
    if module in LIBRARY_MODULES:
        return LIBRARY_MODULES[module]
    n = row["name"]
    if n.startswith("Unwind@"):
        return "EXCLUDED-seh-unwind"      # compiler-generated unwind funclet of a parent function
    if n.startswith("Catch@"):
        return "EXCLUDED-seh-catch"       # catch-block funclet of a parent function
    if row["is_thunk"] in ("1", "true", "True") or n.startswith("thunk_"):
        return "THUNK"
    return "TODO"

def main(survey, out):
    old = {}
    if os.path.exists(out):
        for r in csv.DictReader(open(out)):
            old[(r["module"], r["addr"])] = r["status"]
    rows = []
    for path in sorted(glob.glob(os.path.join(survey, "*.functions.csv"))):
        module = os.path.basename(path).split(".")[0]
        module = "GMSv62" if module == "GMSv62" else module
        for r in csv.DictReader(open(path)):
            a = "%08x" % int(r["addr"], 16)
            st = old.get((module, a)) or classify(module, r)
            rows.append((module, a, r["size"], r["name"], r["xrefs"], st))
    rows.sort(key=lambda x: (x[0] != "GMSv62", x[0], x[1]))
    with open(out, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["module", "addr", "size", "name", "xrefs", "status"])
        w.writerows(rows)
    from collections import Counter
    c = Counter((r[0], r[5]) for r in rows)
    for k, v in sorted(c.items()):
        print("%-10s %-26s %6d" % (k[0], k[1], v))
    print("total", len(rows))

if __name__ == "__main__":
    main(*sys.argv[1:3])
