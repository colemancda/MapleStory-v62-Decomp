/* FUN_006b6843 - 0x006b6843 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006b6843(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  int iVar2;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_004bc4fa();
  iVar2 = 0;
  DAT_009796f4 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  pcStack_34 = ptr_0045e147;
  uStack_38 = 5;
  puStack_3c = (undefined4 *)0x8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087b2f0(extraout_ECX + 0x25);
  extraout_ECX[0x2f] = 0;
  pcStack_34 = (code *)0xc;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *extraout_ECX = &PTR_FUN_008ef928;
  extraout_ECX[1] = &PTR_FUN_008ef8dc;
  extraout_ECX[2] = &PTR_FUN_008ef8d8;
  uStack_38 = 0x6b68c4;
  FUN_00450550();
  do {
    pcStack_34 = (code *)(unaff_EBP + -0x14);
    uStack_38 = 0x6b68d9;
    puVar1 = (undefined4 *)FUN_00679d86();
    uStack_38 = *puVar1;
    pcStack_34 = (code *)(iVar2 + extraout_ECX[0x1e]);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_3c = (undefined4 *)0x6b68ec;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x30);
  pcStack_34 = (code *)0x6b690d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puVar1 = &DAT_00980690;
  uStack_38 = 0x6b691b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6927;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  pcStack_34 = (code *)0xff000000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_3c = puVar1;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450708(0);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_34 = (code *)0x6b696e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6979;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  uStack_38 = 0x6b698a;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  pcStack_34 = (code *)0x6b6997;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff000000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450708(1);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  pcStack_34 = (code *)0x6b69de;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b69e9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x6b6a03;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x6b6a11;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6a1d;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_01;
  }
  pcStack_34 = (code *)0xffff0000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450708(2);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_34 = (code *)0x6b6a64;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6a6f;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  uStack_38 = 0x6b6a7b;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pcStack_34 = (code *)0x6b6a88;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xffff0000;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00450708(3);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pcStack_34 = (code *)0x6b6acf;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6ada;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x6b6af4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x6b6b02;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6b0e;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_02;
  }
  pcStack_34 = (code *)0xff00ff00;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00450708(4);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_34 = (code *)0x6b6b55;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6b60;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  uStack_38 = 0x6b6b6c;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pcStack_34 = (code *)0x6b6b79;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff00ff00;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00450708(5);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pcStack_34 = (code *)0x6b6bc0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6bcb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x6b6be5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x6b6bf3;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6bff;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_03;
  }
  pcStack_34 = (code *)0xff0000ff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00450708(6);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_34 = (code *)0x6b6c46;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6c51;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  uStack_38 = 0x6b6c5d;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  pcStack_34 = (code *)0x6b6c6a;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff0000ff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450708(7);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  pcStack_34 = (code *)0x6b6cb1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6cbc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x6b6cd6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x6b6ce4;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6cf0;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_04;
  }
  pcStack_34 = (code *)0xffffffff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00450708(8);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_34 = (code *)0x6b6d34;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6d3f;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  uStack_38 = 0x6b6d4b;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  pcStack_34 = (code *)0x6b6d58;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xffffffff;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00450708(9);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  pcStack_34 = (code *)0x6b6d9c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6da7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  pcStack_34 = (code *)0x6b6dc1;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puStack_3c = &DAT_00980690;
  uStack_38 = 0x6b6dcf;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6ddb;
    FUN_00878dfb();
    puStack_3c = extraout_ECX_05;
  }
  pcStack_34 = (code *)0xff51378c;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00450708(10);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pcStack_34 = (code *)0x6b6e22;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6e2d;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  uStack_38 = 0x6b6e39;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  pcStack_34 = (code *)0x6b6e46;
  FUN_0044f5f6();
  pcStack_34 = (code *)0xff51378c;
  uStack_38 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00679e4e(&puStack_3c,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00450708(0xb);
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  pcStack_34 = (code *)0x6b6e8d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x6b6e98;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x18);
}


