/* FUN_007db4ad - 0x007db4ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_007db4ad(undefined4 *param_1)

{
  FUN_004bc4fa();
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = &PTR_FUN_008f1bb0;
  param_1[1] = &PTR_LAB_008f1b64;
  param_1[2] = &PTR_FUN_008f1b60;
  return param_1;
}


