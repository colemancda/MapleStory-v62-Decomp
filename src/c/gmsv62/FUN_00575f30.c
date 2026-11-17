/* FUN_00575f30 - 0x00575f30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00575f30(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  IBinding *pIVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  bool bVar9;
  int *piStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  
  FUN_00879bb8();
  iVar8 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piStack_6c = (int *)0x575f4e;
  iVar4 = FUN_00576395();
  if (iVar4 == 0) {
    FUN_0056a7a6();
    piStack_6c = (int *)0x575f6c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (extraout_ECX + 0x34c4 + iVar8 * 4),(IBinding *)0x0);
  }
  else {
    iVar4 = FUN_00576edb();
    iVar7 = ((iVar8 + iVar4 * -3) % 3) * 0x75;
    iVar4 = FUN_00576edb();
    iVar8 = ((iVar8 + iVar4 * -3) / 3) * 0x75 + 0x96;
    *(int *)(unaff_EBP + -0x1c) = iVar8;
    FUN_004497c2();
    piStack_6c = (int *)0x64;
    iStack_78 = 1;
    piStack_80 = &iStack_7c;
    *(undefined4 *)(unaff_EBP + -0x14) =
         *(undefined4 *)(extraout_ECX + *(int *)(unaff_EBP + 8) * 8 + 0x32e8);
    *(int **)(unaff_EBP + -0x20) = &iStack_7c;
    iStack_74 = iVar7 + 0x4a;
    puStack_70 = (undefined *)iVar8;
    FUN_004489f5();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_80 = (int *)(unaff_EBP + -0x18);
    uVar5 = FUN_004489f5();
    *(int ***)(unaff_EBP + -0x24) = &piStack_80;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0048bccf(uVar5);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar5 = FUN_0044972c(2,0);
    iVar8 = *(int *)(unaff_EBP + 0xc);
    FUN_0043f082(iVar8 + 0xd3,uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412600();
    piStack_6c = (int *)0x576042;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 4;
    puStack_70 = (undefined *)(iVar8 + 4);
    *(int ***)(unaff_EBP + 0xc) = &piStack_6c;
    iStack_74 = 0x57605c;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_70 = (undefined *)0x57606b;
    FUN_0044974c();
    puStack_70 = (undefined *)0x576072;
    uVar5 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    piStack_6c = (int *)0x576082;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_6c = (int *)0x57608d;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0xc) < 0x29) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x3a;
    }
    else {
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x12;
    }
    piStack_6c = (int *)0x5760ae;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 6;
    piStack_6c = (int *)0x5760be;
    FUN_00403191();
    bVar9 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (bVar9) {
      piStack_6c = (int *)0x5760d6;
      FUN_00878dfb();
    }
    piStack_6c = (int *)(unaff_EBP + -0x34);
    puStack_70 = (undefined *)0x0;
    iStack_74 = 0x16;
    iStack_78 = *(int *)(unaff_EBP + 0xc);
    iStack_7c = 0;
    piStack_80 = (int *)0xffffff9c;
    puVar6 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18);
    pIVar1 = (IBinding *)*puVar6;
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
           (extraout_ECX + 0x34c4 + *(int *)(unaff_EBP + 8) * 4);
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0xc) = this;
    piStack_6c = (int *)0x57610c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar1);
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_6c = (int *)0x576119;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_6c = (int *)0x576126;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_6c = (int *)0x576131;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_6c = (int *)0x57613e;
    iVar8 = FUN_00402bc3();
    if (iVar8 < 0) {
      piStack_6c = (int *)0x576149;
      FUN_00878dfb();
    }
    if (*(int *)this == 0) {
      piStack_6c = (int *)0x576158;
      FUN_00878dfb();
    }
    piStack_6c = *(int **)this;
    iVar8 = *piStack_6c;
    *(int **)(unaff_EBP + -0x18) = piStack_6c;
    puStack_70 = (undefined *)0x576168;
    iVar8 = (**(code **)(iVar8 + 0xe0))();
    if (iVar8 < 0) {
      puStack_70 = &DAT_00963df8;
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_7c = 0x57617a;
      iStack_78 = iVar8;
      FUN_00878e09();
    }
    puStack_70 = (undefined *)(unaff_EBP + -0x14);
    iStack_74 = 0x576185;
    puVar6 = (undefined4 *)FUN_004489f5();
    iStack_74 = *puVar6;
    puStack_70 = (undefined *)0x1;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    iStack_78 = 0x576199;
    FUN_0040ee87();
    iVar8 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar8 == 0) {
      puStack_70 = (undefined *)0x80004003;
      iStack_74 = 0x5761ac;
      FUN_00878dfb();
    }
    piStack_80 = *(int **)this;
    iVar8 = *piStack_80;
    iStack_7c = *(int *)(unaff_EBP + -0x54);
    iStack_78 = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x18) = piStack_80;
    puStack_70 = *(undefined **)(unaff_EBP + -0x48);
    iVar8 = (**(code **)(iVar8 + 0xfc))();
    if (iVar8 < 0) {
      FUN_00878e09(iVar8,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar8 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar8 < 0) {
      FUN_00878dfb(iVar8);
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = *(int **)(unaff_EBP + 0xc);
    if (*piVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = (int *)*piVar2;
    iVar8 = (**(code **)(*piVar3 + 0xb4))(piVar3,1);
    if (iVar8 < 0) {
      FUN_00878e09(iVar8,piVar3,&DAT_00963df8);
    }
    puVar6 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
    piVar3 = (int *)*puVar6;
    *(undefined2 *)(unaff_EBP + -0x34) = 0xd;
    *(int **)(unaff_EBP + -0x2c) = piVar3;
    iVar8 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    (**(code **)(iVar8 + 4))(piVar3);
    iVar8 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar8 = *piVar2;
    *(int **)(unaff_EBP + -0x18) = piVar2;
    iVar8 = (**(code **)(iVar8 + 100))
                      (piVar2,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar8 < 0) {
      FUN_00878e09(iVar8,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar8 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar8 < 0) {
      FUN_00878dfb(iVar8);
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iVar8 = FUN_00402e32(unaff_EBP + -0x44,&DAT_00980690);
    if (iVar8 < 0) {
      FUN_00878dfb(iVar8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    FUN_00403191(&DAT_00980690);
    piVar2 = *(int **)(unaff_EBP + 0xc);
    iVar8 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar2;
    iVar8 = *piVar2;
    *(int **)(unaff_EBP + 0xc) = piVar2;
    iVar8 = (**(code **)(iVar8 + 0x90))
                      (piVar2,iVar7 + 0x2f,*(int *)(unaff_EBP + -0x1c) + 9,
                       *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60),
                       *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar8 < 0) {
      FUN_00878e09(iVar8,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar8 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar8 < 0) {
      FUN_00878dfb(iVar8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar8 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar8 < 0) {
      FUN_00878dfb(iVar8);
    }
    FUN_005763c8(*(undefined4 *)(unaff_EBP + 8),0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


