# Parity harness

Checks that a reconstructed C++ function does what the original does, by running both.

## How it works

`tools/parity/parity.py` loads the original image (`GMSv62.exe`) and a test image (the reconstruction,
compiled by MSVC and linked as a fixed-base DLL with a link map) into one x86-32 emulator (unicorn). For
each random input it calls the original function and the reconstruction identically and compares:

- `EAX`, the number of bytes the callee pops from the stack (`ESP`), and the callee-saved registers
  (`EBX`, `ESI`, `EDI`, `EBP`, loaded with random values, must come back unchanged);
- the memory the function may touch (the object, arguments, any COM object it is given), with
  address pairs that legitimately differ between the images (the vtable) normalised;
- the trace of external calls, in order, with arguments: imports and COM methods land on harness stubs, so
  neither image needs the rest of the program.

Behaviour is compared, not bytes: the exe was built with MSVC 6 and the reconstruction with MSVC 7.1, so two
compilers emit different instructions for the same source (`and [esi+0xc],0` against `mov [esi+12],0`).

A spec (`spec_<name>.py`) lists the functions, how to build their inputs, and the hooks to install.
`tools/parity/run_all.sh` builds the images and runs everything.

## Results

| Function | Original | Cases | Paths covered | Result |
|---|---|---|---|---|
| `_com_error(hr, perrinfo, fAddRef)` | `0x403880` | 300 | perrinfo null/set x fAddRef on/off (including garbage in the upper bytes of the bool's stack slot) | **parity** |
| `_com_error(const _com_error &)` | `0x4038d2` | 300 | perrinfo null/set | **parity** |
| `~_com_error()` | `0x4038ff` | 300 | perrinfo null/set x message null/set | **parity** |

**Mutation test** (`mutants_com_error.py`): seven deliberately broken versions of `ComError.cpp` (destructor calls
`AddRef` instead of `Release`; never calls `LocalFree`; releases twice; constructor ignores `fAddRef`; stores
`hr + 1`; copy constructor copies the message pointer; copy constructor skips `AddRef`). The harness reports
all seven, each in the function it was broken in and nowhere else. Without this, a pass would prove nothing.

## What a pass does and does not mean

A pass means: for the sampled inputs, the same return value, stack effect, preserved registers, memory and
external calls. It does not mean:

- **Untested inputs are correct.** It is random sampling over the inputs a spec generates; a path the spec does
  not reach is not checked (each spec reports which paths it covered).
- **The external functions behave.** `LocalFree`, `AddRef` and so on are stubs; only the calls made to them are
  compared.
- **Timing, exceptions and threads.** Not modelled.
- **Functions with state outside their arguments.** The scalar deleting destructor frees through the pool
  allocator, whose state (`0x97bac0`) is set up by a constructor the harness does not run, so it is not covered.
  The pool allocator needs its own spec with that state initialised.

## Running it

```
pip install --target ~/.local/share/parity-libs unicorn      # once
tools/parity/run_all.sh
```

A function earns `PARITY-cxx-<file>` in `PROGRESS.csv` only when its spec passes.
