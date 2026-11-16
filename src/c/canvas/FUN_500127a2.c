/* FUN_500127a2 - 0x500127a2 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __thiscall FUN_500127a2(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_50012c97(0x80004003);
  }
  FUN_500127d0(*(void **)((int)this + 0x1c),param_1);
  return param_1;
}


