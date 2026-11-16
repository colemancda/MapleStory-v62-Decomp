/* FUN_51811b1a - 0x51811b1a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_51811b1a(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51818548;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_51818544;
  param_1[3] = &PTR_ptr_51804ae8_51818540;
  return param_1;
}


