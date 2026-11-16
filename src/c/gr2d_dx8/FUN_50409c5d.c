/* FUN_50409c5d - 0x50409c5d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __thiscall FUN_50409c5d(void *this,int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 0xb4);
  FUN_5040c194(param_1);
  return param_1;
}


