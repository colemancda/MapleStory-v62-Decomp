/* FUN_00428eb4 - 0x00428eb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428eb4(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar11;
  
  FUN_00879bb8();
  iVar5 = FUN_007d1e08();
  dVar4 = _DAT_008e8a80;
  dVar1 = *(double *)(extraout_ECX + 0x180);
  *(int *)(unaff_EBP + -0x14) = iVar5;
  if ((dVar4 < dVar1) &&
     (iVar5 != *(int *)(extraout_ECX + 0x188) && -1 < iVar5 - *(int *)(extraout_ECX + 0x188))) {
    if (DAT_0097c1ac == 0) {
      FUN_00878dfb();
    }
    FUN_00429328();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 - *(int *)(extraout_ECX + 0x18c) < 0) {
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar6 = __ftol();
      uVar7 = __ftol();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
      if (uVar6 == 0) {
        uVar7 = FUN_004133f0();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
      }
      else {
        uVar8 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x18) = uVar8 % uVar6 + *(int *)(unaff_EBP + -0x1c);
      }
      uVar6 = __ftol();
      uVar7 = __ftol();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
      if (uVar6 == 0) {
        uVar7 = FUN_004133f0();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
      }
      else {
        uVar8 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x1c) = uVar8 % uVar6 + *(int *)(unaff_EBP + -0x1c);
      }
      piVar9 = *(int **)(unaff_EBP + -0x10);
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar9;
      *(int **)(unaff_EBP + -0x20) = piVar9;
      iVar5 = (**(code **)(iVar5 + 0x90))
                        (piVar9,*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      dVar1 = *(double *)(extraout_ECX + 400) * *(double *)(extraout_ECX + 0x180);
      *(double *)(extraout_ECX + 0x180) = dVar1;
      fVar11 = (float10)FUN_0087acc3(dVar1);
      if (fVar11 < (float10)_DAT_008e8a78) {
        *(undefined8 *)(extraout_ECX + 0x180) = 0;
      }
      iVar5 = *(int *)(unaff_EBP + -0x14);
    }
    if ((-1 < iVar5 - *(int *)(extraout_ECX + 0x18c)) ||
       (*(double *)(extraout_ECX + 0x180) == _DAT_008e8a80)) {
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00403191();
      piVar9 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar9 == (int *)0x0) {
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar9;
      *(int **)(unaff_EBP + -0x20) = piVar9;
      iVar5 = (**(code **)(iVar5 + 0x90))
                        (piVar9,0,0,*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined8 *)(extraout_ECX + 0x180) = 0;
    }
    iVar5 = FUN_00429303();
    FUN_004031b7(1,3);
    piVar9 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + -0x10);
    }
    iVar10 = *(int *)(iVar5 + 0xd4);
    iVar2 = *(int *)(iVar5 + 0xdc);
    iVar3 = *(int *)(iVar5 + 0xd0);
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    *(int *)(unaff_EBP + -0x20) = iVar10;
    iVar5 = *(int *)(iVar5 + 0xd8);
    *(undefined4 *)(unaff_EBP + -0x34) = DAT_0097bb30;
    *(undefined4 *)(unaff_EBP + -0x30) = DAT_0097bb34;
    *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0097bb38;
    *(undefined4 *)(unaff_EBP + -0x28) = DAT_0097bb3c;
    *(int **)(unaff_EBP + -0x18) = piVar9;
    iVar5 = (**(code **)(*piVar9 + 0x9c))
                      (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x20),iVar5 - iVar3,iVar2 - iVar10,
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004125d9();
  }
  uVar6 = *(uint *)(extraout_ECX + 0x28);
  while (uVar6 != 0) {
    iVar5 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(uVar6 + 4);
    FUN_00434d2a();
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iVar10 = FUN_004329ac();
    if (iVar10 != 0) {
      FUN_00432942();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00434d47();
    uVar6 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
  }
  FUN_0043449b();
  FUN_004344f4();
  FUN_00434530();
  FUN_0043457a();
  FUN_004345c4();
  FUN_0043460e();
  FUN_00434658();
  FUN_004346a2();
  FUN_004346ec();
  FUN_004348e4();
  FUN_00434736();
  FUN_00434780();
  FUN_004347ca();
  FUN_00434828();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


