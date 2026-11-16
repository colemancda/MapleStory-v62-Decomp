#!/bin/bash
# Run the raw-port pipeline for one module end to end.
# usage: run_module.sh MODULE [PE_DIR]     e.g. run_module.sh Shape2D /path/to/orig
# Needs: Ghidra (GHIDRA_HOME), the ms-check container (docs/PILOT-ZLZ.md), python3.
set -e
M=$1; PE=${2:-/home/coleman/Developer/Recomps/MapleStory/orig}
R=$(cd "$(dirname "$0")/.." && pwd); G=${GHIDRA_HOME:-/home/coleman/Downloads/ghidra_12.1.2_PUBLIC}
L=$(echo $M | tr A-Z a-z); OUT=$R/src/c/$L; W=${TMPDIR:-/tmp}/run_$M; mkdir -p $W $OUT
f=$PE/$M.dll; [ -f "$f" ] || f=$PE/$M.exe
python3 - "$R/PROGRESS.csv" "$M" "$W/addrs.txt" <<'PY'
import csv,sys
rows=[r for r in csv.DictReader(open(sys.argv[1])) if r["module"]==sys.argv[2] and r["status"] in ("TODO","RAW-src","RAW-draft")]
open(sys.argv[3],"w").write("\n".join(r["addr"]+" "+r["name"] for r in rows)+"\n"); print(len(rows),"functions")
PY
rm -f $OUT/*.c
if $G/support/analyzeHeadless $R/ghidra_proj MapleStory -process $(basename $f) -noanalysis -scriptPath $R/ghidra_scripts -postScript ExportDecompiled.java $W/addrs.txt $OUT > $W/ghidra.log 2>&1 && grep -q "ExportDecompiled:" $W/ghidra.log; then :; else
  $G/support/analyzeHeadless $R/ghidra_proj MapleStory -import $f -overwrite -scriptPath $R/ghidra_scripts -postScript ExportDecompiled.java $W/addrs.txt $OUT > $W/ghidra.log 2>&1
fi
grep "ExportDecompiled:" $W/ghidra.log | sed 's/.*ExportDecompiled/ExportDecompiled/'
$G/support/analyzeHeadless $R/ghidra_proj MapleStory -process $(basename $f) -noanalysis -scriptPath $R/ghidra_scripts \
  -postScript ExportGlobals.java $OUT/${L}_globals.h -postScript ExportTypes.java $OUT/${L}_types.h > $W/ghidra2.log 2>&1
grep -E "ExportGlobals:|ExportTypes:" $W/ghidra2.log | sed 's/.*Export/Export/'
python3 $R/tools/gen_decls.py $OUT $L ${L}_globals.h
$R/tools/sweep_msvc.sh $OUT
sort -u /tmp/sweep_fail.txt > $W/fail.txt; cp /tmp/sweep_err.txt $W/err.txt
python3 $R/tools/update_status.py $R/PROGRESS.csv $M $OUT $W/fail.txt
