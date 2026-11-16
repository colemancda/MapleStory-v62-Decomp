# Plan: full decompilation of the MapleStory GMS v62 client to C and C++

Modelled on [GunBound-Decomp](https://github.com/colemancda/GunBound-Decomp),
adjusted for a target about 30 times larger.

## Where the two projects stand

| | GunBound-Decomp | MapleStory-v62-Decomp (today) |
|---|---|---|
| Target | `GunBound.gme`, 1.8 MB | `GMSv62.exe`, 6.4 MB, plus 8 Wizet DLLs |
| Functions | 2,404 | 72,908 rows in the exe, but 34,732 are compiler exception funclets: about 38,200 real, of which 9,212 are unique shapes; 3,643 unique in the DLLs |
| Compiler | MSVC 7.1 | MSVC 6.0 (linker 6.0, built 2008-11-11) |
| RTTI | n/a | 10 type names only (exception classes), so no class names for free |
| Lifted C (machine output, runs) | `recomp/`, gitignored | `src/lifted/`, published |
| Raw C ports (Ghidra output, one function per file) | 2,357 files in `src/<subsystem>/` | none |
| C++ reconstruction | `src/cxx/`, 40 files, layout asserts | none |
| Worklist | `PROGRESS.csv`, status per function | none |
| Reference docs | ARCHITECTURE, PROTOCOL, FILEFORMATS, STRINGS, CONSTANTS, screens | `docs/SURVEY.md` only |
| Ghidra project and scripts | tracked, 20 scripts | one export script |
| Compile checks | MSVC 7.1 under Wine in Docker, asm-differ scoring | none |
| Running reference | recompiled client | recompiled client (in the Recomps repo) |

The lifted C is not a decompilation: it is one C statement per x86 instruction
on an emulated CPU struct. It stays as tier 0, the thing that runs and the
oracle everything else is checked against.

## Target layout

```
src/lifted/     tier 0: lifted C (generated, do not edit)
src/c/<subsystem>/<Name>.c   tier 1: raw C ports, one function per file
src/cxx/        tier 2: C++ classes, real members and vtables
include/        ghidra_types.h, shared structs, globals
ghidra_proj/    tracked Ghidra database (names, types, comments)
ghidra_scripts/ export, rename and type-apply scripts
tools/          worklist, compile sweeps, diff and promote scripts
docs/           ARCHITECTURE, PROTOCOL, FILEFORMATS, STRINGS, CONSTANTS, screens/
PROGRESS.csv    addr,size,name,module,is_thunk,xrefs,calls_out,status
```

Statuses, as in GunBound: `TODO`, `EXCLUDED-<reason>`, `RAW-src`,
`PARITY-<file>`, `MATCH-<file>`.

## Phase 0: foundations

1. Import `GMSv62.exe` and the eight Wizet DLLs into one tracked Ghidra
   project. (SHA-256 of every input is in the README: done.)
2. Generate `PROGRESS.csv` from the existing function CSVs: done, 83,102 rows.
3. Triage exclusions before any porting. **Done so far:** exception funclets
   (`Unwind@`, `Catch@`), thunks and the two library DLLs are classified by
   `tools/make_progress.py`. **Still to do:** mark the statically linked CRT, STL,
   ATL/COM support, zlib and other library code `EXCLUDED`, using Ghidra
   function-ID signatures for VC6. Exclude `ijl15.dll` and `msvcrt.dll`
   entirely. This is expected to remove a large share of the 72,908; the real
   number is not known until this step runs.
4. Collapse same-shape functions into families so each is written once.
   **Done** (`tools/collapse_families.py`, `FAMILIES.csv`): 30,934 functions
   are `DUP-` of a representative, leaving 12,855 unique `TODO`, about 7 times
   GunBound's raw-port count. Each family representative still has to be
   checked against its duplicates when ported, since the shape hash masks
   absolute addresses (templates over different globals share a hash).
5. Port the GunBound tooling: Ghidra scripts, the per-file compile sweep, the
   call-site register audit, `promote.sh`, the score report.
6. Stand up an MSVC 6.0 toolchain under Wine in Docker (user-supplied, like
   GunBound's MSVC 7.1) for syntax checks, layout asserts and byte comparison.

## Phase 1: reference documents

Written from the binary and from what the recompiled client already proves.
- `PROTOCOL.md`: every opcode both ways. Cross-check against the two working
  servers (the Swift server and OdinMS ThePack `recvops`/`sendops`).
- `FILEFORMATS.md`: WZ archives and the PCOM/ResMan property tree.
- `ARCHITECTURE.md`: stage machine (logo, login, field, cash shop), the
  `CWvsApp` main loop at `0x8264a7`, the window and control hierarchy, the
  socket layer (`0x474f28` read path), the COM graphics stack.
- `STRINGS.md`, `CONSTANTS.md`.

## Phase 2: raw C tree (tier 1)

Bulk export of Ghidra decompiler output, one function per file with its
address in the header comment, sorted into subsystem directories by call-graph
clustering seeded from the documents above. Order of work:
1. The DLLs first (about 8,100 functions, COM interfaces with known shapes):
   ZLZ, ResMan, NameSpace, PCOM, Canvas, Shape2D, Gr2D_DX8, Sound_DX8.
2. Exe leaf subsystems: crypto (AES, Shanda), packet in/out, string pool, WZ
   access.
3. Login path, which the recompiled client already exercises end to end.
4. Field, mobs, skills, UI windows, cash shop.

Gate: every file passes a syntax-only compile; the sweep is green before a
directory counts as `RAW-src`. Dropped register arguments (`__thiscall` ECX,
custom EAX/EDX arguments) are fixed per function with every call site resolved
together, as in GunBound.

## Phase 3: C++ reconstruction (tier 2)

MSVC 6 C mode cannot express `__thiscall`, so every member function ends up
here. With almost no RTTI, classes are recovered from vtables:
1. Enumerate vtables (`tools/data_code_pointers.py` already finds them),
   group by constructor, derive inheritance from shared vtable prefixes.
2. Declare each class with virtuals in vtable order, known field offsets, and
   opaque `m_raw[]` tails; enforce sizes and offsets with static asserts.
3. Promote methods from tier 1 one unit at a time. The raw C port stays until
   its C++ replacement is verified.
4. Order: Z-library templates, COM wrappers, packets, `CClientSocket`,
   `CWvsApp`, stages, the `CWnd`/control hierarchy, UI windows, field objects.

Naming: names recovered from the binary's own strings and asserts are
authoritative. Names taken from community sources (later-version symbol
listings) are marked as borrowed and unverified for v62.

## Phase 4: verification

Three levels, recorded per function in `PROGRESS.csv`:
1. Compiles and layout asserts pass.
2. Behavioural parity: the function is swapped into the recompiled client in
   place of its lifted version and the scripted runs (login, world, channel,
   character select, against OdinMS) produce the same packets and frames.
   This needs a small ABI shim between lifted code (emulated CPU, guest
   memory) and native C/C++, and is the main new piece of tooling.
3. Byte match under MSVC 6.0, scored with asm-differ. Opt-in, for functions
   where exactness matters (crypto, packet codecs, layouts).

## Phase 5: link a native client

Replace lifted functions subsystem by subsystem until the client builds from
`src/c` and `src/cxx` alone, first as a Win32 target under Wine, then against
the existing host runtime. Unported code keeps running from tier 0 meanwhile,
so the client stays runnable throughout.

## Risks

- Scale. 30 times GunBound; phases 2 and 3 only finish if exclusion, template
  collapsing and bulk export are automated first. Phase 0 decides feasibility.
- No class names in the binary. Structure is recoverable; names are partly
  invented or borrowed.
- Ghidra output for VC6 `__thiscall` and COM smart pointers is noisy and
  drops register arguments; expect the same audit work as GunBound, at scale.
- The MSVC 6.0 toolchain is proprietary and must be supplied locally.
- The repo publishes code derived from a proprietary binary.

## Pilot result

All eight DLLs: 2938 of 3640 unique functions compile clean with no hand edits (80%); see `docs/PILOT-ZLZ.md` and the README table. The exe is next.

## First milestones

1. `PROGRESS.csv`, tracked Ghidra project, exclusion triage with real counts.
2. ZLZ.dll (249 functions) fully through tiers 1 and 2 as the pilot, to
   measure cost per function.
3. Packet codec and crypto in C++, byte-compared and parity-checked.
4. `PROTOCOL.md` complete for the login server.
