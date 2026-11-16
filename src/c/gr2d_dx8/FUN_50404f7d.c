/* FUN_50404f7d - 0x50404f7d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __thiscall FUN_50404f7d(void *this,int param_1)

{
  FUN_5040c194(param_1);
  if (*(int *)((int)this + 4) != 0) {
    FUN_5040508d((int)this);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (int)this;
}


