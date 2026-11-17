#!/usr/bin/env python3
"""Mutation test for the parity harness: break ComError.cpp in known ways and check that each break
is reported (a harness that cannot fail proves nothing).
usage: PYTHONPATH=~/.local/share/parity-libs python3 tools/parity/mutants_com_error.py"""
import os, subprocess, sys
HERE = os.path.dirname(os.path.abspath(__file__)); REPO = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)
import parity, spec_com_error as spec

SRC = open(os.path.join(REPO, "src", "cxx", "ComError.cpp")).read()
MUTANTS = [
    ("dtor calls AddRef instead of Release", "m_perrinfo->Release();", "m_perrinfo->AddRef();", "~_com_error()"),
    ("dtor never calls LocalFree", "LocalFree(m_pszMsg);", ";", "~_com_error()"),
    ("dtor releases twice", "m_perrinfo->Release();", "m_perrinfo->Release(); m_perrinfo->Release();", "~_com_error()"),
    ("ctor ignores fAddRef", "if (m_perrinfo != 0 && fAddRef)", "if (m_perrinfo != 0)", "_com_error(hr, perrinfo, fAddRef)"),
    ("ctor stores hr + 1", ": m_hresult(hr), m_perrinfo(perrinfo)", ": m_hresult(hr + 1), m_perrinfo(perrinfo)", "_com_error(hr, perrinfo, fAddRef)"),
    ("copy ctor copies m_pszMsg", "m_perrinfo(that.m_perrinfo), m_pszMsg(0)", "m_perrinfo(that.m_perrinfo), m_pszMsg(that.m_pszMsg)", "_com_error(const _com_error &)"),
    ("copy ctor skips AddRef", "    if (m_perrinfo != 0)\n        m_perrinfo->AddRef();\n}\n\n_com_error::~_com_error", "}\n\n_com_error::~_com_error", "_com_error(const _com_error &)"),
]
os.makedirs(os.path.join(REPO, "build_cxx", "mutants"), exist_ok=True)
missed = 0
for i, (name, old, new, target) in enumerate(MUTANTS):
    assert old in SRC, name
    src = SRC.replace('#include "ComError.h"', '#include "../../src/cxx/ComError.h"').replace(old, new, 1)
    rel = "build_cxx/mutants/mut%d.cpp" % i
    open(os.path.join(REPO, rel), "w").write(src)
    subprocess.run([os.path.join(HERE, "build_image.sh"), "mut%d" % i, rel, "src/cxx/parity/harness_stubs.cpp"],
                   capture_output=True, check=True)
    rep = parity.run_spec(spec, 300, 1, os.path.join(REPO, "build_cxx", "mut%d.dll" % i))
    caught = [lbl for lbl, (ran, mism, cov) in rep.items() if mism]
    ok = target in caught
    stray = [c for c in caught if c != target]
    print("%-42s %s%s" % (name, "CAUGHT in " + target if ok else "MISSED", ("  (also: %s)" % stray) if stray else ""))
    missed += 0 if ok else 1
print("%d of %d mutants caught" % (len(MUTANTS) - missed, len(MUTANTS)))
sys.exit(1 if missed else 0)
