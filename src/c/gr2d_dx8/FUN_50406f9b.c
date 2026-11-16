/* FUN_50406f9b - 0x50406f9b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50406f9b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(iVar1 + 0x28);
  FUN_50401895();
  puVar2 = *(undefined4 **)(iVar1 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (*(code *)*puVar2)(iVar1 + 0xc);
  piVar3 = *(int **)(iVar1 + 0x60);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 0xc);
  *(int **)(iVar1 + 0x60) = piVar3;
  (**(code **)(*piVar3 + 0x3c))(piVar3,0,unaff_EBP + 8);
  piVar3 = *(int **)(iVar1 + 100);
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 100) = uVar4;
  (**(code **)(*piVar3 + 0x20))(piVar3,unaff_EBP + -0x30);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(unaff_EBP + -0x30);
  piVar3 = (int *)(iVar1 + 0x2c);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


