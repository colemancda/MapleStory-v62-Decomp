/* FUN_006f070a - 0x006f070a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f070a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int iVar3;
  int unaff_EBP;
  undefined4 *puStack_134;
  int *piStack_130;
  undefined1 *puStack_12c;
  int *piStack_128;
  int *piVar4;
  undefined1 auStack_120 [4];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined *puStack_110;
  undefined4 uStack_10c;
  undefined4 auStack_108 [2];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined1 *puStack_d8;
  int iStack_d4;
  undefined4 *puStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  
  FUN_00879bb8();
  piVar4 = extraout_ECX + 0x174;
  iVar3 = 3;
  do {
    iStack_c4 = 0x6f0734;
    puVar1 = (undefined4 *)FUN_004029b9();
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_008f03ac;
      puVar1[1] = extraout_ECX;
    }
    *piVar4 = (int)puVar1;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_006f03ed();
  iStack_c4 = 0x6f0766;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_c4 = 0x6f0774;
  FUN_00403191();
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x44;
  iStack_cc = unaff_EBP + -0x34;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfbf;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_dc = 0x6f079a;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d8 = (undefined1 *)0x6f07a7;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f07ae;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f07b5;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c8 = 0x6f07c0;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f07d2;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f07e3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_c4 = 0x6f07f0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f07fb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_c4 = 0x6f0808;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0813;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f0820;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f082b;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f0834;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_c4 = 0x6f0844;
  FUN_00403191();
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x44;
  iStack_cc = unaff_EBP + -0x34;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfc0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_dc = 0x6f0867;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_d8 = (undefined1 *)0x6f0874;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f087b;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f0882;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_c8 = 0x6f088d;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f089f;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f08b0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c4 = 0x6f08bd;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f08c8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_c4 = 0x6f08d5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f08e0;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f08ed;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f08f8;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f0901;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_c4 = 0x6f0911;
  FUN_00403191();
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x44;
  iStack_cc = unaff_EBP + -0x34;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfc1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_dc = 0x6f0934;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_d8 = (undefined1 *)0x6f0941;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f0948;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f094f;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c8 = 0x6f095a;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f096c;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f097d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_c4 = 0x6f098a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0995;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_c4 = 0x6f09a2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f09ad;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f09ba;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f09c5;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f09ce;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  iStack_c4 = 0x6f09de;
  FUN_00403191();
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x44;
  iStack_cc = unaff_EBP + -0x34;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfc2;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_dc = 0x6f0a01;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_d8 = (undefined1 *)0x6f0a0e;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f0a15;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f0a1c;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_c8 = 0x6f0a27;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f0a39;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f0a4a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_c4 = 0x6f0a57;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0a62;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_c4 = 0x6f0a6f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0a7a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f0a87;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0a92;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f0a9b;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  iStack_c4 = 0x6f0aab;
  FUN_00403191();
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x44;
  iStack_cc = unaff_EBP + -0x34;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfbb;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_dc = 0x6f0ace;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_d8 = (undefined1 *)0x6f0adb;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f0ae2;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f0ae9;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_c8 = 0x6f0af4;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f0b06;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f0b17;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_c4 = 0x6f0b24;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0b2f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_c4 = 0x6f0b3c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0b47;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f0b54;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0b5f;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f0b69;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_c4 = unaff_EBP + -0x24;
  iStack_c8 = 0x6f0b73;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0b7f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  iStack_c4 = 0x6f0b90;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  iStack_c4 = unaff_EBP + -0x58;
  puStack_d0 = &DAT_00980690;
  iStack_c8 = 0x6f0b9a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0ba6;
    FUN_00878dfb();
    puStack_d0 = extraout_ECX_00;
  }
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x24;
  iStack_cc = unaff_EBP + -0x58;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfbc;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_dc = 0x6f0bc9;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_d8 = (undefined1 *)0x6f0bd6;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f0bdd;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f0be4;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_c8 = 0x6f0bef;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f0c01;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f0c12;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_c4 = 0x6f0c1f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0c2a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_c4 = 0x6f0c37;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0c42;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f0c4f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0c5a;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f0c64;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  iStack_c4 = unaff_EBP + -0x58;
  iStack_c8 = 0x6f0c6e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0c7a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x18;
  iStack_c4 = 0x6f0c8b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_c4 = unaff_EBP + -0x24;
  puVar1 = &DAT_00980690;
  iStack_c8 = 0x6f0c95;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0ca1;
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x58;
  iStack_cc = unaff_EBP + -0x24;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfc9;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_dc = 0x6f0cc4;
  puStack_d0 = puVar1;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_d8 = (undefined1 *)0x6f0cd1;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f0cd8;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f0cdf;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_c8 = 0x6f0cea;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f0cfc;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f0d0d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_c4 = 0x6f0d1a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0d25;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_c4 = 0x6f0d32;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0d3d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f0d4a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0d55;
    FUN_00878dfb();
  }
  iStack_c4 = 0x6f0d5f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  iStack_c4 = unaff_EBP + -0x58;
  iStack_c8 = 0x6f0d69;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0d75;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x1c;
  iStack_c4 = 0x6f0d86;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_c4 = unaff_EBP + -0x24;
  puVar1 = &DAT_00980690;
  iStack_c8 = 0x6f0d90;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0d9c;
    FUN_00878dfb();
    puVar1 = extraout_ECX_02;
  }
  iStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x58;
  iStack_cc = unaff_EBP + -0x24;
  puStack_d8 = (undefined1 *)&puStack_d0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_d0;
  iStack_d4 = 0xfca;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_dc = 0x6f0dbf;
  puStack_d0 = puVar1;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_d8 = (undefined1 *)0x6f0dcc;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6f0dd3;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6f0dda;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_c8 = 0x6f0de5;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_c4 = 0x6f0df7;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_c4 = 0x6f0e08;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_c4 = 0x6f0e15;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0e20;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_c4 = 0x6f0e2d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0e38;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c4 = 0x6f0e45;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_c4 = 0x6f0e50;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x74) = 0;
  *(undefined4 *)(unaff_EBP + -0x80) = 1;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  piVar4 = (int *)extraout_ECX[0x16e];
  *(undefined4 *)(unaff_EBP + -4) = 0x20;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0xc))();
    FUN_00450463();
  }
  iStack_c4 = unaff_EBP + -0x10;
  iStack_c8 = 0x6f0e93;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_c4 = 0x6f0ea0;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00402676();
  iStack_c4 = 0x6f0ebb;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_c4 = 0x6f0ee1;
  iVar3 = FUN_00450382();
  iStack_c4 = 1;
  iStack_c8 = 8;
  iStack_cc = 0x7e;
  puStack_d0 = (undefined4 *)0x3;
  puStack_d8 = (undefined1 *)0x6f0ef8;
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))();
  if ((int *)extraout_ECX[0x16c] != (int *)0x0) {
    puStack_d8 = (undefined1 *)0x6f0f07;
    (**(code **)(*(int *)extraout_ECX[0x16c] + 0xc))();
    puStack_d8 = (undefined1 *)0x6f0f12;
    FUN_00450463();
  }
  puStack_d8 = (undefined1 *)0x4f2;
  iStack_dc = unaff_EBP + -0x10;
  uStack_e0 = 0x6f0f22;
  puStack_d8 = (undefined1 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_dc = 0x6f0f2f;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_d8 = (undefined1 *)0x6f0f3b;
  FUN_00402676();
  puStack_d8 = (undefined1 *)0x578;
  iStack_dc = 0x6f0f4a;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar3 == 0) {
    puStack_d8 = (undefined1 *)0x0;
  }
  else {
    puStack_d8 = (undefined1 *)0x6f0f5c;
    puStack_d8 = (undefined1 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_dc = 0x6f0f70;
  iVar3 = FUN_00450382();
  puStack_d8 = (undefined1 *)(unaff_EBP + -0x80);
  iStack_dc = 1;
  uStack_e0 = 8;
  uStack_e4 = 0x8c;
  uStack_e8 = 2;
  iStack_f0 = 0x6f0f8a;
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))();
  if ((int *)extraout_ECX[0x171] != (int *)0x0) {
    iStack_f0 = 0x6f0f99;
    (**(code **)(*(int *)extraout_ECX[0x171] + 0xc))();
    iStack_f0 = 0x6f0fa4;
    FUN_00450463();
  }
  iStack_f0 = 0xfc3;
  iStack_f4 = unaff_EBP + -0x10;
  uStack_f8 = 0x6f0fb4;
  iStack_f0 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_f4 = 0x6f0fc1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_f0 = 0x6f0fcd;
  FUN_00402676();
  iStack_f0 = 0x578;
  iStack_f4 = 0x6f0fdc;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar3 == 0) {
    iStack_f0 = 0;
  }
  else {
    iStack_f0 = 0x6f0fee;
    iStack_f0 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_f4 = 0x6f1002;
  iVar3 = FUN_00450382();
  iStack_f0 = unaff_EBP + -0x80;
  iStack_f4 = 1;
  uStack_f8 = 0x1c;
  uStack_fc = 0x95;
  uStack_100 = 4;
  auStack_108[0] = 0x6f101c;
  (**(code **)(**(int **)(iVar3 + 4) + 0x20))();
  auStack_108[0] = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = auStack_108;
  uStack_10c = 0xffffffff;
  puStack_110 = &DAT_0097812c;
  uStack_114 = 0x6f1031;
  FUN_004184ca();
  uStack_10c = *(undefined4 *)(unaff_EBP + 8);
  puStack_110 = (undefined *)0x6f103b;
  FUN_0078a024();
  auStack_108[0] = 0x68;
  uStack_10c = 0x6f1047;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar3 == 0) {
    auStack_108[0] = 0;
  }
  else {
    auStack_108[0] = 0x6f1059;
    auStack_108[0] = FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_10c = 0x6f106d;
  FUN_0048b9a0();
  auStack_108[0] = 0;
  uStack_10c = 0xa2;
  puStack_110 = (undefined *)0x6b;
  uStack_114 = 4;
  uStack_118 = 5;
  uStack_11c = 0;
  (**(code **)(*(int *)extraout_ECX[0x160] + 8))();
  piStack_128 = (int *)0x6f1092;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  piStack_128 = (int *)(unaff_EBP + -0x58);
  puStack_12c = (undefined1 *)0x6f109c;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f10a8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  piStack_128 = (int *)0x6f10b6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  piStack_128 = (int *)(unaff_EBP + -0x24);
  puStack_134 = &DAT_00980690;
  puStack_12c = (undefined1 *)0x6f10c0;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f10cc;
    FUN_00878dfb();
    puStack_134 = extraout_ECX_03;
  }
  piStack_128 = (int *)0x0;
  puStack_12c = (undefined1 *)(unaff_EBP + -0x58);
  piStack_130 = (int *)(unaff_EBP + -0x24);
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_134;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00679e4e(&puStack_134,0xfc4);
  iVar3 = unaff_EBP + -0xac;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  puStack_12c = (undefined1 *)0x6f1118;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (iVar3 != 0) {
    piStack_128 = (int *)0x6f112f;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      piStack_128 = (int *)0x6f1140;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  piStack_128 = (int *)0x6f1150;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f115b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  piStack_128 = (int *)0x6f1168;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f1173;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  piStack_128 = (int *)0x6f1180;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f118b;
    FUN_00878dfb();
  }
  piStack_128 = (int *)0x6f1195;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  piStack_128 = (int *)(unaff_EBP + -0x34);
  puStack_12c = (undefined1 *)0x6f119f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f11ab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  piStack_128 = (int *)0x6f11b9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  piStack_128 = (int *)(unaff_EBP + -0x44);
  puVar1 = &DAT_00980690;
  puStack_12c = (undefined1 *)0x6f11c3;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f11cf;
    FUN_00878dfb();
    puVar1 = extraout_ECX_04;
  }
  piStack_128 = (int *)0x0;
  puStack_12c = (undefined1 *)(unaff_EBP + -0x34);
  piStack_130 = (int *)(unaff_EBP + -0x44);
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_134;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  puStack_134 = puVar1;
  FUN_00679e4e(&puStack_134,0xfc5);
  iVar3 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  puStack_12c = (undefined1 *)0x6f121b;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(int *)(unaff_EBP + -0x84) = iVar3;
  if (iVar3 != 0) {
    piStack_128 = (int *)0x6f1238;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      piStack_128 = (int *)0x6f1249;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_128 = (int *)0x6f1259;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f1264;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  piStack_128 = (int *)0x6f1271;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f127c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  piStack_128 = (int *)0x6f1289;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f1294;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    FUN_0087a1b0();
    piStack_128 = (int *)0x0;
    piStack_130 = *(int **)(unaff_EBP + 8);
    puStack_134 = (undefined4 *)0x6f12af;
    puStack_12c = auStack_120;
    piStack_130 = (int *)FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x70) = &puStack_12c;
    puStack_134 = (undefined4 *)0x6f12bb;
    FUN_00448a17();
    piStack_130 = (int *)(unaff_EBP + -0xbc);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_134 = (undefined4 *)0x6f12ce;
    FUN_0040263d();
    puStack_134 = (undefined4 *)0x6f12d5;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    puStack_12c = (undefined1 *)0x6f12e0;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x88) = uVar2;
    FUN_0087a1b0();
    piStack_128 = (int *)0x0;
    piStack_130 = *(int **)(unaff_EBP + 8);
    puStack_134 = (undefined4 *)0x6f12fd;
    puStack_12c = auStack_120;
    piStack_130 = (int *)FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x70) = &puStack_12c;
    puStack_134 = (undefined4 *)0x6f1309;
    FUN_00448a17();
    piStack_130 = (int *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    puStack_134 = (undefined4 *)0x6f1319;
    FUN_0040263d();
    puStack_134 = (undefined4 *)0x6f1320;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    puStack_12c = (undefined1 *)0x6f132b;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    puStack_12c = (undefined1 *)(unaff_EBP + -0x88);
    *(int ***)(unaff_EBP + -0x70) = &piStack_128;
    piStack_130 = (int *)0x6f1342;
    FUN_0048bb05();
    piStack_130 = (int *)(unaff_EBP + -0x14);
    *(undefined1 ***)(unaff_EBP + -0x8c) = &puStack_12c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    puStack_134 = (undefined4 *)0x6f1358;
    puStack_12c = extraout_ECX_05;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    piStack_130 = (int *)0x6f1367;
    FUN_0048b99c();
    piStack_130 = (int *)0x6f136e;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    piStack_128 = (int *)0x6f137b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_128 = (int *)0x6f1386;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_128 = (int *)0x6f1396;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_128 = (int *)0x6f13a1;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 3);
  piStack_128 = (int *)0x6f13ba;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  piStack_128 = (int *)0x6f13e0;
  FUN_0048b9e9();
  FUN_006f1684();
  piStack_128 = (int *)(unaff_EBP + 8);
  puStack_12c = (undefined1 *)0x6f13f7;
  puVar1 = (undefined4 *)FUN_00679d86();
  puStack_12c = (undefined1 *)*puVar1;
  piStack_128 = extraout_ECX + 0x179;
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  piStack_130 = (int *)0x6f140c;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_00402676();
  piStack_128 = (int *)(unaff_EBP + 8);
  puStack_12c = (undefined1 *)0x6f142b;
  puVar1 = (undefined4 *)FUN_00679d86();
  puStack_12c = (undefined1 *)*puVar1;
  piStack_128 = extraout_ECX + 0x17a;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  piStack_130 = (int *)0x6f1440;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_00402676();
  piStack_128 = (int *)(unaff_EBP + 8);
  puStack_12c = (undefined1 *)0x6f145f;
  puVar1 = (undefined4 *)FUN_00679d86();
  puStack_12c = (undefined1 *)*puVar1;
  piStack_128 = extraout_ECX + 0x17b;
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  piStack_130 = (int *)0x6f1474;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_00402676();
  piStack_128 = (int *)0x6f148d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  piStack_128 = (int *)(unaff_EBP + -0x6c);
  piVar4 = &DAT_00980690;
  puStack_12c = (undefined1 *)0x6f1497;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f14a3;
    FUN_00878dfb();
    piVar4 = extraout_ECX_06;
  }
  piStack_128 = (int *)0xffffffff;
  puStack_12c = (undefined1 *)0xb;
  *(int ***)(unaff_EBP + 8) = &piStack_130;
  puStack_134 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  piStack_130 = piVar4;
  FUN_00679e4e(&piStack_130);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  puStack_134 = (undefined4 *)0x6f14ce;
  FUN_0044974c();
  puStack_134 = (undefined4 *)0x6f14d5;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  piStack_128 = (int *)0x6f14e2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f14ed;
    FUN_00878dfb();
  }
  piStack_128 = (int *)0x6f14f7;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  piStack_128 = (int *)(unaff_EBP + -0x6c);
  piVar4 = &DAT_00980690;
  puStack_12c = (undefined1 *)0x6f1501;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f150d;
    FUN_00878dfb();
    piVar4 = extraout_ECX_07;
  }
  piStack_128 = (int *)0xff000000;
  puStack_12c = (undefined1 *)0xb;
  *(int ***)(unaff_EBP + 8) = &piStack_130;
  puStack_134 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  piStack_130 = piVar4;
  FUN_00679e4e(&piStack_130);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  puStack_134 = (undefined4 *)0x6f153b;
  FUN_0044974c();
  puStack_134 = (undefined4 *)0x6f1542;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  piStack_128 = (int *)0x6f154f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f155a;
    FUN_00878dfb();
  }
  piStack_128 = (int *)0x6f1564;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  piStack_128 = (int *)(unaff_EBP + -0x6c);
  piVar4 = &DAT_00980690;
  puStack_12c = (undefined1 *)0x6f156e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f157a;
    FUN_00878dfb();
    piVar4 = extraout_ECX_08;
  }
  piStack_128 = (int *)0xff909090;
  puStack_12c = (undefined1 *)0xb;
  *(int ***)(unaff_EBP + 8) = &piStack_130;
  puStack_134 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  piStack_130 = piVar4;
  FUN_00679e4e(&piStack_130);
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  puStack_134 = (undefined4 *)0x6f15a8;
  FUN_0044974c();
  puStack_134 = (undefined4 *)0x6f15af;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  piStack_128 = (int *)0x6f15bc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_128 = (int *)0x6f15c9;
    FUN_00878dfb();
  }
  extraout_ECX[0x16a] = 0;
  piStack_128 = (int *)0x6f15db;
  FUN_004b2699();
  extraout_ECX[0x16f] = 1;
  piStack_128 = (int *)0x6f15f4;
  (**(code **)(*(int *)(extraout_ECX[0x16c] + 4) + 0x1c))();
  piStack_128 = (int *)extraout_ECX[0x16f];
  puStack_12c = (undefined1 *)0x6f1608;
  (**(code **)(*(int *)(extraout_ECX[0x16e] + 4) + 0x1c))();
  puStack_12c = (undefined1 *)0x3;
  piStack_130 = (int *)0x6f1611;
  (**(code **)(*extraout_ECX + 0x20))();
  piStack_130 = *(int **)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (piStack_130 != (int *)0x0) {
    puStack_134 = (undefined4 *)0x6f1622;
    (**(code **)(*piStack_130 + 8))();
  }
  piStack_130 = *(int **)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (piStack_130 != (int *)0x0) {
    puStack_134 = (undefined4 *)0x6f1633;
    (**(code **)(*piStack_130 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_130 = (int *)0x6f163f;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


