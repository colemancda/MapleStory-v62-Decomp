/* FUN_50406b0d - 0x50406b0d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall FUN_50406b0d(void *this,byte param_1)

{
  FUN_50406b32(this);
  if ((param_1 & 1) != 0) {
    FUN_5040c72c(DAT_50439078,(undefined4 *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}


