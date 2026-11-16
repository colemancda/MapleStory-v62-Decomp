/* FUN_5180dc5d - 0x5180dc5d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_5180dc5d(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51819b24;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_51819b20;
  param_1[3] = &PTR_LAB_51819b1c;
  return param_1;
}


