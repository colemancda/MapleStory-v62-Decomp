/* FUN_51402d41 - 0x51402d41 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __thiscall FUN_51402d41(void *this,int param_1)

{
  size_t *psVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  psVar1 = FUN_51402d74(param_1);
  *(size_t **)this = psVar1;
  if ((psVar1 == (size_t *)0x0) && (param_1 != 0)) {
    FUN_5140ac47(0x8007000e);
  }
  return this;
}


