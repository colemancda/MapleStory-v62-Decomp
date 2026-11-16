# Pilot: ZLZ.dll through the raw C tier

`ZLZ.dll` (zlib wrapper, 249 functions, 183 unique after triage) taken from Ghidra to compiling C with
no hand edits, to measure what the pipeline costs per function before committing to the exe.

## Pipeline

1. `ghidra_scripts/ExportDecompiled.java`: one C file per `TODO` function in `src/c/<module>/`.
   Vtable-only methods that Ghidra's analysis never made functions are created first.
2. `ghidra_scripts/ExportGlobals.java` and `ExportTypes.java`: `<module>_globals.h` and
   `<module>_types.h` (the program's own recovered classes, from Ghidra's `/Demangler` category).
3. `tools/gen_decls.py`: `<module>_decls.h` with every prototype, plus declarations for names the
   decompiler invents (`DAT_`, `PTR_FUN_`, `UNK_`, `LAB_`, `PTR_s_`), function-pointer globals
   recovered from how they are called, and `int f();` for callees without a file.
4. `tools/sweep_msvc.sh`: per-file `cl /Zs` through the `ms-check` container (a `gb-msvc` image
   with this repo mounted at `/work`; MSVC 7.1, the closest compiler available to the exe's MSVC 6).
5. `tools/update_status.py`: `RAW-src` for files that compile, `RAW-draft` for the rest.

## Result

| | Count |
|---|---|
| Unique functions (`TODO` after triage) | 183 |
| Not code (data table the vtable scan took for a method) | 1 |
| Decompiled | 182 |
| **Compile clean with no edits (`RAW-src`)** | **141 (77%)** |
| Need hand work (`RAW-draft`) | 41 |

Compile-clean means the syntax check passes. It does not mean the function is correct; that is
Phase 4. Getting from 0 to 141 took five generator fixes (types, strings, referenced addresses,
function-pointer globals, CRT headers), all reusable for the other modules. The sweep takes about
a minute for 182 files.

## What the 41 failures are

- `stack0x…` locals and similar decompiler stack artifacts (about 9 functions each reference several).
- Calls whose result is assigned but whose callee returns `void` (`C2120`/`C2069`): a signature
  inferred from the callee's own body disagrees with its use.
- Field access on classes whose layout is unknown (`C2224`): the placeholder struct has no members.
- `unaff_` register variables appear 5,032 times across the 182 files. Most still compile, but they
  mark functions whose register arguments Ghidra lost; the compiling output is not yet trustworthy.

## Costs and what they mean for the exe

The tooling is the cost, not the functions: once the generators exist, each module is minutes of
machine time. The human cost is in the failures (about 23% here) and in the `unaff_` functions,
which need the call-site register audit GunBound documents. At the pilot's rate the exe's 9,212
unique functions would leave about 2,100 needing hand work for compile-clean, and more for
correctness. This pilot used small, mostly leaf code; the exe's class-heavy code will fail more
often, mainly on unknown struct layouts.
