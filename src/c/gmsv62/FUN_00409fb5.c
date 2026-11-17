/* FUN_00409fb5 - 0x00409fb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00409fb5(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[5] = 0;
  *param_1 = &PTR_FUN_008e861c;
  return param_1;
}


