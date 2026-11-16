#!/bin/bash
# Regenerate declarations, sweep and update statuses for modules whose files are already decompiled.
# usage: resweep.sh MODULE...
R=$(cd "$(dirname "$0")/.." && pwd)
for M in "$@"; do
  L=$(echo $M | tr A-Z a-z); OUT=$R/src/c/$L; W=/tmp/run_$M; mkdir -p $W
  python3 $R/tools/gen_decls.py $OUT $L ${L}_globals.h | tail -1
  $R/tools/sweep_msvc.sh $OUT | sed "s/^/$M: /"
  sort -u /tmp/sweep_fail.txt > $W/fail.txt; cp /tmp/sweep_err.txt $W/err.txt
  python3 $R/tools/update_status.py $R/PROGRESS.csv $M $OUT $W/fail.txt
done
