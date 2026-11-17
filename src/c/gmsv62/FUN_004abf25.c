/* FUN_004abf25 - 0x004abf25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004abf25(undefined4 *param_1)

{
  FUN_004b3795();
  param_1[0x1c] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[10] = 0;
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_008e9dc4;
  param_1[1] = &PTR_ptr_00456316_008e9d78;
  param_1[2] = &PTR_FUN_008e9d74;
  return param_1;
}


