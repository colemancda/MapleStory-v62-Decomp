/* FUN_5180d8e6 - 0x5180d8e6 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __fastcall FUN_5180d8e6(short *param_1)

{
  if ((((-0x148 < *param_1) && (*param_1 < 0x148)) && (-0x148 < param_1[1])) && (param_1[1] < 0x148)
     ) {
    return 1;
  }
  return 0;
}


