/* FUN_00676696 - 0x00676696 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00676696(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + -0x14,0,0,0,0,0,unaff_EBP + -0x28,unaff_EBP + -0x38);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
  uVar12 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87(uVar12,1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)this;
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar5 = *(int *)(iVar4 + 0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(iVar4 + 0xb8);
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar4 = (**(code **)(iVar4 + 0x90))
                    (piVar1,0x35,0x4c,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xb8);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xb8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar1;
  iVar4 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  uVar12 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0040ee87(uVar12,1);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar4 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0xb8);
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0xb8);
  *(int **)(unaff_EBP + -0x14) = piVar1;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar1;
  iVar4 = (**(code **)(*piVar2 + 0xb4))(piVar2,1);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar1;
  iVar4 = (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  iVar5 = FUN_005f3a71(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x98));
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_FUN_008e863c;
  iVar4 = *(int *)(iVar5 + 0x30);
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  FUN_0040b905(iVar5,iVar4,unaff_EBP + -0x8c);
  FUN_004031b7(0xfffffffe,3);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + -0x18,unaff_EBP + -0x38);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar6 = *(uint *)(unaff_EBP + -0x80);
  while (uVar6 != 0) {
    iVar4 = *(int *)(uVar6 + 4);
    iVar5 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
    uVar6 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00403191(&DAT_00980690);
    uVar12 = *(undefined4 *)(iVar4 + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_004031b7(uVar12,3);
    uVar12 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = unaff_EBP + -0x68;
    iVar5 = unaff_EBP + -0x58;
    iVar11 = unaff_EBP + -0x48;
    iVar10 = unaff_EBP + -0x28;
    iVar9 = unaff_EBP + -0x38;
    iVar8 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00424e27(iVar8,uVar12,iVar9,iVar10,iVar11,iVar5,iVar4);
    FUN_004250ac(iVar8,uVar12,iVar9,iVar10,iVar11,iVar5,iVar4);
    iVar4 = FUN_00402bc3(unaff_EBP + -0x78);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00424aee(&DAT_00980690);
  iVar4 = unaff_EBP + -0x58;
  iVar5 = unaff_EBP + -0x68;
  uVar12 = 0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424e27(0x20,iVar5,iVar4);
  FUN_00425139(uVar12,iVar5,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_FUN_008e863c;
  FUN_00413915();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


