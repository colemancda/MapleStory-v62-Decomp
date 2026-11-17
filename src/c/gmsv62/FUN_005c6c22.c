/* FUN_005c6c22 - 0x005c6c22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c6c22(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(*(int *)(unaff_EBP + 0xc) + 4);
  iVar3 = *(int *)(iVar2 + 0x50);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  if (-1 < iVar3) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)(extraout_ECX + 0x440);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x18);
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar1;
    uVar4 = *(undefined4 *)(iVar2 + 0x50);
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x14) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar1,uVar4,0,*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  if (-1 < *(int *)(iVar2 + 0x54)) {
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)(extraout_ECX + 0x440);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = FUN_0042a378();
    FUN_004031b7(iVar3 + *(int *)(iVar2 + 0x4c),3);
    iVar3 = *(int *)(extraout_ECX + 0x440);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x14);
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)*piVar1;
    uVar4 = *(undefined4 *)(iVar2 + 0x54);
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x18) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar1,uVar4,0,*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  if (*(int *)(unaff_EBP + 0xc) == *(int *)(*(int *)(unaff_EBP + 8) + 0xc)) {
    FUN_00413367(extraout_ECX + 0x380,*(undefined4 *)(extraout_ECX + 0x388));
    uVar4 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x37c) = uVar4;
  }
  FUN_00413367(extraout_ECX + 0x374,*(undefined4 *)(extraout_ECX + 0x37c));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x37c) = uVar4;
  uVar4 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x370) = uVar4;
  FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0xec),1);
  iVar2 = *(int *)(extraout_ECX + 0xf4);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xf4);
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + 0xc) = piVar1;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(extraout_ECX + 0x440) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_0043210d();
  if (iVar2 == 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 7;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)(extraout_ECX + 0xf4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x48);
    piVar1 = *(int **)(extraout_ECX + 0xf4);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x44);
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + 8) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar1,*(undefined4 *)(unaff_EBP + 0xc),uVar4,
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_00403191(&DAT_00980690);
    iVar2 = *(int *)(extraout_ECX + 0xf4);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x44);
    piVar1 = *(int **)(extraout_ECX + 0xf4);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x48);
    iVar3 = *piVar1;
    *(int **)(unaff_EBP + 8) = piVar1;
    iVar2 = (**(code **)(iVar3 + 0x90))
                      (piVar1,-iVar2,*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = *(int *)(unaff_EBP + -0x10);
  FUN_00411537((int *)(extraout_ECX + 0x38c),iVar2 + 0x10);
  (*DAT_0097b504)(extraout_ECX + 0x39c,-*(int *)(extraout_ECX + 0x394),
                  *(undefined4 *)(extraout_ECX + 0x390),-*(int *)(extraout_ECX + 0x38c),
                  *(undefined4 *)(extraout_ECX + 0x398));
  uVar4 = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x40) + -4);
  }
  piVar1 = (int *)(extraout_ECX + 0x3ac);
  FUN_004fae8e(uVar4,unaff_EBP + 0xf);
  uVar4 = 0;
  if (*(int *)(iVar2 + 0x40) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x40) + -4);
  }
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x3b0;
  FUN_004fae8e(uVar4,unaff_EBP + 0xb);
  iVar3 = 0;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((*piVar1 != 0 && (*(uint *)(unaff_EBP + 0xc) < *(uint *)(*piVar1 + -4)))) {
    FUN_00411537(iVar3 + *piVar1,*(int *)(unaff_EBP + -0x10) + *(int *)(iVar2 + 0x40));
    piVar5 = (int *)(*piVar1 + iVar3);
    (*DAT_0097b504)(iVar3 + **(int **)(unaff_EBP + -0x18),-piVar5[2],piVar5[1],-*piVar5,piVar5[3]);
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x30;
    iVar3 = iVar3 + 0x10;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


