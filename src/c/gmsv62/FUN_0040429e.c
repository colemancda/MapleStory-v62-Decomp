/* FUN_0040429e - 0x0040429e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0040429e(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e8524;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = &PTR_FUN_008e848c;
  *param_1 = &PTR_FUN_008e8520;
  param_1[3] = &PTR_LAB_008e851c;
  return param_1;
}


