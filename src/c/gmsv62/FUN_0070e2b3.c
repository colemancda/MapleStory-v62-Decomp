/* FUN_0070e2b3 - 0x0070e2b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0070e2b3(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0x1f;
  param_1[3] = &PTR_FUN_008f0988;
  param_1[7] = 100;
  param_1[8] = 0x18;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0x18;
  param_1[0xb] = 0x1f;
  param_1[9] = &PTR_FUN_008ea2e8;
  param_1[0xd] = 100;
  *param_1 = &PTR_FUN_008f0984;
  DAT_0097bdd8 = param_1;
  return param_1;
}


