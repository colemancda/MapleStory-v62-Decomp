/* FUN_51801920 - 0x51801920 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_51801920(void *this,int param_1)

{
  FUN_51807ca2(param_1);
  if (*(int *)((int)this + 4) != 0) {
    FUN_51801991((int)this);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (int)this;
}


