/* FUN_0060ad40 - 0x0060ad40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0060ad40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_008ecefc;
  *(undefined4 *)((int)param_1 + 0xfe) = 0;
  *param_1 = &PTR_FUN_008ecef8;
  param_1[3] = &LAB_008ecef4;
  return param_1;
}


