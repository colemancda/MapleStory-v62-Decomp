/* FUN_518114b7 - 0x518114b7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518114b7(undefined4 *param_1)

{
  param_1[1] = 0;
  if (param_1 + 2 != (undefined4 *)0x0) {
    param_1[2] = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = &PTR_FUN_518184f8;
  param_1[9] = 0;
  *param_1 = &PTR_LAB_518184fc;
  return;
}


