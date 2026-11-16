/* thunk_FUN_5040181a - 0x50401815 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void thunk_FUN_5040181a(void)

{
  DAT_5043909c = FUN_504015ff();
  if (DAT_5043909c == (uint *)0x0) {
    DAT_5043909c = (uint *)0x0;
  }
  else {
    *DAT_5043909c = (uint)&PTR_LAB_5042c2b0;
    DAT_5043909c[1] = (uint)DAT_50438f48;
    DAT_50438f48 = DAT_5043909c;
    DAT_5043909c[2] = 0;
    DAT_5043909c[3] = 0;
    DAT_5043909c[5] = 0;
    *DAT_5043909c = (uint)&PTR_FUN_5042c2b8;
  }
  return;
}


