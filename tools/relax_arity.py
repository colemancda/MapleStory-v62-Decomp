#!/usr/bin/env python3
"""Re-declare callees with call-arity mismatches as `ret name();` (unspecified arguments).

usage: relax_arity.py SRC_DIR MODULE ERR_FILE
Ghidra's prototype for a function (from its definition) can disagree with its call sites when the
function takes arguments in registers the decompiler did not tie to parameters (SEH prolog,
allocators, constructors). MSVC reports C2198/C2064 at every such call. The names behind those
errors are rewritten to K&R declarations in <module>_decls.h and listed in <module>_relaxed.txt.
This only silences the argument check: those calls are NOT resolved and stay flagged for the
register-argument audit.
"""
import re, sys, os

def main(src, module, err):
    names = {}
    for m in re.finditer(r"error C2198: '(\w+)' : too few arguments", open(err).read()):
        names[m.group(1)] = names.get(m.group(1), 0) + 1
    decls = os.path.join(src, module + "_decls.h")
    t = open(decls).read()
    done = []
    for n in sorted(names, key=lambda k: -names[k]):
        pat = re.compile(r"^((?:[A-Za-z_][\w \*]*?)\b)(?:(__\w+) )?%s\([^)]*\);$" % re.escape(n), re.M)
        m = pat.search(t)
        if not m:
            continue
        ret = re.sub(r"\s+", " ", m.group(1)).strip()
        t = t[:m.start()] + "%s %s();" % (ret, n) + t[m.end():]
        done.append(n)
    open(decls, "w").write(t)
    prev = set(open(os.path.join(src, module + "_relaxed.txt")).read().split()) if os.path.exists(os.path.join(src, module + "_relaxed.txt")) else set()
    open(os.path.join(src, module + "_relaxed.txt"), "w").write("\n".join(sorted(prev | set(done))) + "\n")
    print("relaxed %d callees (%d call-site errors)" % (len(done), sum(names[n] for n in done)))

if __name__ == "__main__":
    main(*sys.argv[1:4])
