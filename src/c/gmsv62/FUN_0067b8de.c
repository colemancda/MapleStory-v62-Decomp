/* FUN_0067b8de - 0x0067b8de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067b8de(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar7;
  
  FUN_00879bb8();
  iVar2 = FUN_007d1e08();
  uVar7 = -(uint)(*(int *)(extraout_ECX + 0x134) != 0) & *(int *)(extraout_ECX + 0x134) - 0xcU;
  iVar3 = *(int *)(uVar7 + 0x18);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(uint *)(unaff_EBP + -0x10) = uVar7;
  if (iVar3 == 0) {
    uVar6 = FUN_007f1573();
    if ((0 < (int)uVar6) && ((uVar6 & 0x10) != 0)) {
      FUN_0067f31f(0);
    }
  }
  else {
    FUN_007f17b3();
    iVar3 = FUN_00413367(extraout_ECX + 0xec,*(undefined4 *)(extraout_ECX + 0xf4));
    if (iVar3 == 0) {
      FUN_0067b267(unaff_EBP + -0x3c,1);
      iVar3 = FUN_005d5a8e(unaff_EBP + -0x3c);
      *(int *)(unaff_EBP + -0x18) = iVar3;
      if (iVar3 != 0) {
        uVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x14))();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
        piVar5 = (int *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
        iVar3 = *piVar5;
        iVar2 = **(int **)(unaff_EBP + -0x14);
        piVar5 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        iVar1 = *piVar5;
        piVar5 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x14))();
        iVar2 = ((iVar3 - iVar2) - iVar1) + *piVar5;
        iVar3 = FUN_0048bb31(uVar7 + 0x11c,*(undefined4 *)(uVar7 + 0x124));
        if (iVar3 != 0) {
          uVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x14))();
          iVar3 = *(int *)(extraout_ECX + 4);
          *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
          iVar3 = (**(code **)(iVar3 + 0x10))();
          if (*(int *)(iVar3 + 4) - *(int *)(*(int *)(unaff_EBP + -0x14) + 4) < 0) {
            iVar2 = 0x7fffffff;
          }
          uVar7 = *(uint *)(unaff_EBP + -0x10);
        }
        FUN_0067d844(0,0,0,*(undefined4 *)(unaff_EBP + -0x18),0xffffffff,iVar2);
        iVar2 = *(int *)(unaff_EBP + -0x1c);
      }
    }
    if (*(int *)(extraout_ECX + 0xbc) != 0) {
      uVar6 = FUN_00413367(extraout_ECX + 0xd0,*(undefined4 *)(extraout_ECX + 0xd8));
      if (0x7fffffff < uVar6) {
        if (*(int *)(extraout_ECX + 0xb0) == 1) {
          iVar3 = FUN_00653317(*(undefined4 *)(extraout_ECX + 0xa0));
          if (iVar3 < iVar2 - *(int *)(extraout_ECX + 0xfc)) {
            FUN_0067c6ca(iVar2);
          }
        }
        else {
          if (iVar2 != *(int *)(extraout_ECX + 0x100) && -1 < iVar2 - *(int *)(extraout_ECX + 0x100)
             ) {
            iVar3 = FUN_0067d2b1(iVar2);
            if (iVar3 != 0) goto LAB_0067ba7e;
          }
          if (iVar2 != *(int *)(extraout_ECX + 0x104) && -1 < iVar2 - *(int *)(extraout_ECX + 0x104)
             ) {
            FUN_0067d49a(iVar2);
          }
        }
      }
    }
  }
LAB_0067ba7e:
  FUN_0067b20a(*(undefined4 *)(uVar7 + 0x140),0);
  FUN_0067bb60(iVar2);
  FUN_0067bd9e(iVar2);
  uVar4 = *(undefined4 *)(extraout_ECX + 0x140);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x140;
  *(undefined4 *)(extraout_ECX + 0x148) = uVar4;
  *(undefined4 *)(extraout_ECX + 0x14c) = *(undefined4 *)(extraout_ECX + 0x144);
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar3 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x134) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(extraout_ECX + 0x134);
  iVar3 = *piVar5;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  iVar3 = (**(code **)(iVar3 + 0x8c))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x1c),extraout_ECX + 0x144,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


