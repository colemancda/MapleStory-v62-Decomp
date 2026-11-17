/* FUN_00731453 - 0x00731453 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00731453(void)

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
  iStack_84 = 0x731476;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_84 = 0x731484;
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
  iStack_88 = 0x7314ce;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar4 != 0) {
    iStack_84 = 0x7314e4;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_84 = 0x7314f5;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_84 = 0x731502;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x73150d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_84 = 0x73151a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x731525;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_84 = 0x731532;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x73153d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_84 = 0x731550;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_84 = 0x73155d;
  FUN_00403191();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (bVar9) {
    iStack_84 = 0x731573;
    FUN_00878dfb();
  }
  iStack_84 = unaff_EBP + -0x4c;
  iStack_88 = 10;
  iStack_8c = 99;
  piStack_90 = (int *)0xae;
  puVar5 = (undefined4 *)FUN_0042a39f();
  iStack_84 = 0x7315a4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5e0),
             (IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_84 = 0x7315b9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x7315c4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_84 = 0x7315d1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_84 = 0x7315dc;
    FUN_00878dfb();
  }
  iStack_84 = 0x7315e8;
  puVar5 = (undefined4 *)FUN_004489f5();
  iStack_84 = *puVar5;
  iStack_88 = 0x7315f5;
  FUN_0040ee87();
  iVar4 = *(int *)(extraout_ECX + 0x5e0);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar4 == 0) {
    iStack_84 = 0x731607;
    FUN_00878dfb();
  }
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x48);
  piStack_90 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e0);
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
  iVar4 = *(int *)(iVar4 + 0x5e0);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e0);
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
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e0);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e0);
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
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x5e0);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e0) == 0) {
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
    iStack_f4 = 0x7317f8;
    piStack_ec = piVar2;
    FUN_00878e09();
  }
  piStack_ec = (int *)0x0;
  iStack_f0 = 0x731804;
  FUN_004031b7();
  iVar4 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar4 == 0) {
    piStack_ec = (int *)0x731817;
    FUN_00878dfb();
  }
  piStack_ec = (int *)(unaff_EBP + -0x28);
  iStack_f0 = 0x731828;
  puVar5 = (undefined4 *)FUN_00425067();
  piStack_ec = (int *)0x731832;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar5);
  FUN_004125e6();
  puStack_f8 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x731847;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731852;
    FUN_00878dfb();
    puStack_f8 = extraout_ECX_00;
  }
  piStack_ec = (int *)0x96;
  iStack_f0 = 0;
  iStack_f4 = 0;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_f8;
  FUN_0046fc23();
  FUN_007d6f5c();
  piStack_ec = (int *)0x73187d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_ec = (int *)0x73188a;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_f8 = (undefined1 *)0x7318a1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_f0 = 0x7318ae;
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
  piStack_ec = (int *)0x7318f5;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731900;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x73190d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731918;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x731921;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_ec = (int *)0x73192e;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_f8 = (undefined1 *)0x731945;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_f0 = 0x731952;
  iStack_f0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_f4;
  puStack_f8 = (undefined1 *)0x10a3;
  FUN_00679e4e();
  puStack_f8 = (undefined1 *)0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_ec = (int *)0x731991;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x73199c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x7319a9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x7319b4;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x7319bd;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_ec = (int *)0x7319ca;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_f8 = (undefined1 *)0x7319e1;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_f0 = 0x7319ee;
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
  piStack_ec = (int *)0x731a2d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731a38;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x731a45;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731a50;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x731a59;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_ec = (int *)0x731a66;
  FUN_00403191();
  piStack_ec = (int *)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x28;
  iStack_f0 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_f8 = (undefined1 *)0x731a7d;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_f0 = 0x731a8a;
  iStack_f0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_f4;
  puStack_f8 = (undefined1 *)0x10a5;
  FUN_00679e4e();
  puStack_f8 = (undefined1 *)0x37;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_ec = (int *)0x731ac9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731ad4;
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x731ae1;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_ec = (int *)0x731aec;
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
  puStack_f8 = (undefined1 *)0x731b13;
  FUN_0040263d();
  puStack_f8 = (undefined1 *)0x731b1a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_f0 = 0x731b25;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  piStack_ec = (int *)0x731b34;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    piStack_ec = (int *)0x731b45;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_ec = (int *)0x731b52;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_ec = (int *)0x731b5d;
    FUN_00878dfb();
  }
  piStack_ec = (int *)0x731b66;
  FUN_00403191();
  piVar8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (piVar8 == (int *)0x0) {
    piStack_ec = (int *)0x731b7b;
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
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
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
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
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
  iVar4 = *(int *)(iVar4 + 0x5e4);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
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
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x5e4);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
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
  iStack_178 = (**(code **)(*piVar2 + 0x44))();
  if (iStack_178 < 0) {
    iStack_17c = 0x731e83;
    piStack_174 = piVar2;
    FUN_00878e09();
  }
  piStack_174 = (int *)0x0;
  iStack_178 = 0x731e8f;
  FUN_004031b7();
  iVar4 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar4 == 0) {
    piStack_174 = (int *)0x731ea3;
    FUN_00878dfb();
  }
  piStack_174 = (int *)(unaff_EBP + -0x28);
  iStack_178 = 0x731eb4;
  puVar5 = (undefined4 *)FUN_00425067();
  piStack_174 = (int *)0x731ebe;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar5);
  FUN_004125e6();
  puStack_180 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x731ed3;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x731ede;
    FUN_00878dfb();
    puStack_180 = extraout_ECX_02;
  }
  piStack_174 = (int *)0x73;
  iStack_178 = 0x17;
  iStack_17c = 0x17;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_180;
  FUN_0046fc23();
  FUN_007d6f5c();
  piStack_174 = (int *)0x731f06;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_174 = (int *)0x731f13;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_180 = (undefined1 *)0x731f2a;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_178 = 0x731f37;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x10a6;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0x21;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_174 = (int *)0x731f7c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x731f87;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x731f94;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x731f9f;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x731fa8;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  piStack_174 = (int *)0x731fb5;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  puStack_180 = (undefined1 *)0x731fcc;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_178 = 0x731fd9;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x10a7;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  piStack_174 = (int *)0x732019;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x732024;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x732031;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x73203c;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x732045;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_174 = (int *)0x732052;
  FUN_00403191();
  piStack_174 = (int *)(unaff_EBP + -0x4c);
  iStack_17c = unaff_EBP + -0x28;
  iStack_178 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  puStack_180 = (undefined1 *)0x732069;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_178 = 0x732076;
  iStack_178 = FUN_00449749();
  *(int **)(unaff_EBP + -0x2c) = &iStack_17c;
  puStack_180 = (undefined1 *)0x10a8;
  FUN_00679e4e();
  puStack_180 = (undefined1 *)0x3f;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_004115d9();
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_174 = (int *)0x7320b6;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x7320c1;
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x7320ce;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_174 = (int *)0x7320d9;
    FUN_00878dfb();
    iVar4 = extraout_ECX_03;
  }
  piStack_174 = (int *)0x0;
  puStack_180 = (undefined1 *)&iStack_178;
  *(int **)(unaff_EBP + -0x2c) = &iStack_178;
  iStack_17c = 0x582;
  iStack_178 = iVar4;
  FUN_00679e4e();
  iStack_17c = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_180 = (undefined1 *)0x7320fe;
  FUN_0040263d();
  puStack_180 = (undefined1 *)0x732105;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iStack_178 = 0x732110;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  piStack_174 = (int *)0x73211f;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    piStack_174 = (int *)0x732130;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_174 = (int *)0x73213d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_174 = (int *)0x732148;
    FUN_00878dfb();
  }
  piStack_174 = (int *)0x732151;
  FUN_00403191();
  piVar8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if (piVar8 == (int *)0x0) {
    piStack_174 = (int *)0x732166;
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
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_00403191();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  if (bVar9) {
    FUN_00878dfb();
  }
  puVar5 = (undefined4 *)FUN_0042a39f();
  pIVar3 = (IBinding *)*puVar5;
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x5e8);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x1c) = p_Var1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,pIVar3);
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
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
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x28) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
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
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x2c) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(iVar4 + 0xfc))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00403191();
  iVar4 = **(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x2c) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
  iVar4 = (**(code **)(iVar4 + 0x90))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
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
    iStack_204 = 0x732453;
    piStack_1fc = piVar2;
    FUN_00878e09();
  }
  piStack_1fc = (int *)0x0;
  iStack_200 = 0x73245f;
  FUN_004031b7();
  iVar4 = *piVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (iVar4 == 0) {
    piStack_1fc = (int *)0x732472;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x2c);
  iStack_200 = 0x732483;
  puVar5 = (undefined4 *)FUN_00425067();
  piStack_1fc = (int *)0x73248d;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar5);
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x73249a;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  puStack_208 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x7324a7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7324b2;
    FUN_00878dfb();
    puStack_208 = extraout_ECX_04;
  }
  piStack_1fc = (int *)0x8c;
  iStack_200 = 0x17;
  iStack_204 = 0;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_208;
  FUN_0046fc23(unaff_EBP + -0x10);
  FUN_007d6f5c();
  piStack_1fc = (int *)0x7324e0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x7324ea;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7324f6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  piStack_1fc = (int *)0x732500;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x73250a;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x732516;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  puStack_208 = (undefined1 *)0x73252d;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  iStack_200 = 0x73253a;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x10aa;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x21;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x73257b;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  piStack_1fc = (int *)0x732588;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x732593;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x7325a0;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7325ab;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x7325b1;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x7325bb;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7325c7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  piStack_1fc = (int *)0x7325d1;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x7325db;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7325e7;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  puStack_208 = (undefined1 *)0x7325fe;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  iStack_200 = 0x73260b;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x10a0;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x30;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x732647;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  piStack_1fc = (int *)0x732654;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x73265f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x73266c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x732677;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x73267d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x732687;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x732693;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  piStack_1fc = (int *)0x73269d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x7326a7;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7326b3;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  puStack_208 = (undefined1 *)0x7326ca;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  iStack_200 = 0x7326d7;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x10ac;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x3f;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x732713;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  piStack_1fc = (int *)0x732720;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x73272b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x732738;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x732743;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x732749;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  piStack_1fc = (int *)(unaff_EBP + -0x3c);
  iStack_200 = 0x732753;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x73275f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  piStack_1fc = (int *)0x732769;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x732773;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x73277f;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_204 = unaff_EBP + -0x2c;
  iStack_200 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  puStack_208 = (undefined1 *)0x732796;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  iStack_200 = 0x7327a3;
  iStack_200 = FUN_00449749();
  *(int **)(unaff_EBP + -0x28) = &iStack_204;
  puStack_208 = (undefined1 *)0x10ad;
  FUN_00679e4e(&iStack_204);
  puStack_208 = (undefined1 *)0x4e;
  uVar7 = 10;
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_004115d9(10);
  FUN_00448e3a(uVar7);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    piStack_1fc = (int *)0x7327df;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  piStack_1fc = (int *)0x7327ec;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x7327f7;
    FUN_00878dfb();
  }
  iVar4 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x732804;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_1fc = (int *)0x73280f;
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
  puStack_208 = (undefined1 *)0x732836;
  FUN_0040263d();
  puStack_208 = (undefined1 *)0x73283d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iStack_200 = 0x732848;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  piStack_1fc = (int *)0x732857;
  iVar4 = FUN_0041a581();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    piStack_1fc = (int *)0x732868;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_1fc = (int *)0x732875;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x732880;
    FUN_00878dfb();
  }
  piStack_1fc = (int *)0x732886;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  piStack_1fc = (int *)(unaff_EBP + -0x4c);
  iStack_200 = 0x732890;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_1fc = (int *)0x73289c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_1fc = (int *)0x7328b0;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + -0x10);
  puStack_208 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_204 = *(int *)(unaff_EBP + -0x4c);
  iStack_200 = *(int *)(unaff_EBP + -0x48);
  piStack_1fc = *(int **)(unaff_EBP + -0x44);
  iVar4 = (**(code **)(*piVar8 + 0x80))(piVar8,0x84,0);
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


