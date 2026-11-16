/* FUN_5180b052 - 0x5180b052 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * __thiscall FUN_5180b052(void *this,int param_1,int param_2)

{
  FUN_5180ca3f((void *)((int)this + 0x60),param_1);
  *(int *)((int)this + 0x68) = param_2;
  (**(code **)(*(int *)this + 0xc))();
  return this;
}


