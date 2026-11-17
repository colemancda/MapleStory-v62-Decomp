/* FUN_0043babb - 0x0043babb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0043babb(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e8c5c;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_008e8c58;
  param_1[3] = &PTR_LAB_008e8c54;
  return param_1;
}


