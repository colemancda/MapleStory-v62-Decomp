/* FUN_00454b6b - 0x00454b6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00454b6b(undefined4 *param_1)

{
  FUN_008140e5();
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_008e9270;
  param_1[1] = &PTR_LAB_008e9224;
  param_1[2] = &PTR_FUN_008e9220;
  return param_1;
}


