/* FUN_50002cd8 - 0x50002cd8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50002cd8(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar1 = *(int *)(unaff_EBP + 8);
  piVar2 = *(int **)(iVar1 + 0x80);
  *(int *)(iVar1 + 0x80) = 0;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_50003bdf((int *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50003bdf((int *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


