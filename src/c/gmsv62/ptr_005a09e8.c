/* ptr_005a09e8 - 0x005a09e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005a09e8(int param_1,undefined4 param_2,int *param_3,int *param_4,IBinding *param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  short *psVar10;
  int *piVar11;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  int extraout_ECX_14;
  int unaff_EBP;
  int iStack_14;
  undefined1 *puStack_10;
  int iStack_8;
  int iStack_4;
  
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_4 = 0x5a09f3;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004343c5();
  param_1 = 0x5a0a09;
  param_1 = FUN_00411641();
  iStack_4 = 0x5a0a13;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    param_5 = (IBinding *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    param_4 = (int *)0x5a0a2a;
    FUN_00403384();
  }
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_4 = (int *)0x5a0a38;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < 0) {
    param_4 = (int *)0x5a0a45;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  param_4 = (int *)0x5a0a55;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < 0) {
    param_4 = (int *)0x5a0a60;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xf4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  param_4 = (int *)0x5a0a70;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < 0) {
    param_4 = (int *)0x5a0a7b;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  param_4 = (int *)0x5a0a8b;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < 0) {
    param_4 = (int *)0x5a0a96;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)&DAT_00980690;
  param_4 = (int *)0x5a0aa7;
  FUN_00403191();
  param_5 = (IBinding *)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  param_4 = (int *)0x5a0ab7;
  FUN_00403191();
  param_5 = (IBinding *)0x0;
  param_4 = (int *)0x0;
  param_3 = (int *)(unaff_EBP + -0xf4);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  param_1 = 0x5a0ad3;
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000004;
  iStack_4 = 0x5a0adf;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_4 = 0x5a0aef;
  FUN_00405a1d();
  iStack_4 = 0x5a0af6;
  FUN_00402660();
  iStack_4 = 0x5a0afd;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_3 = (int *)0x5a0b08;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xa0) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    param_5 = (IBinding *)(unaff_EBP + -0xa0);
    param_4 = (int *)0x5a0b24;
    param_5 = (IBinding *)FUN_00404b30();
    if (((int)param_5 < 0) && (param_5 != (IBinding *)0x80004002)) {
      param_4 = (int *)0x5a0b35;
      FUN_00878dfb();
    }
  }
  param_5 = (IBinding *)(unaff_EBP + -0x114);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  param_4 = (int *)0x5a0b45;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < 0) {
    param_4 = (int *)0x5a0b50;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  param_4 = (int *)0x5a0b60;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < 0) {
    param_4 = (int *)0x5a0b6b;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xf4);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0b7b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0b86;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x3ca;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0ba9;
  FUN_0040263d();
  param_3 = (int *)0x5a0bb0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  param_5 = (IBinding *)0x5a0bbb;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0bcb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0bd6;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_00;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x3cb;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0bf9;
  FUN_0040263d();
  param_3 = (int *)0x5a0c00;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  param_5 = (IBinding *)0x5a0c0b;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0c1b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0c26;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_01;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x3cc;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0c49;
  FUN_0040263d();
  param_3 = (int *)0x5a0c50;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  param_5 = (IBinding *)0x5a0c5b;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -100) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0c6b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0c76;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_02;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x5bd;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0c99;
  FUN_0040263d();
  param_3 = (int *)0x5a0ca0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_5 = (IBinding *)0x5a0cab;
  iVar2 = FUN_00403213();
  *(uint *)(unaff_EBP + -0x68) = (uint)(iVar2 != 0);
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0cc1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0ccc;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_03;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x5e7;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0cef;
  FUN_0040263d();
  param_3 = (int *)0x5a0cf6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  param_5 = (IBinding *)0x5a0d01;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0d11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0d1c;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_04;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x5e8;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0d3f;
  FUN_0040263d();
  param_3 = (int *)0x5a0d46;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  param_5 = (IBinding *)0x5a0d51;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0d61;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0d6c;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_05;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0xca2;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0d8f;
  FUN_0040263d();
  param_3 = (int *)0x5a0d96;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  param_5 = (IBinding *)0x5a0da1;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x6c) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0db1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0dbc;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_06;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x5e9;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0ddf;
  FUN_0040263d();
  param_3 = (int *)0x5a0de6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  param_5 = (IBinding *)0x5a0df1;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0e01;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0e0c;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_5 = (IBinding *)extraout_ECX_07;
  }
  param_3 = (int *)&stack0x00000014;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
  param_4 = (int *)0x5ea;
  FUN_00679e4e();
  param_4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_3 = (int *)0x5a0e2f;
  FUN_0040263d();
  param_3 = (int *)0x5a0e36;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  param_5 = (IBinding *)0x5a0e41;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
  param_5 = (IBinding *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_4 = (int *)0x5a0e51;
  iVar2 = FUN_00402bc3();
  param_4 = (int *)param_5;
  if (iVar2 < 0) {
    param_4 = (int *)0x5a0e5c;
    param_5 = (IBinding *)iVar2;
    FUN_00878dfb();
    param_4 = (int *)extraout_ECX_08;
  }
  param_5 = (IBinding *)&DAT_0097812c;
  *(int ***)(unaff_EBP + -0x14) = &param_4;
  param_3 = (int *)0x64b;
  param_1 = 0x5a0e74;
  FUN_00679e4e();
  param_3 = (int *)(unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_0040263d();
  param_4 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  param_3 = (int *)0x5a0e98;
  param_4 = (int *)FUN_004343c5();
  param_5 = (IBinding *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  param_3 = (int *)0x5a0ea8;
  FUN_00454081();
  param_5 = (IBinding *)(unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  param_4 = (int *)0x5a0eb8;
  iVar4 = FUN_00402bc3();
  iVar2 = (int)param_5;
  if (iVar4 < 0) {
    param_4 = (int *)0x5a0ec3;
    param_5 = (IBinding *)iVar4;
    FUN_00878dfb();
    iVar2 = extraout_ECX_09;
  }
  pcVar5 = *(char **)(unaff_EBP + -0x48);
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    param_5 = (IBinding *)0x0;
    *(int ***)(unaff_EBP + -0x14) = &param_4;
    param_3 = (int *)0x5e0;
    param_1 = 0x5a0ee7;
    param_4 = (int *)iVar2;
    FUN_00679e4e();
    param_3 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_0040263d();
    param_4 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    param_3 = (int *)0x5a0f08;
    iVar2 = FUN_00412550();
    *(char *)(unaff_EBP + -0x2d) = '\x01' - (iVar2 != 0);
    param_3 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    param_5 = (IBinding *)FUN_00402bc3();
    iVar2 = extraout_ECX_10;
    if ((int)param_5 < 0) {
      param_4 = (int *)0x5a0f2b;
      FUN_00878dfb();
      iVar2 = extraout_ECX_11;
    }
    if (*(char *)(unaff_EBP + -0x2d) == '\0') {
      pcVar5 = *(char **)(unaff_EBP + -0x48);
      goto LAB_005a0fdd;
    }
    pcVar5 = *(char **)(unaff_EBP + -0x48);
    iVar4 = *(int *)(unaff_EBP + -0x54);
    *(undefined4 *)(unaff_EBP + -0x5c) = 1;
  }
  else {
LAB_005a0fdd:
    iVar4 = *(int *)(unaff_EBP + -0x54);
    iVar7 = *(int *)(iVar4 + 0xe4);
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    if (iVar7 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      param_5 = (IBinding *)0x5a0ffb;
      FUN_00414ebb();
      param_5 = (IBinding *)0x5a1003;
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      param_5 = (IBinding *)0x5a100f;
      FUN_00402676();
      param_5 = (IBinding *)0x5a1017;
      FUN_004027eb();
      goto LAB_005a1a3c;
    }
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    param_3 = (int *)&stack0x00000014;
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0x00000014;
    param_4 = (int *)0x10b7;
    param_5 = (IBinding *)iVar2;
    FUN_00679e4e();
    param_4 = (int *)(unaff_EBP + -0x104);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    param_3 = (int *)0x5a0f75;
    FUN_0040263d();
    param_3 = (int *)0x5a0f7c;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(short *)(unaff_EBP + -0x104) != 0) {
      param_5 = (IBinding *)(unaff_EBP + -0x104);
      param_4 = (int *)(unaff_EBP + -0x50);
      param_3 = (int *)0x5a0f9c;
      param_5 = (IBinding *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      param_4 = (int *)0x5a0fab;
      param_5 = (IBinding *)FUN_0041a485();
      if (((int)param_5 < 0) && (param_5 != (IBinding *)0x80004002)) {
        param_4 = (int *)0x5a0fbc;
        FUN_00878dfb();
      }
      param_5 = *(IBinding **)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (param_5 != (IBinding *)0x0) {
        param_4 = (int *)0x5a0fcd;
        (**(code **)(*(int *)param_5 + 8))();
      }
    }
    if (*(int *)(unaff_EBP + -0x5c) == 0) {
      param_4 = (int *)0x0;
    }
    else {
      param_4 = *(int **)(iVar4 + 200);
    }
    param_5 = (IBinding *)(unaff_EBP + -0x4c);
    param_3 = *(int **)(unaff_EBP + -0x6c);
    param_1 = *(undefined4 *)(unaff_EBP + -0x74);
    iStack_4 = *(int *)(unaff_EBP + -100);
    iStack_8 = *(int *)(unaff_EBP + -0x58);
    puStack_10 = *(undefined1 **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + 8) = &iStack_14;
    iStack_14 = (int)param_5;
    FUN_00424dbc(unaff_EBP + -0x1c);
    FUN_005a1a4d(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x5a1068;
      FUN_00878dfb();
    }
    param_5 = (IBinding *)0x5a1070;
    uVar6 = FUN_0042d476();
    if (1 < uVar6) {
      param_5 = *(IBinding **)(unaff_EBP + -0x4c);
      param_3 = (int *)(unaff_EBP + -0x10);
      *(int ***)(unaff_EBP + 8) = &param_4;
      param_4 = (int *)extraout_ECX_12;
      FUN_0041160e();
      param_3 = (int *)0x5a108c;
      FUN_005a8715();
    }
    if (*(int *)(unaff_EBP + -0x5c) != 0) {
      param_5 = (IBinding *)0x5a109b;
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
      param_5 = *(IBinding **)(unaff_EBP + -0x10);
      param_4 = (int *)0x5a10a5;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,param_5);
      if (*(int *)(unaff_EBP + -0x6c) != 0) {
        *(int ***)(unaff_EBP + 8) = &param_4;
        param_3 = (int *)0x1;
        param_5 = (IBinding *)0x0;
        puStack_10 = (undefined1 *)(unaff_EBP + -0x10);
        param_1 = 0xff;
        iStack_4 = *(int *)(unaff_EBP + -0x44);
        iStack_8 = *(int *)(unaff_EBP + -0x6c);
        *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff4;
        iStack_14 = 0x5a10d6;
        param_4 = (int *)extraout_ECX_13;
        FUN_0041160e();
        puStack_10 = (undefined1 *)0x5a10dd;
        FUN_005a3a5d();
      }
    }
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      param_5 = (IBinding *)0x5a10f3;
      FUN_005aa0de();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a1107;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          param_5 = (IBinding *)0x80004003;
          param_4 = (int *)0x5a1112;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a111f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x58) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a112f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a113f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a114f;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x10);
      param_5 = (IBinding *)0x5a115f;
      iVar4 = FUN_0042fb34();
      param_5 = (IBinding *)0x5a1169;
      iVar7 = FUN_00404abb();
      param_5 = (IBinding *)(iVar4 + iVar7);
      param_4 = (int *)0x5a1174;
      iVar4 = FUN_0042fb0a();
      param_4 = (int *)0x5a117e;
      iVar7 = FUN_00404a94();
      param_4 = (int *)(iVar4 + iVar7);
      param_3 = (int *)0x5a1189;
      param_3 = (int *)FUN_00404abb();
      FUN_00404a94();
      param_1 = iVar2 + 0x10;
      (*DAT_0097b504)();
      *(int **)(unaff_EBP + -0x14) = &iStack_4;
      iStack_8 = 0x5c1;
      puStack_10 = (undefined1 *)0x5a11b3;
      FUN_00679e4e();
      iStack_8 = unaff_EBP + -0xc4;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_0040263d();
      iStack_4 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iStack_8 = 0x5a11d7;
      FUN_00412550();
      iStack_4 = 0x5a11e2;
      FUN_00424e27();
      iStack_4 = 0x5a11e9;
      iStack_4 = FUN_0042fb0a();
      iStack_4 = -iStack_4;
      puStack_10 = (undefined1 *)&iStack_8;
      *(int **)(unaff_EBP + -0x14) = &iStack_8;
      iStack_14 = 0x5a11ff;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      puStack_10 = (undefined1 *)0x5a120f;
      FUN_0040263d();
      puStack_10 = (undefined1 *)0x5a1216;
      iStack_8 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      iStack_4 = FUN_00412550();
      iStack_8 = 0x5a122b;
      iStack_8 = FUN_005a9f7a();
      iStack_8 = iStack_8 + 0x10;
      (*DAT_0097b54c)();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      puStack_10 = (undefined1 *)0x5a1242;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_10 = (undefined1 *)0x5a124d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_10 = (undefined1 *)0x5a125d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_10 = (undefined1 *)0x5a1268;
        FUN_00878dfb();
      }
      puStack_10 = (undefined1 *)0x0;
      iStack_14 = 0x5a1276;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10 = (undefined1 *)0x5a1289;
        FUN_00878dfb();
      }
      puStack_10 = (undefined1 *)(unaff_EBP + -0x18);
      iStack_14 = 0x5a129c;
      puVar8 = (undefined4 *)FUN_00425067();
      puStack_10 = (undefined1 *)0x5a12a9;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x24) + 4),(IBinding *)*puVar8);
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_10 = (undefined1 *)0x5a12b6;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_10 = (undefined1 *)0x5a12c6;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_10 = (undefined1 *)0x5a12d1;
        FUN_00878dfb();
      }
      puStack_10 = (undefined1 *)0x0;
      iStack_14 = 0x5a12df;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10 = (undefined1 *)0x5a12f2;
        FUN_00878dfb();
      }
      puStack_10 = (undefined1 *)(unaff_EBP + -0x18);
      iStack_14 = 0x5a1305;
      FUN_0041141a();
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_10 = (undefined1 *)0x5a1312;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_10 = (undefined1 *)0x5a1322;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_10 = (undefined1 *)0x5a132d;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      puStack_10 = (undefined1 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_14 = 0x5a1344;
      piVar9 = (int *)FUN_00679d86();
      iStack_14 = *piVar9;
      puStack_10 = (undefined1 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00402676();
      puStack_10 = (undefined1 *)0x5a1373;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
      puStack_10 = (undefined1 *)(unaff_EBP + -0xb4);
      iStack_14 = 0x5a1385;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        puStack_10 = (undefined1 *)0x5a1391;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      puStack_10 = (undefined1 *)0x5a139e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
      puStack_10 = (undefined1 *)(unaff_EBP + -0x94);
      iStack_14 = 0x5a13ab;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        puStack_10 = (undefined1 *)0x5a13b7;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x24);
      iVar4 = *(int *)(iVar2 + 4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      if (iVar4 == 0) {
        puStack_10 = (undefined1 *)0x5a13d1;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(unaff_EBP + -0x24) + 4) == 0) {
        puStack_10 = (undefined1 *)0x5a13ec;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_10 = (undefined1 *)0x5a13fe;
        FUN_00878dfb();
      }
      piVar9 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x2c) = piVar9;
      uVar3 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      uVar3 = FUN_0040e48b();
      iStack_14 = *(int *)(unaff_EBP + -0xb0);
      puStack_10 = *(undefined1 **)(unaff_EBP + -0xac);
      iVar2 = (**(code **)(*piVar9 + 0x2c))
                        (*(undefined4 *)(unaff_EBP + -0x2c),uVar3,*(undefined4 *)(unaff_EBP + -0x18)
                         ,*(undefined4 *)(unaff_EBP + -0x94),*(undefined4 *)(unaff_EBP + -0x90),
                         *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                         *(undefined4 *)(unaff_EBP + -0xb4));
      if (iVar2 < 0) {
        param_5 = (IBinding *)&DAT_00963cc8;
        param_4 = *(int **)(unaff_EBP + -0x2c);
        param_3 = (int *)iVar2;
        FUN_00878e09();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      param_4 = (int *)0x5a1462;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a146d;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      param_4 = (int *)0x5a147d;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a1488;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x84);
      param_4 = (int *)0x5a1497;
      VariantInit((VARIANTARG *)param_5);
      param_4 = (int *)(unaff_EBP + -0x84);
      param_5 = (IBinding *)&DAT_00980690;
      param_3 = (int *)0x5a14a9;
      param_5 = (IBinding *)FUN_00402e32();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a14b5;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      param_4 = (int *)0x5a14c2;
      VariantInit((VARIANTARG *)param_5);
      param_4 = (int *)(unaff_EBP + -0x94);
      param_5 = (IBinding *)&DAT_00980690;
      param_3 = (int *)0x5a14cf;
      param_5 = (IBinding *)FUN_00402e32();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a14db;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      param_4 = (int *)0x5a14e8;
      VariantInit((VARIANTARG *)param_5);
      param_4 = (int *)(unaff_EBP + -0xb4);
      param_5 = (IBinding *)&DAT_00980690;
      param_3 = (int *)0x5a14f5;
      param_5 = (IBinding *)FUN_00402e32();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a1503;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      param_4 = (int *)0x5a1510;
      FUN_00403191();
      param_5 = (IBinding *)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      param_4 = (int *)0x5a1520;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a1533;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x84);
      param_4 = (int *)(unaff_EBP + -0x94);
      param_3 = (int *)(unaff_EBP + -0xb4);
      param_1 = unaff_EBP + -0xc4;
      iStack_4 = unaff_EBP + -0xd4;
      iStack_8 = 0x5a1565;
      FUN_004250ac();
      param_5 = (IBinding *)(unaff_EBP + -0xd4);
      param_4 = (int *)0x5a1571;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a157c;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0xc4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      param_4 = (int *)0x5a158c;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a1597;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      param_4 = (int *)0x5a15a4;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a15af;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      param_4 = (int *)0x5a15bf;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a15ca;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      param_4 = (int *)0x5a15da;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a15e5;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      param_4 = (int *)0x5a15f5;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a1600;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x24);
      param_5 = (IBinding *)0x3af;
      param_4 = (int *)(unaff_EBP + -0x18);
      param_3 = (int *)0x5a1613;
      puVar8 = (undefined4 *)FUN_00679d86();
      param_3 = (int *)*puVar8;
      param_5 = (IBinding *)0x0;
      param_4 = (int *)(iVar2 + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      param_5 = (IBinding *)0x5a1633;
      FUN_00402676();
      param_5 = *(IBinding **)(unaff_EBP + -0x10);
      param_4 = (int *)0x5a163e;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24),param_5);
      param_5 = (IBinding *)0xff;
      *(int ***)(unaff_EBP + -0x14) = &param_4;
      param_3 = (int *)0x1072;
      param_1 = 0x5a1656;
      FUN_00679e4e();
      param_3 = (int *)(unaff_EBP + -0xd4);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_0040263d();
      param_4 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      param_3 = (int *)0x5a167a;
      uVar3 = FUN_00412550();
      param_5 = (IBinding *)0x5a1686;
      iVar2 = FUN_005a9f7a();
      *(undefined4 *)(iVar2 + 0x20) = uVar3;
      param_5 = (IBinding *)(unaff_EBP + -0xd4);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      param_4 = (int *)0x5a1699;
      param_5 = (IBinding *)FUN_00402bc3();
      if ((int)param_5 < 0) {
        param_4 = (int *)0x5a16a4;
        FUN_00878dfb();
      }
      param_5 = *(IBinding **)(unaff_EBP + -0x20);
      param_4 = (int *)0x5a16b2;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x24) + 0xc),param_5);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x24) = 1;
      param_5 = (IBinding *)(unaff_EBP + -0x28);
      param_4 = (int *)0x5a16ce;
      FUN_005a9f14();
      param_5 = *(IBinding **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (param_5 != (IBinding *)0x0) {
        param_4 = (int *)0x5a16df;
        (**(code **)(*(int *)param_5 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        param_5 = (IBinding *)0x0;
        param_4 = (int *)0x5a16f1;
        FUN_005aa185();
      }
    }
    param_5 = *(IBinding **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (param_5 != (IBinding *)0x0) {
      param_4 = (int *)0x5a1702;
      (**(code **)(*(int *)param_5 + 8))();
    }
    param_5 = *(IBinding **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (param_5 != (IBinding *)0x0) {
      param_4 = (int *)0x5a1713;
      (**(code **)(*(int *)param_5 + 8))();
    }
    param_5 = (IBinding *)(unaff_EBP + -0x104);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    param_4 = (int *)0x5a1723;
    param_5 = (IBinding *)FUN_00402bc3();
    if ((int)param_5 < 0) {
      param_4 = (int *)0x5a1732;
      FUN_00878dfb();
    }
  }
  else {
    *(char **)(unaff_EBP + -0x50) = pcVar5;
    param_5 = (IBinding *)0x0;
    param_4 = (int *)(unaff_EBP + -0x50);
    param_3 = (int *)0x5a174a;
    iVar2 = FUN_005aa403();
    *(int *)(unaff_EBP + -0x14) = iVar2 + 0xc;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    while( true ) {
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      if (*(int *)(unaff_EBP + -0x44) == 0) {
        iVar2 = *(int *)(unaff_EBP + -0x1c);
      }
      else {
        param_5 = (IBinding *)0x0;
        param_4 = (int *)0x0;
        param_3 = (int *)0xa90;
        param_1 = 0x5a1776;
        FUN_00679d86();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
        param_3 = *(int **)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        FUN_00411641();
        param_1 = unaff_EBP + -0x4c;
        FUN_0041354c();
        param_3 = (int *)0x5a179c;
        FUN_00411641();
        *(int ***)(unaff_EBP + -0x24) = &param_3;
        param_1 = 0x5a17a8;
        FUN_004033a1();
        *(undefined4 *)(unaff_EBP + -4) = 0x44;
        param_1 = 0x5a17be;
        FUN_0040263d();
        param_1 = 0x5a17c5;
        FUN_004048a4();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
        *(undefined4 *)(unaff_EBP + -4) = 0x46;
        param_3 = (int *)0x5a17d7;
        iVar2 = FUN_004032b4();
      }
      *(int *)(unaff_EBP + -0x50) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (iVar2 != 0) {
        param_5 = (IBinding *)(unaff_EBP + -0x50);
        param_4 = (int *)0x5a17f2;
        param_5 = (IBinding *)FUN_00404b30();
        if (((int)param_5 < 0) && (param_5 != (IBinding *)0x80004002)) {
          param_4 = (int *)0x5a1803;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x49;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        param_5 = (IBinding *)(unaff_EBP + -0xd4);
        param_4 = (int *)0x5a1820;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < 0) {
          param_4 = (int *)0x5a182b;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x48;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
        param_5 = (IBinding *)0x5a1847;
        FUN_00402676();
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) break;
      param_5 = (IBinding *)0xffffffff;
      param_4 = (int *)0x5a185a;
      iVar2 = FUN_005aa21b();
      param_3 = (int *)&stack0x00000014;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0x00000014;
      param_4 = (int *)0x477;
      FUN_00679e4e();
      param_4 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      param_3 = (int *)0x5a187f;
      FUN_0040263d();
      param_3 = (int *)0x5a1886;
      psVar10 = (short *)FUN_004048a4();
      sVar1 = *psVar10;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (sVar1 == 8) {
        param_5 = *(IBinding **)(psVar10 + 4);
      }
      else {
        param_5 = (IBinding *)&DAT_0097812c;
      }
      param_4 = (int *)0x5a18a3;
      FUN_00402e8e();
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        param_5 = (IBinding *)(*(int *)(unaff_EBP + -0x2c) + 8);
        param_4 = (int *)0x5a18b7;
        InterlockedIncrement((LONG *)param_5);
      }
      param_5 = (IBinding *)0x5a18be;
      FUN_00402fa6();
      iVar4 = *(int *)(unaff_EBP + -0x2c);
      *(int *)(iVar2 + 4) = iVar4;
      if (iVar4 != 0) {
        param_5 = (IBinding *)0x5a18cc;
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
      param_5 = (IBinding *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      param_4 = (int *)0x5a18dd;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        param_4 = (int *)0x5a18e8;
        param_5 = (IBinding *)iVar4;
        FUN_00878dfb();
        param_5 = (IBinding *)extraout_ECX_14;
      }
      if (*(int *)(unaff_EBP + -0x5c) == 0) {
        param_4 = (int *)0x0;
      }
      else {
        param_4 = *(int **)(*(int *)(unaff_EBP + -0x54) + 200);
      }
      param_3 = *(int **)(unaff_EBP + -0x6c);
      param_1 = *(undefined4 *)(unaff_EBP + -0x74);
      iStack_4 = *(int *)(unaff_EBP + -100);
      iStack_8 = *(int *)(unaff_EBP + -0x58);
      puStack_10 = *(undefined1 **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x24) = &iStack_14;
      iStack_14 = (int)param_5;
      param_5 = (IBinding *)iVar2;
      FUN_00424dbc(unaff_EBP + -0x20);
      piVar9 = (int *)FUN_005a1a4d(unaff_EBP + -0x9c);
      piVar9 = (int *)*piVar9;
      piVar11 = *(int **)(iVar2 + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      if (piVar11 != piVar9) {
        *(int *)(iVar2 + 8) = (int)piVar9;
        param_5 = (IBinding *)0x5a194c;
        FUN_00424ed4();
        if (piVar11 != (int *)0x0) {
          param_4 = (int *)0x5a1956;
          param_5 = (IBinding *)piVar11;
          (**(code **)(*piVar11 + 8))();
        }
      }
      param_5 = *(IBinding **)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (param_5 != (IBinding *)0x0) {
        param_4 = (int *)0x5a196c;
        (**(code **)(*(int *)param_5 + 8))();
      }
      if (*(int *)(iVar2 + 8) == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a197a;
        FUN_00878dfb();
      }
      param_5 = (IBinding *)(unaff_EBP + -0x98);
      param_4 = (int *)0x5a198a;
      piVar9 = (int *)FUN_004113e5();
      iVar2 = *piVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (iVar2 == 0) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x5a199e;
        FUN_00878dfb();
      }
      piVar9 = (int *)*piVar9;
      param_5 = (IBinding *)0x0;
      param_4 = (int *)0x0;
      param_3 = piVar9;
      piVar11 = (int *)(**(code **)(*piVar9 + 0x40))();
      if ((int)piVar11 < 0) {
        param_5 = (IBinding *)&DAT_00963d08;
        param_3 = piVar11;
        param_4 = piVar9;
        FUN_00878e09();
      }
      param_5 = *(IBinding **)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (param_5 != (IBinding *)0x0) {
        param_4 = (int *)0x5a19cc;
        (**(code **)(*(int *)param_5 + 8))();
      }
      param_5 = *(IBinding **)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      if (param_5 != (IBinding *)0x0) {
        param_4 = (int *)0x5a19dd;
        (**(code **)(*(int *)param_5 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      param_5 = (IBinding *)0x5a19e9;
      FUN_00402676();
      *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    param_5 = (IBinding *)0x5a1a02;
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  param_5 = (IBinding *)0x5a1a0e;
  FUN_00414ebb();
  param_5 = *(IBinding **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (param_5 != (IBinding *)0x0) {
    param_4 = (int *)0x5a1a1f;
    (**(code **)(*(int *)param_5 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  param_5 = (IBinding *)0x5a1a2b;
  FUN_00402676();
  param_5 = *(IBinding **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (param_5 != (IBinding *)0x0) {
    param_4 = (int *)0x5a1a3c;
    (**(code **)(*(int *)param_5 + 8))();
  }
LAB_005a1a3c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


