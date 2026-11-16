/* FUN_5180ced2 - 0x5180ced2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_5180ced2(char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  
  for (pcVar2 = param_1 + ((param_2 & 0xfffffffe) - 2); param_1 <= pcVar2; pcVar2 = pcVar2 + -2) {
    iVar1 = FUN_5180d90e(pcVar2);
    if (iVar1 == 0) break;
  }
  return ((int)(pcVar2 + (2 - (int)param_1)) >> 1) << 1;
}


