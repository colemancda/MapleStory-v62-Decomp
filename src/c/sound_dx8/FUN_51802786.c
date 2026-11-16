/* FUN_51802786 - 0x51802786 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51802786(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(int *)((int)this + 0x10) = param_1;
  }
  uVar1 = 0xffffffff;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = (uint)(*(int *)((int)this + 8) * *(int *)((int)this + 0x10)) >> 7;
  }
  *(uint *)((int)this + 0x14) = uVar1;
  return;
}


