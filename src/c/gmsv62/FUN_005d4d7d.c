/* FUN_005d4d7d - 0x005d4d7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005d4d7d(undefined4 *param_1)

{
  if (param_1[8] != 0) {
    FUN_004030b1();
    param_1[8] = 0;
  }
  *(undefined ***)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3)) = &PTR_LAB_008ecbb0;
  *param_1 = &PTR_LAB_008e84a0;
  return;
}


