/* FUN_00640060 - 0x00640060 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00640060(void)

{
  DAT_00980d0c = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980d0c == (undefined4 *)0x0) {
    DAT_00980d0c = (undefined4 *)0x0;
  }
  else {
    *DAT_00980d0c = &PTR_LAB_008e84a8;
    DAT_00980d0c[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980d0c;
    DAT_00980d0c[2] = 0;
    DAT_00980d0c[3] = 0;
    DAT_00980d0c[5] = 0;
    *DAT_00980d0c = &PTR_FUN_008e8810;
  }
  return;
}


