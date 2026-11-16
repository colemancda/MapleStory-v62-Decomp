/* FUN_50c0edcd - 0x50c0edcd in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __thiscall FUN_50c0edcd(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_50c101c4(0x80004003);
  }
  FUN_50c08677(*(void **)((int)this + 0x1c),param_1);
  return param_1;
}


