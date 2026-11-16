/* FUN_50406437 - 0x50406437 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall FUN_50406437(void *this,int param_1)

{
  size_t *psVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  psVar1 = FUN_5040646a(param_1);
  *(size_t **)this = psVar1;
  if ((psVar1 == (size_t *)0x0) && (param_1 != 0)) {
    FUN_5042a358(0x8007000e);
  }
  return this;
}


