/* FUN_005b0d22 - 0x005b0d22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005b0d22(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int unaff_EBP;
  undefined4 *puStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 *puVar5;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_005c0182();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x5f] = 0;
  extraout_ECX[0x61] = 0;
  extraout_ECX[99] = 0;
  extraout_ECX[0x65] = 0;
  extraout_ECX[0x67] = 0;
  extraout_ECX[0x69] = 0;
  extraout_ECX[0x6b] = 0;
  extraout_ECX[0x6d] = 0;
  extraout_ECX[0x6f] = 0;
  extraout_ECX[0x72] = 0;
  extraout_ECX[0x73] = 0;
  extraout_ECX[0x74] = 0;
  extraout_ECX[0x75] = 0;
  extraout_ECX[0x76] = 0;
  extraout_ECX[0x77] = 0;
  extraout_ECX[0x78] = 0;
  extraout_ECX[0x79] = 0;
  extraout_ECX[0x7a] = 0;
  extraout_ECX[0x7b] = 0;
  extraout_ECX[0x7c] = 0;
  extraout_ECX[0x7d] = 0;
  extraout_ECX[0x7e] = 0;
  extraout_ECX[0x7f] = 0;
  extraout_ECX[0x80] = 0;
  extraout_ECX[0x81] = 0;
  extraout_ECX[0x82] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_0074b9b2();
  extraout_ECX[0x1c2] = 0;
  extraout_ECX[0x1c6] = 0;
  extraout_ECX[0x1c7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  extraout_ECX[0x1fa] = 0;
  uVar1 = FUN_007d1e08();
  extraout_ECX[0x1fb] = uVar1;
  iStack_50 = unaff_EBP + -0x10;
  *extraout_ECX = &PTR_FUN_008ec8e0;
  extraout_ECX[1] = &PTR_FUN_008ec894;
  extraout_ECX[2] = &PTR_FUN_008ec890;
  iStack_54 = 0x5b0e3c;
  piVar2 = (int *)FUN_00679d86();
  iStack_54 = *piVar2;
  iStack_50 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_58 = 0x5b0e4d;
  FUN_004bc5f0();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iStack_50 = 0x5b0e63;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x5b0e71;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0e7d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_50 = 0x5b0e8b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  puStack_5c = &DAT_00980690;
  iStack_54 = 0x5b0e99;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0ea5;
    FUN_00878dfb();
    puStack_5c = extraout_ECX_00;
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00679e4e(&puStack_5c,0x608);
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_54 = 0x5b0eec;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b0efe;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b0f0f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_50 = 0x5b0f1c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0f27;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_50 = 0x5b0f34;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0f3f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b0f4c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0f57;
    FUN_00878dfb();
  }
  iStack_50 = 0x5b0f61;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  iStack_54 = 0x5b0f6f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0f7b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_50 = 0x5b0f89;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  puVar5 = &DAT_00980690;
  iStack_54 = 0x5b0f97;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5b0fa3;
    FUN_00878dfb();
    puVar5 = extraout_ECX_01;
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x28;
  iStack_58 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  puStack_5c = puVar5;
  FUN_00679e4e(&puStack_5c,0x609);
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_54 = 0x5b0fea;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b0ffc;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b100d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_50 = 0x5b101a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b1025;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_50 = 0x5b1032;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b103d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b104a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b1055;
    FUN_00878dfb();
  }
  iStack_50 = 0x5b105f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  iStack_54 = 0x5b106d;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5b1079;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_50 = 0x5b1087;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  puVar5 = &DAT_00980690;
  iStack_54 = 0x5b1095;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x5b10a1;
    FUN_00878dfb();
    puVar5 = extraout_ECX_02;
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x28;
  iStack_58 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_5c = puVar5;
  FUN_00679e4e(&puStack_5c,0x60a);
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_54 = 0x5b10e8;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b10fa;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b110b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_50 = 0x5b1118;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b1123;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_50 = 0x5b1130;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b113b;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b1148;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5b1153;
    FUN_00878dfb();
    iVar3 = extraout_ECX_03;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x616;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_5c = (undefined4 *)0x5b117b;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5b1182;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_54 = 0x5b118d;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b119f;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b11b0;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b11bd;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5b11c8;
    FUN_00878dfb();
    iVar3 = extraout_ECX_04;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x617;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_5c = (undefined4 *)0x5b11f0;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5b11f7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_54 = 0x5b1202;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b1214;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b1225;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b1232;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5b123d;
    FUN_00878dfb();
    iVar3 = extraout_ECX_05;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x618;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_5c = (undefined4 *)0x5b1265;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5b126c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  iStack_54 = 0x5b1277;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b1289;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b129a;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b12a7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_50 = 0x5b12b2;
    FUN_00878dfb();
    iVar3 = extraout_ECX_06;
  }
  iStack_50 = 0;
  puStack_5c = &iStack_54;
  *(int **)(unaff_EBP + -0x18) = &iStack_54;
  iStack_58 = 0x619;
  iStack_54 = iVar3;
  FUN_00679e4e();
  iStack_58 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_5c = (undefined4 *)0x5b12da;
  FUN_0040263d();
  puStack_5c = (undefined4 *)0x5b12e1;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_54 = 0x5b12ec;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  iStack_50 = 0x5b12fe;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x5b130f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_50 = 0x5b131c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x5b1327;
    FUN_00878dfb();
  }
  FUN_005b9c24();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


