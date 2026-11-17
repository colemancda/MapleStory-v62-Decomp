/* FUN_005d019c - 0x005d019c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d019c(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_00879bb8();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x448);
  iVar4 = *(int *)this;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar5 = extraout_ECX;
  if (iVar4 == 0) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004031b7(0,3);
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (bVar6) {
      FUN_00878dfb(0x80004003);
    }
    puVar3 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x14,0,0,0x34,10,0,unaff_EBP + -0x24,unaff_EBP + -0x34);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0x440),1);
    iVar4 = *(int *)this;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)this;
    iVar4 = *piVar1;
    *(int **)(unaff_EBP + -0x14) = piVar1;
    iVar4 = (**(code **)(iVar4 + 0xfc))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963df8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xec),1);
    iVar4 = *(int *)this;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)this;
    iVar4 = *piVar1;
    *(int **)(unaff_EBP + -0x14) = piVar1;
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar1,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    if (*(int *)this == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)this;
    iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
    FUN_005d004e();
    iVar5 = *(int *)(unaff_EBP + -0x10);
    if (*(int *)this == 0) goto LAB_005d04a8;
  }
  *(int *)(unaff_EBP + 8) = (*(int *)(unaff_EBP + 8) * 0x2e) / 100;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(iVar5 + 0x45c);
  piVar1 = (int *)(iVar5 + 0x45c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar1;
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar4 = (**(code **)(iVar4 + 0x2c))
                    (piVar2,0x34,10,*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_005039eb(0,0,0x34,10,0xff000000);
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_005039eb(1,1,0x32,8,0xffffffff);
  uVar11 = 0xff000000;
  uVar10 = 6;
  uVar9 = 0x30;
  uVar8 = 2;
  uVar7 = 2;
  FUN_004115d9(2,2,0x30,6,0xff000000);
  FUN_005039eb(uVar7,uVar8,uVar9,uVar10,uVar11);
  uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar11 = 4;
  uVar8 = *(undefined4 *)(unaff_EBP + 8);
  uVar10 = 3;
  uVar9 = 3;
  FUN_004115d9(3,3,uVar8,4,uVar7);
  FUN_005039eb(uVar9,uVar10,uVar8,uVar11,uVar7);
  uVar11 = 0xffa00300;
  uVar10 = 1;
  uVar7 = *(undefined4 *)(unaff_EBP + 8);
  uVar9 = 6;
  uVar8 = 3;
  FUN_004115d9(3,6,uVar7,1,0xffa00300);
  FUN_005039eb(uVar8,uVar9,uVar7,uVar10,uVar11);
LAB_005d04a8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


