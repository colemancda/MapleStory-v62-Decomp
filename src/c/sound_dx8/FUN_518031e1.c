/* FUN_518031e1 - 0x518031e1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_518031e1(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  FUN_51806e96();
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_518183f4;
  *(undefined ***)((int)this + 0x10) = &PTR_FUN_518183f0;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_518183ec;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_518183e0;
  InterlockedIncrement(&DAT_5181f8a0);
  return this;
}


