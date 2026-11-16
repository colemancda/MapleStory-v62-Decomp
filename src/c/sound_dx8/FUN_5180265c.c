/* FUN_5180265c - 0x5180265c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


uint __fastcall FUN_5180265c(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*param_1 + -8);
  if ((int)uVar1 < 0) {
    uVar1 = ~uVar1;
  }
  return uVar1 - 4 >> 2;
}


