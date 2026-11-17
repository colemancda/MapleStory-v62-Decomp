/* FUN_005a08cb - 0x005a08cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a08cb(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  int iStack_150;
  undefined1 *puStack_14c;
  int iStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int *piStack_138;
  int *piStack_134;
  int *piStack_130;
  int *piStack_12c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x54) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x5dd;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_134 = (int *)0x5a0908;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_130 = (int *)0x5a091b;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0922;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_12c = (int *)&DAT_0097812c;
  piStack_138 = (int *)&piStack_130;
  *(int ***)(unaff_EBP + -0x14) = &piStack_130;
  piStack_134 = (int *)0x5dc;
  puStack_13c = (undefined1 *)0x5a0950;
  FUN_00679e4e();
  piStack_134 = (int *)(unaff_EBP + -0xf4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_138 = (int *)0x5a0963;
  FUN_0040263d();
  piStack_138 = (int *)0x5a096a;
  piStack_130 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_134 = (int *)0x5a0974;
  piVar1 = (int *)FUN_004343c5();
  piStack_130 = (int *)&DAT_0097812c;
  piStack_134 = piStack_12c;
  *(int ***)(unaff_EBP + -0x14) = &piStack_134;
  piStack_138 = (int *)0x5db;
  puStack_140 = (undefined1 *)0x5a098b;
  puStack_13c = (undefined1 *)&piStack_134;
  piStack_12c = piVar1;
  FUN_00679e4e();
  piStack_138 = (int *)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_13c = (undefined1 *)0x5a099e;
  FUN_0040263d();
  puStack_13c = (undefined1 *)0x5a09a5;
  piStack_134 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_138 = (int *)0x5a09af;
  piVar1 = (int *)FUN_004343c5();
  piStack_134 = (int *)&DAT_0097812c;
  piStack_138 = piStack_130;
  *(int ***)(unaff_EBP + -0x14) = &piStack_138;
  puStack_13c = (undefined1 *)0x5da;
  iStack_144 = 0x5a09c6;
  puStack_140 = (undefined1 *)&piStack_138;
  piStack_130 = piVar1;
  FUN_00679e4e();
  puStack_13c = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_140 = (undefined1 *)0x5a09d6;
  FUN_0040263d();
  puStack_140 = (undefined1 *)0x5a09dd;
  piVar1 = (int *)FUN_004048a4();
  piStack_138 = (int *)0x5d9;
  puStack_13c = (undefined1 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_140 = (undefined1 *)0x5a09f3;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_13c = (undefined1 *)0x5a09ff;
  piStack_138 = piVar1;
  piStack_134 = (int *)FUN_004343c5();
  piStack_138 = (int *)0x5a0a09;
  piStack_138 = (int *)FUN_00411641();
  puStack_13c = (undefined1 *)(unaff_EBP + -0x60);
  puStack_140 = (undefined1 *)0x5a0a13;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_12c = (int *)0x5a0a2a;
    FUN_00403384();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_12c = (int *)0x5a0a38;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0a45;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_12c = (int *)0x5a0a55;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0a60;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_12c = (int *)0x5a0a70;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0a7b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_12c = (int *)0x5a0a8b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0a96;
    FUN_00878dfb();
  }
  piStack_12c = (int *)0x5a0aa7;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_12c = (int *)0x5a0ab7;
  FUN_00403191();
  piStack_12c = (int *)0x0;
  piStack_130 = (int *)(unaff_EBP + -0xf4);
  piStack_134 = (int *)(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_138 = (int *)0x5a0ad3;
  puStack_13c = (undefined1 *)FUN_00411641();
  *(int ***)(unaff_EBP + -0x14) = &piStack_138;
  puStack_140 = (undefined1 *)0x5a0adf;
  FUN_004033a1();
  puStack_13c = (undefined1 *)(unaff_EBP + -0x114);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_140 = (undefined1 *)0x5a0aef;
  FUN_00405a1d();
  puStack_140 = (undefined1 *)0x5a0af6;
  FUN_00402660();
  puStack_140 = (undefined1 *)0x5a0afd;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_130 = (int *)0x5a0b08;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xa0) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    piStack_12c = (int *)0x5a0b24;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_12c = (int *)0x5a0b35;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_12c = (int *)0x5a0b45;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0b50;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_12c = (int *)0x5a0b60;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0b6b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0b7b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0b86;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x3ca;
  piStack_134 = (int *)0x5a0b99;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0ba9;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0bb0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0bcb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0bd6;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x3cb;
  piStack_134 = (int *)0x5a0be9;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0bf9;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0c00;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0c1b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0c26;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x3cc;
  piStack_134 = (int *)0x5a0c39;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0c49;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0c50;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -100) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0c6b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0c76;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x5bd;
  piStack_134 = (int *)0x5a0c89;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0c99;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0ca0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00403213();
  *(uint *)(unaff_EBP + -0x68) = (uint)(iVar2 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0cc1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0ccc;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x5e7;
  piStack_134 = (int *)0x5a0cdf;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0cef;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0cf6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0d11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0d1c;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x5e8;
  piStack_134 = (int *)0x5a0d2f;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0d3f;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0d46;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0d61;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0d6c;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0xca2;
  piStack_134 = (int *)0x5a0d7f;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0d8f;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0d96;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x6c) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0db1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0dbc;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x5e9;
  piStack_134 = (int *)0x5a0dcf;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0ddf;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0de6;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0e01;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0e0c;
    FUN_00878dfb();
  }
  piStack_130 = (int *)&stack0xfffffed8;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
  piStack_12c = (int *)0x5ea;
  piStack_134 = (int *)0x5a0e1f;
  FUN_00679e4e();
  piStack_12c = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x5a0e2f;
  FUN_0040263d();
  piStack_130 = (int *)0x5a0e36;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uVar3 = FUN_00403213();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_12c = (int *)0x5a0e51;
  piVar1 = (int *)(unaff_EBP + -0x40);
  iVar2 = FUN_00402bc3();
  piStack_12c = piVar1;
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0e5c;
    FUN_00878dfb();
    piStack_12c = extraout_ECX_00;
  }
  piStack_134 = (int *)&piStack_12c;
  *(int ***)(unaff_EBP + -0x14) = &piStack_12c;
  piStack_130 = (int *)0x64b;
  piStack_138 = (int *)0x5a0e74;
  FUN_00679e4e();
  piStack_130 = (int *)(unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_134 = (int *)0x5a0e87;
  FUN_0040263d();
  piStack_134 = (int *)0x5a0e8e;
  piStack_12c = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_130 = (int *)0x5a0e98;
  piStack_12c = (int *)FUN_004343c5();
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  piStack_130 = (int *)0x5a0ea8;
  FUN_00454081();
  piVar1 = (int *)(unaff_EBP + -0x124);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  piStack_12c = (int *)0x5a0eb8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_12c = (int *)0x5a0ec3;
    FUN_00878dfb();
    piVar1 = extraout_ECX_01;
  }
  pcVar5 = *(char **)(unaff_EBP + -0x48);
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    piStack_134 = (int *)&piStack_12c;
    *(int ***)(unaff_EBP + -0x14) = &piStack_12c;
    piStack_130 = (int *)0x5e0;
    piStack_138 = (int *)0x5a0ee7;
    piStack_12c = piVar1;
    FUN_00679e4e();
    piStack_130 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_134 = (int *)0x5a0ef7;
    FUN_0040263d();
    piStack_134 = (int *)0x5a0efe;
    piStack_12c = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    piStack_130 = (int *)0x5a0f08;
    iVar2 = FUN_00412550();
    *(char *)(unaff_EBP + -0x2d) = '\x01' - (iVar2 != 0);
    piStack_130 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_134 = (int *)0x5a0f1e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_12c = (int *)0x5a0f2b;
      FUN_00878dfb();
    }
    if (*(char *)(unaff_EBP + -0x2d) == '\0') {
      pcVar5 = *(char **)(unaff_EBP + -0x48);
      goto LAB_005a0fdd;
    }
    pcVar5 = *(char **)(unaff_EBP + -0x48);
    iVar2 = *(int *)(unaff_EBP + -0x54);
    *(undefined4 *)(unaff_EBP + -0x5c) = 1;
  }
  else {
LAB_005a0fdd:
    iVar2 = *(int *)(unaff_EBP + -0x54);
    iVar4 = *(int *)(iVar2 + 0xe4);
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    if (iVar4 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00414ebb();
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      FUN_004027eb();
      goto LAB_005a1a3c;
    }
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    piStack_130 = (int *)&stack0xfffffed8;
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffed8;
    piStack_12c = (int *)0x10b7;
    piStack_134 = (int *)0x5a0f62;
    FUN_00679e4e();
    piStack_12c = (int *)(unaff_EBP + -0x104);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_130 = (int *)0x5a0f75;
    FUN_0040263d();
    piStack_130 = (int *)0x5a0f7c;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(short *)(unaff_EBP + -0x104) != 0) {
      piStack_12c = (int *)(unaff_EBP + -0x50);
      piStack_130 = (int *)0x5a0f9c;
      FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      piStack_12c = (int *)0x5a0fab;
      iVar4 = FUN_0041a485();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        piStack_12c = (int *)0x5a0fbc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
        piStack_12c = (int *)0x5a0fcd;
        (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
      }
    }
    if (*(int *)(unaff_EBP + -0x5c) == 0) {
      piStack_12c = (int *)0x0;
    }
    else {
      piStack_12c = *(int **)(iVar2 + 200);
    }
    iStack_150 = unaff_EBP + -0x4c;
    piStack_130 = *(int **)(unaff_EBP + -0x6c);
    piStack_134 = *(int **)(unaff_EBP + -0x70);
    piStack_138 = *(int **)(unaff_EBP + -0x74);
    puStack_13c = *(undefined1 **)(unaff_EBP + -0x68);
    puStack_140 = *(undefined1 **)(unaff_EBP + -100);
    iStack_144 = *(int *)(unaff_EBP + -0x58);
    puStack_14c = *(undefined1 **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + 8) = &iStack_150;
    FUN_00424dbc(unaff_EBP + -0x1c);
    FUN_005a1a4d(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_12c = (int *)0x5a1068;
      FUN_00878dfb();
    }
    uVar6 = FUN_0042d476();
    if (1 < uVar6) {
      piStack_130 = (int *)(unaff_EBP + -0x10);
      *(int ***)(unaff_EBP + 8) = &piStack_12c;
      piStack_134 = (int *)0x5a1087;
      piStack_12c = extraout_ECX_02;
      FUN_0041160e();
      piStack_130 = (int *)0x5a108c;
      FUN_005a8715();
    }
    if (*(int *)(unaff_EBP + -0x5c) != 0) {
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
      piStack_12c = (int *)0x5a10a5;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,*(IBinding **)(unaff_EBP + -0x10));
      if (*(int *)(unaff_EBP + -0x6c) != 0) {
        *(int ***)(unaff_EBP + 8) = &piStack_12c;
        piStack_130 = (int *)0x1;
        piStack_134 = *(int **)(unaff_EBP + -0x4c);
        puStack_14c = (undefined1 *)(unaff_EBP + -0x10);
        piStack_138 = (int *)0xff;
        puStack_13c = *(undefined1 **)(unaff_EBP + -0x2c);
        puStack_140 = *(undefined1 **)(unaff_EBP + -0x44);
        iStack_144 = *(int *)(unaff_EBP + -0x6c);
        *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffeb8;
        iStack_150 = 0x5a10d6;
        piStack_12c = extraout_ECX_03;
        FUN_0041160e();
        puStack_14c = (undefined1 *)0x5a10dd;
        FUN_005a3a5d();
      }
    }
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      FUN_005aa0de();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_12c = (int *)0x5a1107;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_12c = (int *)0x5a1112;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_12c = (int *)0x5a111f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x58) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_12c = (int *)0x5a112f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_12c = (int *)0x5a113f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_12c = (int *)0x5a114f;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x10);
      FUN_0042fb34();
      FUN_00404abb();
      piStack_12c = (int *)0x5a1174;
      iVar4 = FUN_0042fb0a();
      piStack_12c = (int *)0x5a117e;
      iVar7 = FUN_00404a94();
      piStack_12c = (int *)(iVar4 + iVar7);
      piStack_130 = (int *)0x5a1189;
      piStack_130 = (int *)FUN_00404abb();
      piStack_134 = (int *)0x5a1192;
      piStack_134 = (int *)FUN_00404a94();
      piStack_138 = (int *)(iVar2 + 0x10);
      puStack_13c = (undefined1 *)0x5a119d;
      (*DAT_0097b504)();
      puStack_13c = (undefined1 *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_140;
      iStack_144 = 0x5c1;
      puStack_14c = (undefined1 *)0x5a11b3;
      FUN_00679e4e();
      iStack_144 = unaff_EBP + -0xc4;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_0040263d();
      puStack_140 = (undefined1 *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iStack_144 = 0x5a11d7;
      puStack_13c = (undefined1 *)FUN_00412550();
      puStack_140 = (undefined1 *)0x5a11e2;
      FUN_00424e27();
      puStack_140 = (undefined1 *)0x5a11e9;
      iVar2 = FUN_0042fb0a();
      puStack_140 = (undefined1 *)-iVar2;
      puStack_14c = (undefined1 *)&iStack_144;
      *(int **)(unaff_EBP + -0x14) = &iStack_144;
      iStack_150 = 0x5a11ff;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      puStack_14c = (undefined1 *)0x5a120f;
      FUN_0040263d();
      puStack_14c = (undefined1 *)0x5a1216;
      iStack_144 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      puStack_140 = (undefined1 *)FUN_00412550();
      iStack_144 = 0x5a122b;
      iStack_144 = FUN_005a9f7a();
      iStack_144 = iStack_144 + 0x10;
      (*DAT_0097b54c)();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      puStack_14c = (undefined1 *)0x5a1242;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_14c = (undefined1 *)0x5a124d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_14c = (undefined1 *)0x5a125d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_14c = (undefined1 *)0x5a1268;
        FUN_00878dfb();
      }
      puStack_14c = (undefined1 *)0x0;
      iStack_150 = 0x5a1276;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_14c = (undefined1 *)0x5a1289;
        FUN_00878dfb();
      }
      puStack_14c = (undefined1 *)(unaff_EBP + -0x18);
      iStack_150 = 0x5a129c;
      puVar8 = (undefined4 *)FUN_00425067();
      puStack_14c = (undefined1 *)0x5a12a9;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x24) + 4),(IBinding *)*puVar8);
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_14c = (undefined1 *)0x5a12b6;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_14c = (undefined1 *)0x5a12c6;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_14c = (undefined1 *)0x5a12d1;
        FUN_00878dfb();
      }
      puStack_14c = (undefined1 *)0x0;
      iStack_150 = 0x5a12df;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_14c = (undefined1 *)0x5a12f2;
        FUN_00878dfb();
      }
      puStack_14c = (undefined1 *)(unaff_EBP + -0x18);
      iStack_150 = 0x5a1305;
      FUN_0041141a();
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_14c = (undefined1 *)0x5a1312;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_14c = (undefined1 *)0x5a1322;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_14c = (undefined1 *)0x5a132d;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      puStack_14c = (undefined1 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_150 = 0x5a1344;
      piVar1 = (int *)FUN_00679d86();
      iStack_150 = *piVar1;
      puStack_14c = (undefined1 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00402676();
      puStack_14c = (undefined1 *)0x5a1373;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
      puStack_14c = (undefined1 *)(unaff_EBP + -0xb4);
      iStack_150 = 0x5a1385;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        puStack_14c = (undefined1 *)0x5a1391;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      puStack_14c = (undefined1 *)0x5a139e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
      puStack_14c = (undefined1 *)(unaff_EBP + -0x94);
      iStack_150 = 0x5a13ab;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        puStack_14c = (undefined1 *)0x5a13b7;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x24);
      iVar4 = *(int *)(iVar2 + 4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      if (iVar4 == 0) {
        puStack_14c = (undefined1 *)0x5a13d1;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(*(int *)(unaff_EBP + -0x24) + 4) == 0) {
        puStack_14c = (undefined1 *)0x5a13ec;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_14c = (undefined1 *)0x5a13fe;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x2c) = piVar1;
      uVar3 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      uVar3 = FUN_0040e48b();
      iStack_150 = *(int *)(unaff_EBP + -0xb0);
      puStack_14c = *(undefined1 **)(unaff_EBP + -0xac);
      piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))
                                (*(undefined4 *)(unaff_EBP + -0x2c),uVar3,
                                 *(undefined4 *)(unaff_EBP + -0x18),
                                 *(undefined4 *)(unaff_EBP + -0x94),
                                 *(undefined4 *)(unaff_EBP + -0x90),
                                 *(undefined4 *)(unaff_EBP + -0x8c),
                                 *(undefined4 *)(unaff_EBP + -0x88),
                                 *(undefined4 *)(unaff_EBP + -0xb4));
      if ((int)piVar1 < 0) {
        piStack_12c = *(int **)(unaff_EBP + -0x2c);
        piStack_134 = (int *)0x5a1452;
        piStack_130 = piVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      piStack_12c = (int *)0x5a1462;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a146d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piStack_12c = (int *)0x5a147d;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a1488;
        FUN_00878dfb();
      }
      piStack_12c = (int *)0x5a1497;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
      piStack_12c = (int *)(unaff_EBP + -0x84);
      piStack_130 = (int *)0x5a14a9;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a14b5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      piStack_12c = (int *)0x5a14c2;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
      piStack_12c = (int *)(unaff_EBP + -0x94);
      piStack_130 = (int *)0x5a14cf;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a14db;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      piStack_12c = (int *)0x5a14e8;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
      piStack_12c = (int *)(unaff_EBP + -0xb4);
      piStack_130 = (int *)0x5a14f5;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a1503;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      piStack_12c = (int *)0x5a1510;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      piStack_12c = (int *)0x5a1520;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_12c = (int *)0x5a1533;
        FUN_00878dfb();
      }
      piStack_12c = (int *)(unaff_EBP + -0x94);
      piStack_130 = (int *)(unaff_EBP + -0xb4);
      piStack_134 = (int *)(unaff_EBP + -0x40);
      piStack_138 = (int *)(unaff_EBP + -0xc4);
      puStack_13c = *(undefined1 **)(unaff_EBP + 8);
      puStack_140 = (undefined1 *)(unaff_EBP + -0xd4);
      iStack_144 = 0x5a1565;
      FUN_004250ac();
      piStack_12c = (int *)0x5a1571;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a157c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      piStack_12c = (int *)0x5a158c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a1597;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      piStack_12c = (int *)0x5a15a4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a15af;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      piStack_12c = (int *)0x5a15bf;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a15ca;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      piStack_12c = (int *)0x5a15da;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a15e5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piStack_12c = (int *)0x5a15f5;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a1600;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x24);
      piStack_12c = (int *)(unaff_EBP + -0x18);
      piStack_130 = (int *)0x5a1613;
      puVar8 = (undefined4 *)FUN_00679d86();
      piStack_130 = (int *)*puVar8;
      piStack_12c = (int *)(iVar2 + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      piStack_134 = (int *)0x5a1624;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00402676();
      piStack_12c = (int *)0x5a163e;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24),
                 *(IBinding **)(unaff_EBP + -0x10));
      piStack_134 = (int *)&piStack_12c;
      *(int ***)(unaff_EBP + -0x14) = &piStack_12c;
      piStack_130 = (int *)0x1072;
      piStack_138 = (int *)0x5a1656;
      FUN_00679e4e();
      piStack_130 = (int *)(unaff_EBP + -0xd4);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piStack_134 = (int *)0x5a1669;
      FUN_0040263d();
      piStack_134 = (int *)0x5a1670;
      piStack_12c = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      piStack_130 = (int *)0x5a167a;
      uVar3 = FUN_00412550();
      iVar2 = FUN_005a9f7a();
      *(undefined4 *)(iVar2 + 0x20) = uVar3;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piStack_12c = (int *)0x5a1699;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_12c = (int *)0x5a16a4;
        FUN_00878dfb();
      }
      piStack_12c = (int *)0x5a16b2;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x24) + 0xc),*(IBinding **)(unaff_EBP + -0x20));
      *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x24) = 1;
      piStack_12c = (int *)0x5a16ce;
      FUN_005a9f14();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        piStack_12c = (int *)0x5a16df;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        piStack_12c = (int *)0x5a16f1;
        FUN_005aa185();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_12c = (int *)0x5a1702;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      piStack_12c = (int *)0x5a1713;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    piStack_12c = (int *)0x5a1723;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_12c = (int *)0x5a1732;
      FUN_00878dfb();
    }
  }
  else {
    *(char **)(unaff_EBP + -0x50) = pcVar5;
    piStack_12c = (int *)(unaff_EBP + -0x50);
    piStack_130 = (int *)0x5a174a;
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
        piStack_12c = (int *)0x0;
        piStack_130 = (int *)0xa90;
        piStack_134 = (int *)(unaff_EBP + -0xa4);
        piStack_138 = (int *)0x5a1776;
        FUN_00679d86();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
        piStack_130 = *(int **)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        piStack_134 = (int *)0x5a1788;
        piStack_134 = (int *)FUN_00411641();
        piStack_138 = (int *)(unaff_EBP + -0x4c);
        puStack_13c = (undefined1 *)0x5a1792;
        FUN_0041354c();
        piStack_130 = (int *)0x5a179c;
        piStack_134 = (int *)FUN_00411641();
        *(int ***)(unaff_EBP + -0x24) = &piStack_130;
        piStack_138 = (int *)0x5a17a8;
        FUN_004033a1();
        piStack_134 = (int *)(unaff_EBP + -0xd4);
        *(undefined4 *)(unaff_EBP + -4) = 0x44;
        piStack_138 = (int *)0x5a17be;
        FUN_0040263d();
        piStack_138 = (int *)0x5a17c5;
        FUN_004048a4();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
        *(undefined4 *)(unaff_EBP + -4) = 0x46;
        piStack_130 = (int *)0x5a17d7;
        iVar2 = FUN_004032b4();
      }
      *(int *)(unaff_EBP + -0x50) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      if (iVar2 != 0) {
        piStack_12c = (int *)0x5a17f2;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          piStack_12c = (int *)0x5a1803;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x49;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        piStack_12c = (int *)0x5a1820;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_12c = (int *)0x5a182b;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x48;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
        FUN_00402676();
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) break;
      piStack_12c = (int *)0x5a185a;
      iVar2 = FUN_005aa21b();
      piStack_130 = (int *)&stack0xfffffed8;
      *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffed8;
      piStack_12c = (int *)0x477;
      piStack_134 = (int *)0x5a186f;
      FUN_00679e4e();
      piStack_12c = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      piStack_130 = (int *)0x5a187f;
      FUN_0040263d();
      piStack_130 = (int *)0x5a1886;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_12c = (int *)0x5a18a3;
      FUN_00402e8e();
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        piStack_12c = (int *)0x5a18b7;
        InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x2c) + 8));
      }
      FUN_00402fa6();
      iVar4 = *(int *)(unaff_EBP + -0x2c);
      *(int *)(iVar2 + 4) = iVar4;
      if (iVar4 != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
      iVar4 = unaff_EBP + -0x40;
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      piStack_12c = (int *)0x5a18dd;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        piStack_12c = (int *)0x5a18e8;
        FUN_00878dfb();
        iVar4 = extraout_ECX_04;
      }
      if (*(int *)(unaff_EBP + -0x5c) == 0) {
        piStack_12c = (int *)0x0;
      }
      else {
        piStack_12c = *(int **)(*(int *)(unaff_EBP + -0x54) + 200);
      }
      piStack_130 = *(int **)(unaff_EBP + -0x6c);
      piStack_134 = *(int **)(unaff_EBP + -0x70);
      piStack_138 = *(int **)(unaff_EBP + -0x74);
      puStack_13c = *(undefined1 **)(unaff_EBP + -0x68);
      puStack_140 = *(undefined1 **)(unaff_EBP + -100);
      iStack_144 = *(int *)(unaff_EBP + -0x58);
      puStack_14c = *(undefined1 **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x24) = &iStack_150;
      iStack_150 = iVar4;
      FUN_00424dbc(unaff_EBP + -0x20);
      piVar1 = (int *)FUN_005a1a4d(unaff_EBP + -0x9c);
      piVar1 = (int *)*piVar1;
      piVar9 = *(int **)(iVar2 + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      if (piVar9 != piVar1) {
        *(int *)(iVar2 + 8) = (int)piVar1;
        FUN_00424ed4();
        if (piVar9 != (int *)0x0) {
          piStack_12c = (int *)0x5a1956;
          (**(code **)(*piVar9 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (*(int **)(unaff_EBP + -0x9c) != (int *)0x0) {
        piStack_12c = (int *)0x5a196c;
        (**(code **)(**(int **)(unaff_EBP + -0x9c) + 8))();
      }
      if (*(int *)(iVar2 + 8) == 0) {
        piStack_12c = (int *)0x5a197a;
        FUN_00878dfb();
      }
      piStack_12c = (int *)0x5a198a;
      piVar1 = (int *)FUN_004113e5();
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (iVar2 == 0) {
        piStack_12c = (int *)0x5a199e;
        FUN_00878dfb();
      }
      piVar1 = (int *)*piVar1;
      piStack_12c = (int *)0x0;
      piStack_134 = (int *)0x5a19a8;
      piStack_130 = piVar1;
      piVar9 = (int *)(**(code **)(*piVar1 + 0x40))();
      if ((int)piVar9 < 0) {
        piStack_134 = (int *)0x5a19b8;
        piStack_130 = piVar9;
        piStack_12c = piVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (*(int **)(unaff_EBP + -0x98) != (int *)0x0) {
        piStack_12c = (int *)0x5a19cc;
        (**(code **)(**(int **)(unaff_EBP + -0x98) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        piStack_12c = (int *)0x5a19dd;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00402676();
      *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_12c = (int *)0x5a1a1f;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    piStack_12c = (int *)0x5a1a3c;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
LAB_005a1a3c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


