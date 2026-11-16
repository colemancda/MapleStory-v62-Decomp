/* FUN_5180c821 - 0x5180c821 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __cdecl FUN_5180c821(int param_1)

{
  if (param_1 < -9999) {
    return 0;
  }
  if (-1 < param_1) {
    return 0x80;
  }
  return (-0x80 - (int)(0x138800 / (longlong)(param_1 + -0x271))) / 0xf;
}


