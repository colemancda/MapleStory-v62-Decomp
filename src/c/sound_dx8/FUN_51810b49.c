/* FUN_51810b49 - 0x51810b49 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_51810b49(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51818474;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = &PTR_FUN_51818470;
  *param_1 = &PTR_FUN_5181846c;
  param_1[3] = &PTR_ptr_51804ad8_51818468;
  return param_1;
}


