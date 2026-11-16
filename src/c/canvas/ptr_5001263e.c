/* ptr_5001263e - 0x5001263e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void ptr_5001263e(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar1 = *(int *)(unaff_EBP + 8);
  piVar2 = *(int **)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 4) = 0;
  *(int **)(unaff_EBP + 8) = piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  piVar3 = *(int **)(iVar1 + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


