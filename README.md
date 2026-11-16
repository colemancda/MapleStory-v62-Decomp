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
