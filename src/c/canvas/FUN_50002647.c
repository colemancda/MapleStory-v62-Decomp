/* FUN_50002647 - 0x50002647 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50002647(void)

{
  DAT_500864f8 = FUN_500023f6();
  if (DAT_500864f8 == (uint *)0x0) {
    DAT_500864f8 = (uint *)0x0;
  }
  else {
    *DAT_500864f8 = (uint)&PTR_LAB_500140ec;
    DAT_500864f8[1] = (uint)DAT_50081ecc;
    DAT_50081ecc = DAT_500864f8;
    DAT_500864f8[2] = 0;
    DAT_500864f8[3] = 0;
    DAT_500864f8[5] = 0;
    *DAT_500864f8 = (uint)&PTR_FUN_500140e8;
  }
  return;
}


