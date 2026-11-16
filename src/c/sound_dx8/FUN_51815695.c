/* FUN_51815695 - 0x51815695 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51815695(undefined4 *param_1)

{
  param_1[-3] = &PTR_LAB_51819c14;
  param_1[-2] = &PTR_LAB_51819bcc;
  param_1[-1] = &PTR_LAB_51819ba0;
  *param_1 = &PTR_FUN_51819b9c;
  param_1[1] = &PTR_LAB_51819b98;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_5181f8a0);
  FUN_51811fdd();
  return;
}


