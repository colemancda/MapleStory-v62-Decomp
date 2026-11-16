/* FUN_518155e0 - 0x518155e0 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_518155e0(undefined4 *param_1)

{
  FUN_51811f24();
  *param_1 = &PTR_LAB_51819c14;
  param_1[1] = &PTR_LAB_51819bcc;
  param_1[2] = &PTR_LAB_51819ba0;
  param_1[3] = &PTR_FUN_51819b9c;
  param_1[4] = &PTR_LAB_51819b98;
  InterlockedIncrement(&DAT_5181f8a0);
  return param_1;
}


