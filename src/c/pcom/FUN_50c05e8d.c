/* FUN_50c05e8d - 0x50c05e8d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * FUN_50c05e8d(void)

{
  uint *this;
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  this = FUN_50c025fb();
  *(uint **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (uint *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_50c06021(this,*(int *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = piVar1;
  if (piVar1 == (int *)0x0) {
    FUN_50c101c4(0x8007000e);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


