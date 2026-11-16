#!/bin/bash
# Per-file MSVC syntax sweep through the ms-check container (see tools/README.md).
# usage: sweep_msvc.sh SRC_DIR  -> prints pass/fail; errors in /tmp/sweep_err.txt, failures in /tmp/sweep_fail.txt
D=$(cd "$1" && pwd); R=$(cd "$(dirname "$0")/.." && pwd); rel=${D#$R/}
: > /tmp/sweep_err.txt; : > /tmp/sweep_fail.txt
chk() { f=$1; b=$(basename $f)
  out=$(docker exec ms-check wine 'Z:\opt\msvc7\bin\cl.exe' /c /nologo /Zs "Z:\\work\\$2\\$b" 2>&1 | tr -d '\r' | sed 's#\\#/#g' | grep -E "error C")
  if [ -n "$out" ]; then echo "$b" >> /tmp/sweep_fail.txt; echo "$out" | sed "s|^|$b: |" >> /tmp/sweep_err.txt; fi; }
export -f chk
ls $D/*.c | xargs -P4 -I{} bash -c "chk {} ${rel//\//\\\\}"
total=$(ls $D/*.c | wc -l); fail=$(sort -u /tmp/sweep_fail.txt | wc -l)
echo "pass=$((total-fail)) fail=$fail"
