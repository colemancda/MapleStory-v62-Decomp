/* FUN_004dd1be - 0x004dd1be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004dd1be(void)

{
  DAT_00980d80 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980d80 == (undefined4 *)0x0) {
    DAT_00980d80 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980d80 = &PTR_LAB_008e84a8;
    DAT_00980d80[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980d80;
    DAT_00980d80[2] = 0;
    DAT_00980d80[3] = 0;
    DAT_00980d80[5] = 0;
    *DAT_00980d80 = &PTR_FUN_008e879c;
  }
  return;
}


