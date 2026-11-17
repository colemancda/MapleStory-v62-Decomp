/* FUN_00839e72 - 0x00839e72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00839e72(undefined4 *param_1)

{
  FUN_004bc4fa();
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_008f3164;
  param_1[1] = &PTR_FUN_008f3118;
  param_1[2] = &PTR_FUN_008f3114;
  return param_1;
}


