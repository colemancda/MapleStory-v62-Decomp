/* thunk_FUN_007b8300 - 0x007b82fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void thunk_FUN_007b8300(void)

{
  DAT_00980a70 = (undefined4 *)FUN_004029b9(0x18);
  if (DAT_00980a70 == (undefined4 *)0x0) {
    DAT_00980a70 = (undefined4 *)0x0;
  }
  else {
    *DAT_00980a70 = &PTR_LAB_008e84a8;
    DAT_00980a70[1] = DAT_0097b988;
    DAT_0097b988 = DAT_00980a70;
    DAT_00980a70[2] = 0;
    DAT_00980a70[3] = 0;
    DAT_00980a70[5] = 0;
    *DAT_00980a70 = &PTR_FUN_008f02f0;
  }
  return;
}


