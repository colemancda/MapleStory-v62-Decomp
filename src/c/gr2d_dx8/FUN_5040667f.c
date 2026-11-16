/* FUN_5040667f - 0x5040667f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040667f(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = iVar1 + -8;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar1 + -8 != 0) {
    iVar4 = FUN_50406b6b((void *)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      FUN_5042a358(iVar4);
    }
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  iVar4 = *(int *)(iVar1 + 0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 != 0) {
    FUN_5040508d(iVar1 + 200);
    *(undefined4 *)(iVar1 + 0xcc) = 0;
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    FUN_5042a358(0x80004003);
  }
  (**(code **)(**(int **)(iVar1 + 0x2c) + 0x40))(*(int **)(iVar1 + 0x2c),0,0);
  if (*(int *)(iVar1 + 0x30) == 0) {
    FUN_5042a358(0x80004003);
  }
  (**(code **)(**(int **)(iVar1 + 0x30) + 0x40))(*(int **)(iVar1 + 0x30),0,0);
  if (*(int *)(iVar1 + 0x34) == 0) {
    FUN_5042a358(0x80004003);
  }
  (**(code **)(**(int **)(iVar1 + 0x34) + 0x40))(*(int **)(iVar1 + 0x34),0,0);
  if (*(int *)(iVar1 + 0x38) == 0) {
    FUN_5042a358(0x80004003);
  }
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x40))(*(int **)(iVar1 + 0x38),0,0);
  FUN_5040686c(iVar1 + 0x98);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(char **)(unaff_EBP + -0x2c) = "Fh@PhTCP";
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_504068f7((void *)(unaff_EBP + -0x2c),iVar1 + 0xb0,0,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(char **)(unaff_EBP + -0x2c) = "Fh@PhTCP";
  FUN_504068bd(unaff_EBP + -0x2c);
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


