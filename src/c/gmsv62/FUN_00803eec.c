/* FUN_00803eec - 0x00803eec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00803eec(undefined4 *param_1)

{
  FUN_007f0e57();
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *param_1 = &PTR_FUN_008f2798;
  param_1[3] = &PTR_FUN_008f26e8;
  return param_1;
}


