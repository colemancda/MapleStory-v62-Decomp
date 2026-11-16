/* FUN_518091c9 - 0x518091c9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_518091c9(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51819930;
  *param_1 = &PTR_FUN_5181992c;
  param_1[3] = &PTR_LAB_51819928;
  return param_1;
}


