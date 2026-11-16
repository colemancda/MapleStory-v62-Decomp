/* FUN_51803226 - 0x51803226 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51803226(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_518183e0;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_5181f8a0);
  FUN_51806fad();
  return;
}


