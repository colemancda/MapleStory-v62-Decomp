/* FUN_006fcc37 - 0x006fcc37 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fcc37(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  puVar1 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x18,0,0,0,0,0,unaff_EBP + -0x3c,unaff_EBP + -0x2c);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xbc);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar1 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
  uVar11 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87(uVar11,1);
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)this;
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x18) = piVar3;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar10 = *(int *)(iVar2 + 0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar10 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(iVar2 + 0xbc);
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x90))
                    (piVar3,0x11,0x10c,*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar3 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0xbc);
  if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0xbc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar3;
  iVar2 = (**(code **)(*piVar4 + 0xe0))(piVar4,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
  }
  puVar1 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  uVar11 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0040ee87(uVar11,1);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  piVar3 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar10 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (iVar10 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)(iVar2 + 0xbc);
  iVar2 = *piVar4;
  *(int *)(unaff_EBP + -0x10) = *piVar3;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar2 = FUN_004320e3();
  iVar2 = (**(code **)(*piVar4 + 0xb4))(piVar4,iVar2 + 1);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
  }
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x3af);
  uVar11 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040381b(uVar11,unaff_EBP + -0x14,0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0046ffc6(0x96,0x14,unaff_EBP + -0x2c,unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_006e3d24(0);
  uVar11 = 0;
  FUN_004115d9(0);
  FUN_006e3d45(uVar11);
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x7c;
  iVar10 = unaff_EBP + -0x5c;
  iVar9 = unaff_EBP + -0x4c;
  iVar8 = unaff_EBP + -0x6c;
  iVar7 = unaff_EBP + -0x8c;
  uVar11 = *(undefined4 *)(unaff_EBP + -0x14);
  iVar6 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00424e27(iVar6,uVar11,iVar7,iVar8,iVar9,iVar10,iVar2);
  FUN_004250ac(iVar6,uVar11,iVar7,iVar8,iVar9,iVar10,iVar2);
  iVar2 = FUN_00402bc3(unaff_EBP + -0x9c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x8c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_006fd13a();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


