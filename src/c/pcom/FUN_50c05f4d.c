/* FUN_50c05f4d - 0x50c05f4d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * FUN_50c05f4d(void)

{
  uint *this;
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  this = FUN_50c025fb();
  *(uint **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (uint *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_50c0609f(this,extraout_ECX,*(int **)(unaff_EBP + 8));
  }
  if ((int *)*extraout_ECX != (int *)0x0) {
    FUN_50c02a85((int *)*extraout_ECX);
    *extraout_ECX = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = (int)piVar1;
  return extraout_ECX;
}


