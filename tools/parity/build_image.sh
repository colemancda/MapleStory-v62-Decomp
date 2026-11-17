#!/bin/bash
# Build a parity-test image: compile C++ sources with MSVC (ms-check container), link a fixed-base DLL
# at 0x70000000 with a link map, so the harness can run them and find each function's address.
# usage: build_image.sh NAME SRC.cpp [SRC.cpp ...]   (paths relative to the repo root)
set -e
N=$1; shift
R=$(cd "$(dirname "$0")/../.." && pwd); mkdir -p "$R/build_cxx"
objs=()
for s in "$@"; do
  b=$(basename "$s" .cpp); w="Z:\\work\\${s//\//\\}"
  docker exec ms-check wine 'Z:\opt\msvc7\bin\cl.exe' /c /nologo /GX /GR- /O2 /Gy /Fo"Z:\\work\\build_cxx\\${N}_$b.obj" "$w" 2>&1 | tr -d '\r' | grep -E "error|warning C4(0|1)" || true
  objs+=("Z:\\work\\build_cxx\\${N}_$b.obj")
done
docker exec ms-check wine 'Z:\opt\msvc7\bin\link.exe' /nologo /DLL /NOENTRY /NODEFAULTLIB /FIXED /BASE:0x70000000 /OPT:NOREF \
  /MAP:"Z:\\work\\build_cxx\\$N.map" /OUT:"Z:\\work\\build_cxx\\$N.dll" "${objs[@]}" kernel32.lib 2>&1 | tr -d '\r' | grep -E "error|fatal" || true
ls -la "$R/build_cxx/$N.dll" "$R/build_cxx/$N.map" | awk '{print $5, $9}'
