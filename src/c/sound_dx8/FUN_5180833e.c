/* FUN_5180833e - 0x5180833e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_5180833e(undefined4 *param_1)

{
  FUN_5180841f();
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[4] = &PTR_FUN_518198cc;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_518198c8;
  param_1[1] = &PTR_LAB_518198c4;
  return param_1;
}


