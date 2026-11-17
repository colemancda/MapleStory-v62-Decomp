/* ptr_00530068 - 0x00530068 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00530068(void)

{
  func_0x00530ca9();
  func_0x00530ce8();
  func_0x00530d27();
  func_0x00530d66();
  func_0x00530da5();
  func_0x00530de4();
  func_0x00530e23();
  func_0x00530e62();
  func_0x00530ea1();
  DAT_00980c3c = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980c3c == (undefined4 *)0x0) {
    DAT_00980c3c = (undefined4 *)0x0;
  }
  else {
    *DAT_00980c3c = &PTR_LAB_008e84a8;
    DAT_00980c3c[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980c3c;
    DAT_00980c3c[2] = 0;
    DAT_00980c3c[3] = 0;
    DAT_00980c3c[5] = 0;
    *DAT_00980c3c = &PTR_FUN_008e8d88;
  }
  return;
}


