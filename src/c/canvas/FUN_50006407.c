/* FUN_50006407 - 0x50006407 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_50006407(void)

{
  uint *this;
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  this = FUN_500023f6();
  *(uint **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (uint *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_50006620(this,*(int *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = piVar1;
  if (piVar1 == (int *)0x0) {
    FUN_50012c97(0x8007000e);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


