/* FUN_007e62e9 - 0x007e62e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007e62e9(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x34] = 0;
  extraout_ECX[0x38] = 0;
  extraout_ECX[0x39] = 0;
  extraout_ECX[0x3c] = 0;
  extraout_ECX[0x3d] = 0;
  extraout_ECX[0x3e] = 0;
  extraout_ECX[0x3f] = 0;
  extraout_ECX[0x40] = 0;
  extraout_ECX[0x41] = 0;
  extraout_ECX[0x43] = 0;
  extraout_ECX[0x45] = 0;
  extraout_ECX[0x47] = 0;
  extraout_ECX[0x48] = 0;
  extraout_ECX[0x4a] = 0;
  extraout_ECX[0x4b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0074b9b2();
  extraout_ECX[0x187] = 0;
  extraout_ECX[0x189] = 0;
  extraout_ECX[0x18b] = 0;
  extraout_ECX[0x18d] = 0;
  extraout_ECX[399] = 0;
  pcStack_34 = ptr_0045e147;
  uStack_38 = 7;
  puStack_3c = (undefined4 *)0x8;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_0087b2f0(extraout_ECX + 400);
  extraout_ECX[0x19e] = 0;
  extraout_ECX[0x19f] = 0;
  extraout_ECX[0x1a0] = 0;
  extraout_ECX[0x1a1] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  extraout_ECX[0x1a2] = 0;
  extraout_ECX[0x1a3] = 0;
  extraout_ECX[0x1a4] = 0;
  extraout_ECX[0x1a6] = 0;
  *extraout_ECX = &PTR_FUN_008f2000;
  extraout_ECX[1] = &PTR_LAB_008f1fb4;
  extraout_ECX[2] = &PTR_FUN_008f1fb0;
  pcStack_34 = (code *)0xc;
  uStack_38 = 0x7e640e;
  FUN_00450550();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    pcStack_34 = (code *)(unaff_EBP + -0x18);
    uStack_38 = 0x7e6426;
    puVar1 = (undefined4 *)FUN_00679d86();
    pcStack_34 = (code *)(extraout_ECX[0x1a0] + *(int *)(unaff_EBP + -0x14));
    uStack_38 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_3c = (undefined4 *)0x7e643d;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00402676();
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x14) < 0x30);
  pcStack_34 = (code *)0x7e6460;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puVar1 = &DAT_00980690;
  uStack_38 = 0x7e646e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e647a;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  pcStack_34 = (code *)0xff000000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_3c = puVar1;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00450708(0);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcStack_34 = (code *)0x7e64c4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e64cf;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x18);
  uStack_38 = 0x7e64df;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  pcStack_34 = (code *)0x7e64ec;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff000000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00450708(1);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  pcStack_34 = (code *)0x7e6537;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6542;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x7e655c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x7e656a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6576;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_01;
  }
  pcStack_34 = (code *)0xffff0000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00450708(2);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcStack_34 = (code *)0x7e65c1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e65cc;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x18);
  uStack_38 = 0x7e65dc;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  pcStack_34 = (code *)0x7e65e9;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xffff0000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00450708(3);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  pcStack_34 = (code *)0x7e6634;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e663f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x7e6659;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x7e6667;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6673;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_02;
  }
  pcStack_34 = (code *)0xff00ff00;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00450708(4);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcStack_34 = (code *)0x7e66be;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e66c9;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x18);
  uStack_38 = 0x7e66d9;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  pcStack_34 = (code *)0x7e66e6;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff00ff00;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00450708(5);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  pcStack_34 = (code *)0x7e6731;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e673c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x7e6756;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x7e6764;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6770;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_03;
  }
  pcStack_34 = (code *)0xff0000ff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00450708(6);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcStack_34 = (code *)0x7e67bb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e67c6;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x18);
  uStack_38 = 0x7e67d6;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  pcStack_34 = (code *)0x7e67e3;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff0000ff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_00450708(7);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  pcStack_34 = (code *)0x7e682e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6839;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x7e6853;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x7e6861;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e686d;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_04;
  }
  pcStack_34 = (code *)0xffffffff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00450708(8);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcStack_34 = (code *)0x7e68b5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e68c0;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x18);
  uStack_38 = 0x7e68d0;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  pcStack_34 = (code *)0x7e68dd;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xffffffff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  FUN_00450708(9);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  pcStack_34 = (code *)0x7e6925;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6930;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x7e694a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x7e6958;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6964;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_05;
  }
  pcStack_34 = (code *)0xff51378c;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  FUN_00450708(10);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcStack_34 = (code *)0x7e69af;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e69ba;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x18);
  uStack_38 = 0x7e69ca;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  pcStack_34 = (code *)0x7e69d7;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff51378c;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_00450708(0xb);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  pcStack_34 = (code *)0x7e6a22;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7e6a2d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


