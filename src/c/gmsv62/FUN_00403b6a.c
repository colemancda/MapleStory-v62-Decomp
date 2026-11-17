/* FUN_00403b6a - 0x00403b6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00403b6a(void)

{
  DAT_00980eb4 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980eb4 == (undefined4 *)0x0) {
    DAT_00980eb4 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980eb4 = &PTR_LAB_008e84a8;
    DAT_00980eb4[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980eb4;
    DAT_00980eb4[2] = 0;
    DAT_00980eb4[3] = 0;
    DAT_00980eb4[5] = 0;
    *DAT_00980eb4 = &PTR_FUN_008e84a4;
  }
  return;
}


