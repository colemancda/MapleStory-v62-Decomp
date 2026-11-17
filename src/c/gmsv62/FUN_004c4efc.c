/* FUN_004c4efc - 0x004c4efc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004c4efc(void)

{
  DAT_00980c2c = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980c2c == (undefined4 *)0x0) {
    DAT_00980c2c = (undefined4 *)0x0;
  }
  else {
    *DAT_00980c2c = &PTR_LAB_008e84a8;
    DAT_00980c2c[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980c2c;
    DAT_00980c2c[2] = 0;
    DAT_00980c2c[3] = 0;
    DAT_00980c2c[5] = 0;
    *DAT_00980c2c = &PTR_FUN_008e8da4;
  }
  return;
}


