/* ptr_5000ca12 - 0x5000ca12 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void ptr_5000ca12(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  FUN_50012d80();
  iVar1 = *(int *)(unaff_EBP + 8);
  piVar2 = *(int **)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(int **)(unaff_EBP + 8) = piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((piVar2 != (int *)0x0) && (*(int *)(iVar1 + 0x14) != 0)) {
    FUN_5000b465();
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


