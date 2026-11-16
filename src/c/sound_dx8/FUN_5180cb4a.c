/* FUN_5180cb4a - 0x5180cb4a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180cb4a(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51819a40;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_5181f8a0);
  FUN_51809b7a();
  return;
}


