/* FUN_004ffffb - 0x004ffffb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ffffb(void)

{
  DAT_00980d5c = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980d5c == (undefined4 *)0x0) {
    DAT_00980d5c = (undefined4 *)0x0;
  }
  else {
    *DAT_00980d5c = &PTR_LAB_008e84a8;
    DAT_00980d5c[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980d5c;
    DAT_00980d5c[2] = 0;
    DAT_00980d5c[3] = 0;
    DAT_00980d5c[5] = 0;
    *DAT_00980d5c = &PTR_FUN_008e87c0;
  }
  return;
}


