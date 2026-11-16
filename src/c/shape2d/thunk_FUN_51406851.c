/* thunk_FUN_51406851 - 0x5140684c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void thunk_FUN_51406851(void)

{
  DAT_51411b60 = FUN_51402409();
  if (DAT_51411b60 == (uint *)0x0) {
    DAT_51411b60 = (uint *)0x0;
  }
  else {
    *DAT_51411b60 = (uint)&PTR_LAB_5140c6a4;
    DAT_51411b60[1] = (uint)DAT_51411a88;
    DAT_51411a88 = DAT_51411b60;
    DAT_51411b60[2] = 0;
    DAT_51411b60[3] = 0;
    DAT_51411b60[5] = 0;
    *DAT_51411b60 = (uint)&PTR_FUN_5140c6a8;
  }
  return;
}


