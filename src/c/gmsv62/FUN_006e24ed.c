/* FUN_006e24ed - 0x006e24ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e24ed(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  int unaff_EBP;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  FUN_00879bb8();
  piVar5 = *(int **)(unaff_EBP + 0x10);
  iVar4 = *piVar5;
  iVar9 = piVar5[1];
  iVar2 = (piVar5[2] - iVar4) + 1;
  iVar6 = (piVar5[3] - iVar9) + 1;
  *(int *)(unaff_EBP + -0x14) = iVar6;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  FUN_004b388f(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),iVar4,iVar9,iVar2,
               iVar6,*(undefined4 *)(unaff_EBP + 0x14));
  FUN_004489f5(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  puVar3 = (undefined4 *)
           FUN_0042a39f(unaff_EBP + 8,*piVar5,piVar5[1],0,0,0,unaff_EBP + -0x28,unaff_EBP + -0x38);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x3c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0x14),1);
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)this;
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0x14),1);
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar9 = *(int *)(iVar4 + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar9 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(iVar4 + 0x3c);
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0xfc))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x3c);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x3c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar5;
  iVar4 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*piVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = (int *)*piVar5;
  iVar4 = FUN_004320e3();
  iVar4 = (**(code **)(*piVar5 + 0xb4))(piVar5,iVar4 + 2);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00963df8);
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x3af);
  uVar10 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040381b(uVar10,unaff_EBP + 0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + 8) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00403191(&DAT_00980690);
  piVar5 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar5 = *(int **)(unaff_EBP + 0x10);
  }
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0x2c))
                    (piVar5,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + 0x10);
  iVar4 = (**(code **)(*piVar5 + 0x70))(piVar5,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + 0x10);
  iVar4 = (**(code **)(*piVar5 + 0x78))(piVar5,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00963cc8);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191(&DAT_00980690);
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_004250ac(unaff_EBP + -0x78,*(undefined4 *)(unaff_EBP + 0x10),unaff_EBP + -0x38,
               unaff_EBP + -0x28,unaff_EBP + -0x48,unaff_EBP + -0x58,unaff_EBP + -0x68);
  iVar4 = FUN_00402bc3(unaff_EBP + -0x78);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x3af);
  uVar10 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0040381b(uVar10,*(int *)(unaff_EBP + -0x10) + 0x40,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00424aee(&DAT_00980690);
  iVar4 = unaff_EBP + -0x58;
  iVar9 = unaff_EBP + -0x68;
  uVar10 = *(undefined4 *)(unaff_EBP + -0x14);
  uVar8 = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_004115d9(uVar8,uVar10,iVar9,iVar4);
  FUN_0046ffc6(uVar8,uVar10,iVar9,iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  uVar10 = 0;
  FUN_004115d9(0);
  FUN_006e3d24(uVar10);
  uVar10 = 0;
  FUN_004115d9(0);
  FUN_006e3d45(uVar10);
  FUN_004125e6();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


