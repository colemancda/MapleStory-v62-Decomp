/* FUN_004039b8 - 0x004039b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004039b8(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008e849c;
  return param_1;
}


