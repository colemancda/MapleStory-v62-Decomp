/* FUN_004384e7 - 0x004384e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004384e7(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e8b40;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_008e8b3c;
  param_1[3] = &PTR_LAB_008e8b38;
  return param_1;
}


