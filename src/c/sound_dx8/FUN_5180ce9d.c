/* FUN_5180ce9d - 0x5180ce9d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_5180ce9d(short *param_1,uint param_2)

{
  int iVar1;
  short *psVar2;
  
  for (psVar2 = (short *)((int)param_1 + ((param_2 & 0xfffffffc) - 4)); param_1 <= psVar2;
      psVar2 = psVar2 + -2) {
    iVar1 = FUN_5180d8e6(psVar2);
    if (iVar1 == 0) break;
  }
  return ((int)psVar2 + (4 - (int)param_1) >> 2) << 2;
}


