/* FUN_51401b79 - 0x51401b79 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __thiscall FUN_51401b79(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_514021f8();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5140c490;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5140c47c;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_5140c478;
  *(undefined ***)((int)this + 0x48) = &PTR_FUN_5140c474;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  *(undefined ***)this = &PTR_FUN_5140c468;
  InterlockedIncrement(&DAT_51411574);
  return this;
}


