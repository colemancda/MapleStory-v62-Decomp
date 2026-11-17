/* FUN_00657523 - 0x00657523 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00657523(void)

{
  DAT_00980da0 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980da0 == (undefined4 *)0x0) {
    DAT_00980da0 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980da0 = &PTR_LAB_008e84a8;
    DAT_00980da0[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980da0;
    DAT_00980da0[2] = 0;
    DAT_00980da0[3] = 0;
    DAT_00980da0[5] = 0;
    *DAT_00980da0 = &PTR_FUN_008e877c;
  }
  return;
}


