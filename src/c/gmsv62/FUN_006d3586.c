/* FUN_006d3586 - 0x006d3586 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d3586(void)

{
  IBinding *pIVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var8;
  bool bVar9;
  int *piStack_1ac;
  int *piStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  int *piStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8) * 0x20;
  iVar4 = *(int *)(iVar3 + 0xbc + extraout_ECX);
  iVar3 = iVar3 + 0xb8 + extraout_ECX;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (((iVar4 == 0) || (*(int *)(unaff_EBP + 0x10) != 0)) && (*(int *)(iVar3 + 0x10) != 0)) {
    piStack_c4 = (int *)0x6d35d2;
    FUN_004497c2();
    iVar3 = *(int *)(unaff_EBP + -0x30);
    piStack_c4 = (int *)0x0;
    piStack_c8 = (int *)0x64;
    iStack_cc = 0x76;
    iStack_d0 = *(int *)(unaff_EBP + 8) * 0x5e + 0x36;
    uStack_d4 = 1;
    puStack_dc = &uStack_d8;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_d8;
    uStack_e0 = 0x6d35f6;
    FUN_004489f5();
    puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_e0 = 0x6d3604;
    uStack_e0 = FUN_004489f5();
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_dc;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_e4 = 0x6d3614;
    FUN_0048bccf();
    uStack_e0 = 1;
    iStack_e4 = 2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_e8 = 0x6d3621;
    uStack_e0 = FUN_0044972c();
    iStack_e4 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_e8 = 0x6d362f;
    FUN_00449780();
    iStack_e8 = 0x6d3636;
    FUN_0043f082();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_c4 = (int *)0x6d3642;
    FUN_00412600();
    piStack_c4 = &DAT_00980690;
    piStack_c8 = (int *)0x6d3650;
    FUN_00403191();
    piStack_c4 = (int *)(unaff_EBP + -0x7c);
    iStack_cc = *(int *)(unaff_EBP + -0x10) + 0x1c;
    *(int ***)(unaff_EBP + 0xc) = &piStack_c8;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iStack_d0 = 0x6d366d;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_cc = 0x6d367e;
    FUN_0044974c();
    iStack_cc = 0x6d3685;
    iVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x14) = iVar4 + 5;
    piStack_c4 = (int *)(unaff_EBP + -0x7c);
    piStack_c8 = (int *)0x6d3698;
    piStack_c4 = (int *)FUN_00402bc3();
    if ((int)piStack_c4 < 0) {
      piStack_c8 = (int *)0x6d36a3;
      FUN_00878dfb();
    }
    if (*(int *)(iVar3 + 0x80) == 0) {
      piStack_c4 = (int *)0x80004003;
      piStack_c8 = (int *)0x6d36b1;
      FUN_00878dfb();
    }
    piStack_c4 = (int *)0x6d36b8;
    FUN_004a2734();
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    piStack_c4 = (int *)0x3af;
    piStack_c8 = (int *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iStack_cc = 0x6d36d7;
    puVar5 = (undefined4 *)FUN_00679d86();
    iStack_cc = *puVar5;
    piStack_c4 = (int *)0x0;
    piStack_c8 = (int *)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_d0 = 0x6d36e8;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      piStack_c4 = (int *)(*(int *)(unaff_EBP + 0xc) + -0xc);
      piStack_c8 = (int *)0x6d36ff;
      FUN_00403384();
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    piStack_c4 = (int *)0x74f;
    piStack_c8 = (int *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_cc = 0x6d3717;
    puVar5 = (undefined4 *)FUN_00679d22();
    piStack_c8 = (int *)*puVar5;
    piStack_c4 = (int *)(*(int *)(unaff_EBP + 8) + 1);
    iStack_cc = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_d0 = 0x6d372c;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      piStack_c4 = (int *)(*(int *)(unaff_EBP + 0xc) + -0xc);
      piStack_c8 = (int *)0x6d3743;
      FUN_00434e38();
    }
    piStack_c4 = &DAT_00980690;
    piStack_c8 = (int *)0x6d3750;
    FUN_00403191();
    piStack_c4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_c8 = (int *)0x6d375d;
    FUN_00403191();
    piStack_c4 = (int *)0x0;
    piStack_c8 = (int *)0x0;
    iStack_cc = -1;
    iStack_d0 = *(undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_d4 = 0;
    uStack_d8 = 0;
    puStack_dc = (undefined4 *)0x6d3770;
    (*DAT_0097b4c8)();
    puStack_dc = (undefined4 *)0x6d377d;
    FUN_0087a1b0();
    puStack_dc = (undefined4 *)0x0;
    uStack_e0 = 0;
    iStack_e4 = unaff_EBP + -0xb0;
    iStack_e8 = unaff_EBP + -0x7c;
    uStack_ec = 0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_ec;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_e4 = 0x6d37d3;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar3 != 0) {
      puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
      uStack_e0 = 0x6d37e9;
      puStack_dc = (undefined4 *)FUN_0041a581();
      if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
        uStack_e0 = 0x6d37fa;
        FUN_00878dfb();
      }
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_e0 = 0x6d380a;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      uStack_e0 = 0x6d3815;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_e0 = 0x6d3822;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      uStack_e0 = 0x6d382d;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_e0 = 0x6d383d;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      uStack_e0 = 0x6d3848;
      FUN_00878dfb();
    }
    puStack_dc = &DAT_00980690;
    uStack_e0 = 0x6d3851;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_e0 = 0x6d385e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      uStack_e0 = 0x6d3872;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        puStack_dc = (undefined4 *)0x80004003;
        uStack_e0 = 0x6d387d;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      uStack_e0 = 0x6d388e;
      FUN_00878dfb();
    }
    piVar7 = *(int **)(unaff_EBP + 0x10);
    *(int **)(unaff_EBP + 0xc) = piVar7;
    puStack_dc = (undefined4 *)0x6d389c;
    uVar6 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    puStack_dc = (undefined4 *)0x6d38a7;
    FUN_0040e48b();
    iStack_e8 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_e4 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_dc = *(undefined4 **)(unaff_EBP + -0x34);
    uStack_ec = *(undefined4 *)(unaff_EBP + -0x20);
    iVar3 = (**(code **)(*piVar7 + 0x2c))();
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
    piVar7 = *(int **)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (piVar7 == (int *)0x0) {
      FUN_00878dfb();
      piVar7 = *(int **)(unaff_EBP + 0x10);
    }
    iVar3 = *piVar7;
    *(int **)(unaff_EBP + 0xc) = piVar7;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      iStack_12c = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_134 = 0x6d3965;
      iStack_130 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_12c = 0x6d3972;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_12c = 0x6d397f;
      FUN_00878dfb();
    }
    iStack_12c = 0x6d3988;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_12c = 0x6d3995;
    FUN_00403191();
    iStack_12c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_130 = 0x6d39af;
    iStack_130 = FUN_00449749();
    iVar3 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_134;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_12c = 0x6d39f2;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_12c = 0x6d39fd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_12c = 0x6d3a0a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_12c = 0x6d3a15;
      FUN_00878dfb();
    }
    iStack_12c = 0x6d3a1e;
    FUN_00403191();
    iStack_12c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_130 = 0x6d3a2d;
    FUN_004031b7();
    bVar9 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (bVar9) {
      iStack_12c = 0x6d3a43;
      FUN_00878dfb();
    }
    iStack_12c = unaff_EBP + -0x2c;
    iStack_130 = 0;
    uStack_134 = 0;
    puVar5 = (undefined4 *)FUN_0042a39f();
    p_Var8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar3 + 8);
    iStack_12c = 0x6d3a6b;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var8,(IBinding *)*puVar5);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_12c = 0x6d3a80;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_12c = 0x6d3a8b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_12c = 0x6d3a98;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_12c = 0x6d3aa3;
      FUN_00878dfb();
    }
    iStack_12c = 0x6d3aaf;
    puVar5 = (undefined4 *)FUN_004489f5();
    iStack_12c = *puVar5;
    iStack_130 = 0x6d3abc;
    FUN_0040ee87();
    iVar3 = *(int *)p_Var8;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (iVar3 == 0) {
      iStack_12c = 0x6d3ace;
      FUN_00878dfb();
    }
    uStack_134 = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_130 = *(int *)(unaff_EBP + -0x28);
    piVar7 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
    iVar3 = *piVar7;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + 0xc) = piVar7;
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
    piVar7 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 8) == 0) {
      FUN_00878dfb();
    }
    iVar3 = (**(code **)(*(int *)*piVar7 + 0xb4))();
    if (iVar3 < 0) {
      FUN_00878e09();
    }
    FUN_0043f961();
    FUN_0040ee87();
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (iVar3 == 0) {
      FUN_00878dfb();
    }
    piVar7 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
    iVar3 = *piVar7;
    *(int **)(unaff_EBP + 0xc) = piVar7;
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
    piVar7 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + 8) == 0) {
      FUN_00878dfb();
    }
    iVar3 = (**(code **)(*(int *)*piVar7 + 0xe0))();
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
    iVar3 = *piVar7;
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
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (iVar3 == 0) {
      FUN_00878dfb();
    }
    piVar7 = *(int **)(*(int *)(unaff_EBP + -0x10) + 8);
    iVar3 = *piVar7;
    *(int **)(unaff_EBP + 0xc) = piVar7;
    iVar3 = (**(code **)(iVar3 + 0x90))();
    if (iVar3 < 0) {
      uStack_190 = *(undefined4 *)(unaff_EBP + 0xc);
      iStack_198 = 0x6d3d84;
      iStack_194 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    uStack_190 = 0x6d3d91;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_190 = 0x6d3d9e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_190 = 0x6d3dab;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_190 = 0x6d3db6;
      FUN_00878dfb();
    }
    uStack_190 = 0x6d3dbf;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    uStack_190 = 0x6d3dcc;
    FUN_00403191();
    uStack_190 = 0;
    iStack_194 = unaff_EBP + -0x6c;
    iStack_198 = unaff_EBP + -0x58;
    piStack_1a4 = (int *)&piStack_19c;
    *(int ***)(unaff_EBP + 0xc) = &piStack_19c;
    piStack_1a0 = (int *)0x748;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    piStack_1a8 = (int *)0x6d3df0;
    FUN_00679e4e();
    piStack_1a0 = (int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    piStack_1a4 = (int *)0x6d3e00;
    FUN_00405a1d();
    piStack_1a4 = (int *)0x6d3e07;
    FUN_00402660();
    piStack_1a4 = (int *)0x6d3e0e;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_194 = 0x6d3e19;
    uVar6 = FUN_004032b4();
    uStack_190 = 0xff;
    iStack_194 = 0;
    *(int **)(unaff_EBP + 0xc) = &iStack_198;
    piStack_19c = (int *)0x0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar6;
    piStack_1a0 = (int *)0x6d3e2f;
    FUN_00424e0a();
    piStack_19c = (int *)0x0;
    piStack_1a0 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x5c) = &piStack_1a4;
    piStack_1a8 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_1ac = (int *)0x6d3e41;
    FUN_00424dd7();
    piStack_1a8 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x80) = &piStack_1ac;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    piStack_1ac = extraout_ECX_00;
    FUN_004251a3(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x18);
    pIVar1 = (IBinding *)*puVar5;
    p_Var8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0xc);
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 0xc) = p_Var8;
    uStack_190 = 0x6d3e77;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var8,pIVar1);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    uStack_190 = 0x6d3e8f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_190 = 0x6d3e9a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    uStack_190 = 0x6d3ea7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_190 = 0x6d3eb2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_190 = 0x6d3ebf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_190 = 0x6d3eca;
      FUN_00878dfb();
    }
    uStack_190 = 0x6d3ed6;
    puVar5 = (undefined4 *)FUN_004489f5();
    uStack_190 = *puVar5;
    iStack_194 = 0x6d3ee3;
    FUN_0040ee87();
    iVar3 = *(int *)p_Var8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (iVar3 == 0) {
      uStack_190 = 0x6d3ef5;
      FUN_00878dfb();
    }
    piStack_19c = (int *)**(undefined4 **)(unaff_EBP + 0xc);
    iVar3 = *piStack_19c;
    iStack_198 = *(int *)(unaff_EBP + -0x58);
    iStack_194 = *(int *)(unaff_EBP + -0x54);
    uStack_190 = *(undefined4 *)(unaff_EBP + -0x50);
    *(int **)(unaff_EBP + -0x14) = piStack_19c;
    piStack_1a0 = (int *)0x6d3f12;
    iVar3 = (**(code **)(iVar3 + 0xfc))();
    if (iVar3 < 0) {
      piStack_1a0 = (int *)&DAT_00963df8;
      piStack_1a4 = *(int **)(unaff_EBP + -0x14);
      piStack_1ac = (int *)0x6d3f24;
      piStack_1a8 = (int *)iVar3;
      FUN_00878e09();
    }
    piStack_1a0 = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_1a4 = (int *)0x6d3f31;
    piStack_1a0 = (int *)FUN_00402bc3();
    if ((int)piStack_1a0 < 0) {
      piStack_1a4 = (int *)0x6d3f3c;
      FUN_00878dfb();
    }
    piStack_1a0 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (piStack_1a0 != (int *)0x0) {
      piStack_1a4 = (int *)0x6d3f4d;
      (**(code **)(*piStack_1a0 + 8))();
    }
    piVar7 = *(int **)(unaff_EBP + 0xc);
    if (*piVar7 == 0) {
      piStack_1a0 = (int *)0x80004003;
      piStack_1a4 = (int *)0x6d3f5f;
      FUN_00878dfb();
    }
    piVar2 = (int *)*piVar7;
    piStack_1a0 = (int *)0x5;
    piStack_1a8 = (int *)0x6d3f6c;
    piStack_1a4 = piVar2;
    iVar3 = (**(code **)(*piVar2 + 0xb4))();
    if (iVar3 < 0) {
      piStack_1a8 = (int *)&DAT_00963df8;
      piStack_1ac = piVar2;
      FUN_00878e09(iVar3);
    }
    piStack_1a8 = (int *)(unaff_EBP + -0x18);
    piStack_1ac = (int *)0x6d3f8b;
    puVar5 = (undefined4 *)FUN_0043f961();
    piStack_1a8 = (int *)*puVar5;
    *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
    *(int **)(unaff_EBP + -0x38) = piStack_1a8;
    iVar3 = *piStack_1a8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_1ac = (int *)0x6d3fa0;
    (**(code **)(iVar3 + 4))();
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (iVar3 == 0) {
      piStack_1ac = (int *)0x80004003;
      FUN_00878dfb();
    }
    piVar7 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
    iVar3 = *piVar7;
    *(int **)(unaff_EBP + -0x14) = piVar7;
    piStack_1ac = *(int **)(unaff_EBP + -0x34);
    iVar3 = (**(code **)(iVar3 + 100))
                      (piVar7,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    piVar7 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
    piVar7 = *(int **)(unaff_EBP + 0xc);
    if (*piVar7 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar7;
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
    iVar3 = *piVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar7 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
    iVar3 = (**(code **)(*piVar7 + 0x90))
                      (piVar7,0xffffffe4,0xffffff9c,*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20));
    if (iVar3 < 0) {
      piStack_c4 = (int *)&DAT_00963de8;
      iStack_d0 = 0x6d40c9;
      iStack_cc = iVar3;
      piStack_c8 = piVar7;
      FUN_00878e09();
    }
    piStack_c4 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_c8 = (int *)0x6d40d6;
    piStack_c4 = (int *)FUN_00402bc3();
    if ((int)piStack_c4 < 0) {
      piStack_c8 = (int *)0x6d40e1;
      FUN_00878dfb();
    }
    piStack_c4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_c8 = (int *)0x6d40ee;
    piStack_c4 = (int *)FUN_00402bc3();
    if ((int)piStack_c4 < 0) {
      piStack_c8 = (int *)0x6d40f9;
      FUN_00878dfb();
    }
    piStack_c4 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piStack_c4 != (int *)0x0) {
      piStack_c8 = (int *)0x6d410a;
      (**(code **)(*piStack_c4 + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      piStack_c4 = (int *)(*(int *)(unaff_EBP + -0x44) + -0xc);
      piStack_c8 = (int *)0x6d411e;
      FUN_00434e38();
    }
    piStack_c4 = *(int **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_c4 != (int *)0x0) {
      piStack_c8 = (int *)0x6d4130;
      (**(code **)(*piStack_c4 + 8))();
    }
  }
  piStack_c4 = *(int **)(unaff_EBP + 8);
  piStack_c8 = (int *)0x6d413b;
  FUN_006d4152();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


