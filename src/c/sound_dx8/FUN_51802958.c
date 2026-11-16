/* FUN_51802958 - 0x51802958 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_51802958(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_5181815c;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_51818158;
  param_1[3] = &PTR_LAB_51818154;
  return param_1;
}


