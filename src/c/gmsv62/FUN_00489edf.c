/* FUN_00489edf - 0x00489edf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00489edf(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  undefined4 *puStack_fc;
  int iStack_f8;
  undefined1 *puStack_f4;
  int iStack_f0;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  FUN_00879bb8();
  uStack_d0 = 0x68;
  *(undefined4 *)(extraout_ECX + 0x594) = *(undefined4 *)(unaff_EBP + 8);
  uStack_d4 = 0x489f09;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uStack_d0 = 0;
  }
  else {
    uStack_d0 = 0x489f1c;
    uStack_d0 = FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_d4 = 0x489f2d;
  FUN_0048b9a0();
  uStack_d0 = 0;
  uStack_d4 = 0x9c;
  uStack_d8 = 0x1c;
  uStack_dc = 0x12;
  uStack_e0 = 4;
  uStack_e4 = 1000;
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 8))();
  iVar1 = *(int *)(extraout_ECX + 0x68);
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  iStack_f0 = 0x489f65;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_f0 = 0x489f78;
  FUN_00403191();
  iStack_f0 = 0;
  puStack_f4 = (undefined1 *)(unaff_EBP + -0x8c);
  iStack_f8 = unaff_EBP + -0x9c;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_f4 = (undefined1 *)0x489fcd;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x34) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    iStack_f0 = 0x489fe3;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_f0 = 0x489ff4;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_f0 = 0x48a004;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a00f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_f0 = 0x48a01f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a02a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_f0 = 0x48a03a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a045;
    FUN_00878dfb();
  }
  iStack_f0 = 0x48a04f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  iStack_f0 = unaff_EBP + -0x6c;
  puStack_f4 = (undefined1 *)0x48a05d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a069;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_f0 = 0x48a077;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  iStack_f0 = unaff_EBP + -0x7c;
  puStack_fc = &DAT_00980690;
  puStack_f4 = (undefined1 *)0x48a085;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a091;
    FUN_00878dfb();
    puStack_fc = extraout_ECX_00;
  }
  iStack_f0 = 0;
  puStack_f4 = (undefined1 *)(unaff_EBP + -0x6c);
  iStack_f8 = unaff_EBP + -0x7c;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_f4 = (undefined1 *)0x48a0db;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_f0 = 0x48a0f1;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_f0 = 0x48a102;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_f0 = 0x48a112;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a11d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_f0 = 0x48a12a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a135;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_f0 = 0x48a142;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_f0 = 0x48a14d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    FUN_0087a1b0();
    iStack_f0 = 0;
    iStack_f8 = *(undefined4 *)(unaff_EBP + 8);
    puStack_fc = (undefined4 *)0x48a165;
    puStack_f4 = auStack_e8;
    iStack_f8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_f4;
    puStack_fc = (undefined4 *)0x48a171;
    FUN_00448a17();
    iStack_f8 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_fc = (undefined4 *)0x48a181;
    FUN_0040263d();
    puStack_fc = (undefined4 *)0x48a188;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_f4 = (undefined1 *)0x48a193;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    FUN_0087a1b0();
    iStack_f0 = 0;
    iStack_f8 = *(undefined4 *)(unaff_EBP + 8);
    puStack_fc = (undefined4 *)0x48a1ab;
    puStack_f4 = auStack_e8;
    iStack_f8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_f4;
    puStack_fc = (undefined4 *)0x48a1b7;
    FUN_00448a17();
    iStack_f8 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_fc = (undefined4 *)0x48a1c7;
    FUN_0040263d();
    puStack_fc = (undefined4 *)0x48a1ce;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_f4 = (undefined1 *)0x48a1d9;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar2;
    puStack_f4 = (undefined1 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + -0x28) = &iStack_f0;
    iStack_f8 = 0x48a1ed;
    FUN_0048bb05();
    iStack_f8 = unaff_EBP + -0x3c;
    *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_f4;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_fc = (undefined4 *)0x48a200;
    puStack_f4 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_f8 = 0x48a20c;
    FUN_0048b99c();
    iStack_f8 = 0x48a213;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_f0 = 0x48a220;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_f0 = 0x48a22b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_f0 = 0x48a238;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_f0 = 0x48a243;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 5);
  iStack_f0 = 0x48a25c;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_f0 = 0x48a27f;
  FUN_0048b9e9();
  iStack_f0 = 0x66;
  puStack_f4 = (undefined1 *)0x36;
  iStack_f8 = 0xa0;
  puStack_fc = (undefined4 *)0x0;
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x70) + 0x34) = 0x8c;
  *(undefined4 *)(extraout_ECX + 0x588) = 1;
  FUN_004b2699();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x98) + 0x20))();
  iStack_188 = 0x48a536;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_188 = unaff_EBP + -0x4c;
  iStack_18c = 0x48a544;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_188 = 0x48a550;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_188 = 0x48a55e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_188 = unaff_EBP + -0x5c;
  puStack_194 = &DAT_00980690;
  iStack_18c = 0x48a56c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_188 = 0x48a578;
    FUN_00878dfb();
    puStack_194 = extraout_ECX_02;
  }
  iStack_188 = 0;
  iStack_18c = unaff_EBP + -0x4c;
  iStack_190 = unaff_EBP + -0x5c;
  *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_194;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00679e4e(&puStack_194,0x4e9);
  iVar1 = unaff_EBP + -0xcc;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_18c = 0x48a5c2;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_188 = 0x48a5d4;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_188 = 0x48a5e5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_188 = 0x48a5f5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_188 = 0x48a600;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_188 = 0x48a60d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_188 = 0x48a618;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_188 = 0x48a625;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_188 = 0x48a630;
    FUN_00878dfb();
  }
  *(undefined4 *)(extraout_ECX + 0x590) = 0xffffffff;
  FUN_0048ab8b();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_188 = 0x48a65b;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_188 = 0x48a66c;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


