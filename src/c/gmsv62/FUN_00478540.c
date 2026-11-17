/* FUN_00478540 - 0x00478540 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00478540(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008e9768;
  FUN_00473902(0,0);
  *param_1 = &PTR_FUN_008e9764;
  param_1[3] = &PTR_LAB_008e9760;
  return param_1;
}


