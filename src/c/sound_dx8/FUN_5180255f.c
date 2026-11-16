/* FUN_5180255f - 0x5180255f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * __fastcall FUN_5180255f(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_51818148;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_51818144;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  *param_1 = &PTR_FUN_51818140;
  param_1[3] = &PTR_LAB_5181813c;
  return param_1;
}


