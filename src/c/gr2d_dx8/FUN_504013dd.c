/* FUN_504013dd - 0x504013dd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall FUN_504013dd(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_5040284e();
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_5042c224;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_5042c210;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_5042c204;
  InterlockedIncrement(&DAT_50438a3c);
  return this;
}


