/* FUN_51805b5f - 0x51805b5f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __thiscall FUN_51805b5f(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  return;
}


