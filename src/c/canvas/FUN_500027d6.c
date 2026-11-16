/* FUN_500027d6 - 0x500027d6 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_500027d6(void *this,int param_1)

{
  size_t *psVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  psVar1 = FUN_50002809(param_1);
  *(size_t **)this = psVar1;
  if ((psVar1 == (size_t *)0x0) && (param_1 != 0)) {
    FUN_50012c97(0x8007000e);
  }
  return this;
}


