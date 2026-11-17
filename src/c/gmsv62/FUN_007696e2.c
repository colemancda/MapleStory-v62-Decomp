/* FUN_007696e2 - 0x007696e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007696e2(void)

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
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int unaff_EBP;
  undefined4 *puStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  iStack_64 = 0x769700;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_64 = unaff_EBP + -0x3c;
  iStack_68 = 0x76970e;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x76971c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_64 = 0x769725;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_64 = unaff_EBP + -0x2c;
  puStack_70 = &DAT_00980690;
  iStack_68 = 0x769733;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x76973f;
    FUN_00878dfb();
    puStack_70 = extraout_ECX;
  }
  iStack_64 = 0;
  iStack_68 = unaff_EBP + -0x3c;
  iStack_6c = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_70,0x7ff);
  iVar1 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_68 = 0x76978b;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_64 = 0x7697a1;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_64 = 0x7697b2;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_64 = 0x7697bf;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x7697ca;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_64 = 0x7697d7;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x7697e2;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x7697ef;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x7697fa;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x800;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76981f;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769826;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_68 = 0x769831;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769840;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769851;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76985e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769869;
    FUN_00878dfb();
    iVar1 = extraout_ECX_01;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x801;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76988e;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769895;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_68 = 0x7698a0;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x7698af;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x7698c0;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x7698cd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x7698d8;
    FUN_00878dfb();
    iVar1 = extraout_ECX_02;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x802;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x7698fd;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769904;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_68 = 0x76990f;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76991e;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76992f;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x76993c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769947;
    FUN_00878dfb();
    iVar1 = extraout_ECX_03;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x803;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x76996c;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769973;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_68 = 0x76997e;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x76998d;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x76999e;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x7699ab;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x7699b6;
    FUN_00878dfb();
    iVar1 = extraout_ECX_04;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x804;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x7699db;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x7699e2;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_68 = 0x7699ed;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x7699fc;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769a0d;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769a1a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769a25;
    FUN_00878dfb();
    iVar1 = extraout_ECX_05;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x805;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769a4a;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769a51;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_68 = 0x769a5c;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769a6b;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769a7c;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769a89;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769a94;
    FUN_00878dfb();
    iVar1 = extraout_ECX_06;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x806;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769ab9;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769ac0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_68 = 0x769acb;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769ada;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769aeb;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769af8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769b03;
    FUN_00878dfb();
    iVar1 = extraout_ECX_07;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x807;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769b28;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769b2f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_68 = 0x769b3a;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769b49;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769b5a;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769b67;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769b72;
    FUN_00878dfb();
    iVar1 = extraout_ECX_08;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x808;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769b97;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769b9e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_68 = 0x769ba9;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769bb8;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769bc9;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769bd6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769be1;
    FUN_00878dfb();
    iVar1 = extraout_ECX_09;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x809;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769c06;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769c0d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_68 = 0x769c18;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769c27;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769c38;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769c45;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769c50;
    FUN_00878dfb();
    iVar1 = extraout_ECX_10;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x80a;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769c75;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769c7c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_68 = 0x769c87;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769c96;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769ca7;
    FUN_00878dfb();
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769cb4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x769cbf;
    FUN_00878dfb();
    iVar1 = extraout_ECX_11;
  }
  iStack_64 = 0;
  puStack_70 = &iStack_68;
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  iStack_6c = 0x80b;
  iStack_68 = iVar1;
  FUN_00679e4e();
  iStack_6c = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_70 = (undefined4 *)0x769ce4;
  FUN_0040263d();
  puStack_70 = (undefined4 *)0x769ceb;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_68 = 0x769cf6;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  iStack_64 = 0x769d05;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_64 = 0x769d16;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x769d23;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x769d2e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_64 = 0x769d3f;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


