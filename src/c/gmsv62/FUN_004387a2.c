/* FUN_004387a2 - 0x004387a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004387a2(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_004030b1();
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_008e8af4;
  return;
}


