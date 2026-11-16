/* FUN_5040eca5 - 0x5040eca5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_5040eca5(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  Ordinal_8(unaff_EBP + -0x20);
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar3 + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar2 = *(int **)(iVar3 + 0x40);
  iVar3 = (**(code **)(*piVar2 + 0x60))(piVar2,unaff_EBP + -0x20);
  if (-1 < iVar3) {
    iVar3 = FUN_504062ba();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (((iVar3 != 0) &&
        (iVar3 = FUN_504109ff((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + 8)), iVar3 < 0)) &&
       (iVar3 != -0x7fffbffe)) {
      FUN_5042a358(iVar3);
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,*(undefined4 *)(unaff_EBP + 0xc));
      piVar2 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x20));
      if (iVar3 < 0) {
        FUN_5042a358(iVar3);
      }
      goto LAB_5040ed75;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_5042a358(iVar3);
  }
  uVar4 = 0x80004003;
LAB_5040ed75:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


