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
3. `tools/gen_classes.py`: `src/cxx/GMSv62_classes.h`, one class per vtable (`C_<vtable VA>`),
   methods `vf<slot>`, bases first. `src/cxx/classes_selftest.cpp` compiles it under MSVC in C++
   mode (clean).

## What was found

| | |
|---|---|
| Vtables | 1,318 (765 have a single slot, 350 have 12 or more, largest 90) |
| With an inferred base | 202 (two more edges dropped: derived vtable shorter than base) |
| Roots | 1,116 |
| Deepest chain | 5 levels, e.g. `8ea674 (17 slots) > 8ea5e0 (17) > 8ea1c8 (14) > 8e84a0 (1) > 8e8580 (1)` |
| Most subclassed | `8e84a0` (175 subclasses, one slot: a common root), `8eac20` (8), `8ea1c8` (4) |
| Vtable with most installers | `8e84a8`, 20,854: the one-slot class behind the 20,105 identical 63-byte stubs |

## Limits (read before trusting)

- **No names.** Classes are `C_<address>`. Names have to come from strings, assert text, the ten RTTI
  names, or later-version symbol lists (which must be marked as borrowed).
- **No signatures.** Every method is `virtual void vfN();`. Real signatures come from promoting the raw C
  ports (`src/c/gmsv62`) one function at a time.
- **No layouts.** No sizes, no field offsets, no static asserts yet; the constructors give both.
- **Slot counts are approximate.** Vtables are packed back to back with secondary vtables for virtual
  bases, so a run's length (from address gaps) can be off by the neighbour. The hierarchy tool treats
  slot count as a consistency check, not evidence.
- **Roots are over-reported.** 1,116 roots includes leaf classes whose base constructor is inlined in
  a way the tracker misses, and one-slot "vtables" that may be pointer tables rather than classes.
- **The compile check is syntax only.** It does not verify that the compiler lays out the same vtable.
- Two tool bugs found and fixed on the way are worth knowing: runs must not be filtered against
  function bodies from the code-pointer scan (it had classed vtable data as functions), and the
  `this`-register tracker initially discarded the register it had just added.
