/* FUN_005a9e0f - 0x005a9e0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_005a9e0f(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_008ec79c;
  return param_1;
}


