/* ptr_00425be8 - 0x00425be8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00425be8(void)

{
  DAT_00980e68 = (undefined4 *)FUN_004029b9();
  if (DAT_00980e68 == (undefined4 *)0x0) {
    DAT_00980e68 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980e68 = &PTR_LAB_008e84a8;
    DAT_00980e68[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980e68;
    DAT_00980e68[2] = 0;
    DAT_00980e68[3] = 0;
    DAT_00980e68[5] = 0;
    *DAT_00980e68 = &PTR_FUN_008e84f4;
  }
  return;
}


