/* FUN_5180cf02 - 0x5180cf02 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_5180cf02(short *param_1,uint param_2)

{
  short *psVar1;
  
  for (psVar1 = (short *)((int)param_1 + ((param_2 & 0xfffffffe) - 2));
      ((param_1 <= psVar1 && (-0x148 < *psVar1)) && (*psVar1 < 0x148)); psVar1 = psVar1 + -1) {
  }
  return ((int)psVar1 + (2 - (int)param_1) >> 1) << 1;
}


