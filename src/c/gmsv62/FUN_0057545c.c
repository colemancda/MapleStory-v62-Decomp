/* FUN_0057545c - 0x0057545c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057545c(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  IBinding *pIVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int iVar7;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  int *piStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  
  FUN_00879bb8();
  iVar9 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar6 = *(undefined4 **)(unaff_EBP + 0xc);
  puVar10 = (undefined4 *)(iVar9 * 0xd3 + 0x170 + extraout_ECX);
  for (iVar7 = 0x34; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar7 = *(int *)(unaff_EBP + 8);
  *(undefined2 *)puVar10 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar10 + 2) = *(undefined1 *)((int)puVar6 + 2);
  iVar1 = *(int *)(unaff_EBP + -0x10);
  iVar8 = (iVar9 % 3) * 0x75;
  iVar9 = (iVar7 / 3) * 0x75 + 0x96;
  *(int *)(unaff_EBP + -0x1c) = iVar9;
  FUN_004497c2();
  piStack_6c = (int *)0x64;
  iStack_78 = 1;
  piStack_80 = &iStack_7c;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar1 + *(int *)(unaff_EBP + 8) * 8 + 0x32e8)
  ;
  *(int **)(unaff_EBP + -0x20) = &iStack_7c;
  iStack_74 = iVar8 + 0x4a;
  puStack_70 = (undefined *)iVar9;
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_80 = (int *)(unaff_EBP + -0x18);
  uVar5 = FUN_004489f5();
  *(int ***)(unaff_EBP + -0x24) = &piStack_80;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0048bccf(uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar5 = FUN_0044972c(2,0);
  iVar9 = *(int *)(unaff_EBP + 0xc);
  FUN_0043f082(iVar9 + 0xd3,uVar5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  piStack_6c = (int *)0x575542;
  FUN_00403191();
  puStack_70 = (undefined *)(iVar9 + 4);
  *(int ***)(unaff_EBP + 0xc) = &piStack_6c;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_74 = 0x57555c;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_70 = (undefined *)0x57556b;
  FUN_0044974c();
  puStack_70 = (undefined *)0x575572;
  uVar5 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
  piStack_6c = (int *)0x575582;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_6c = (int *)0x57558d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0xc) < 0x29) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0x3a;
  }
  else {
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x12;
  }
  piStack_6c = (int *)0x5755ae;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  piStack_6c = (int *)0x5755be;
  FUN_00403191();
  bVar11 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (bVar11) {
    piStack_6c = (int *)0x5755d6;
    FUN_00878dfb();
  }
  piStack_6c = (int *)(unaff_EBP + -0x34);
  puStack_70 = (undefined *)0x0;
  iStack_74 = 0x16;
  iStack_78 = *(int *)(unaff_EBP + 0xc);
  iStack_7c = 0;
  piStack_80 = (int *)0xffffff9c;
  puVar6 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18);
  pIVar2 = (IBinding *)*puVar6;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
         (iVar1 + 0x34c4 + *(int *)(unaff_EBP + 8) * 4);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0xc) = this;
  piStack_6c = (int *)0x57560c;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar2);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    piStack_6c = (int *)0x575619;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_6c = (int *)0x575626;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_6c = (int *)0x575631;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_6c = (int *)0x57563e;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    piStack_6c = (int *)0x575649;
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    piStack_6c = (int *)0x575658;
    FUN_00878dfb();
  }
  piStack_6c = *(int **)this;
  iVar9 = *piStack_6c;
  *(int **)(unaff_EBP + -0x18) = piStack_6c;
  puStack_70 = (undefined *)0x575668;
  iVar9 = (**(code **)(iVar9 + 0xe0))();
  if (iVar9 < 0) {
    puStack_70 = &DAT_00963df8;
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_7c = 0x57567a;
    iStack_78 = iVar9;
    FUN_00878e09();
  }
  puStack_70 = (undefined *)(unaff_EBP + -0x14);
  iStack_74 = 0x575685;
  puVar6 = (undefined4 *)FUN_004489f5();
  iStack_74 = *puVar6;
  puStack_70 = (undefined *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_78 = 0x575699;
  FUN_0040ee87();
  iVar9 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar9 == 0) {
    puStack_70 = (undefined *)0x80004003;
    iStack_74 = 0x5756ac;
    FUN_00878dfb();
  }
  piStack_80 = *(int **)this;
  iVar9 = *piStack_80;
  iStack_7c = *(int *)(unaff_EBP + -0x54);
  iStack_78 = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_74 = *(undefined4 *)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + -0x18) = piStack_80;
  puStack_70 = *(undefined **)(unaff_EBP + -0x48);
  iVar9 = (**(code **)(iVar9 + 0xfc))();
  if (iVar9 < 0) {
    FUN_00878e09(iVar9,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar9 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar9 < 0) {
    FUN_00878dfb(iVar9);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + 0xc);
  if (*piVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar3;
  iVar9 = (**(code **)(*piVar4 + 0xb4))(piVar4,1);
  if (iVar9 < 0) {
    FUN_00878e09(iVar9,piVar4,&DAT_00963df8);
  }
  puVar6 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  piVar4 = (int *)*puVar6;
  *(undefined2 *)(unaff_EBP + -0x34) = 0xd;
  *(int **)(unaff_EBP + -0x2c) = piVar4;
  iVar9 = *piVar4;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  (**(code **)(iVar9 + 4))(piVar4);
  iVar9 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar9 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar9 = *piVar3;
  *(int **)(unaff_EBP + -0x18) = piVar3;
  iVar9 = (**(code **)(iVar9 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar9 < 0) {
    FUN_00878e09(iVar9,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar9 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar9 < 0) {
    FUN_00878dfb(iVar9);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iVar9 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
  if (iVar9 < 0) {
    FUN_00878dfb(iVar9);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191(&DAT_00980690);
  piVar3 = *(int **)(unaff_EBP + 0xc);
  iVar9 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar9 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  iVar9 = *piVar3;
  *(int **)(unaff_EBP + 0xc) = piVar3;
  iVar9 = (**(code **)(iVar9 + 0x90))
                    (piVar3,iVar8 + 0x2f,*(int *)(unaff_EBP + -0x1c) + 9,
                     *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                     *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
  if (iVar9 < 0) {
    FUN_00878e09(iVar9,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar9 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar9 < 0) {
    FUN_00878dfb(iVar9);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar9 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar9 < 0) {
    FUN_00878dfb(iVar9);
  }
  FUN_005763c8(*(undefined4 *)(unaff_EBP + 8),0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


