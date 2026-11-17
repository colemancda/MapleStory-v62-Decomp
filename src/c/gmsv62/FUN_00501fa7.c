/* FUN_00501fa7 - 0x00501fa7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00501fa7(void)

{
  DAT_00980cd8 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980cd8 == (undefined4 *)0x0) {
    DAT_00980cd8 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980cd8 = &PTR_LAB_008e84a8;
    DAT_00980cd8[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980cd8;
    DAT_00980cd8[2] = 0;
    DAT_00980cd8[3] = 0;
    DAT_00980cd8[5] = 0;
    *DAT_00980cd8 = &PTR_FUN_008e89fc;
  }
  return;
}


