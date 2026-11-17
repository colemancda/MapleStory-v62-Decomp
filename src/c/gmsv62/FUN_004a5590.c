/* FUN_004a5590 - 0x004a5590 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004a5590(undefined4 *param_1)

{
  FUN_004a0726();
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *param_1 = &PTR_FUN_008e9bd8;
  param_1[1] = &PTR_FUN_008e9b8c;
  param_1[2] = &PTR_FUN_008e9b88;
  return param_1;
}


