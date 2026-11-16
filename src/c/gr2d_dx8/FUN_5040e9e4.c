/* FUN_5040e9e4 - 0x5040e9e4 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_5040e9e4(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar3 = 0x80004003;
  }
  else {
    Ordinal_8(unaff_EBP + -0x20);
    iVar4 = *(int *)(unaff_EBP + 8);
    iVar1 = *(int *)(iVar4 + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      FUN_5042a358(0x80004003);
    }
    piVar2 = *(int **)(iVar4 + 0x40);
    iVar4 = (**(code **)(*piVar2 + 0x60))(piVar2,unaff_EBP + -0x20);
    if (-1 < iVar4) {
      iVar4 = FUN_504062ba();
      *(int *)(unaff_EBP + 8) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (((iVar4 != 0) &&
          (iVar4 = FUN_504109ff((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + 8)), iVar4 < 0)) &&
         (iVar4 != -0x7fffbffe)) {
        FUN_5042a358(iVar4);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,*(undefined4 *)(unaff_EBP + 0xc));
        piVar2 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x20));
        if (iVar4 < 0) {
          FUN_5042a358(iVar4);
        }
        goto LAB_5040eac3;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x20));
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    uVar3 = 0x80004003;
  }
LAB_5040eac3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


