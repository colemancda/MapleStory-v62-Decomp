/* FUN_00690045 - 0x00690045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00690045(void)

{
  DAT_00980d68 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980d68 == (undefined4 *)0x0) {
    DAT_00980d68 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980d68 = &PTR_LAB_008e84a8;
    DAT_00980d68[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980d68;
    DAT_00980d68[2] = 0;
    DAT_00980d68[3] = 0;
    DAT_00980d68[5] = 0;
    *DAT_00980d68 = &PTR_FUN_008e87b4;
  }
  return;
}


