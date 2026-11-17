/* FUN_0043b72c - 0x0043b72c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0043b72c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e8be4;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_008e8be0;
  param_1[3] = &PTR_LAB_008e8bdc;
  return param_1;
}


