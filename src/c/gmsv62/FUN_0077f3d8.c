/* FUN_0077f3d8 - 0x0077f3d8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0077f3d8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
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
  int unaff_EBP;
  undefined4 *puStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  iStack_68 = 0;
  iStack_6c = 1;
  iStack_70 = 0xffffffff;
  puStack_74 = (undefined4 *)0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_00789e42(0xf,0);
  DAT_0097beec = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x162] = 0;
  extraout_ECX[0x163] = 0;
  extraout_ECX[0x164] = 0;
  extraout_ECX[0x165] = 0;
  extraout_ECX[0x166] = 0;
  extraout_ECX[0x167] = 0;
  extraout_ECX[0x168] = 0;
  extraout_ECX[0x169] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *extraout_ECX = &PTR_FUN_008f15a8;
  extraout_ECX[1] = &PTR_FUN_008f155c;
  extraout_ECX[2] = &PTR_FUN_008f1558;
  iStack_68 = 0x77f484;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_68 = unaff_EBP + -0x40;
  iStack_6c = 0x77f492;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x77f49e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_68 = 0x77f4a8;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_68 = unaff_EBP + -0x30;
  puVar4 = &DAT_00980690;
  iStack_6c = 0x77f4b6;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_68 = 0x77f4c2;
    FUN_00878dfb();
    puVar4 = extraout_ECX_00;
  }
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x40;
  iStack_70 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_74 = puVar4;
  FUN_00679e4e(&puStack_74,0x825);
  iVar1 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_6c = 0x77f50e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_68 = 0x77f524;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_68 = 0x77f535;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_68 = 0x77f542;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x77f54d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_68 = 0x77f55a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x77f565;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f572;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f57d;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x574;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f5a2;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f5a9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_6c = 0x77f5b4;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f5c6;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f5d7;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f5e4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f5ef;
    FUN_00878dfb();
    iVar1 = extraout_ECX_02;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x575;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f614;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f61b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_6c = 0x77f626;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f638;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f649;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f656;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f661;
    FUN_00878dfb();
    iVar1 = extraout_ECX_03;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x576;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f686;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f68d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_6c = 0x77f698;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f6aa;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f6bb;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f6c8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f6d3;
    FUN_00878dfb();
    iVar1 = extraout_ECX_04;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x578;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f6f8;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f6ff;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_6c = 0x77f70a;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f71c;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f72d;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f73a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f745;
    FUN_00878dfb();
    iVar1 = extraout_ECX_05;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x579;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f76a;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f771;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_6c = 0x77f77c;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f78e;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f79f;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f7ac;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f7b7;
    FUN_00878dfb();
    iVar1 = extraout_ECX_06;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x577;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f7dc;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f7e3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_6c = 0x77f7ee;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f800;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f811;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f81e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f829;
    FUN_00878dfb();
    iVar1 = extraout_ECX_07;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x57a;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f84e;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f855;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_6c = 0x77f860;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f872;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f883;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f890;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f89b;
    FUN_00878dfb();
    iVar1 = extraout_ECX_08;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x57b;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f8c0;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f8c7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_6c = 0x77f8d2;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f8e4;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f8f5;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f902;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f90d;
    FUN_00878dfb();
    iVar1 = extraout_ECX_09;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x57c;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f932;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f939;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_6c = 0x77f944;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f956;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f967;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f974;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f97f;
    FUN_00878dfb();
    iVar1 = extraout_ECX_10;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x1102;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77f9a4;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77f9ab;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_6c = 0x77f9b6;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77f9c5;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77f9d6;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77f9e3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77f9ee;
    FUN_00878dfb();
    iVar1 = extraout_ECX_11;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x1103;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77fa13;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77fa1a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_6c = 0x77fa25;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77fa37;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77fa48;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77fa55;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77fa60;
    FUN_00878dfb();
    iVar1 = extraout_ECX_12;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x1104;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77fa85;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77fa8c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_6c = 0x77fa97;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77faa9;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77faba;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77fac7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_68 = 0x77fad2;
    FUN_00878dfb();
    iVar1 = extraout_ECX_13;
  }
  iStack_68 = 0;
  puStack_74 = &iStack_6c;
  *(int **)(unaff_EBP + -0x20) = &iStack_6c;
  iStack_70 = 0x793;
  iStack_6c = iVar1;
  FUN_00679e4e();
  iStack_70 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_74 = (undefined4 *)0x77faf7;
  FUN_0040263d();
  puStack_74 = (undefined4 *)0x77fafe;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_6c = 0x77fb09;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_68 = 0x77fb1b;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_68 = 0x77fb2c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x77fb39;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_68 = 0x77fb44;
    FUN_00878dfb();
  }
  FUN_0077fcef();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_68 = 0x77fb5c;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


