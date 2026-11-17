/* FUN_00518c1a - 0x00518c1a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00518c1a(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = 0xffffffff;
  *param_1 = &PTR_FUN_008eaf3c;
  return param_1;
}


