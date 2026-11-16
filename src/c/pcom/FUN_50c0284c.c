/* FUN_50c0284c - 0x50c0284c in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0284c(void)

{
  DAT_50c214e8 = FUN_50c025fb();
  if (DAT_50c214e8 == (uint *)0x0) {
    DAT_50c214e8 = (uint *)0x0;
  }
  else {
    *DAT_50c214e8 = (uint)&PTR_LAB_50c130c4;
    DAT_50c214e8[1] = (uint)DAT_50c2130c;
    DAT_50c2130c = DAT_50c214e8;
    DAT_50c214e8[2] = 0;
    DAT_50c214e8[3] = 0;
    DAT_50c214e8[5] = 0;
    *DAT_50c214e8 = (uint)&PTR_FUN_50c130c0;
  }
  return;
}


