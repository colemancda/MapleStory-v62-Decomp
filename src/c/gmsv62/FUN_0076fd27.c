/* FUN_0076fd27 - 0x0076fd27 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076fd27(void)

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
  int extraout_ECX_07;
  int extraout_ECX_08;
  int unaff_EBP;
  undefined4 *puStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  
  FUN_00879bb8();
  puStack_64 = (undefined1 *)0x76fd45;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  puStack_64 = (undefined1 *)(unaff_EBP + -0x3c);
  iStack_68 = 0x76fd53;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    puStack_64 = (undefined1 *)0x76fd61;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_64 = (undefined1 *)0x76fd6a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  puStack_64 = (undefined1 *)(unaff_EBP + -0x2c);
  puStack_70 = &DAT_00980690;
  iStack_68 = 0x76fd78;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    puStack_64 = (undefined1 *)0x76fd84;
    FUN_00878dfb();
    puStack_70 = extraout_ECX;
  }
  puStack_64 = (undefined1 *)0x0;
  iStack_68 = unaff_EBP + -0x3c;
  iStack_6c = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_70,0x827);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x76fdd0;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    puStack_64 = (undefined1 *)0x76fde6;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      puStack_64 = (undefined1 *)0x76fdf7;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_64 = (undefined1 *)0x76fe04;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_64 = (undefined1 *)0x76fe0f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_64 = (undefined1 *)0x76fe1c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_64 = (undefined1 *)0x76fe27;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x76fe34;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x76fe3f;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x82e;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76fe64;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76fe6b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x76fe76;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x76fe85;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x76fe96;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x76fea3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x76feae;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x82f;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76fed3;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76feda;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_68 = 0x76fee5;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x76fef4;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x76ff05;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x76ff12;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x76ff1d;
    FUN_00878dfb();
    iVar1 = extraout_ECX_02;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x830;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76ff42;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76ff49;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x76ff54;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x76ff63;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x76ff74;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x76ff81;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x76ff8c;
    FUN_00878dfb();
    iVar1 = extraout_ECX_03;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x831;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76ffb1;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76ffb8;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_68 = 0x76ffc3;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x76ffd2;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x76ffe3;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x76fff0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x76fffb;
    FUN_00878dfb();
    iVar1 = extraout_ECX_04;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x832;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x770020;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x770027;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_68 = 0x770032;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x770041;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x770052;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x77005f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x77006a;
    FUN_00878dfb();
    iVar1 = extraout_ECX_05;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x833;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x77008f;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x770096;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x7700a1;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x7700b0;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x7700c1;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x7700ce;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x7700d9;
    FUN_00878dfb();
    iVar1 = extraout_ECX_06;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x834;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x7700fe;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x770105;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_68 = 0x770110;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x77011f;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x770130;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x77013d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x770148;
    FUN_00878dfb();
    iVar1 = extraout_ECX_07;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x835;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x77016d;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x770174;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_68 = 0x77017f;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x77018e;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x77019f;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x7701ac;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_64 = (undefined1 *)0x7701b7;
    FUN_00878dfb();
    iVar1 = extraout_ECX_08;
  }
  puStack_64 = (undefined1 *)0x0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x82d;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x7701dc;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x7701e3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_68 = 0x7701ee;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_64 = (undefined1 *)0x7701fd;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    puStack_64 = (undefined1 *)0x77020e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_64 = (undefined1 *)0x77021b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    puStack_64 = (undefined1 *)0x770226;
    FUN_00878dfb();
  }
  puStack_64 = (undefined1 *)(unaff_EBP + -0x18);
  iStack_68 = 0x770236;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_64 = (undefined1 *)0x770243;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puStack_64 = (undefined1 *)(unaff_EBP + -0x18);
  iStack_68 = 0x77025f;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_64 = (undefined1 *)0x77026c;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puStack_64 = (undefined1 *)(unaff_EBP + -0x18);
  iStack_68 = 0x770288;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_64 = (undefined1 *)0x770295;
  FUN_00414f8b();
  puStack_64 = (undefined1 *)0x77029e;
  FUN_00414f8b();
  puStack_64 = (undefined1 *)0x7702a7;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  puStack_64 = &DAT_00978474;
  iStack_68 = 0x7702c2;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    puStack_64 = (undefined1 *)0x7702d3;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


