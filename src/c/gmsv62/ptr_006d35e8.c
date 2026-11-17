/* ptr_006d35e8 - 0x006d35e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006d35e8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *extraout_ECX;
  int unaff_EBP;
  int unaff_ESI;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var8;
  int unaff_EDI;
  bool bVar9;
  int *piStack_d8;
  int *piStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffffc;
  FUN_004489f5();
  *(int *)(unaff_EBP + -4) = unaff_ESI;
  FUN_004489f5();
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffff8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_10 = 0x6d3614;
  FUN_0048bccf();
  iStack_10 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_14 = 0x6d3621;
  FUN_0044972c();
  iStack_10 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_14 = 0x6d362f;
  FUN_00449780();
  iStack_14 = 0x6d3636;
  FUN_0043f082();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  param_4 = (undefined4 *)0x6d3642;
  FUN_00412600();
  param_4 = &DAT_00980690;
  param_3 = 0x6d3650;
  FUN_00403191();
  param_4 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 **)(unaff_EBP + 0xc) = &stack0x0000000c;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0044974c();
  iVar3 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + -0x14) = iVar3 + 5;
  param_4 = (undefined4 *)(unaff_EBP + -0x7c);
  param_3 = 0x6d3698;
  param_4 = (undefined4 *)FUN_00402bc3();
  if ((int)param_4 < unaff_ESI) {
    param_3 = 0x6d36a3;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EDI + 0x80) == unaff_ESI) {
    param_4 = (undefined4 *)0x80004003;
    param_3 = 0x6d36b1;
    FUN_00878dfb();
  }
  param_4 = (undefined4 *)0x6d36b8;
  FUN_004a2734();
  *(int *)(unaff_EBP + 0x10) = unaff_ESI;
  param_4 = (undefined4 *)0x3af;
  param_3 = unaff_EBP + 0xc;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00679d86();
  param_3 = unaff_EBP + 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + 0xc) != unaff_ESI) {
    param_4 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + -0xc);
    param_3 = 0x6d36ff;
    FUN_00403384();
  }
  *(int *)(unaff_EBP + -0x44) = unaff_ESI;
  param_4 = (undefined4 *)0x74f;
  param_3 = unaff_EBP + 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puVar4 = (undefined4 *)FUN_00679d22();
  param_3 = *puVar4;
  param_4 = (undefined4 *)(*(int *)(unaff_EBP + 8) + 1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + 0xc) != unaff_ESI) {
    param_4 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + -0xc);
    param_3 = 0x6d3743;
    FUN_00434e38();
  }
  param_4 = &DAT_00980690;
  param_3 = 0x6d3750;
  FUN_00403191();
  param_4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  param_3 = 0x6d375d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  iStack_10 = unaff_EBP + -0xb0;
  iStack_14 = unaff_EBP + -0x7c;
  uStack_18 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_18;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_10 = 0x6d37d3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar3;
  *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
  if (iVar3 != unaff_ESI) {
    iVar3 = FUN_0041a581();
    if ((iVar3 < unaff_ESI) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar3 = FUN_00402bc3();
  if (iVar3 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar3 = FUN_00402bc3();
  if (iVar3 < unaff_ESI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < unaff_ESI) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (*(int *)(unaff_EBP + -0x1c) == unaff_ESI) {
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x1c) == unaff_ESI) {
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + 0x10) == unaff_ESI) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + 0x10);
  *(int **)(unaff_EBP + 0xc) = piVar6;
  uVar5 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
  FUN_0040e48b();
  iStack_14 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_10 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x20);
  iVar3 = (**(code **)(*piVar6 + 0x2c))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  piVar6 = *(int **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar6 == (int *)0x0) {
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + 0x10);
  }
  iVar3 = *piVar6;
  *(int **)(unaff_EBP + 0xc) = piVar6;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_58 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_60 = 0x6d3965;
    iStack_5c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_58 = 0x6d3972;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x6d397f;
    FUN_00878dfb();
  }
  iStack_58 = 0x6d3988;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_58 = 0x6d3995;
  FUN_00403191();
  iStack_58 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_5c = 0x6d39af;
  iStack_5c = FUN_00449749();
  iVar3 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_60;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_58 = 0x6d39f2;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_58 = 0x6d39fd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_58 = 0x6d3a0a;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_58 = 0x6d3a15;
    FUN_00878dfb();
  }
  iStack_58 = 0x6d3a1e;
  FUN_00403191();
  iStack_58 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_5c = 0x6d3a2d;
  FUN_004031b7();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (bVar9) {
    iStack_58 = 0x6d3a43;
    FUN_00878dfb();
  }
  iStack_58 = unaff_EBP + -0x2c;
  iStack_5c = 0;
  uStack_60 = 0;
  puVar4 = (undefined4 *)FUN_0042a39f();
  p_Var8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 8);
  iStack_58 = 0x6d3a6b;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var8,(IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_58 = 0x6d3a80;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x6d3a8b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_58 = 0x6d3a98;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_58 = 0x6d3aa3;
    FUN_00878dfb();
  }
  iStack_58 = 0x6d3aaf;
  puVar4 = (undefined4 *)FUN_004489f5();
  iStack_58 = *puVar4;
  iStack_5c = 0x6d3abc;
  FUN_0040ee87();
  iVar3 = *(int *)p_Var8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar3 == 0) {
    iStack_58 = 0x6d3ace;
    FUN_00878dfb();
  }
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x28);
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
  iVar3 = *piVar6;
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + 0xc) = piVar6;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00412600();
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 8) == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar6 + 0xb4))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_0043f961();
  FUN_0040ee87();
  iVar3 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
  iVar3 = *piVar6;
  *(int **)(unaff_EBP + 0xc) = piVar6;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004125d9();
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 8) == 0) {
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(*(int *)*piVar6 + 0xe0))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00403191();
  iVar3 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00403191();
  iVar3 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  piVar6 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
  iVar3 = *piVar6;
  *(int **)(unaff_EBP + 0xc) = piVar6;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    uStack_bc = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_c4 = 0x6d3d84;
    iStack_c0 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  uStack_bc = 0x6d3d91;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_bc = 0x6d3d9e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_bc = 0x6d3dab;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_bc = 0x6d3db6;
    FUN_00878dfb();
  }
  uStack_bc = 0x6d3dbf;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_bc = 0x6d3dcc;
  FUN_00403191();
  uStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x6c;
  iStack_c4 = unaff_EBP + -0x58;
  piStack_d0 = (int *)&piStack_c8;
  *(int ***)(unaff_EBP + 0xc) = &piStack_c8;
  piStack_cc = (int *)0x748;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_d4 = (int *)0x6d3df0;
  FUN_00679e4e();
  piStack_cc = (int *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_d0 = (int *)0x6d3e00;
  FUN_00405a1d();
  piStack_d0 = (int *)0x6d3e07;
  FUN_00402660();
  piStack_d0 = (int *)0x6d3e0e;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_c0 = 0x6d3e19;
  uVar5 = FUN_004032b4();
  uStack_bc = 0xff;
  iStack_c0 = 0;
  *(int **)(unaff_EBP + 0xc) = &iStack_c4;
  piStack_c8 = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  piStack_cc = (int *)0x6d3e2f;
  FUN_00424e0a();
  piStack_c8 = (int *)0x0;
  piStack_cc = (int *)0x0;
  *(int ***)(unaff_EBP + -0x5c) = &piStack_d0;
  piStack_d4 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  piStack_d8 = (int *)0x6d3e41;
  FUN_00424dd7();
  piStack_d4 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x80) = &piStack_d8;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_d8 = extraout_ECX;
  FUN_004251a3(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puVar4 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x18);
  pIVar1 = (IBinding *)*puVar4;
  p_Var8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0xc) = p_Var8;
  uStack_bc = 0x6d3e77;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var8,pIVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  uStack_bc = 0x6d3e8f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_bc = 0x6d3e9a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_bc = 0x6d3ea7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_bc = 0x6d3eb2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_bc = 0x6d3ebf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_bc = 0x6d3eca;
    FUN_00878dfb();
  }
  uStack_bc = 0x6d3ed6;
  puVar4 = (undefined4 *)FUN_004489f5();
  uStack_bc = *puVar4;
  iStack_c0 = 0x6d3ee3;
  FUN_0040ee87();
  iVar3 = *(int *)p_Var8;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar3 == 0) {
    uStack_bc = 0x6d3ef5;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
  iVar3 = *piStack_c8;
  iStack_c4 = *(int *)(unaff_EBP + -0x58);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x50);
  *(int **)(unaff_EBP + -0x14) = piStack_c8;
  piStack_cc = (int *)0x6d3f12;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    piStack_cc = (int *)&DAT_00963df8;
    piStack_d0 = *(int **)(unaff_EBP + -0x14);
    piStack_d8 = (int *)0x6d3f24;
    piStack_d4 = (int *)iVar3;
    FUN_00878e09();
  }
  piStack_cc = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  piStack_d0 = (int *)0x6d3f31;
  piStack_cc = (int *)FUN_00402bc3();
  if ((int)piStack_cc < 0) {
    piStack_d0 = (int *)0x6d3f3c;
    FUN_00878dfb();
  }
  piStack_cc = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piStack_cc != (int *)0x0) {
    piStack_d0 = (int *)0x6d3f4d;
    (**(code **)(*piStack_cc + 8))();
  }
  piVar6 = *(int **)(unaff_EBP + 0xc);
  if (*piVar6 == 0) {
    piStack_cc = (int *)0x80004003;
    piStack_d0 = (int *)0x6d3f5f;
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar6;
  piStack_cc = (int *)0x5;
  piStack_d4 = (int *)0x6d3f6c;
  piStack_d0 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xb4))();
  if (iVar3 < 0) {
    piStack_d4 = (int *)&DAT_00963df8;
    piStack_d8 = piVar2;
    FUN_00878e09(iVar3);
  }
  piStack_d4 = (int *)(unaff_EBP + -0x18);
  piStack_d8 = (int *)0x6d3f8b;
  puVar4 = (undefined4 *)FUN_0043f961();
  piStack_d4 = (int *)*puVar4;
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piStack_d4;
  iVar3 = *piStack_d4;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  piStack_d8 = (int *)0x6d3fa0;
  (**(code **)(iVar3 + 4))();
  iVar3 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar3 == 0) {
    piStack_d8 = (int *)0x80004003;
    FUN_00878dfb();
  }
  piVar6 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
  iVar3 = *piVar6;
  *(int **)(unaff_EBP + -0x14) = piVar6;
  piStack_d8 = *(int **)(unaff_EBP + -0x34);
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar6,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar6 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  piVar6 = *(int **)(unaff_EBP + 0xc);
  if (*piVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar6;
  iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,0xffffff);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar3 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar3 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  iVar3 = *piVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar6 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
  iVar3 = (**(code **)(*piVar6 + 0x90))
                    (piVar6,0xffffffe4,0xffffff9c,*(undefined4 *)(unaff_EBP + -0x40),
                     *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar6,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x44) + -0xc);
  }
  piVar6 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  FUN_006d4152(*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


