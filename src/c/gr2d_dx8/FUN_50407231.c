/* FUN_50407231 - 0x50407231 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall FUN_50407231(void *this,byte param_1)

{
  FUN_50407256(this);
  if ((param_1 & 1) != 0) {
    FUN_5040c72c(DAT_5043907c,(undefined4 *)((int)this + -0xc));
  }
  return (undefined4 *)((int)this + -0xc);
}


