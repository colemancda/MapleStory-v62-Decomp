/* FUN_004ba482 - 0x004ba482 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004ba482(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008ea0f0;
  *param_1 = &PTR_FUN_008ea0ec;
  param_1[3] = &PTR_LAB_008ea0e8;
  return param_1;
}


