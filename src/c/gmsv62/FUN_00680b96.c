/* FUN_00680b96 - 0x00680b96 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00680b96(undefined4 *param_1)

{
  if (param_1[0x1e] != 0) {
    FUN_004030b1();
    param_1[0x1e] = 0;
  }
  if (param_1[0x1a] != 0) {
    FUN_004030b1();
    param_1[0x1a] = 0;
  }
  *param_1 = &PTR_LAB_008e84a0;
  return;
}


