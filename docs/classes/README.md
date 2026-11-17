# Class recovery (C++ tier, step 1)

The client has almost no RTTI (10 exception type names), so classes are recovered from vtables.
Everything here is for the exe; the DLLs have not been run yet.

## Pipeline

1. `tools/find_vtables.py`: a vtable is an address some function stores at offset 0 of an object
   (`mov dword ptr [reg], imm32`) that starts a run of code pointers. The run is read from the
   stored address, not from known function entries, because the first slots (scalar deleting
   destructor) are often code Ghidra did not list. Runs are cut where the next vtable starts.
   Result: `GMSv62_vtables.csv`, 1,318 vtables with their installers (constructors/destructors).
2. `tools/class_hierarchy.py`: inheritance from constructor/destructor bodies. It tracks which
   registers hold `this` and counts (a) an earlier vtable stored to `this` before the class's own
   (inlined base constructor) and (b) direct calls made with `ecx == this` to a function that
   installs another vtable (base constructor or destructor). Members constructed with
   `lea ecx, [this+N]` are not counted. Result: `GMSv62_hierarchy.csv`.
3. `tools/class_layouts.py`: object sizes and constructor extents (`GMSv62_layouts.csv`). Size votes come
   from the `push imm` feeding the allocator call before a constructor call, and from inlined
   constructors (`call alloc; mov [eax], vtable`). Extent is the highest `[this+off]` the constructor
   touches, a lower bound on the size.
4. `tools/gen_classes.py`: `src/cxx/GMSv62_classes.h`, one class per vtable (`C_<vtable VA>`),
   methods `vf<slot>`, bases first. `src/cxx/classes_selftest.cpp` compiles it under MSVC in C++
   mode (clean).

## What was found (layouts)

