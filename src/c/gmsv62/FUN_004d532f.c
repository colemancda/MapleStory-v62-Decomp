/* FUN_004d532f - 0x004d532f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d532f(void)

{
  DAT_00980db0 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980db0 == (undefined4 *)0x0) {
    DAT_00980db0 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980db0 = &PTR_LAB_008e84a8;
    DAT_00980db0[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980db0;
    DAT_00980db0[2] = 0;
    DAT_00980db0[3] = 0;
    DAT_00980db0[5] = 0;
    *DAT_00980db0 = &PTR_FUN_008e875c;
  }
  return;
}


