/* FUN_007734d7 - 0x007734d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007734d7(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  int extraout_ECX_08;
  int unaff_EBP;
  undefined4 *puStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 *puStack_84;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  puStack_84 = (undefined1 *)0x7734f5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  puStack_84 = (undefined1 *)(unaff_EBP + -0x3c);
  iStack_88 = 0x773503;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x773511;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_84 = (undefined1 *)0x77351a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  puStack_84 = (undefined1 *)(unaff_EBP + -0x2c);
  puStack_90 = &DAT_00980690;
  iStack_88 = 0x773528;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x773534;
    FUN_00878dfb();
    puStack_90 = extraout_ECX;
  }
  puStack_84 = (undefined1 *)0x0;
  iStack_88 = unaff_EBP + -0x3c;
  iStack_8c = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_90;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_90,0x1120);
  iVar1 = unaff_EBP + -0x6c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_88 = 0x773580;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    puStack_84 = (undefined1 *)0x773596;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      puStack_84 = (undefined1 *)0x7735a7;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_84 = (undefined1 *)0x7735b4;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x7735bf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_84 = (undefined1 *)0x7735cc;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x7735d7;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x7735e4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x7735ef;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x82e;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x773614;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x77361b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_88 = 0x773626;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x773635;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773646;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x773653;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x77365e;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x830;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x773683;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x77368a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_88 = 0x773695;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x7736a4;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x7736b5;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x7736c2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x7736cd;
    FUN_00878dfb();
    iVar1 = extraout_ECX_02;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x831;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x7736f2;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x7736f9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_88 = 0x773704;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x773713;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773724;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x773731;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x77373c;
    FUN_00878dfb();
    iVar1 = extraout_ECX_03;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x832;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x773761;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x773768;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_88 = 0x773773;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x773782;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773793;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x7737a0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x7737ab;
    FUN_00878dfb();
    iVar1 = extraout_ECX_04;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x833;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x7737d0;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x7737d7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_88 = 0x7737e2;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x7737f1;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773802;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x77380f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x77381a;
    FUN_00878dfb();
    iVar1 = extraout_ECX_05;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x834;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x77383f;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x773846;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_88 = 0x773851;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x773860;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773871;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x77387e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x773889;
    FUN_00878dfb();
    iVar1 = extraout_ECX_06;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x835;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x7738ae;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x7738b5;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_88 = 0x7738c0;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x7738cf;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x7738e0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x7738ed;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x7738f8;
    FUN_00878dfb();
  }
  puStack_84 = (undefined1 *)(unaff_EBP + -0x18);
  iStack_88 = 0x773908;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_84 = (undefined1 *)0x773915;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puStack_84 = (undefined1 *)(unaff_EBP + -0x18);
  iStack_88 = 0x773931;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_84 = (undefined1 *)0x77393e;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puStack_84 = (undefined1 *)(unaff_EBP + -0x18);
  iStack_88 = 0x77395a;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_84 = (undefined1 *)0x773967;
  FUN_00414f8b();
  puStack_84 = (undefined1 *)0x773970;
  FUN_00414f8b();
  puStack_84 = (undefined1 *)0x773979;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puStack_84 = &DAT_00978474;
  iStack_88 = 0x773994;
  FUN_00414edd();
  puStack_84 = (undefined1 *)0x77399e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  puStack_84 = (undefined1 *)(unaff_EBP + -0x5c);
  iStack_88 = 0x7739ac;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x7739b8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_84 = (undefined1 *)0x7739c6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  puStack_84 = (undefined1 *)(unaff_EBP + -0x4c);
  puVar4 = &DAT_00980690;
  iStack_88 = 0x7739d4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x7739e0;
    FUN_00878dfb();
    puVar4 = extraout_ECX_07;
  }
  puStack_84 = (undefined1 *)0x0;
  iStack_88 = unaff_EBP + -0x5c;
  iStack_8c = unaff_EBP + -0x4c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_90;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_90 = puVar4;
  FUN_00679e4e(&puStack_90,0x827);
  iVar1 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_88 = 0x773a27;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x773a36;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773a47;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_84 = (undefined1 *)0x773a54;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x773a5f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_84 = (undefined1 *)0x773a6c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x773a77;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x773a84;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_84 = (undefined1 *)0x773a8f;
    FUN_00878dfb();
    iVar1 = extraout_ECX_08;
  }
  puStack_84 = (undefined1 *)0x0;
  puStack_90 = &iStack_88;
  *(int **)(unaff_EBP + -0x1c) = &iStack_88;
  iStack_8c = 0x82d;
  iStack_88 = iVar1;
  FUN_00679e4e();
  iStack_8c = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_90 = (undefined4 *)0x773ab4;
  FUN_0040263d();
  puStack_90 = (undefined4 *)0x773abb;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_88 = 0x773ac6;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_84 = (undefined1 *)0x773ad5;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_84 = (undefined1 *)0x773ae6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_84 = (undefined1 *)0x773af3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_84 = (undefined1 *)0x773afe;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    puStack_84 = (undefined1 *)0x773b0f;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