| | |
|---|---|
| Classes with any allocation-size vote | 297 of 1,318 (23%), 209 of them the singleton classes (all 24) |
| Size asserts emitted | 220 (a derived class needs its base's size) |

The votes are only trustworthy for classes allocated at a visible `new`. A base class's votes are
contaminated: derived constructors call the base constructor, so the `push` before that call is
often an argument or the derived size (`8e84a0` shows 12, 36, 44 and 160). Only single-size classes
are used. The size assert is partly circular (the tail is computed from the size), so it checks
padding and base-size consistency, not the fields.

## What was found

| | |
|---|---|
| Vtables | 1,318 (765 have a single slot, 350 have 12 or more, largest 90) |
| With an inferred base | 513 (9 edges dropped: cycle, or derived vtable shorter than base); 514 of 522 raw edges have a derived vtable at least as long as its base |
| Roots | 805 |
| Deepest chain | 5 levels, e.g. `8ea674 (17 slots) > 8ea5e0 (17) > 8ea1c8 (14) > 8e84a0 (1) > 8e8580 (1)` |
| Most subclassed | `8e84a8` (210, the singleton node base), `8e84a0` (176, one slot: a common root), `8e8608` (12), `8eac20` (8) |
| Vtable with most installers | `8e84a8`, 20,854: the singleton node base (next section) |

## Naming

**What the binary contains.** No `CFoo::Bar` strings, no source file names, no assert text: only 10 RTTI
type names, all exception types (`tools/name_rtti.py`, `GMSv62_rtti.csv`). MSVC links each thrown type
to a `ThrowInfo`, whose `CatchableTypeArray` gives its base types, size and copy constructor.

| Type | Size | Bases | Mapped to |
|---|---|---|---|
| `ZException` | 4 | none | plain data (an integer code) |
| `CMSException` | n/a (never thrown directly) | `ZException` | plain data |
| `CDisconnectException`, `CTerminateException` | 4 | `CMSException`, `ZException` | plain data |
| `CPatchException` | 1,288 | `CMSException`, `ZException` | plain data |
| `CSecurityInitFailed`, `...KeyCryptInitFailed`, `...ThreatDetected` | 4 | none | plain data |
| `_com_error` | 16 | none | vtable `8f3e88` (12 of 12 throw sites) |

Seven of the eight are thrown by value as a 4-byte code (`mov eax, 0x21000001`), with no vtable. They
are written as real structs with compiler-recorded sizes in `src/cxx/GMSv62_exceptions.h`. Only
`_com_error` is a polymorphic class, and it is the only vtable class with a name from the binary
(`GMSv62_names.csv`; its size, 16, also matches the extent its constructor touches, `+0x10`).

**Roles, not names.** `tools/class_roles.py` tags a class with what its methods reach (imports through
3 levels of calls): `network`, `window`, `file-io`, `registry`, `anti-tamper`, `gdi-text`, ... 56
classes get a distinctive tag (`GMSv62_roles.csv`, shown as `// role:` comments in the header).
`com-ole` is reached by 502 classes (string/variant helpers) and is suppressed as uninformative.
Imports resolved with `GetProcAddress` are invisible to it.

**What this did not do.** The other 1,317 classes remain `C_<address>`. No community or later-version names
have been applied. Two cautions from checking against the earlier reverse engineering:
- The socket read/send paths (`0x474f28`, `0x4752f8`) are not vtable methods, so the `network`-tagged
  class `8e96d0` is not shown to be the client socket class. No name is claimed.
- `0x59c145` (the worker loop) is a slot of class `8ec6b8`, tagged `file-io network shell-system`:
  consistent with a web-request worker, which is still a guess.

## First promotion: `_com_error`

`src/cxx/ComError.{h,cpp}` is the first class rewritten as real C++ from the raw ports. It is MSVC's own
`_com_error` (comdef.h; Ghidra tags the destructor "Library: Visual Studio 2003"): vptr, `HRESULT
m_hresult` (+4), `IErrorInfo *m_perrinfo` (+8), `char *m_pszMsg` (+0xc, `LocalFree`d), 16 bytes, matching the
exception tables. Verified against the original by compiling with MSVC 7.1 and comparing the listing:

| Function | Original | Result |
|---|---|---|
| `0x4038ff` `~_com_error` | `Release` through slot +8, `LocalFree(m_pszMsg)` | **instruction-for-instruction identical** |
| `0x403880` `_com_error(hr, perrinfo, fAddRef)` | stores, `AddRef` (slot +4) when asked | same behaviour; 7.1 writes `mov [esi+12],0` where MSVC 6 used `and [esi+0xc],0` and orders two stores differently |
| `0x4038d2` `_com_error(const _com_error&)` | copies hresult and perrinfo, `AddRef` | same behaviour, same kind of difference |
| `0x4038b2` scalar deleting destructor | `~_com_error`, then free through the pool | **not reproduced**: needs the client's replacement `operator delete` (below) |

The first three are marked `PARITY-cxx-ComError.cpp` in `PROGRESS.csv`. They are behavioural parity, not byte
matches: the exe was built with MSVC 6, which is not available here. `GMSv62_promoted.csv` lists promoted
classes; the generator omits their generated declarations and includes the hand-written header.

### The client's allocator (found while checking)

The deleting destructor frees with `mov ecx, 0x97bac0; call 0x402b41`: the client replaces global
`new`/`delete` with a small-block pool allocator. Measured over all non-excluded functions:

| | |
|---|---|
| Calls to `0x4029b9` (allocate, size on the stack, pool in `ecx`) | 41,450 |
| Calls to `0x402b41` (free) | 1,485 |
| Allocations of exactly 0x18 (24) bytes | 39,643 (96%) |
| Other common sizes | 0x578 (402), 0x69c (94), 0x110 (45) |
| Pools loaded into `ecx` | `0x97bac0` (42,263 uses), `0x97bc68` (3,192) |

### The 20,105 "identical stubs" are 250 singleton creators

Correcting an earlier note (here and in the README), which called them filler or `new` of one class. Grouping the
stubs by what they store (`GMSv62_singletons.csv`):

| | |
|---|---|
| Stub copies (all 63 bytes) | 20,105 |
| Distinct (final vtable, destination global) pairs | **250** |
| Copies per pair | 1 to 218; 35 pairs have a single copy |
| Placement of copies | scattered across `0x404ef7`-`0x868aac`, never adjacent |
| Destination globals | `0x980a34`-`0x980ebc`, 243 of 250 at a 4-byte stride: a contiguous array of singleton pointers |

Each stub: `new` a 24-byte node from the pool, store the base vtable `0x8e84a8`, link the node into a global
list (head `0x97b988`, `next` at `+4`), zero `+8`, `+0xc` and `+0x14`, store the class's own vtable, and write the
pointer to the class's global. That is a lazily created singleton accessor emitted inline once per translation
unit that uses it (MSVC 6 does not merge the copies), which is why a creator appears up to 218 times. 209 of the
250 vtables are in the vtable list and all 209 now have base `8e84a8` and size 24 in the hierarchy and layouts.

Method notes: two bugs fixed on the way. The inline size vote took the push before the previous call instead of
the allocator call itself (no singleton had a size), and stores into a fresh allocation (`eax`) were not counted
as base-then-derived evidence (no singleton had a base).

### The pool allocator (details)

`0x4029b9` allocate, `0x402b41` free, `0x402aea` carve a chunk, `0x402aba` lock (a spin on a function pointer, `Sleep(0)`
between polls). Four size classes with a free list each: sizes up to 16, 32, 64 and 128 bytes, in chunks of
1 KB (64, 32, 16 and 8 blocks, each block preceded by a 4-byte size word); above 128 bytes it falls back to
`HeapAlloc` with a 4-byte size header. The exe exports `ZtlTaskMemAllocImp`, `ZtlTaskMemFreeImp` and
`ZtlTaskMemReallocImp` (names from the export table), so the DLLs share this allocator. Not reconstructed
in C++ yet: the lock primitive (`PTR_FUN_00969e94`) and the pool constructor are unread.

## Limits (read before trusting)

- **Almost no names.** One vtable class (`_com_error`) is named from the binary; the rest are
  `C_<address>`. More names would have to be borrowed from later-version symbol lists and marked
  as unverified for v62.
- **No signatures.** Every method is `virtual void vfN();`. Real signatures come from promoting the raw C
  ports (`src/c/gmsv62`) one function at a time.
- **Almost no layouts.** 83 classes have an allocation-size estimate, 10 have a size assert, none has
  field types. Field offsets exist only as the constructor extent.
- **Slot counts are approximate.** Vtables are packed back to back with secondary vtables for virtual
  bases, so a run's length (from address gaps) can be off by the neighbour. The hierarchy tool treats
  slot count as a consistency check, not evidence.
- **Roots are over-reported.** 1,116 roots includes leaf classes whose base constructor is inlined in
  a way the tracker misses, and one-slot "vtables" that may be pointer tables rather than classes.
- **The compile check is syntax only.** It does not verify that the compiler lays out the same vtable.
- Two tool bugs found and fixed on the way are worth knowing: runs must not be filtered against
  function bodies from the code-pointer scan (it had classed vtable data as functions), and the
  `this`-register tracker initially discarded the register it had just added.
