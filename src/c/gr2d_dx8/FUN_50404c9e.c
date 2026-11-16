/* FUN_50404c9e - 0x50404c9e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_50404c9e(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_5042a430();
  iVar6 = *(int *)(unaff_EBP + 8);
  if (*(int *)(iVar6 + 0x6c) == 0) {
    if (*(int *)(iVar6 + 0x60) == 0) {
      if (*(int *)(iVar6 + 100) == 0) {
        uVar7 = -(uint)(*(int *)(iVar6 + 0x68) != 0) & 0x201;
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
    puVar1 = *(uint **)(unaff_EBP + 0x10);
    *puVar1 = uVar7;
    if (uVar7 == 0) {
      iVar6 = -0x7fffbffb;
      goto LAB_50404e60;
    }
    FUN_504079dd(*(void **)(unaff_EBP + 0xc),(undefined4 *)(unaff_EBP + 0x10),0,0);
    piVar3 = *(int **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar3 == (int *)0x0) {
      FUN_5042a358(0x80004003);
      piVar3 = *(int **)(unaff_EBP + 0x10);
    }
    iVar4 = *piVar3;
    *(int **)(unaff_EBP + 0xc) = piVar3;
    iVar4 = (**(code **)(iVar4 + 0x28))(piVar3,unaff_EBP + -0x24);
    if (iVar4 < 0) {
      FUN_5042a366(iVar4,*(int **)(unaff_EBP + 0xc),&DAT_504353f8);
    }
    uVar7 = *puVar1;
    uVar2 = *(undefined4 *)(iVar6 + 0x70);
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) >> (uVar7 != 1) + 1;
    piVar3 = *(int **)(iVar6 + 0x8c);
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) << (-(uVar7 != 1) & 2U) + 2;
    iVar6 = (**(code **)(*piVar3 + 0x50))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       1,0,uVar2,1,unaff_EBP + 8);
    if ((-1 < iVar6) &&
       (iVar6 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x3c))
                          (*(int **)(unaff_EBP + 8),0,unaff_EBP + -0x14), -1 < iVar6)) {
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        FUN_5042a358(0x80004003);
      }
      pvVar5 = FUN_5040794e(*(void **)(unaff_EBP + 0x10),(void *)(unaff_EBP + -0x34),
                            unaff_EBP + -0x10);
      iVar6 = *(int *)((int)pvVar5 + 8);
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x34));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      iVar6 = FUN_50410d61(*(int **)(unaff_EBP + -0x14),0,(uint *)0x0,iVar6,0x33545844,
                           *(undefined4 *)(unaff_EBP + -0x10),0,(undefined4 *)(unaff_EBP + -0x24),4,
                           0);
      if (-1 < iVar6) {
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          FUN_5042a358(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + 0x10);
        iVar6 = (**(code **)(*piVar3 + 0x20))(piVar3,unaff_EBP + -0x24);
        if (iVar6 < 0) {
          FUN_5042a366(iVar6,piVar3,&DAT_504353f8);
        }
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          FUN_5042a358(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + 0x10);
        iVar6 = (**(code **)(*piVar3 + 0x24))(piVar3,*(undefined4 *)(unaff_EBP + 8));
        if (iVar6 < 0) {
          FUN_5042a366(iVar6,piVar3,&DAT_504353f8);
        }
        piVar3 = *(int **)(unaff_EBP + 0x10);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        goto LAB_50404e5e;
      }
    }
    piVar3 = *(int **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x10) = 0x402;
LAB_50404e5e:
    iVar6 = 0;
  }
LAB_50404e60:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}


