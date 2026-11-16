/* FUN_50003366 - 0x50003366 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_50003366(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_50012d80();
  piVar1 = *(int **)(unaff_EBP + 0x28);
  iVar2 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((piVar1 == (int *)0x0) || (*(int *)(unaff_EBP + 0x14) == 0)) {
    uVar3 = 0x80004003;
  }
  else {
    if (*(int *)(*(int *)(unaff_EBP + 8) + 0x1c) != 0) {
      FUN_5000d476();
      iVar2 = FUN_500054bd();
    }
    *piVar1 = iVar2;
    FUN_50003157(0x5001daa0);
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


