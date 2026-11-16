/* FUN_5180d90e - 0x5180d90e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __fastcall FUN_5180d90e(char *param_1)

{
  if ((((-3 < *param_1) && (*param_1 < '\x03')) && (-3 < param_1[1])) && (param_1[1] < '\x03')) {
    return 1;
  }
  return 0;
}


