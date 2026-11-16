/* FUN_5180cf32 - 0x5180cf32 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


char * __cdecl FUN_5180cf32(char *param_1,int param_2)

{
  char *pcVar1;
  
  for (pcVar1 = param_1 + param_2 + -1;
      ((param_1 <= pcVar1 && (-3 < *pcVar1)) && (*pcVar1 < '\x03')); pcVar1 = pcVar1 + -1) {
  }
  return pcVar1 + (1 - (int)param_1);
}


