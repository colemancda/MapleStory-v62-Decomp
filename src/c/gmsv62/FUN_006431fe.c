/* FUN_006431fe - 0x006431fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006431fe(void)

{
  DAT_00980dd4 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980dd4 == (undefined4 *)0x0) {
    DAT_00980dd4 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980dd4 = &PTR_LAB_008e84a8;
    DAT_00980dd4[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980dd4;
    DAT_00980dd4[2] = 0;
    DAT_00980dd4[3] = 0;
    DAT_00980dd4[5] = 0;
    *DAT_00980dd4 = &PTR_FUN_008e86fc;
  }
  return;
}


