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
| Classes with any allocation-size vote | 83 of 1,318 (6%) |
| Single size at every site (and size >= constructor extent) | 81; in 31 of them size equals the extent exactly |
| Size asserts emitted | 10 (a derived class needs its base's size, and most bases have none) |

The votes are only trustworthy for classes allocated at a visible `new`. A base class's votes are
contaminated: derived constructors call the base constructor, so the `push` before that call is
often an argument or the derived size (`8e84a0` shows 12, 36, 44 and 160). Only single-size classes
are used. The size assert is partly circular (the tail is computed from the size), so it checks
padding and base-size consistency, not the fields.

## What was found

| | |
|---|---|
| Vtables | 1,318 (765 have a single slot, 350 have 12 or more, largest 90) |
| With an inferred base | 202 (two more edges dropped: derived vtable shorter than base) |
| Roots | 1,116 |
| Deepest chain | 5 levels, e.g. `8ea674 (17 slots) > 8ea5e0 (17) > 8ea1c8 (14) > 8e84a0 (1) > 8e8580 (1)` |
| Most subclassed | `8e84a0` (175 subclasses, one slot: a common root), `8eac20` (8), `8ea1c8` (4) |
| Vtable with most installers | `8e84a8`, 20,854: the one-slot class behind the 20,105 identical 63-byte stubs |

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
