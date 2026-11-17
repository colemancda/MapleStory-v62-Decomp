/* FUN_004056a9 - 0x004056a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004056a9(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e8568;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_008e8564;
  param_1[3] = &PTR_LAB_008e8560;
  return param_1;
}


