/* FUN_0063650c - 0x0063650c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063650c(void)

{
  DAT_00980e08 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980e08 == (undefined4 *)0x0) {
    DAT_00980e08 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980e08 = &PTR_LAB_008e84a8;
    DAT_00980e08[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980e08;
    DAT_00980e08[2] = 0;
    DAT_00980e08[3] = 0;
    DAT_00980e08[5] = 0;
    *DAT_00980e08 = &PTR_FUN_008e8720;
  }
  return;
}


