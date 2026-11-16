/* FUN_514029a3 - 0x514029a3 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_514029a3(void)

{
  DAT_51411b84 = FUN_51402409();
  if (DAT_51411b84 == (uint *)0x0) {
    DAT_51411b84 = (uint *)0x0;
  }
  else {
    *DAT_51411b84 = (uint)&PTR_LAB_5140c6a4;
    DAT_51411b84[1] = (uint)DAT_51411a88;
    DAT_51411a88 = DAT_51411b84;
    DAT_51411b84[2] = 0;
    DAT_51411b84[3] = 0;
    DAT_51411b84[5] = 0;
    *DAT_51411b84 = (uint)&PTR_FUN_5140c6a0;
  }
  return;
}


