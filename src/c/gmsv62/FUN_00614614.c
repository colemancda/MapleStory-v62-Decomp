/* FUN_00614614 - 0x00614614 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00614614(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  uint uVar7;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x1c0) == 0) {
    FUN_0046f87c(0);
  }
  piVar1 = (int *)FUN_00486ada(unaff_EBP + -0x14);
  uVar7 = -(uint)(*piVar1 != 0) & *piVar1 - 0xcU;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar4 = *(undefined4 *)(uVar7 + 0x124);
  uVar6 = -(uint)(*(int *)(extraout_ECX + 0x80) != 0) & *(int *)(extraout_ECX + 0x80) - 0xcU;
  *(uint *)(unaff_EBP + -0x18) = uVar6;
  iVar2 = FUN_0048bb31(uVar7 + 0x11c,uVar4);
  iVar3 = *(int *)(uVar6 + 0x18);
  *(uint *)(unaff_EBP + -0x14) = (uint)(iVar2 != 0);
  if (iVar3 == 0) {
    iVar3 = FUN_007f1573();
    *(int *)(unaff_EBP + -0x10) = iVar3;
    if (iVar3 == -1) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
      FUN_0061595d(1,0,0);
    }
    if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
      FUN_0061595d(2,0,0);
    }
  }
  else if ((*(int *)(extraout_ECX + 0xe8) < 0) || (*(int *)(unaff_EBP + -0x14) != 0)) {
    FUN_007f17b3();
  }
  FUN_006141b1(*(undefined4 *)(uVar6 + 0x140),0);
  FUN_00615de7(*(undefined4 *)(unaff_EBP + -0x14),0);
  iVar3 = FUN_0061425f(0);
  *(int *)(extraout_ECX + 0xf0) = *(int *)(extraout_ECX + 0xf0) + -0x1e;
  if (*(int *)(extraout_ECX + 0xf0) < 1) {
    iVar2 = *(int *)(extraout_ECX + 0xf4) + iVar3 * 0x14;
    if (((iVar3 == 8) && (*(int *)(extraout_ECX + 0x8c) == 0)) &&
       (*(int *)(*(int *)(*(int *)(extraout_ECX + 0x84) + 0x1744) + 0xc) != 0)) {
      iVar2 = extraout_ECX + 0xf8;
    }
    if (*(int *)(iVar2 + 8) != 0) {
      iVar3 = *(int *)((-(uint)(*(int *)(extraout_ECX + 0xec) != 0) &
                       *(int *)(extraout_ECX + 0xec) - 0x10U) + 4);
      uVar7 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(uint *)(extraout_ECX + 0xec) = uVar7;
      if (*(int *)(extraout_ECX + 0xe8) < 0) {
        if (*(int *)(extraout_ECX + 0xec) == 0) {
          if (((*(int *)(uVar6 + 0x18) != 0) && (0 < *(int *)(extraout_ECX + 0xe4))) &&
             (*(int *)(extraout_ECX + 0xe4) < 3)) {
            uVar7 = FUN_004133f0();
            *(uint *)(extraout_ECX + 0xe4) = (uVar7 & 1) + 1;
            FUN_005cde58();
            FUN_006141b1(*(undefined4 *)(uVar6 + 0x140),0);
            goto LAB_006147d6;
          }
          *(undefined4 *)(extraout_ECX + 0xec) = *(undefined4 *)(iVar2 + 0xc);
        }
      }
      else if (uVar7 == 0) {
        *(int *)(extraout_ECX + 0xe8) = -1;
LAB_006147d6:
        FUN_006142ef();
        goto LAB_00614870;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(extraout_ECX + 0xec) + 4);
      FUN_004031b7(1,3);
      iVar3 = *(int *)(extraout_ECX + 0x114);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      iVar3 = *piVar1;
      *(int **)(unaff_EBP + -0x14) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x10c))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(extraout_ECX + 0xf0) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x40);
    }
  }
LAB_00614870:
  *(undefined4 *)(extraout_ECX + 0x1a8) = *(undefined4 *)(extraout_ECX + 0x1a0);
  *(undefined4 *)(extraout_ECX + 0x1ac) = *(undefined4 *)(extraout_ECX + 0x1a4);
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iVar3 = FUN_00402e32(unaff_EBP + -0x28,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *(int *)(extraout_ECX + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x80);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x8c))
                    (piVar1,extraout_ECX + 0x1a0,extraout_ECX + 0x1a4,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar1 = (int *)(extraout_ECX + 4);
  uVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x14))();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  piVar5 = (int *)(**(code **)(*piVar1 + 0x10))();
  if (*piVar5 == **(int **)(unaff_EBP + -0x14)) {
    uVar4 = (**(code **)(*piVar1 + 0x14))();
    iVar3 = *piVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    iVar3 = (**(code **)(iVar3 + 0x10))();
    if (*(int *)(iVar3 + 4) != *(int *)(*(int *)(unaff_EBP + -0x14) + 4)) goto LAB_0061496b;
    *(int *)(extraout_ECX + 0xa8) = *(int *)(extraout_ECX + 0xa8) + 0x1e;
  }
  else {
LAB_0061496b:
    *(undefined4 *)(extraout_ECX + 0xe4) = 1;
    *(undefined4 *)(extraout_ECX + 0xa8) = 0;
    *(undefined4 *)(extraout_ECX + 0xac) = 0;
  }
  if (5000 < *(int *)(extraout_ECX + 0xa8)) {
    if ((*(int *)(extraout_ECX + 0xac) == 0) && (*(int *)(extraout_ECX + 0xa8) % 5000 < 0x1e)) {
      uVar7 = FUN_004133f0();
      if ((uVar7 & 1) != 0) {
        FUN_00615045();
        *(undefined4 *)(extraout_ECX + 0xac) = 1;
        goto LAB_006149c7;
      }
    }
    *(undefined4 *)(extraout_ECX + 0xac) = 0;
  }
LAB_006149c7:
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x18) != 0) {
    iVar3 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 0xc))();
    if (iVar3 == 0) {
      iVar3 = FUN_00614a21();
      if (iVar3 == 0) {
        FUN_006161a9();
      }
    }
  }
  *(int *)(extraout_ECX + 0x1c4) = *(int *)(extraout_ECX + 0x1c4) + 0x1e;
  if (1799999 < *(int *)(extraout_ECX + 0x1c4)) {
    FUN_00617c64();
    *(undefined4 *)(extraout_ECX + 0x1c4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


