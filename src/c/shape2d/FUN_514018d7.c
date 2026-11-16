/* FUN_514018d7 - 0x514018d7 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __thiscall FUN_514018d7(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_5140163a();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5140c2f0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5140c2dc;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_5140c2d8;
  *(undefined ***)((int)this + 0x18) = &PTR_FUN_5140c2d4;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined ***)this = &PTR_FUN_5140c2c8;
  InterlockedIncrement(&DAT_51411574);
  return this;
}


