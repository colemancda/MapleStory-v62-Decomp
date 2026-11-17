/* FUN_006d9364 - 0x006d9364 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d9364(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int iVar7;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int unaff_EBP;
  uint uVar8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 *puStack_198;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  undefined1 *puStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  int *piStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined1 *puStack_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  int *piStack_154;
  int iStack_150;
  int iStack_14c;
  undefined1 *puStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 *puStack_138;
  int *piStack_134;
  undefined1 *puStack_130;
  int iStack_12c;
  undefined1 *puStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined1 *puStack_ec;
  int iStack_e8;
  undefined4 *puStack_e4;
  int iStack_e0;
  undefined4 *puStack_dc;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x638);
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(extraout_ECX + 0x570);
  }
  puStack_dc = (undefined4 *)0x3;
  iStack_e0 = -2;
  puStack_e4 = (undefined4 *)0x6d93a7;
  FUN_004031b7();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_e0 = 0x6d93b5;
  piVar1 = (int *)FUN_004489f5();
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    iStack_e0 = 0x6d93c9;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_e0 = unaff_EBP + -0x10;
  puStack_e4 = (undefined4 *)0x6d93d8;
  FUN_0041141a();
  puStack_dc = (undefined4 *)0x6d93e0;
  FUN_004125e6();
  puStack_dc = (undefined4 *)0x6d93e8;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_e0 = 0x6d93f5;
  puVar2 = (undefined4 *)FUN_00402bc3();
  puVar6 = puStack_dc;
  if ((int)puVar2 < 0) {
    iStack_e0 = 0x6d9400;
    puStack_dc = puVar2;
    FUN_00878dfb();
    puVar6 = extraout_ECX_00;
  }
  puStack_dc = (undefined4 *)0x0;
  iStack_e0 = 0;
  puStack_ec = (undefined1 *)&puStack_e4;
  *(undefined4 ***)(unaff_EBP + -0xa0) = &puStack_e4;
  iStack_e8 = 0x3b4;
  puStack_e4 = puVar6;
  FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_e8 = unaff_EBP + -0x2c;
  puStack_ec = (undefined1 *)0x6d9430;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x6d9437;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  puStack_e4 = (undefined4 *)0x6d9445;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  if (iVar3 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x10);
    iStack_e0 = 0x6d9461;
    puStack_dc = (undefined4 *)FUN_00404b30();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      iStack_e0 = 0x6d9472;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_e0 = 0x6d947f;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d948a;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x6c6;
  iStack_e0 = unaff_EBP + -0x50;
  puStack_e4 = (undefined4 *)0x6d949a;
  puStack_dc = (undefined4 *)FUN_00679d22();
  puStack_dc = (undefined4 *)*puStack_dc;
  iStack_e0 = *(int *)(extraout_ECX + 0x62c);
  puStack_e4 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_e8 = 0x6d94b5;
  puStack_dc = (undefined4 *)FUN_00550c58();
  puStack_dc = (undefined4 *)*puStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_e0 = 0x6d94c3;
  FUN_00432cfc();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x38) + -0xc);
    iStack_e0 = 0x6d94d7;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x50) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x50) + -0xc);
    iStack_e0 = 0x6d94ec;
    FUN_00434e38();
  }
  puStack_dc = (undefined4 *)0x6c7;
  iStack_e0 = unaff_EBP + -0x1c;
  puStack_e4 = (undefined4 *)0x6d94fd;
  puStack_dc = (undefined4 *)FUN_00679d22();
  puStack_dc = (undefined4 *)*puStack_dc;
  iStack_e0 = *(int *)(extraout_ECX + 0x62c);
  puStack_e4 = (undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_e8 = 0x6d9518;
  puStack_dc = (undefined4 *)FUN_00550c58();
  puStack_dc = (undefined4 *)*puStack_dc;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x6d9526;
  FUN_00432cfc();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_dc = extraout_ECX_01;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_e0 = 0x6d953a;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_e0 = 0x6d954f;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  puStack_e4 = &puStack_dc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_dc;
  iStack_e0 = 0x6c8;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_e8 = 0x6d956a;
  FUN_00679e4e();
  iStack_e0 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_e4 = (undefined4 *)0x6d9580;
  FUN_0040263d();
  puStack_e4 = (undefined4 *)0x6d9587;
  psVar4 = (short *)FUN_004048a4();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x9c);
  *(bool *)(unaff_EBP + -0x69) = *psVar4 != 0;
  iStack_e0 = 0x6d959a;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d95a5;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + -0x69) != '\0') {
    puStack_dc = (undefined4 *)0x6c9;
    iStack_e0 = unaff_EBP + -0x50;
    puStack_e4 = (undefined4 *)0x6d95c4;
    FUN_00679d86();
    puStack_e4 = &puStack_dc;
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_dc;
    iStack_e0 = 0x6c8;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_e8 = 0x6d95db;
    FUN_00679e4e();
    iStack_e0 = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_e4 = (undefined4 *)0x6d95f1;
    FUN_0040263d();
    puStack_e4 = (undefined4 *)0x6d95f8;
    puStack_dc = (undefined4 *)FUN_004048a4();
    iStack_e0 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_e4 = (undefined4 *)0x6d9606;
    FUN_00405a23();
    puStack_e4 = (undefined4 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_e8 = 0x6d9616;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x6d9623;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)0x6ca;
    iStack_e0 = unaff_EBP + -0x1c;
    puStack_e4 = (undefined4 *)0x6d9633;
    puStack_dc = (undefined4 *)FUN_00679d86();
    puStack_dc = (undefined4 *)*puStack_dc;
    if (*(int **)(unaff_EBP + -0x38) == (int *)0x0) {
      iStack_e0 = 0;
    }
    else {
      iStack_e0 = **(int **)(unaff_EBP + -0x38);
    }
    puStack_e4 = (undefined4 *)0x6d9649;
    uVar5 = FUN_0087c71f();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
      iStack_e0 = 0x6d965e;
      FUN_00403384();
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(undefined4 **)(unaff_EBP + -0x38) == (undefined4 *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + -0x38);
      }
      puStack_dc = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_e0 = 0x6d9683;
      puStack_dc = (undefined4 *)FUN_0087a007();
      iStack_e0 = *(int *)(unaff_EBP + -0x10);
      puStack_e4 = (undefined4 *)0x6d9690;
      FUN_0046febf();
      puStack_dc = &DAT_00980690;
      iStack_e0 = 0x6d9699;
      FUN_00403191();
      puStack_dc = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_e0 = 0x6d96a6;
      FUN_00403191();
      puStack_dc = (undefined4 *)0x0;
      iStack_e0 = 0;
      puStack_e4 = (undefined4 *)(unaff_EBP + -0x48);
      iStack_e8 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_ec = (undefined1 *)0x6d96be;
      FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_ec;
      puStack_ec = extraout_ECX_02;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_e4 = (undefined4 *)0x6d96f0;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
      puStack_dc = (undefined4 *)(unaff_EBP + -0x1c);
      iStack_e0 = 0x6d96ff;
      puStack_dc = (undefined4 *)FUN_0041a581();
      if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
        iStack_e0 = 0x6d9710;
        FUN_00878dfb();
      }
      puStack_dc = (undefined4 *)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_e0 = 0x6d971d;
      puStack_dc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_dc < 0) {
        iStack_e0 = 0x6d9728;
        FUN_00878dfb();
      }
      puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_e0 = 0x6d9735;
      puStack_dc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_dc < 0) {
        iStack_e0 = 0x6d9740;
        FUN_00878dfb();
      }
      puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_e0 = 0x6d974d;
      puStack_dc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_dc < 0) {
        iStack_e0 = 0x6d9758;
        FUN_00878dfb();
      }
    }
    puStack_dc = (undefined4 *)0x6d9760;
    FUN_00402fa6();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int *)(unaff_EBP + -0x50) != 0) {
      puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x50) + -0xc);
      iStack_e0 = 0x6d9774;
      FUN_00403384();
    }
  }
  puStack_dc = (undefined4 *)0x584;
  iStack_e0 = unaff_EBP + -0x1c;
  puStack_e4 = (undefined4 *)0x6d9785;
  puVar6 = (undefined4 *)FUN_00679d86();
  puStack_e4 = (undefined4 *)*puVar6;
  iStack_e0 = extraout_ECX + 0x624;
  puStack_dc = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_e8 = 0x6d979a;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_e0 = 0x6d97b1;
    FUN_00403384();
  }
  puStack_dc = (undefined4 *)0x585;
  iStack_e0 = unaff_EBP + -0x1c;
  puStack_e4 = (undefined4 *)0x6d97c2;
  puStack_dc = (undefined4 *)FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_e0 = 0x6d97cf;
  FUN_0044f5f6();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_e0 = -1;
  puStack_e4 = (undefined4 *)0xc;
  *(int **)(unaff_EBP + -0x18) = &iStack_e8;
  puStack_ec = (undefined1 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_ec = (undefined1 *)0x6d97fa;
  FUN_0044974c();
  puStack_ec = (undefined1 *)0x6d9801;
  FUN_004503f9();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_e0 = 0x6d980e;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d9819;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_dc = (undefined4 *)0x6d9825;
  FUN_00402fa6();
  puStack_dc = (undefined4 *)0x584;
  iStack_e0 = unaff_EBP + -0x1c;
  puStack_e4 = (undefined4 *)0x6d9835;
  puVar6 = (undefined4 *)FUN_00679d86();
  puStack_e4 = (undefined4 *)*puVar6;
  iStack_e0 = extraout_ECX + 0x628;
  puStack_dc = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_e8 = 0x6d984a;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_e0 = 0x6d9861;
    FUN_00403384();
  }
  puStack_dc = (undefined4 *)0x585;
  iStack_e0 = unaff_EBP + -0x1c;
  puStack_e4 = (undefined4 *)0x6d9872;
  puStack_dc = (undefined4 *)FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_e0 = 0x6d987f;
  FUN_0044f5f6();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_e0 = -0xad8a64;
  puStack_e4 = (undefined4 *)0xc;
  *(int **)(unaff_EBP + -0x18) = &iStack_e8;
  puStack_ec = (undefined1 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puStack_ec = (undefined1 *)0x6d98ad;
  FUN_0044974c();
  puStack_ec = (undefined1 *)0x6d98b4;
  FUN_004503f9();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_e0 = 0x6d98c1;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d98cc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_dc = (undefined4 *)0x6d98d8;
  FUN_00402fa6();
  puStack_dc = (undefined4 *)0x584;
  iStack_e0 = unaff_EBP + -0x1c;
  puStack_e4 = (undefined4 *)0x6d98e8;
  puVar6 = (undefined4 *)FUN_00679d86();
  puStack_e4 = (undefined4 *)*puVar6;
  iStack_e0 = extraout_ECX + 0x620;
  puStack_dc = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_e8 = 0x6d98fd;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_e0 = 0x6d9914;
    FUN_00403384();
  }
  puStack_dc = &DAT_00980690;
  iStack_e0 = 0x6d991e;
  FUN_00403191();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_e0 = -0x1000000;
  puStack_e4 = (undefined4 *)0xc;
  *(int **)(unaff_EBP + -0x18) = &iStack_e8;
  puStack_ec = (undefined1 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  puStack_ec = (undefined1 *)0x6d994c;
  FUN_0044974c();
  puStack_ec = (undefined1 *)0x6d9953;
  FUN_004503f9();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_e0 = 0x6d9960;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d996b;
    FUN_00878dfb();
  }
  puStack_dc = &DAT_00980690;
  iStack_e0 = 0x6d9974;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if ((*(int *)(unaff_EBP + -0x70) == 0) || (*(int *)(unaff_EBP + -0x54) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x28;
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  puStack_e4 = (undefined4 *)(unaff_EBP + -0x5c);
  *(int **)(unaff_EBP + -0x18) = &iStack_e0;
  iStack_e8 = 0x6d99a9;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  puStack_e4 = (undefined4 *)0x6d99b8;
  FUN_0044974c();
  puStack_e4 = (undefined4 *)0x6d99bf;
  iVar3 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 5 + iVar3;
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_e0 = 0x6d99d6;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d99e1;
    FUN_00878dfb();
  }
  puStack_dc = &DAT_00980690;
  iStack_e0 = 0x6d99ea;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if ((*(int *)(unaff_EBP + -0x70) == 0) || (*(int *)(unaff_EBP + -0x54) != 0)) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x38) = 0x28;
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  puStack_e4 = (undefined4 *)(unaff_EBP + -0x58);
  *(int **)(unaff_EBP + -0x18) = &iStack_e0;
  iStack_e8 = 0x6d9a1f;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_e4 = (undefined4 *)0x6d9a2e;
  FUN_0044974c();
  puStack_e4 = (undefined4 *)0x6d9a35;
  iVar3 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 5 + iVar3;
  puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_e0 = 0x6d9a4c;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6d9a57;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x38);
  if (iVar3 < *(int *)(unaff_EBP + -0x10)) {
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  iVar7 = *(int *)(extraout_ECX + 0x578);
  *(int *)(unaff_EBP + -0x50) = iVar3;
  if (iVar3 <= iVar7) {
    *(int *)(unaff_EBP + -0x50) = iVar7;
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0xa8);
  iStack_e0 = unaff_EBP + -0x88;
  puStack_e4 = (undefined4 *)(unaff_EBP + -0x8c);
  iStack_e8 = *(int *)(extraout_ECX + 0x554);
  puStack_ec = (undefined1 *)0x6d9a98;
  FUN_0047c974();
  iVar3 = *(int *)(unaff_EBP + -0x54);
  if (iVar3 == 0) {
    iVar3 = *(int *)(unaff_EBP + -0x50) + 0xc;
    if (iVar3 < 0x79) {
      iVar3 = 0x78;
    }
    *(int *)(extraout_ECX + 0x1c) = iVar3;
    iVar3 = *(int *)(extraout_ECX + 0x57c) + 0x57;
LAB_006d9af5:
    *(int *)(extraout_ECX + 0x20) = iVar3;
  }
  else {
    if (iVar3 == 1) {
      iVar3 = *(int *)(extraout_ECX + 0x578) + 0xc;
      if (iVar3 < 0x79) {
        iVar3 = 0x78;
      }
      *(int *)(extraout_ECX + 0x1c) = iVar3;
      iVar3 = *(int *)(extraout_ECX + 0x57c) + 0x2b;
      goto LAB_006d9af5;
    }
    if (iVar3 == 2) {
      *(int *)(extraout_ECX + 0x1c) =
           *(int *)(unaff_EBP + -0x38) + 0x50 + *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(extraout_ECX + 0x20) = 0x14;
    }
  }
  iVar3 = *(int *)(extraout_ECX + 0x1c);
  iVar7 = 0x14 - iVar3;
  if (*(int *)(unaff_EBP + -0x8c) < iVar7) {
    *(int *)(unaff_EBP + -0x8c) = iVar7;
  }
  iVar7 = 0x14 - *(int *)(extraout_ECX + 0x20);
  if (*(int *)(unaff_EBP + -0x88) < iVar7) {
    *(int *)(unaff_EBP + -0x88) = iVar7;
  }
  if (0x30c < *(int *)(unaff_EBP + -0x8c)) {
    *(undefined4 *)(unaff_EBP + -0x8c) = 0x30c;
  }
  if (0x244 < *(int *)(unaff_EBP + -0x88)) {
    *(undefined4 *)(unaff_EBP + -0x88) = 0x244;
  }
  iVar7 = *(int *)(extraout_ECX + 0x578);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(extraout_ECX + 0x5a4) = (iVar3 - iVar7) / 2;
  puStack_dc = (undefined4 *)0x3af;
  iStack_e0 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  puStack_e4 = (undefined4 *)0x6d9b71;
  puVar6 = (undefined4 *)FUN_00679d86();
  puStack_e4 = (undefined4 *)*puVar6;
  puStack_dc = (undefined4 *)0x0;
  iStack_e0 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_e8 = 0x6d9b83;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  puStack_dc = (undefined4 *)0x6d9b92;
  FUN_00402676();
  puStack_dc = &DAT_00980690;
  iStack_e0 = 0x6d9b9b;
  FUN_00403191();
  puStack_dc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_e0 = 0x6d9ba8;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (piVar1 == (int *)0x0) {
    puStack_dc = (undefined4 *)0x80004003;
    iStack_e0 = 0x6d9bbd;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iStack_e8 = *(int *)(unaff_EBP + -0x48);
  puStack_e4 = *(undefined4 **)(unaff_EBP + -0x44);
  iStack_e0 = *(int *)(unaff_EBP + -0x40);
  puStack_dc = *(undefined4 **)(unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x1c);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_ec = *(undefined1 **)(unaff_EBP + -0x20);
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x70))();
  if (iVar3 < 0) {
    iStack_11c = 0x6d9c62;
    FUN_00878e09();
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x1c) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x78))();
  if (iVar3 < 0) {
    iStack_11c = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_124 = 0x6d9c8e;
    iStack_120 = iVar3;
    FUN_00878e09();
  }
  iStack_11c = 0x6d9c97;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_11c = 0x6d9ca4;
  FUN_00403191();
  iStack_11c = 0;
  iStack_120 = unaff_EBP + -0x48;
  iStack_124 = unaff_EBP + -0x2c;
  puStack_130 = (undefined1 *)&puStack_128;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_128;
  iStack_12c = 0x759;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_134 = (int *)0x6d9cca;
  FUN_00679e4e();
  iStack_12c = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  puStack_130 = (undefined1 *)0x6d9cda;
  FUN_00405a1d();
  puStack_130 = (undefined1 *)0x6d9ce1;
  FUN_00402660();
  puStack_130 = (undefined1 *)0x6d9ce8;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_120 = 0x6d9cf3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  if (iVar3 != 0) {
    iStack_11c = 0x6d9d09;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_11c = 0x6d9d1a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_11c = 0x6d9d2a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6d9d35;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_11c = 0x6d9d42;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6d9d4d;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_11c = 0x6d9d5a;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_11c = 0x6d9d65;
    FUN_00878dfb();
    iVar3 = extraout_ECX_03;
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    iStack_11c = unaff_EBP + -0xa0;
    iStack_120 = 0x6da100;
    iStack_124 = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
  }
  else {
    if (*(int *)(unaff_EBP + -0x54) != 1) {
      iStack_11c = 0;
      puStack_128 = (undefined1 *)&iStack_120;
      *(int **)(unaff_EBP + -0x18) = &iStack_120;
      iStack_124 = 0x5ad;
      iStack_12c = 0x6d9d97;
      iStack_120 = iVar3;
      FUN_00679e4e();
      iStack_124 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_128 = (undefined1 *)0x6d9daa;
      FUN_0040263d();
      puStack_128 = (undefined1 *)0x6d9db1;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x96;
      iStack_120 = 0x6d9dbc;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
      iStack_11c = 0x6d9dcb;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_11c = 0x6d9ddc;
        FUN_00878dfb();
      }
      iVar3 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_11c = 0x6d9dec;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_11c = 0x6d9df7;
        FUN_00878dfb();
        iVar3 = extraout_ECX_04;
      }
      iStack_11c = 0;
      puStack_128 = (undefined1 *)&iStack_120;
      *(int **)(unaff_EBP + -0x18) = &iStack_120;
      iStack_124 = 0x578;
      iStack_12c = 0x6d9e0c;
      iStack_120 = iVar3;
      FUN_00679e4e();
      iStack_124 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_128 = (undefined1 *)0x6d9e1f;
      FUN_0040263d();
      puStack_128 = (undefined1 *)0x6d9e26;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x98;
      iStack_120 = 0x6d9e31;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
      iStack_11c = 0x6d9e40;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_11c = 0x6d9e51;
        FUN_00878dfb();
      }
      iVar3 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_11c = 0x6d9e61;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_11c = 0x6d9e6c;
        FUN_00878dfb();
        iVar3 = extraout_ECX_05;
      }
      iStack_11c = 0;
      puStack_128 = (undefined1 *)&iStack_120;
      *(int **)(unaff_EBP + -0x18) = &iStack_120;
      iStack_124 = 0x577;
      iStack_12c = 0x6d9e81;
      iStack_120 = iVar3;
      FUN_00679e4e();
      iStack_124 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_128 = (undefined1 *)0x6d9e94;
      FUN_0040263d();
      puStack_128 = (undefined1 *)0x6d9e9b;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x9a;
      iStack_120 = 0x6d9ea6;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
      iStack_11c = 0x6d9eb5;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_11c = 0x6d9ec6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00404892();
      iStack_11c = 0xb4;
      iStack_120 = 0x6d9ee5;
      FUN_004295f1();
      *(undefined1 *)(unaff_EBP + -4) = 0x9b;
      iStack_11c = 0x6d9ef5;
      iStack_11c = FUN_004458be();
      iStack_120 = 0;
      iStack_124 = 0;
      puStack_128 = (undefined1 *)0x6d9f02;
      FUN_004115d9();
      puStack_128 = (undefined1 *)0x6d9f09;
      FUN_00470739();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00404892();
      iStack_11c = 0xb4;
      iStack_120 = 0x6d9f20;
      FUN_004295f1();
      *(undefined1 *)(unaff_EBP + -4) = 0x9c;
      iStack_11c = 0x6d9f30;
      iStack_11c = FUN_004458be();
      iStack_120 = 0;
      iStack_124 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -4;
      puStack_128 = (undefined1 *)0x6d9f45;
      FUN_004115d9();
      puStack_128 = (undefined1 *)0x6d9f4c;
      FUN_00470739();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00404892();
      iStack_11c = 0;
      puStack_128 = (undefined1 *)&iStack_120;
      *(int **)(unaff_EBP + -0x18) = &iStack_120;
      iStack_124 = 0x579;
      iStack_12c = 0x6d9f6f;
      FUN_00679e4e();
      iStack_124 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_128 = (undefined1 *)0x6d9f82;
      FUN_0040263d();
      puStack_128 = (undefined1 *)0x6d9f89;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x9e;
      iStack_120 = 0x6d9f94;
      uVar5 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
      iStack_11c = 0x6d9fa3;
      FUN_00503a3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00404892();
      iVar3 = 8;
      if (8 < *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -4) {
        do {
          iStack_11c = 0xb4;
          iStack_120 = 0x6d9fcd;
          FUN_004295f1();
          *(undefined1 *)(unaff_EBP + -4) = 0x9f;
          iStack_11c = 0x6d9fdd;
          iStack_11c = FUN_004458be();
          iStack_120 = 0;
          puStack_128 = (undefined1 *)0x6d9fe9;
          iStack_124 = iVar3;
          FUN_004115d9();
          puStack_128 = (undefined1 *)0x6d9ff0;
          FUN_00470739();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          FUN_00404892();
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -4);
      }
      iStack_11c = 0x6da013;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xa0;
      iStack_11c = 0x6da020;
      FUN_00424aee();
      iStack_11c = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0xa1;
      iStack_120 = 0x6da03c;
      iStack_120 = FUN_00449749();
      puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x18) = &iStack_124;
      iStack_12c = 0x6da04c;
      FUN_004059fd();
      puStack_128 = (undefined1 *)0x3;
      iStack_12c = 6;
      *(undefined1 *)(unaff_EBP + -4) = 0xa1;
      puStack_130 = (undefined1 *)0x6da05c;
      FUN_004115d9();
      puStack_130 = (undefined1 *)0x6da063;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0xa0;
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00404892();
      iStack_11c = 0x6da084;
      FUN_00424aee();
      *(undefined1 *)(unaff_EBP + -4) = 0xa3;
      iStack_11c = 0x6da091;
      FUN_00424aee();
      iStack_11c = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0xa4;
      iStack_120 = 0x6da0a4;
      iStack_120 = FUN_00449749();
      puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x18) = &iStack_124;
      iStack_12c = 0x6da0b4;
      iStack_124 = extraout_ECX_06;
      FUN_004059fd();
      puStack_128 = (undefined1 *)0x3;
      iStack_12c = *(int *)(unaff_EBP + -0x38) + 7;
      *(undefined1 *)(unaff_EBP + -4) = 0xa4;
      puStack_130 = (undefined1 *)0x6da0c9;
      FUN_004115d9();
      puStack_130 = (undefined1 *)0x6da0d0;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0xa3;
      FUN_00404892();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00404892();
      goto LAB_006db7f9;
    }
    iStack_11c = unaff_EBP + -0xa4;
    iStack_120 = 0x6da120;
    iStack_124 = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x30) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0x39;
  }
  iStack_11c = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  puStack_128 = (undefined1 *)0x6da13c;
  FUN_004059fd();
  iStack_124 = unaff_EBP + -0x9c;
  *(undefined4 *)(unaff_EBP + -4) = 0x39;
  puStack_128 = (undefined1 *)0x6da152;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da159;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 0x3b;
  iStack_120 = 0x6da167;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  if (iVar3 != 0) {
    iStack_11c = 0x6da17d;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_11c = 0x6da18e;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_11c = 0x6da19e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6da1a9;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x3e;
  if ((*(byte *)(unaff_EBP + -0x30) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffd;
    FUN_00402fa6();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if ((*(byte *)(unaff_EBP + -0x30) & 1) != 0) {
    FUN_00402fa6();
  }
  iStack_120 = *(int *)(unaff_EBP + -0x34);
  iStack_11c = 0;
  puStack_128 = (undefined1 *)&iStack_120;
  *(uint *)(iStack_120 + 0x5a8) = (-(uint)(*(int *)(unaff_EBP + -0x54) != 0) & 0xffffffd5) + 0x48;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  iStack_124 = 0x575;
  iStack_12c = 0x6da205;
  FUN_00679e4e();
  iStack_124 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_128 = (undefined1 *)0x6da215;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da21c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_120 = 0x6da227;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_11c = 0x6da236;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_11c = 0x6da247;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6da254;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_11c = 0x6da25f;
    FUN_00878dfb();
    iVar3 = extraout_ECX_07;
  }
  iStack_11c = 0;
  puStack_128 = (undefined1 *)&iStack_120;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  iStack_124 = 0x57b;
  iStack_12c = 0x6da274;
  iStack_120 = iVar3;
  FUN_00679e4e();
  iStack_124 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_128 = (undefined1 *)0x6da284;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da28b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  iStack_120 = 0x6da296;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_11c = 0x6da2a5;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_11c = 0x6da2b6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6da2c3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6da2ce;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -6;
  *(undefined4 *)(unaff_EBP + -0x30) = 6;
  if (6 < iVar3) {
    do {
      iStack_11c = 0x6da2ed;
      FUN_00403191();
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      if (piVar1 == (int *)0x0) {
        iStack_11c = 0x6da302;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar1;
      puStack_128 = *(undefined1 **)(unaff_EBP + -0x4c);
      iStack_124 = *(int *)(unaff_EBP + -0x2c);
      iStack_120 = *(int *)(unaff_EBP + -0x28);
      iStack_12c = 0;
      puStack_130 = *(undefined1 **)(unaff_EBP + -0x30);
      iStack_11c = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      puStack_138 = (undefined4 *)0x6da325;
      piStack_134 = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_138 = (undefined4 *)&DAT_00963cc8;
        uStack_13c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_144 = 0x6da337;
        iStack_140 = iVar3;
        FUN_00878e09();
      }
      puStack_138 = (undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      uStack_13c = 0x6da344;
      puStack_138 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_138 < 0) {
        uStack_13c = 0x6da34f;
        FUN_00878dfb();
      }
      puStack_138 = &DAT_00980690;
      uStack_13c = 0x6da358;
      FUN_00403191();
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      if (piVar1 == (int *)0x0) {
        puStack_138 = (undefined4 *)0x80004003;
        uStack_13c = 0x6da36d;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + -0x14);
      }
      iStack_14c = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x5a8) +
                   *(int *)(*(int *)(unaff_EBP + -0x34) + 0x57c);
      iVar3 = *piVar1;
      puStack_148 = *(undefined1 **)(unaff_EBP + -0x68);
      iStack_144 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_140 = *(int *)(unaff_EBP + -0x44);
      iStack_150 = *(int *)(unaff_EBP + -0x30);
      uStack_13c = *(undefined4 *)(unaff_EBP + -0x40);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      puStack_138 = *(undefined4 **)(unaff_EBP + -0x3c);
      puStack_158 = (undefined4 *)0x6da39e;
      piStack_154 = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        iStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_124 = 0x6da3b0;
        iStack_120 = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_11c = 0x6da3bd;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_11c = 0x6da3c8;
        FUN_00878dfb();
        iVar3 = extraout_ECX_08;
      }
      iVar7 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c);
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    } while (*(int *)(unaff_EBP + -0x30) < iVar7 + -6);
  }
  iStack_11c = 0;
  puStack_128 = (undefined1 *)&iStack_120;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  iStack_124 = 0x578;
  iStack_12c = 0x6da3f9;
  iStack_120 = iVar3;
  FUN_00679e4e();
  iStack_124 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_128 = (undefined1 *)0x6da409;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da410;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  iStack_120 = 0x6da41b;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_11c = 0x6da42a;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_11c = 0x6da43b;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6da448;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_11c = 0x6da453;
    FUN_00878dfb();
    iVar3 = extraout_ECX_09;
  }
  iStack_11c = 0;
  puStack_128 = (undefined1 *)&iStack_120;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  iStack_124 = 0x577;
  iStack_12c = 0x6da468;
  iStack_120 = iVar3;
  FUN_00679e4e();
  iStack_124 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_128 = (undefined1 *)0x6da478;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da47f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  iStack_120 = 0x6da48a;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_11c = 0x6da499;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_11c = 0x6da4aa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6da4b7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6da4c2;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x5a8);
  iVar7 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x57c);
  *(int *)(unaff_EBP + -0x30) = iVar3;
  if (iVar3 < iVar3 + iVar7) {
    do {
      iStack_11c = 0x6da4e7;
      FUN_00403191();
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (piVar1 == (int *)0x0) {
        iStack_11c = 0x6da4fc;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar1;
      puStack_128 = *(undefined1 **)(unaff_EBP + -0x4c);
      iStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_124 = *(int *)(unaff_EBP + -0x2c);
      iStack_120 = *(int *)(unaff_EBP + -0x28);
      iStack_11c = *(undefined4 *)(unaff_EBP + -0x24);
      puStack_130 = (undefined1 *)0x0;
      *(int **)(unaff_EBP + -0x10) = piVar1;
      puStack_138 = (undefined4 *)0x6da51f;
      piStack_134 = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_138 = (undefined4 *)&DAT_00963cc8;
        uStack_13c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_144 = 0x6da531;
        iStack_140 = iVar3;
        FUN_00878e09();
      }
      puStack_138 = (undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      uStack_13c = 0x6da53e;
      puStack_138 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_138 < 0) {
        uStack_13c = 0x6da549;
        FUN_00878dfb();
      }
      puStack_138 = &DAT_00980690;
      uStack_13c = 0x6da552;
      FUN_00403191();
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (piVar1 == (int *)0x0) {
        puStack_138 = (undefined4 *)0x80004003;
        uStack_13c = 0x6da567;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar1;
      puStack_148 = *(undefined1 **)(unaff_EBP + -0x68);
      iStack_14c = *(int *)(unaff_EBP + -0x30);
      iStack_144 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_140 = *(int *)(unaff_EBP + -0x44);
      iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -6;
      uStack_13c = *(undefined4 *)(unaff_EBP + -0x40);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      puStack_138 = *(undefined4 **)(unaff_EBP + -0x3c);
      puStack_158 = (undefined4 *)0x6da592;
      piStack_154 = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        iStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_124 = 0x6da5a4;
        iStack_120 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_11c = 0x6da5b1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_11c = 0x6da5bc;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x57c) +
              *(int *)(*(int *)(unaff_EBP + -0x34) + 0x5a8);
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    } while (*(int *)(unaff_EBP + -0x30) < iVar3);
  }
  iStack_11c = 0;
  puStack_128 = (undefined1 *)&iStack_120;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  iStack_124 = 0x579;
  iStack_12c = 0x6da5f3;
  iStack_120 = iVar3;
  FUN_00679e4e();
  iStack_124 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_128 = (undefined1 *)0x6da603;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da60a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  iStack_120 = 0x6da615;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_11c = 0x6da624;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_11c = 0x6da635;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6da642;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6da64d;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -6;
  *(undefined4 *)(unaff_EBP + -0x30) = 7;
  if (7 < iVar3) {
    do {
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x5a8);
      iVar7 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x57c);
      *(int *)(unaff_EBP + -0x38) = iVar3;
      if (iVar3 < iVar3 + iVar7) {
        do {
          iStack_11c = 0x6da689;
          FUN_00403191();
          piVar1 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          if (piVar1 == (int *)0x0) {
            iStack_11c = 0x6da69e;
            FUN_00878dfb();
            piVar1 = *(int **)(unaff_EBP + -0x14);
          }
          iVar3 = *piVar1;
          puStack_128 = *(undefined1 **)(unaff_EBP + -0x4c);
          iStack_12c = *(undefined4 *)(unaff_EBP + -0x38);
          iStack_124 = *(int *)(unaff_EBP + -0x2c);
          puStack_130 = *(undefined1 **)(unaff_EBP + -0x30);
          iStack_120 = *(int *)(unaff_EBP + -0x28);
          iStack_11c = *(undefined4 *)(unaff_EBP + -0x24);
          *(int **)(unaff_EBP + -0x10) = piVar1;
          puStack_138 = (undefined4 *)0x6da6c2;
          piStack_134 = piVar1;
          iVar3 = (**(code **)(iVar3 + 0x80))();
          if (iVar3 < 0) {
            iStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
            iStack_124 = 0x6da6d4;
            iStack_120 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iStack_11c = 0x6da6e1;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_11c = 0x6da6ec;
            FUN_00878dfb();
          }
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x57c) +
                  *(int *)(*(int *)(unaff_EBP + -0x34) + 0x5a8);
          *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
        } while (*(int *)(unaff_EBP + -0x38) < iVar3);
      }
      iVar7 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c);
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    } while (*(int *)(unaff_EBP + -0x30) < iVar7 + -6);
  }
  iStack_11c = 0;
  puStack_128 = (undefined1 *)&iStack_120;
  *(int **)(unaff_EBP + -0x18) = &iStack_120;
  iStack_124 = 0x574;
  iStack_12c = 0x6da738;
  iStack_120 = iVar3;
  FUN_00679e4e();
  iStack_124 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_128 = (undefined1 *)0x6da748;
  FUN_0040263d();
  puStack_128 = (undefined1 *)0x6da74f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  iStack_120 = 0x6da75a;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  iStack_11c = 0x6da769;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_11c = 0x6da77a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6da787;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6da792;
    FUN_00878dfb();
  }
  iStack_11c = 0x6da79b;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  if (piVar1 == (int *)0x0) {
    iStack_11c = 0x6da7b0;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar1;
  puStack_128 = *(undefined1 **)(unaff_EBP + -0x4c);
  iStack_124 = *(int *)(unaff_EBP + -0x2c);
  iStack_120 = *(int *)(unaff_EBP + -0x28);
  iStack_12c = 0;
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x24);
  puStack_130 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_138 = (undefined4 *)0x6da7d2;
  piStack_134 = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_138 = (undefined4 *)&DAT_00963cc8;
    uStack_13c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_144 = 0x6da7e4;
    iStack_140 = iVar3;
    FUN_00878e09();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_13c = 0x6da7f1;
  iVar3 = FUN_00402bc3();
  puVar6 = puStack_138;
  if (iVar3 < 0) {
    uStack_13c = 0x6da7fc;
    puStack_138 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar6 = (undefined4 *)extraout_ECX_10;
  }
  puStack_138 = (undefined4 *)0x0;
  uStack_13c = 0;
  puStack_148 = (undefined1 *)&iStack_140;
  *(int **)(unaff_EBP + -0x18) = &iStack_140;
  iStack_144 = 0x576;
  iStack_14c = 0x6da816;
  iStack_140 = (int)puVar6;
  FUN_00679e4e();
  iStack_144 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_148 = (undefined1 *)0x6da826;
  FUN_0040263d();
  puStack_148 = (undefined1 *)0x6da82d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iStack_140 = 0x6da838;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  puStack_138 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_13c = 0x6da847;
  puStack_138 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_138 < 0) && (puStack_138 != (undefined4 *)0x80004002)) {
    uStack_13c = 0x6da858;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_13c = 0x6da865;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    uStack_13c = 0x6da870;
    FUN_00878dfb();
  }
  puStack_138 = &DAT_00980690;
  uStack_13c = 0x6da879;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (piVar1 == (int *)0x0) {
    puStack_138 = (undefined4 *)0x80004003;
    uStack_13c = 0x6da88e;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar1;
  puStack_148 = *(undefined1 **)(unaff_EBP + -0x4c);
  iStack_144 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_140 = *(int *)(unaff_EBP + -0x28);
  iStack_14c = 0;
  iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x1c) + -6;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_138 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_158 = (undefined4 *)0x6da8b8;
  piStack_154 = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_158 = (undefined4 *)&DAT_00963cc8;
    uStack_15c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_164 = 0x6da8ca;
    iStack_160 = iVar3;
    FUN_00878e09();
  }
  puStack_158 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_15c = 0x6da8d7;
  iVar3 = FUN_00402bc3();
  puVar6 = puStack_158;
  if (iVar3 < 0) {
    uStack_15c = 0x6da8e2;
    puStack_158 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar6 = (undefined4 *)extraout_ECX_11;
  }
  puStack_158 = (undefined4 *)0x0;
  uStack_15c = 0;
  puStack_168 = (undefined1 *)&iStack_160;
  *(int **)(unaff_EBP + -0x18) = &iStack_160;
  iStack_164 = 0x57a;
  iStack_16c = 0x6da8fc;
  iStack_160 = (int)puVar6;
  FUN_00679e4e();
  iStack_164 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_168 = (undefined1 *)0x6da90c;
  FUN_0040263d();
  puStack_168 = (undefined1 *)0x6da913;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iStack_160 = 0x6da91e;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  puStack_158 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_15c = 0x6da92d;
  puStack_158 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_158 < 0) && (puStack_158 != (undefined4 *)0x80004002)) {
    uStack_15c = 0x6da93e;
    FUN_00878dfb();
  }
  puStack_158 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_15c = 0x6da94b;
  puStack_158 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_158 < 0) {
    uStack_15c = 0x6da956;
    FUN_00878dfb();
  }
  puStack_158 = &DAT_00980690;
  uStack_15c = 0x6da95f;
  FUN_00403191();
  piStack_174 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  if (piStack_174 == (int *)0x0) {
    puStack_158 = (undefined4 *)0x80004003;
    uStack_15c = 0x6da974;
    FUN_00878dfb();
    piStack_174 = *(int **)(unaff_EBP + -0x14);
  }
  iStack_16c = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x5a8) +
               *(int *)(*(int *)(unaff_EBP + -0x34) + 0x57c);
  iVar3 = *piStack_174;
  puStack_168 = *(undefined1 **)(unaff_EBP + -0x4c);
  iStack_164 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_160 = *(int *)(unaff_EBP + -0x28);
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_170 = 0;
  *(int **)(unaff_EBP + -0x10) = piStack_174;
  puStack_158 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_178 = (undefined4 *)0x6da9a4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_178 = (undefined4 *)&DAT_00963cc8;
    uStack_17c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_184 = 0x6da9b6;
    iStack_180 = iVar3;
    FUN_00878e09();
  }
  puStack_178 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_17c = 0x6da9c3;
  iVar3 = FUN_00402bc3();
  puVar6 = puStack_178;
  if (iVar3 < 0) {
    uStack_17c = 0x6da9ce;
    puStack_178 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar6 = (undefined4 *)extraout_ECX_12;
  }
  puStack_178 = (undefined4 *)0x0;
  uStack_17c = 0;
  puStack_188 = (undefined1 *)&iStack_180;
  *(int **)(unaff_EBP + -0x18) = &iStack_180;
  iStack_184 = 0x57c;
  iStack_18c = 0x6da9e8;
  iStack_180 = (int)puVar6;
  FUN_00679e4e();
  iStack_184 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_188 = (undefined1 *)0x6da9f8;
  FUN_0040263d();
  puStack_188 = (undefined1 *)0x6da9ff;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  iStack_180 = 0x6daa0a;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  puStack_178 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_17c = 0x6daa19;
  puStack_178 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_178 < 0) && (puStack_178 != (undefined4 *)0x80004002)) {
    uStack_17c = 0x6daa2a;
    FUN_00878dfb();
  }
  puStack_178 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_17c = 0x6daa37;
  puStack_178 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    uStack_17c = 0x6daa42;
    FUN_00878dfb();
  }
  puStack_178 = &DAT_00980690;
  uStack_17c = 0x6daa4b;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  if (piVar1 == (int *)0x0) {
    puStack_178 = (undefined4 *)0x80004003;
    uStack_17c = 0x6daa60;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *(int *)(unaff_EBP + -0x34);
  iStack_18c = *(int *)(iVar3 + 0x5a8) + *(int *)(iVar3 + 0x57c);
  puStack_188 = *(undefined1 **)(unaff_EBP + -0x4c);
  iStack_184 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_180 = *(int *)(unaff_EBP + -0x28);
  iStack_190 = *(int *)(iVar3 + 0x1c) + -6;
  uStack_17c = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_194 = *(undefined4 *)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_178 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_198 = (undefined4 *)0x6daa97;
  iVar3 = (**(code **)(*piVar1 + 0x80))();
  if (iVar3 < 0) {
    puStack_198 = (undefined4 *)&DAT_00963cc8;
    uStack_19c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_1a0 = iVar3;
    FUN_00878e09();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_19c = 0x6daab6;
  iVar3 = FUN_00402bc3();
  puVar6 = puStack_198;
  if (iVar3 < 0) {
    uStack_19c = 0x6daac1;
    puStack_198 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar6 = (undefined4 *)extraout_ECX_13;
  }
  puStack_198 = (undefined4 *)0x0;
  uStack_19c = 0;
  *(int **)(unaff_EBP + -0x18) = &iStack_1a0;
  iStack_1a0 = (int)puVar6;
  FUN_00679e4e(&iStack_1a0,0x5aa);
  iVar3 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x5c;
  iStack_1a0 = 0x6daafd;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  puStack_198 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_19c = 0x6dab0c;
  puStack_198 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_198 < 0) && (puStack_198 != (undefined4 *)0x80004002)) {
    uStack_19c = 0x6dab1d;
    FUN_00878dfb();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  uStack_19c = 0x6dab2a;
  puStack_198 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_198 < 0) {
    uStack_19c = 0x6dab35;
    FUN_00878dfb();
  }
  puStack_198 = &DAT_00980690;
  uStack_19c = 0x6dab3e;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  if (piVar1 == (int *)0x0) {
    puStack_198 = (undefined4 *)0x80004003;
    uStack_19c = 0x6dab53;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar1;
  iStack_1a0 = *(int *)(unaff_EBP + -0x28);
  uStack_19c = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_198 = *(undefined4 **)(unaff_EBP + -0x20);
  iVar3 = (**(code **)(iVar3 + 0x80))
                    (piVar1,8,10,*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar3 < 0) {
    iStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_124 = 0x6dab87;
    iStack_120 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_11c = 0x6dab94;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_11c = 0x6dab9f;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    uVar8 = -(uint)(*(int *)(unaff_EBP + -0x70) != 0) & 0x28;
    iStack_11c = 0x6dabbc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    iStack_11c = 0x6dabc9;
    FUN_00403191();
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x34) + 0x628;
    iStack_120 = 0x6dabe6;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6dabf6;
    FUN_004059fd();
    iVar3 = uVar8 + 8;
    puStack_128 = (undefined1 *)0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    *(int *)(unaff_EBP + -0x10) = iVar3;
    puStack_130 = (undefined1 *)0x6dac0b;
    iStack_12c = iVar3;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6dac12;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    iStack_11c = 0x6dac1f;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_11c = 0x6dac2a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6dac37;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_11c = 0x6dac42;
      FUN_00878dfb();
    }
    iStack_11c = 0x6dac4b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    iStack_11c = 0x6dac58;
    FUN_00403191();
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    iStack_120 = 0x6dac6c;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6dac7c;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    puStack_130 = (undefined1 *)0x6dac8b;
    iStack_12c = iVar3;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6dac92;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    iStack_11c = 0x6dac9f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6dacaa;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6dacb7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6dacc2;
      FUN_00878dfb();
    }
    iStack_11c = 0x6dacce;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6dacd8;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dace4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iStack_11c = 0x6dacee;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6dacf8;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dad04;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    iStack_120 = 0x6dad1e;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6dad2e;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x1d;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    puStack_130 = (undefined1 *)0x6dad3f;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6dad46;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iStack_11c = 0x6dad53;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6dad5e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6dad6b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6dad76;
      FUN_00878dfb();
    }
    iStack_11c = 0x6dad7c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6dad86;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dad92;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    iStack_11c = 0x6dad9c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6dada6;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dadb2;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iStack_120 = 0x6dadcc;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6daddc;
    FUN_004059fd();
    iStack_12c = uVar8 + 9;
    puStack_128 = (undefined1 *)0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    *(int *)(unaff_EBP + -0x30) = iStack_12c;
    puStack_130 = (undefined1 *)0x6dadf1;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6dadf8;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    iStack_11c = 0x6dae05;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6dae10;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6dae1d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6dae28;
      FUN_00878dfb();
    }
    iStack_11c = 0x6dae2e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6dae38;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dae44;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    iStack_11c = 0x6dae4e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6dae58;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dae64;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    iStack_120 = 0x6dae7e;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6dae8e;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x1d;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    puStack_130 = (undefined1 *)0x6dae9f;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6daea6;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    iStack_11c = 0x6daeb3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6daebe;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6daecb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6daed6;
      FUN_00878dfb();
    }
    iStack_11c = 0x6daedc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6daee6;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6daef2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    iStack_11c = 0x6daefc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6daf06;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6daf12;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    iStack_120 = 0x6daf2c;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6daf3c;
    FUN_004059fd();
    iStack_12c = uVar8 + 10;
    puStack_128 = (undefined1 *)0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    *(int *)(unaff_EBP + -0x54) = iStack_12c;
    puStack_130 = (undefined1 *)0x6daf51;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6daf58;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    iStack_11c = 0x6daf65;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6daf70;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6daf7d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6daf88;
      FUN_00878dfb();
    }
    iStack_11c = 0x6daf8e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6daf98;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dafa4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x70;
    iStack_11c = 0x6dafae;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6dafb8;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6dafc4;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x34);
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    *(int *)(unaff_EBP + -0x38) = iVar3 + 0x628;
    iStack_120 = 0x6dafe1;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6daff1;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x1c;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x71;
    puStack_130 = (undefined1 *)0x6db002;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db009;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x70;
    iStack_11c = 0x6db016;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_11c = 0x6db021;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db02e;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_11c = 0x6db039;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db03f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db049;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_11c = 0x6db055;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    iStack_11c = 0x6db05f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db069;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_11c = 0x6db075;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x74;
    iStack_120 = 0x6db089;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x18) = &iStack_124;
    iStack_12c = 0x6db099;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x1d;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x74;
    puStack_130 = (undefined1 *)0x6db0aa;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db0b1;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x73;
    iStack_11c = 0x6db0be;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_11c = 0x6db0c9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db0d6;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_11c = 0x6db0e1;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db0e7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db0f1;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_11c = 0x6db0fd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x76;
    iStack_11c = 0x6db107;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db111;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_11c = 0x6db11d;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x77;
    *(int *)(unaff_EBP + -0x18) = iVar3 + 0x624;
    iStack_120 = 0x6db137;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db147;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x1c;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x77;
    puStack_130 = (undefined1 *)0x6db158;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db15f;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x76;
    iStack_11c = 0x6db16c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db177;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db184;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db18f;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db195;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db19f;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db1ab;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x79;
    iStack_11c = 0x6db1b5;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db1bf;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db1cb;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x7a;
    iStack_120 = 0x6db1e1;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db1f1;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2b;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x7a;
    puStack_130 = (undefined1 *)0x6db202;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db209;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x79;
    iStack_11c = 0x6db216;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db221;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db22e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db239;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db23f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db249;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db255;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7c;
    iStack_11c = 0x6db25f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db269;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db275;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x7d;
    iStack_120 = 0x6db288;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db298;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2c;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x7d;
    puStack_130 = (undefined1 *)0x6db2a9;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db2b0;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x7c;
    iStack_11c = 0x6db2bd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db2c8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db2d5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db2e0;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db2e6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db2f0;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db2fc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7f;
    iStack_11c = 0x6db306;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db310;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db31c;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x80;
    iStack_120 = 0x6db32f;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db33f;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2d;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x80;
    puStack_130 = (undefined1 *)0x6db350;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db357;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x7f;
    iStack_11c = 0x6db364;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db36f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db37c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db387;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db38d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db397;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db3a3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    iStack_11c = 0x6db3ad;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db3b7;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db3c3;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x83;
    iStack_120 = 0x6db3d6;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db3e6;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2b;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x83;
    puStack_130 = (undefined1 *)0x6db3f7;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db3fe;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x82;
    iStack_11c = 0x6db40b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db416;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db423;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db42e;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db434;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db43e;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db44a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x85;
    iStack_11c = 0x6db454;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db45e;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db46a;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    iStack_120 = 0x6db47d;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db48d;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2d;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    puStack_130 = (undefined1 *)0x6db49e;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db4a5;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x85;
    iStack_11c = 0x6db4b2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db4bd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db4ca;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db4d5;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db4db;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db4e5;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db4f1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    iStack_11c = 0x6db4fb;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db505;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db511;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    iStack_120 = 0x6db524;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db534;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2b;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x89;
    puStack_130 = (undefined1 *)0x6db545;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db54c;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x88;
    iStack_11c = 0x6db559;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db564;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db571;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db57c;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db582;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db58c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db598;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_11c = 0x6db5a2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db5ac;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db5b8;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    iStack_120 = 0x6db5cb;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db5db;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2c;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    puStack_130 = (undefined1 *)0x6db5ec;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db5f3;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iStack_11c = 0x6db600;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db60b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db618;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db623;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db629;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db633;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db63f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8e;
    iStack_11c = 0x6db649;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db653;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db65f;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x8f;
    iStack_120 = 0x6db672;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db682;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2d;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x8f;
    puStack_130 = (undefined1 *)0x6db693;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db69a;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x8e;
    iStack_11c = 0x6db6a7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db6b2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db6bf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db6ca;
      FUN_00878dfb();
    }
    iStack_11c = 0x6db6d0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_11c = unaff_EBP + -0x48;
    iStack_120 = 0x6db6da;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db6e6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x91;
    iStack_11c = 0x6db6f0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_11c = unaff_EBP + -0x2c;
    iStack_120 = 0x6db6fa;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x6db706;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x92;
    iStack_120 = 0x6db71a;
    iStack_120 = FUN_00449749();
    puStack_128 = (undefined1 *)(unaff_EBP + -0x58);
    *(int **)(unaff_EBP + -0x60) = &iStack_124;
    iStack_12c = 0x6db72a;
    iStack_124 = extraout_ECX_14;
    FUN_004059fd();
    puStack_128 = (undefined1 *)0x2c;
    iStack_12c = *(int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x92;
    puStack_130 = (undefined1 *)0x6db73b;
    FUN_004115d9();
    puStack_130 = (undefined1 *)0x6db742;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x91;
    iStack_11c = 0x6db74f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db75a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_11c = 0x6db767;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x6db772;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      iStack_11c = 0xff;
      iStack_120 = 0x6db787;
      FUN_004031b7();
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x94;
      if (piVar1 == (int *)0x0) {
        iStack_11c = 0x6db79c;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar1;
      puStack_128 = *(undefined1 **)(unaff_EBP + -0x70);
      iStack_124 = *(int *)(unaff_EBP + -0x2c);
      iStack_120 = *(int *)(unaff_EBP + -0x28);
      iStack_12c = 0x17;
      iStack_11c = *(undefined4 *)(unaff_EBP + -0x24);
      puStack_130 = (undefined1 *)0x6;
      *(int **)(unaff_EBP + -0x18) = piVar1;
      puStack_138 = (undefined4 *)0x6db7be;
      piStack_134 = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        iStack_11c = *(undefined4 *)(unaff_EBP + -0x18);
        iStack_124 = 0x6db7d0;
        iStack_120 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_11c = 0x6db7dd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_11c = 0x6db7e8;
        FUN_00878dfb();
      }
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
    iStack_11c = 0x6db7f9;
    (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
  }
LAB_006db7f9:
  iStack_11c = 0x6db805;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa6;
  iStack_11c = 0x6db812;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa7;
  iStack_11c = 0x6db822;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa8;
  iStack_11c = 0x6db832;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xa9;
  iStack_11c = 0x6db83f;
  FUN_00424aee();
  *(undefined1 *)(unaff_EBP + -4) = 0xaa;
  iStack_11c = 0x6db84f;
  FUN_004489f5();
  iStack_11c = unaff_EBP + -0x80;
  iStack_120 = unaff_EBP + -200;
  iStack_124 = unaff_EBP + -0xb8;
  puStack_128 = (undefined1 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0xab;
  iStack_12c = 0x6db87a;
  iStack_12c = FUN_004458be();
  puStack_130 = (undefined1 *)(unaff_EBP + -0xd8);
  piStack_134 = (int *)0x6db889;
  FUN_00424e27();
  piStack_134 = (int *)0x6db890;
  FUN_004250ac();
  FUN_00404892();
  FUN_00411629();
  *(undefined1 *)(unaff_EBP + -4) = 0xa9;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa8;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa7;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0xa6;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  FUN_00404892();
  FUN_004115cc();
  FUN_004115cc();
  FUN_00402630();
  FUN_004115cc();
  FUN_004115cc();
  FUN_00403621();
  FUN_00403621();
  FUN_00402630();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


