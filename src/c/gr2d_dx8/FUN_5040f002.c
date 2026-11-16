/* FUN_5040f002 - 0x5040f002 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5040f002(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5042a430();
  Ordinal_8(unaff_EBP + -0x24);
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(iVar3 + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_5042a358(0x80004003);
  }
  iVar2 = (**(code **)(**(int **)(iVar3 + 0x40) + 0x60))(*(int **)(iVar3 + 0x40),unaff_EBP + -0x24);
  if (-1 < iVar2) {
    iVar2 = FUN_504062ba();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (((iVar2 != 0) &&
        (iVar2 = FUN_504109ff((void *)(unaff_EBP + -0x10),(int *)(unaff_EBP + 8)), iVar2 < 0)) &&
       (iVar2 != -0x7fffbffe)) {
      FUN_5042a358(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(iVar3 + 0x1c);
      FUN_50401895();
      iVar2 = *(int *)(iVar3 + 0x40);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        FUN_5042a358(0x80004003);
      }
      iVar2 = (**(code **)(**(int **)(iVar3 + 0x40) + 0x48))
                        (*(int **)(iVar3 + 0x40),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                         *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                         *(undefined4 *)(unaff_EBP + 0x20));
      if (-1 < iVar2) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_5042a358(0x80004003);
        }
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x48))
                          (*(int **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),
                           *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                           *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),
                           *(undefined4 *)(unaff_EBP + 0x20));
      }
      piVar1 = (int *)(iVar3 + 0x20);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x24));
      if (iVar3 < 0) {
        FUN_5042a358(iVar3);
      }
      goto LAB_5040f13e;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x24));
  if (iVar3 < 0) {
    FUN_5042a358(iVar3);
  }
  iVar2 = -0x7fffbffd;
LAB_5040f13e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


