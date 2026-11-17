/* FUN_0076c856 - 0x0076c856 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076c856(void)

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
  int unaff_EBP;
  undefined4 *puStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  iStack_64 = 0x76c874;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_64 = unaff_EBP + -0x3c;
  iStack_68 = 0x76c882;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x76c890;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_64 = 0x76c899;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_64 = unaff_EBP + -0x2c;
  puStack_70 = &DAT_00980690;
  iStack_68 = 0x76c8a7;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x76c8b3;
    FUN_00878dfb();
    puStack_70 = extraout_ECX;
  }
  iStack_64 = 0;
  iStack_68 = unaff_EBP + -0x3c;
  iStack_6c = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_70,0x810);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x76c8ff;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_64 = 0x76c915;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_64 = 0x76c926;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_64 = 0x76c933;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x76c93e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_64 = 0x76c94b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x76c956;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76c963;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76c96e;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x811;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76c993;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76c99a;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x76c9a5;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76c9b4;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76c9c5;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76c9d2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76c9dd;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x812;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76ca02;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76ca09;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_68 = 0x76ca14;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76ca23;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76ca34;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76ca41;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76ca4c;
    FUN_00878dfb();
    iVar1 = extraout_ECX_02;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x813;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76ca71;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76ca78;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x76ca83;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76ca92;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76caa3;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76cab0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76cabb;
    FUN_00878dfb();
    iVar1 = extraout_ECX_03;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x814;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76cae0;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76cae7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_68 = 0x76caf2;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76cb01;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76cb12;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76cb1f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76cb2a;
    FUN_00878dfb();
    iVar1 = extraout_ECX_04;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x815;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76cb4f;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76cb56;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_68 = 0x76cb61;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76cb70;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76cb81;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76cb8e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76cb99;
    FUN_00878dfb();
    iVar1 = extraout_ECX_05;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x816;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76cbbe;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76cbc5;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x76cbd0;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76cbdf;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76cbf0;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76cbfd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76cc08;
    FUN_00878dfb();
    iVar1 = extraout_ECX_06;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x808;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76cc2d;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76cc34;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_68 = 0x76cc3f;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76cc4e;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76cc5f;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76cc6c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x76cc77;
    FUN_00878dfb();
    iVar1 = extraout_ECX_07;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x809;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76cc9c;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x76cca3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_68 = 0x76ccae;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76ccbd;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76ccce;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76ccdb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x76cce6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_64 = 0x76ccf7;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


