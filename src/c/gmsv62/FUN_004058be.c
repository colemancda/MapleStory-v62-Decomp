/* FUN_004058be - 0x004058be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004058be(undefined4 *param_1)

{
  if (param_1[4] != 0) {
    FUN_004030b1();
    param_1[4] = 0;
  }
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3)) = &PTR_LAB_008e8580;
  *param_1 = &PTR_LAB_008e84a0;
  return;
}


