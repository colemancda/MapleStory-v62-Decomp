/* FUN_51802b79 - 0x51802b79 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __thiscall FUN_51802b79(void *this,int param_1)

{
  size_t *psVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  psVar1 = FUN_51802bac(param_1);
  *(size_t **)this = psVar1;
  if ((psVar1 == (size_t *)0x0) && (param_1 != 0)) {
    FUN_5180e990(0x8007000e);
  }
  return this;
}


