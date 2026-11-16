/* FUN_5140168b - 0x5140168b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140168b(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5140ad20();
  piVar1 = (int *)(*(int *)(unaff_EBP + 8) + -0xc);
  *(int **)(unaff_EBP + 8) = piVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_5140a821((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + 8));
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_5140ac47(iVar2);
    }
  }
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar2 + 0x40))(piVar1,0,0);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


