#!/bin/bash
# Build the test images and run every parity spec, then the mutation test that proves the harness can fail.
# Needs: the ms-check container (docs/PILOT-ZLZ.md), the original GMSv62.exe (GMS_EXE or the default path),
# and unicorn: pip install --target ~/.local/share/parity-libs unicorn
set -e
HERE=$(cd "$(dirname "$0")" && pwd); R=$HERE/../..
export PYTHONPATH=${PARITY_LIBS:-$HOME/.local/share/parity-libs}
"$HERE/build_image.sh" com_error src/cxx/ComError.cpp src/cxx/parity/harness_stubs.cpp >/dev/null
( cd "$HERE" && python3 parity.py com_error --cases ${CASES:-300} && python3 mutants_com_error.py )
