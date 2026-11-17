# MapleStory-v62-Decomp

Static recompilation of the MapleStory GMS v62 Windows client (x86) to C.

- `src/lifted/<module>/chunk_*.c` — the lifted C, one function per original x86
  function (`f_<module>_<address>(CPU *c)`). Image bases: exe `0x00400000`
  (`msmain`), shape2d `0x51400000`, gr2d `0x50400000`, namespace `0x50808000`,
  msvcrt `0x78000000`. `src/lifted/images.c` lists the images.
- `lift/` — the lifter (disassembler, analyzer, x86 -> C translator).
- `tools/` — helpers (vtable/data code-pointer scan, unpack dump) and the Ghidra
  function-export script in `tools/ghidra/`.
- `docs/SURVEY.md` — findings from bringing the client up: init, login flow,
  input, networking, lifter fixes.
- `build.sh` — the build driver from the working project.

The lifted code `#include`s `rt.h` and needs the runtime (Win32/D3D8/Winsock
host layer) from the main project to build and run; the game's own files
(executables, WZ data) are not included.

## Reference file hashes

The original files are proprietary and are not in this repo. These SHA-256 hashes
pin the exact copies the decompilation is checked against.

| File | SHA-256 | Size |
|---|---|---|
| `GMSv62.exe` | `595cfb06a6a80ecbd4012d63182511491158a545ac6739581ef01f9530cd3227` | 6,356,992 |
| `Canvas.dll` | `4b37b0f30e6557a603516d8a3aae23cd4e3c196a05d830c5e2bd4d1a3fa5e60e` | 118,784 |
| `Gr2D_DX8.dll` | `a464599bd3fbea220b3d18afd793f6c14cbb75525d452be1067057310099b5f6` | 253,952 |
| `NameSpace.dll` | `c4236b3ae5e9e038ba94d151935cb6d4abd3e0dcac588f6623a4eca144f74422` | 143,360 |
| `PCOM.dll` | `c1698f62c7128cd19844900377b432eed5d8d430234eee266c6de7c5b4180d45` | 114,688 |
| `ResMan.dll` | `e7b1cbe2a0df1794a9054f1cf8bf8efab88cd9d4e937a76308bc027bab9c27e1` | 49,152 |
| `Shape2D.dll` | `2a294b2bd0b1d13c3d75cac475e4f0e7c55788a272ad351b31b538948510d5e3` | 86,016 |
| `Sound_DX8.dll` | `acd9b6c282fea06f42cac970e43bcd604ee5af27851a22161c8c91a173b1135f` | 147,456 |
| `ZLZ.dll` | `60794c51a7b92f77dbeefcfc6e0526b433f72a24e6955ebe31295f280ac351a4` | 81,973 |
| `ijl15.dll` | `41d37bfb0a39017497e0aa373dc01f71ac9c5046c75f7cd269bee52112a5f3a1` | 352,256 |

## Worklist

`PROGRESS.csv` lists every function (module, address, size, name, xrefs, status).
Regenerate with `tools/make_progress.py <survey dir> PROGRESS.csv`, then
`tools/collapse_families.py <orig dir> PROGRESS.csv FAMILIES.csv`; both keep
statuses already set. Statuses: `TODO`, `THUNK`, `EXCLUDED-<reason>`,
`DUP-<module>-<addr>`, `RAW-src`, `PARITY-<file>`, `MATCH-<file>`.

`DUP-` rows have the same machine code shape as a representative (absolute
addresses and branch targets masked), so a family is written once.
`FAMILIES.csv` lists every family of 2+ members.

| | Exe (GMSv62) | 8 Wizet DLLs |
|---|---|---|
| Rows in the export | 72,908 | 8,142 |
| `EXCLUDED` (exception funclets; libraries) | 34,732 | 4,190 (+2,083 in msvcrt/ijl15) |
| `THUNK` | 257 | 134 |
| `DUP` (same shape as a representative) | 28,707 | 2,227 |
| **`TODO` (unique, to decompile)** | **9,212** | **3,643** |

The biggest exe family is 20,105 identical 63-byte stubs (allocate a 0x18-byte
object, set one vtable) laid out back to back across about 1.2 MB: filler, not
logic. The 4,248 vtable methods found by the code-pointer scan had no size;
`collapse_families.py` estimates one by scanning to the first `ret` past every
forward branch.

## Raw C tier

The exe and all eight Wizet DLLs are decompiled to `src/c/<module>/` with `tools/run_module.sh`
(Ghidra, generated headers, MSVC syntax sweep). `RAW-src` means the file compiles under MSVC 7.1
with no hand edits. It does not mean the function is correct.

| Module | Decompiled | `RAW-src` (compiles) | `RAW-draft` | |
|---|---|---|---|---|
| ZLZ | 182 | 141 | 41 | 77% |
| ResMan | 187 | 153 | 34 | 81% |
| Shape2D | 411 | 326 | 85 | 79% |
| PCOM | 468 | 365 | 103 | 77% |
| NameSpace | 571 | 447 | 124 | 78% |
| Sound_DX8 | 594 | 481 | 113 | 80% |
| Canvas | 470 | 375 | 95 | 79% |
| Gr2D_DX8 | 757 | 637 | 120 | 84% |
| **GMSv62 (exe)** | 8854 | 6915 | 1939 | 78% |
| **All** | **12494** | **9840** | **2654** | **78%** |

Caveats on the exe row:
- 1,904 callees with call-arity mismatches (register-convention helpers whose arguments Ghidra
  did not pass: SEH prolog, allocators, constructors) are declared `ret f();` so their callers
  compile. They are listed in `src/c/gmsv62/gmsv62_relaxed.txt`; the mismatch is unresolved and
  those calls still need the register-argument audit.
- 339 vtable-scan entries that Ghidra could not turn into functions are data, not code
  (`EXCLUDED-not-code`); 4 functions timed out in the decompiler and stay `TODO`.

See `docs/PILOT-ZLZ.md` for the pipeline and the kinds of failures. Everything is produced by
`tools/run_module.sh MODULE` (Ghidra and the `ms-check` MSVC container required).

## C++ tier

Started: classes are recovered from vtables (`docs/classes/README.md`). `src/cxx/GMSv62_classes.h`
has 1,318 generated class declarations (202 with an inferred base, no names, signatures or layouts
yet) and compiles under MSVC in C++ mode. Tools: `tools/find_vtables.py`, `class_hierarchy.py`,
`gen_classes.py`.
