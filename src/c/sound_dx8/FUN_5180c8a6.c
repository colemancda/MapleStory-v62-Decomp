/* FUN_5180c8a6 - 0x5180c8a6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_5180c8a6(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    iVar1 = -10000;
  }
  else if (param_1 < 0x80) {
    iVar1 = 0x271 - (int)(0x138800 / (longlong)(param_1 * 0xf + 0x80));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


