/* FUN_004c7613 - 0x004c7613 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004c7613(void)

{
  DAT_00980cc4 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980cc4 == (undefined4 *)0x0) {
    DAT_00980cc4 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980cc4 = &PTR_LAB_008e84a8;
    DAT_00980cc4[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980cc4;
    DAT_00980cc4[2] = 0;
    DAT_00980cc4[3] = 0;
    DAT_00980cc4[5] = 0;
    *DAT_00980cc4 = &PTR_FUN_008e8b08;
  }
  return;
}


