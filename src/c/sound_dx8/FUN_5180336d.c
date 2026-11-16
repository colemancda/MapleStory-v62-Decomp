/* FUN_5180336d - 0x5180336d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180336d(undefined4 *param_1)

{
  param_1[-1] = &PTR_FUN_51818370;
  *param_1 = &PTR_FUN_5181836c;
  param_1[1] = &PTR_FUN_51818368;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_5181f8a0);
  FUN_51806fad();
  return;
}


