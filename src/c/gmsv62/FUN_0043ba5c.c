/* FUN_0043ba5c - 0x0043ba5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0043ba5c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e8c50;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x19] = 0;
  *param_1 = &PTR_FUN_008e8c4c;
  param_1[3] = &LAB_008e8c48;
  return param_1;
}


