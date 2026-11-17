/* FUN_0069f277 - 0x0069f277 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0069f277(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  undefined4 *extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  int unaff_EBP;
  undefined4 *puStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x204) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20c) = 0xff000000;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 1;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_00403384();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 0x80) + 0x20))();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uVar2 = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  switch(uVar2) {
  case 0:
    iStack_248 = 0x69f388;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_248 = 0x69f398;
    FUN_00403191();
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0x140;
    iStack_250 = unaff_EBP + -0x130;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_254 = extraout_ECX_00;
    FUN_00679e4e(&puStack_254,0xc10);
    iVar1 = unaff_EBP + -0x180;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_24c = 0x69f3e8;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    iStack_248 = 0x69f3fd;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69f40e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_248 = 0x69f41e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f429;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_248 = 0x69f439;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f444;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69f454;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f45f;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x28;
    iStack_24c = 0x69f46f;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_248 = 0x69f47c;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  case 1:
    iStack_248 = 0x69f494;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_248 = 0x69f4a4;
    FUN_00403191();
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0x160;
    iStack_250 = unaff_EBP + -0x120;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_254 = extraout_ECX_01;
    FUN_00679e4e(&puStack_254,0xc10);
    iVar1 = unaff_EBP + -0x1d0;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_24c = 0x69f4f4;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x60) = uVar2;
    iStack_248 = 0x69f509;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69f51a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_248 = 0x69f52a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f535;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_248 = 0x69f545;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f550;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69f560;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f56b;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x40;
    iStack_24c = 0x69f57b;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_248 = 0x69f588;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  case 2:
    iStack_248 = 0x69f5a0;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_248 = 0x69f5b0;
    FUN_00403191();
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0x110;
    iStack_250 = unaff_EBP + -0x100;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_254 = extraout_ECX_02;
    FUN_00679e4e(&puStack_254,0xc10);
    iVar1 = unaff_EBP + -0x1b0;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_24c = 0x69f600;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x44) = uVar2;
    iStack_248 = 0x69f615;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69f626;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_248 = 0x69f636;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f641;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_248 = 0x69f651;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f65c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69f66c;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f677;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x4c;
    iStack_24c = 0x69f687;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_248 = 0x69f694;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  case 3:
    iStack_248 = 0x69f6ac;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_248 = 0x69f6bc;
    FUN_00403191();
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0x150;
    iStack_250 = unaff_EBP + -0xf0;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_254 = extraout_ECX_03;
    FUN_00679e4e(&puStack_254,0xc10);
    iVar1 = unaff_EBP + -0x1f0;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_24c = 0x69f70c;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
    iStack_248 = 0x69f721;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69f732;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_248 = 0x69f742;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f74d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_248 = 0x69f75d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f768;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69f778;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f783;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x3c;
    iStack_24c = 0x69f793;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_248 = 0x69f7a0;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  default:
    goto switchD_0069f375_caseD_4;
  case 5:
    iStack_248 = 0x69f8df;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
    iStack_248 = unaff_EBP + -0xe0;
    iStack_24c = 0x69f8ec;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69f8f8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_248 = 0x69f909;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
    iStack_248 = unaff_EBP + -0xa0;
    puStack_254 = &DAT_00980690;
    iStack_24c = 0x69f916;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69f922;
      FUN_00878dfb();
      puStack_254 = extraout_ECX_05;
    }
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0xe0;
    iStack_250 = unaff_EBP + -0xa0;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00679e4e(&puStack_254,0xc11);
    iVar1 = unaff_EBP + -0x1a0;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_24c = 0x69f972;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x5c) = uVar2;
    iStack_248 = 0x69f987;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69f998;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_248 = 0x69f9a8;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f9b3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_248 = 0x69f9c3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f9ce;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69f9de;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f9e9;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x50;
    iStack_24c = 0x69f9f9;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_248 = 0x69fa06;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  case 6:
    iStack_248 = 0x69f7b9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
    iStack_248 = unaff_EBP + -0xc0;
    iStack_24c = 0x69f7c6;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69f7d2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_248 = 0x69f7e2;
    FUN_00403191();
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0xc0;
    iStack_250 = unaff_EBP + -0x170;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_254 = extraout_ECX_04;
    FUN_00679e4e(&puStack_254,0xc0f);
    iVar1 = unaff_EBP + -400;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_24c = 0x69f832;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x58) = uVar2;
    iStack_248 = 0x69f847;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69f858;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_248 = 0x69f868;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f873;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_248 = 0x69f883;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f88e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69f89e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69f8a9;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x48;
    iStack_24c = 0x69f8b9;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_248 = 0x69f8c6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  case 7:
    iStack_248 = 0x69fa1f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
    iStack_248 = unaff_EBP + -0xb0;
    iStack_24c = 0x69fa2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69fa38;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_248 = 0x69fa49;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xd0));
    iStack_248 = unaff_EBP + -0xd0;
    puStack_254 = &DAT_00980690;
    iStack_24c = 0x69fa56;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69fa62;
      FUN_00878dfb();
      puStack_254 = extraout_ECX_06;
    }
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0xb0;
    iStack_250 = unaff_EBP + -0xd0;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00679e4e(&puStack_254,0xc0f);
    iVar1 = unaff_EBP + -0x1c0;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_24c = 0x69fab2;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
    iStack_248 = 0x69fac7;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69fad8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_248 = 0x69fae8;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69faf3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_248 = 0x69fb03;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69fb0e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69fb1e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69fb29;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x34;
    iStack_24c = 0x69fb39;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_248 = 0x69fb46;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    break;
  case 8:
    iStack_248 = 0x69fb5c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
    iStack_248 = unaff_EBP + -0x80;
    iStack_24c = 0x69fb66;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69fb72;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_248 = 0x69fb80;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
    iStack_248 = unaff_EBP + -0x70;
    puStack_254 = &DAT_00980690;
    iStack_24c = 0x69fb8a;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69fb96;
      FUN_00878dfb();
      puStack_254 = extraout_ECX_07;
    }
    iStack_248 = 0;
    iStack_24c = unaff_EBP + -0x80;
    iStack_250 = unaff_EBP + -0x70;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_254;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_00679e4e(&puStack_254,0xc0f);
    iVar1 = unaff_EBP + -0x1e0;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_24c = 0x69fbe0;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    iStack_248 = 0x69fbf5;
    iVar1 = FUN_0041a581();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_248 = 0x69fc06;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_248 = 0x69fc16;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69fc21;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_248 = 0x69fc2e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69fc39;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_248 = 0x69fc46;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69fc51;
      FUN_00878dfb();
    }
    iStack_248 = unaff_EBP + -0x2c;
    iStack_24c = 0x69fc61;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_248 = 0x69fc6e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
  }
  FUN_00414ebb();
switchD_0069f375_caseD_4:
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_248 = 0x69fc89;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  do {
    pcVar3 = *(char **)(unaff_EBP + -0x10);
    if (*pcVar3 == ' ') {
      iStack_248 = unaff_EBP + -0x2c;
      iStack_24c = 0x69fcb3;
      FUN_0045e08c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_248 = 0x69fcc0;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00414ebb();
      pcVar3 = *(char **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    while( true ) {
      if (pcVar3 == (char *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(pcVar3 + -4);
      }
      if (iVar1 < *(int *)(unaff_EBP + -0x28)) goto LAB_0069fe07;
      iStack_248 = unaff_EBP + -0x24;
      iStack_24c = 0x69fcf9;
      FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_248 = 0x69fd07;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      iStack_248 = unaff_EBP + -0x80;
      iStack_24c = 0x69fd11;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_248 = 0x69fd1d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_248 = 0x69fd2d;
      iStack_24c = FUN_00449713();
      *(int **)(unaff_EBP + -0x20) = &iStack_248;
      iStack_250 = 0x69fd39;
      FUN_00448a17();
      iStack_250 = unaff_EBP + -0x30;
      iStack_24c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      puStack_254 = (undefined4 *)0x69fd47;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_24c = 0x69fd54;
      FUN_0044974c();
      iStack_24c = 0x69fd5b;
      uVar4 = FUN_00448ebb();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (uVar4 < 0xa5);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        iStack_248 = 0x69fd75;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_248 = 0x69fd82;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_248 = 0x69fd8d;
        FUN_00878dfb();
      }
      if (*(char *)(unaff_EBP + -0x11) != '\0') break;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      pcVar3 = *(char **)(unaff_EBP + -0x10);
    }
    iStack_248 = -1;
    iStack_24c = 0x69fdbd;
    FUN_004655d4();
    iStack_248 = 0x69fdc4;
    FUN_00414f8b();
    iStack_248 = unaff_EBP + -0x34;
    iStack_24c = 0x69fde2;
    FUN_0045e08c();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_248 = 0x69fdef;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00414ebb();
LAB_0069fe07:
    iStack_248 = 0x69fe11;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
    iStack_248 = unaff_EBP + -0x70;
    iStack_24c = 0x69fe1b;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_248 = 0x69fe27;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_248 = 0x69fe37;
    iStack_24c = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_248;
    iStack_250 = 0x69fe43;
    FUN_00448a17();
    iStack_250 = unaff_EBP + -0x38;
    iStack_24c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    puStack_254 = (undefined4 *)0x69fe51;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_24c = 0x69fe5e;
    FUN_0044974c();
    iStack_24c = 0x69fe65;
    uVar4 = FUN_00448ebb();
    *(bool *)(unaff_EBP + -0x11) = uVar4 < 0xa5;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      iStack_248 = 0x69fe7c;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_248 = 0x69fe89;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_248 = 0x69fe94;
      FUN_00878dfb();
    }
    if (*(char *)(unaff_EBP + -0x11) != '\0') {
      if (**(char **)(unaff_EBP + -0x10) == ' ') {
        iStack_248 = unaff_EBP + -0x2c;
        iStack_24c = 0x69febe;
        FUN_0045e08c();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        iStack_248 = 0x69fecb;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_00414ebb();
      }
      iStack_248 = -1;
      iStack_24c = 0x69feeb;
      FUN_004655d4();
      iStack_248 = 0x69fef2;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045c14e();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


