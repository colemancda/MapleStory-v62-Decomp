/* FUN_00722b22 - 0x00722b22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00722b22(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int *piVar2;
  IBinding *pIVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  int extraout_ECX_05;
  int unaff_EBP;
  bool bVar9;
  undefined1 *puStack_208;
  int iStack_204;
  int iStack_200;
  int *piStack_1fc;
  undefined1 *puStack_180;
  int iStack_17c;
  int iStack_178;
  int *piStack_174;
  undefined1 *puStack_f8;
  int iStack_f4;
  int iStack_f0;
  int *piStack_ec;
  int *piStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_84 = 0x722b45;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_84 = 0x722b53;
  FUN_00403191();
  iStack_84 = 0;
  iStack_88 = unaff_EBP + -0x6c;
  iStack_8c = unaff_EBP + -0x5c;
  *(int ***)(unaff_EBP + -0x2c) = &piStack_90;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_88 = 0x722b9d;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar4 != 0) {
    iStack_84 = 0x722bb3;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_84 = 0x722bc4;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_84 = 0x722bd1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x722bdc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_84 = 0x722be9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x722bf4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_84 = 0x722c01;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x722c0c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_84 = 0x722c1f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_84 = 0x722c2c;
  FUN_00403191();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (bVar9) {
    iStack_84 = 0x722c42;
    FUN_00878dfb();
  }
  iStack_84 = unaff_EBP + -0x4c;
  iStack_88 = 10;
  iStack_8c = 99;
  piStack_90 = (int *)0xae;
  puVar5 = (undefined4 *)FUN_0042a39f();
  iStack_84 = 0x722c73;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5e4),
             (IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_84 = 0x722c88;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x722c93;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_84 = 0x722ca0;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x722cab;
    FUN_00878dfb();
  }
  iStack_84 = 0x722cb7;
  puVar5 = (undefined4 *)FUN_004489f5();
  iStack_84 = *puVar5;
  iStack_88 = 0x722cc4;
  FUN_0040ee87();
  iVar4 = *(int *)(extraout_ECX + 0x5e4);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar4 == 0) {
    iStack_84 = 0x722cd6;
    FUN_00878dfb();
  }
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x48);
  piStack_90 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
  iVar4 = *piStack_90;
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x1c) = piStack_90;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00412600();
  iVar4 = *(int *)(unaff_EBP + -0x14);
  FUN_004489f5();
  FUN_0040ee87();
  iVar4 = *(int *)(iVar4 + 0x5e4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
  iVar4 = *piVar8;
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 0xfc))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00412600();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00403191();
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
  iVar4 = *piVar8;
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 0x90))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e4) == 0) {
    FUN_00878dfb();
  }
  iVar4 = (**(code **)(*(int *)*piVar8 + 0xe0))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  if (*piVar8 == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar8;
  iStack_f0 = (**(code **)(*piVar2 + 0x44))();
  if (iStack_f0 < 0) {
    iStack_f4 = 0x722ec7;
    piStack_ec = piVar2;
    FUN_00878e09();
  }
  piStack_ec = (int *)0x0;
  iStack_f0 = 0x722ed3;
  FUN_004031b7();
  iVar4 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar4 == 0) {
    piStack_ec = (int *)0x722ee6;
    FUN_00878dfb();
  }
  piStack_ec = (int *)(unaff_EBP + -0x28);
  iStack_f0 = 0x722ef7;
  puVar5 = (undefined4 *)FUN_00425067();
  piStack_ec = (int *)0x722f01;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar5);
  FUN_004125e6();
  puStack_f8 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x722f16;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x722f21;
    FUN_00878dfb();
    puStack_f8 = extraout_ECX_00;
  }
  piStack_ec = (int *)0x96;
  iStack_f0 = 0;
  iStack_f4 = 0;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_f8;
  FUN_0046fc23();
  FUN_007d6f5c();
  piStack_ec = (int *)0x722f4c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_ec = (int *)0x722f59;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_f8 = (undefined1 *)0x722f70;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_f0 = 0x722f7d;
  iStack_f0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_f4;
  puStack_f8 = (undefined1 *)0x1096;
  FUN_00679e4e();
  puStack_f8 = (undefined1 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_ec = (int *)0x722fc3;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x722fce;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x722fdb;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x722fe6;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x722fef;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_ec = (int *)0x722ffc;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_f8 = (undefined1 *)0x723013;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_f0 = 0x723020;
  iStack_f0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_f4;
  puStack_f8 = (undefined1 *)0x1097;
  FUN_00679e4e();
  puStack_f8 = (undefined1 *)0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_ec = (int *)0x72305f;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x72306a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x723077;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x723082;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x72308b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_ec = (int *)0x723098;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_f8 = (undefined1 *)0x7230af;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_f0 = 0x7230bc;
  iStack_f0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_f4;
  puStack_f8 = (undefined1 *)0x1098;
  FUN_00679e4e();
  puStack_f8 = (undefined1 *)0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_ec = (int *)0x7230fb;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x723106;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x723113;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x72311e;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x723127;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_ec = (int *)0x723134;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_f8 = (undefined1 *)0x72314b;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_f0 = 0x723158;
  iStack_f0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_f4;
  puStack_f8 = (undefined1 *)0x1099;
  FUN_00679e4e();
  puStack_f8 = (undefined1 *)0x37;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_ec = (int *)0x723197;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x7231a2;
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x7231af;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_ec = (int *)0x7231ba;
    FUN_00878dfb();
    iVar4 = extraout_ECX_01;
  }
  piStack_ec = (int *)0x0;
  puStack_f8 = (undefined1 *)&iStack_f0;
  *(int **)(unaff_EBP + -0x2c) = &iStack_f0;
  iStack_f4 = 0x57f;
  iStack_f0 = iVar4;
  FUN_00679e4e();
  iStack_f4 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_f8 = (undefined1 *)0x7231e1;
  FUN_0040263d();
  puStack_f8 = (undefined1 *)0x7231e8;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_f0 = 0x7231f3;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  piStack_ec = (int *)0x723202;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    piStack_ec = (int *)0x723213;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x723220;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x72322b;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x723234;
  FUN_00403191();
  piVar8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (piVar8 == (int *)0x0) {
    piStack_ec = (int *)0x723249;
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piVar8;
  puStack_f8 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_f4 = *(int *)(unaff_EBP + -0x4c);
  iStack_f0 = *(int *)(unaff_EBP + -0x48);
  piStack_ec = *(int **)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00403191();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (bVar9) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  FUN_004489f5();
  FUN_0040ee87();
  iVar4 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  iVar4 = *piVar8;
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00412600();
  iVar4 = *(int *)(unaff_EBP + -0x14);
  FUN_004489f5();
  FUN_0040ee87();
  iVar4 = *(int *)(iVar4 + 0x5e8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  iVar4 = *piVar8;
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 0xfc))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00412600();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00403191();
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  iVar4 = *piVar8;
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 0x90))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e8) == 0) {
    FUN_00878dfb();
  }
  iVar4 = (**(code **)(*(int *)*piVar8 + 0xe0))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  if (*piVar8 == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar8;
  iStack_178 = (**(code **)(*piVar2 + 0x44))();
  if (iStack_178 < 0) {
    iStack_17c = 0x72354b;
    piStack_174 = piVar2;
    FUN_00878e09();
  }
  piStack_174 = (int *)0x0;
  iStack_178 = 0x723557;
  FUN_004031b7();
  iVar4 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar4 == 0) {
    piStack_174 = (int *)0x72356a;
    FUN_00878dfb();
  }
  piStack_174 = (int *)(unaff_EBP + -0x28);
  iStack_178 = 0x72357b;
  puVar5 = (undefined4 *)FUN_00425067();
  piStack_174 = (int *)0x723585;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar5);
  FUN_004125e6();
  puStack_180 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x72359a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x7235a5;
    FUN_00878dfb();
    puStack_180 = extraout_ECX_02;
  }
  piStack_174 = (int *)0x5a;
  iStack_178 = 0;
  iStack_17c = 0x17;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_180;
  FUN_0046fc23();
  FUN_007d6f5c();
  piStack_174 = (int *)0x7235cd;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_174 = (int *)0x7235da;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_180 = (undefined1 *)0x7235f1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_178 = 0x7235fe;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x109a;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_174 = (int *)0x723645;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x723650;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x72365d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x723668;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x723671;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  piStack_174 = (int *)0x72367e;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  puStack_180 = (undefined1 *)0x723695;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_178 = 0x7236a2;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x109b;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  piStack_174 = (int *)0x7236e1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x7236ec;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x7236f9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x723704;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x72370d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_174 = (int *)0x72371a;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  puStack_180 = (undefined1 *)0x723731;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_178 = 0x72373e;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x109c;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_174 = (int *)0x72377d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x723788;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x723795;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x7237a0;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x7237a9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  piStack_174 = (int *)0x7237b6;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  puStack_180 = (undefined1 *)0x7237cd;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_178 = 0x7237da;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x109d;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0x37;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  piStack_174 = (int *)0x723819;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x723824;
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x723831;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_174 = (int *)0x72383c;
    FUN_00878dfb();
    iVar4 = extraout_ECX_03;
  }
  piStack_174 = (int *)0x0;
  puStack_180 = (undefined1 *)&iStack_178;
  *(int **)(unaff_EBP + -0x2c) = &iStack_178;
  iStack_17c = 0x580;
  iStack_178 = iVar4;
  FUN_00679e4e();
  iStack_17c = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_180 = (undefined1 *)0x723863;
  FUN_0040263d();
  puStack_180 = (undefined1 *)0x72386a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_178 = 0x723875;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  piStack_174 = (int *)0x723884;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    piStack_174 = (int *)0x723895;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x7238a2;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x7238ad;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x7238b6;
  FUN_00403191();
  piVar8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  if (piVar8 == (int *)0x0) {
    piStack_174 = (int *)0x7238cb;
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piVar8;
  puStack_180 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_17c = *(int *)(unaff_EBP + -0x4c);
  iStack_178 = *(int *)(unaff_EBP + -0x48);
  piStack_174 = *(int **)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x28) = piVar8;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  FUN_00403191();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (bVar9) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)FUN_0042a39f();
  pIVar3 = (IBinding *)*puVar5;
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x5ec);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) = p_Var1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,pIVar3);
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  FUN_004489f5();
  FUN_0040ee87();
  iVar4 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x28) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  FUN_004489f5();
  FUN_0040ee87();
  iVar4 = **(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x2c) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(iVar4 + 0xfc))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  iVar4 = **(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x2c) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(iVar4 + 0x90))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + -0x1c);
  if (*piVar8 == 0) {
    FUN_00878dfb();
  }
  iVar4 = (**(code **)(*(int *)*piVar8 + 0xe0))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  if (*piVar8 == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar8;
  iStack_200 = (**(code **)(*piVar2 + 0x44))();
  if (iStack_200 < 0) {
    iStack_204 = 0x723be4;
    piStack_1fc = piVar2;
    FUN_00878e09();
  }
  piStack_1fc = (int *)0x0;
  iStack_200 = 0x723bf0;
  FUN_004031b7();
  iVar4 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  if (iVar4 == 0) {
    piStack_1fc = (int *)0x723c03;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x2c);
  iStack_200 = 0x723c14;
  puVar5 = (undefined4 *)FUN_00425067();
  piStack_1fc = (int *)0x723c1e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar5);
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x723c2b;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  puStack_208 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x723c38;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723c43;
    FUN_00878dfb();
    puStack_208 = extraout_ECX_04;
  }
  piStack_1fc = (int *)0xb4;
  iStack_200 = 0x17;
  iStack_204 = 0;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_208;
  FUN_0046fc23(unaff_EBP + -0x10);
  FUN_007d6f5c();
  piStack_1fc = (int *)0x723c71;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x723c7b;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723c87;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  piStack_1fc = (int *)0x723c91;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x723c9b;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723ca7;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  puStack_208 = (undefined1 *)0x723cbe;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  iStack_200 = 0x723ccb;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x109e;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x20;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x723d0c;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  piStack_1fc = (int *)0x723d19;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723d24;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x723d31;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723d3c;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x723d42;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x723d4c;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723d58;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  piStack_1fc = (int *)0x723d62;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x723d6c;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723d78;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  puStack_208 = (undefined1 *)0x723d8f;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  iStack_200 = 0x723d9c;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x109f;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x2f;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x723dd8;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  piStack_1fc = (int *)0x723de5;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723df0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x723dfd;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723e08;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x723e0e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x723e18;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723e24;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  piStack_1fc = (int *)0x723e2e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x723e38;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723e44;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  puStack_208 = (undefined1 *)0x723e5b;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  iStack_200 = 0x723e68;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x10a0;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x3e;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x723ea4;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  piStack_1fc = (int *)0x723eb1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723ebc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x723ec9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723ed4;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x723eda;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x723ee4;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723ef0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  piStack_1fc = (int *)0x723efa;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x723f04;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723f10;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  puStack_208 = (undefined1 *)0x723f27;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  iStack_200 = 0x723f34;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x10a1;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x4d;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x723f70;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  piStack_1fc = (int *)0x723f7d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x723f88;
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x723f95;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1fc = (int *)0x723fa0;
    FUN_00878dfb();
    iVar4 = extraout_ECX_05;
  }
  piStack_1fc = (int *)0x0;
  puStack_208 = (undefined1 *)&iStack_200;
  *(int **)(unaff_EBP + -0x28) = &iStack_200;
  iStack_204 = 0x581;
  iStack_200 = iVar4;
  FUN_00679e4e();
  iStack_204 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_208 = (undefined1 *)0x723fc7;
  FUN_0040263d();
  puStack_208 = (undefined1 *)0x723fce;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x5c;
  iStack_200 = 0x723fd9;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  piStack_1fc = (int *)0x723fe8;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    piStack_1fc = (int *)0x723ff9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x724006;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x724011;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x724017;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x724021;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x72402d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_1fc = (int *)0x724041;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + -0x10);
  puStack_208 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_204 = *(int *)(unaff_EBP + -0x4c);
  iStack_200 = *(int *)(unaff_EBP + -0x48);
  piStack_1fc = *(int **)(unaff_EBP + -0x44);
  iVar4 = (**(code **)(*piVar8 + 0x80))(piVar8,0xac,0);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar8,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar8 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  piVar8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  piVar8 = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


