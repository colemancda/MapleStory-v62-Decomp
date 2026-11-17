/* FUN_00426010 - 0x00426010 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00426010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e89f4;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_008e89f0;
  param_1[3] = &PTR_LAB_008e89ec;
  return param_1;
}


