/* FUN_00574ba0 - 0x00574ba0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00574ba0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int unaff_EBP;
  undefined4 *puStack_ec;
  undefined4 *puStack_e8;
  undefined1 *puStack_e4;
  int iStack_e0;
  undefined1 auStack_d8 [4];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined *puStack_a4;
  
  FUN_00879bb8();
  puStack_a4 = &DAT_00965828;
  iStack_a8 = 0x574bc2;
  FUN_00432cfc();
  puStack_a4 = (undefined *)0x0;
  iStack_a8 = 0;
  iStack_ac = 0xf4e;
  iStack_b0 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_b4 = 0x574bde;
  FUN_00679e4e();
  iStack_ac = unaff_EBP + -0x10;
  iStack_b0 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_b4 = 0x574bf1;
  iStack_b0 = FUN_00432f57();
  *(int **)(unaff_EBP + -0x18) = &iStack_ac;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_b4 = 0x574c01;
  FUN_0046fd15();
  iStack_b0 = 0x574c08;
  FUN_008163ca();
  puStack_a4 = (undefined *)0x574c10;
  FUN_00402fa6();
  puStack_a4 = (undefined *)0x574c18;
  FUN_00402fa6();
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_a4 = (undefined *)0x574c24;
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 1;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  puStack_a4 = (undefined *)0xf4a;
  iStack_a8 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_ac = 0x574c4b;
  puStack_a4 = (undefined *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_a8 = 0x574c58;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_a4 = (undefined *)0x574c64;
  FUN_00402676();
  puStack_a4 = (undefined *)0x578;
  iStack_a8 = 0x574c73;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    puStack_a4 = (undefined *)0x0;
  }
  else {
    puStack_a4 = (undefined *)0x574c85;
    puStack_a4 = (undefined *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a8 = 0x574c96;
  FUN_00450382();
  puStack_a4 = (undefined *)(unaff_EBP + -0x50);
  iStack_a8 = 0;
  iStack_ac = 0x179;
  iStack_b0 = 0x19f;
  uStack_b4 = 0x3e9;
  uStack_bc = 0x574cb3;
  (**(code **)(**(int **)(extraout_ECX + 0x6c) + 0x20))();
  uStack_bc = 0x74;
  uStack_c0 = 0x574cbf;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 == 0) {
    uStack_bc = 0;
  }
  else {
    uStack_bc = 0x574cd1;
    uStack_bc = FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_c0 = 0x574ce2;
  FUN_0048b9e9();
  uStack_bc = 0;
  uStack_c0 = 0x159;
  uStack_c4 = 0x43;
  uStack_c8 = 0x178;
  uStack_cc = 6;
  uStack_d0 = 1;
  uStack_d4 = 0x3ea;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x7c) + 0x34) = 0x15e;
  iStack_e0 = 0x574d2e;
  FUN_004ad003();
  iStack_e0 = 0x574d38;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  iStack_e0 = unaff_EBP + -0x80;
  puStack_e4 = (undefined1 *)0x574d46;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x574d52;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_e0 = 0x574d60;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  iStack_e0 = unaff_EBP + -0x70;
  puStack_ec = &DAT_00980690;
  puStack_e4 = (undefined1 *)0x574d6e;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x574d7a;
    FUN_00878dfb();
    puStack_ec = extraout_ECX_00;
  }
  iStack_e0 = 0;
  puStack_e4 = (undefined1 *)(unaff_EBP + -0x80);
  puStack_e8 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00679e4e(&puStack_ec,0x52b);
  iVar1 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_e4 = (undefined1 *)0x574dc4;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar1 != 0) {
    iStack_e0 = 0x574dda;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_e0 = 0x574deb;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_e0 = 0x574dfb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x574e06;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_e0 = 0x574e13;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x574e1e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x574e2b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x574e36;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 14000;
  do {
    FUN_0087a1b0();
    iStack_e0 = 0;
    puStack_e8 = *(undefined4 **)(unaff_EBP + -0x1c);
    puStack_ec = (undefined4 *)0x574e57;
    puStack_e4 = auStack_d8;
    puStack_e8 = (undefined4 *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e4;
    puStack_ec = (undefined4 *)0x574e63;
    FUN_004033a1();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_ec = (undefined4 *)0x574e73;
    FUN_0040263d();
    puStack_ec = (undefined4 *)0x574e7a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_e4 = (undefined1 *)0x574e85;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      iStack_e0 = 0x574e9b;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_e0 = 0x574eac;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_e0 = 0x574eb9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e0 = 0x574ec4;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x14);
    do {
      FUN_0087a1b0();
      iStack_e0 = 0;
      puStack_e8 = *(undefined4 **)(unaff_EBP + -0x20);
      puStack_ec = (undefined4 *)0x574ee2;
      puStack_e4 = auStack_d8;
      puStack_e8 = (undefined4 *)FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_e4;
      puStack_ec = (undefined4 *)0x574eee;
      FUN_004033a1();
      puStack_e8 = (undefined4 *)(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      puStack_ec = (undefined4 *)0x574efe;
      FUN_0040263d();
      puStack_ec = (undefined4 *)0x574f05;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_e4 = (undefined1 *)0x574f10;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
      iStack_e0 = 0x574f1f;
      iVar1 = FUN_0041a581();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_e0 = 0x574f30;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_e0 = 0x574f3d;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_e0 = 0x574f48;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
    } while (*(int *)(unaff_EBP + -0x20) < 3);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_e0 = 0x574f6a;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x14);
  } while (*(int *)(unaff_EBP + -0x1c) < 2);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x36c8;
  do {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_e0 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_e4 = (undefined1 *)0x574fa0;
    puVar3 = (undefined4 *)FUN_00679d86();
    iStack_e0 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_e4 = (undefined1 *)(unaff_EBP + -0x10);
    puStack_e8 = (undefined4 *)0x574fb3;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00402676();
    iStack_e0 = 0x574fcc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_e0 = unaff_EBP + -0x3c;
    puStack_e4 = (undefined1 *)0x574fda;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_e0 = 0x574fe6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_e0 = 0x574ff4;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_e0 = unaff_EBP + -0x60;
    puStack_e4 = (undefined1 *)0x575002;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_e0 = 0x57500e;
      FUN_00878dfb();
    }
    iStack_e0 = 0;
    puStack_e4 = (undefined1 *)(unaff_EBP + -0x3c);
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_ec = (undefined4 *)0x575024;
    uVar2 = FUN_00411641();
    *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_ec;
    puStack_ec = extraout_ECX_01;
    FUN_004033a1(uVar2);
    iVar1 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_e4 = (undefined1 *)0x575059;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    iStack_e0 = 0x575068;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_e0 = 0x575079;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_e0 = 0x575089;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e0 = 0x575094;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_e0 = 0x5750a1;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e0 = 0x5750ac;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_e0 = 0x5750b9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e0 = 0x5750c4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00402676();
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x1c) < 0x17);
  iStack_e0 = unaff_EBP + -0x18;
  puStack_e4 = (undefined1 *)0x5750f1;
  puVar3 = (undefined4 *)FUN_00679d86();
  puStack_e4 = (undefined1 *)*puVar3;
  iStack_e0 = extraout_ECX + 0x36a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_e8 = (undefined4 *)0x575105;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00402676();
  iStack_e0 = 0x57511e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_e0 = unaff_EBP + -0x3c;
  puVar3 = &DAT_00980690;
  puStack_e4 = (undefined1 *)0x57512c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x575138;
    FUN_00878dfb();
    puVar3 = extraout_ECX_02;
  }
  iStack_e0 = 0xff999999;
  puStack_e4 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_e8;
  puStack_ec = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_e8 = puVar3;
  FUN_00679e4e(&puStack_e8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_ec = (undefined4 *)0x575166;
  FUN_0044974c();
  puStack_ec = (undefined4 *)0x57516d;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x57517a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x575185;
    FUN_00878dfb();
  }
  iStack_e0 = unaff_EBP + -0x18;
  puStack_e4 = (undefined1 *)0x575195;
  puVar3 = (undefined4 *)FUN_00679d86();
  puStack_e4 = (undefined1 *)*puVar3;
  iStack_e0 = extraout_ECX + 0x36ac;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_e8 = (undefined4 *)0x5751a9;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00402676();
  iStack_e0 = 0x5751c2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_e0 = unaff_EBP + -0x3c;
  puVar3 = &DAT_00980690;
  puStack_e4 = (undefined1 *)0x5751d0;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x5751dc;
    FUN_00878dfb();
    puVar3 = extraout_ECX_03;
  }
  iStack_e0 = 0xffffffff;
  puStack_e4 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_e8;
  puStack_ec = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_e8 = puVar3;
  FUN_00679e4e(&puStack_e8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_ec = (undefined4 *)0x575207;
  FUN_0044974c();
  puStack_ec = (undefined4 *)0x57520e;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x57521b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x575226;
    FUN_00878dfb();
  }
  iVar1 = 0;
  if (0 < *(int *)(*(int *)(extraout_ECX + 100) + 0x104)) {
    puVar3 = (undefined4 *)(extraout_ECX + 0x170);
    do {
      *puVar3 = 0;
      iVar1 = iVar1 + 1;
      puVar3 = (undefined4 *)((int)puVar3 + 0xd3);
    } while (iVar1 < *(int *)(*(int *)(extraout_ECX + 100) + 0x104));
  }
  iVar1 = 0;
  if (0 < *(int *)(*(int *)(extraout_ECX + 100) + 0x104)) {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
    puVar3 = (undefined4 *)(extraout_ECX + 0x80);
    do {
      uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x280;
      *puVar3 = uVar2;
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < *(int *)(*(int *)(extraout_ECX + 100) + 0x104));
  }
  iVar1 = *(int *)(*(int *)(extraout_ECX + 100) + 0x104);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (0 < iVar1) {
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 8);
    do {
      if (**(int **)(unaff_EBP + 8) == 0) break;
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x20);
      puStack_e4 = (undefined1 *)0x5752a9;
      FUN_0057545c();
      iStack_e0 = 0x5752b3;
      FUN_00575b36();
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      iVar1 = *(int *)(extraout_ECX + 100);
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x280;
    } while (*(int *)(unaff_EBP + -0x20) < *(int *)(iVar1 + 0x104));
  }
  iStack_e0 = 0x5752cf;
  FUN_005753a5();
  FUN_00575895();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_e0 = 0x5752e7;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


