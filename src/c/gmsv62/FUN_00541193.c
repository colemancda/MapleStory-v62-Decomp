/* FUN_00541193 - 0x00541193 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00541193(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_58;
  int *piStack_54;
  
  FUN_00879bb8();
  piStack_54 = *(int **)(unaff_EBP + 8);
  iStack_58 = 0x5411ad;
  FUN_0081622a();
  piStack_54 = (int *)(unaff_EBP + 8);
  iStack_58 = 0x5411b8;
  FUN_00448dc6();
  piStack_54 = (int *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_58 = 0x5411cc;
  FUN_00455c59();
  piStack_54 = (int *)0x5411d7;
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_54 = *(int **)(*(int *)(extraout_ECX + 0x7c) + 0x24);
  iStack_58 = *(int *)(extraout_ECX + 0x7c) + 0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00413367();
  FUN_007d3546();
  FUN_00413367();
  FUN_007d3546();
  FUN_00413367();
  FUN_007d3546();
  piStack_54 = &DAT_00980690;
  iStack_58 = 0x541249;
  FUN_00403191();
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_58 = 0x541259;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_58;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  piStack_54 = (int *)0x541293;
  FUN_004497b5();
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_58 = 0x5412a0;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    iStack_58 = 0x5412ab;
    FUN_00878dfb();
  }
  piStack_54 = &DAT_00980690;
  iStack_58 = 0x5412b4;
  FUN_00403191();
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_58 = 0x5412c4;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_58;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  piStack_54 = (int *)0x5412fe;
  FUN_004497b5();
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_58 = 0x54130b;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    iStack_58 = 0x541316;
    FUN_00878dfb();
  }
  piStack_54 = &DAT_00980690;
  iStack_58 = 0x54131f;
  FUN_00403191();
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_58 = 0x54132f;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_58;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  piStack_54 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x541372;
    (**(code **)(*piStack_54 + 8))();
  }
  piStack_54 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_58 = 0x54137f;
  piStack_54 = (int *)FUN_00402bc3();
  if ((int)piStack_54 < 0) {
    iStack_58 = 0x54138a;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  if (piVar3 == (int *)0x0) {
    piStack_54 = (int *)0x80004003;
    iStack_58 = 0x54139b;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  piStack_54 = (int *)0xfff3f4f5;
  iStack_58 = 0xd;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar2 = (**(code **)(iVar2 + 0x8c))();
  if (iVar2 < 0) {
    iStack_a0 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_a8 = 0x541440;
    iStack_a4 = iVar2;
    FUN_00878e09();
  }
  iStack_a0 = 0x541449;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_a0 = 0x541456;
  FUN_00403191();
  iStack_a0 = unaff_EBP + -0x50;
  iStack_a8 = unaff_EBP + -0x1c;
  iStack_a4 = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_a4 = 0x54147a;
  iStack_a4 = FUN_00449749();
  iStack_a8 = 0x541483;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_a8;
  FUN_00448a17(uVar1);
  iVar2 = 0xbe - *(int *)(unaff_EBP + -0x20);
  uVar1 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004115d9(iVar2,0);
  FUN_00448e3a(iVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_a0 = 0x5414bf;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_a0 = 0x5414cc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x5414d7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a0 = 0x5414e4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x5414ef;
    FUN_00878dfb();
  }
  iStack_a0 = 0x5414f9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_a0 = unaff_EBP + -0x40;
  iStack_a4 = 0x541503;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a0 = 0x54150f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_a0 = 0x54151c;
  FUN_00403191();
  iStack_a0 = unaff_EBP + -0x50;
  iStack_a8 = unaff_EBP + -0x20;
  iStack_a4 = 0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_a4 = 0x541540;
  iStack_a4 = FUN_00449749();
  iStack_a8 = 0x541549;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_a8;
  FUN_00448a17(uVar1);
  iVar2 = 0xbe - *(int *)(unaff_EBP + -0x24);
  uVar1 = 0x15;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9(iVar2,0x15);
  FUN_00448e3a(iVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_a0 = 0x541581;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_a0 = 0x54158e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x541599;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a0 = 0x5415a6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x5415b1;
    FUN_00878dfb();
  }
  iStack_a0 = 0x5415bb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_a0 = unaff_EBP + -0x50;
  iStack_a4 = 0x5415c5;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a0 = 0x5415d1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_a0 = 0x5415df;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_a0 = unaff_EBP + -0x40;
  iStack_a4 = 0x5415e9;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_a0 = 0x5415f5;
    FUN_00878dfb();
  }
  iStack_a0 = unaff_EBP + -0x40;
  iStack_a8 = unaff_EBP + -0x24;
  iStack_a4 = 0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_a4 = 0x541619;
  iStack_a4 = FUN_00449749();
  iStack_a8 = 0x541622;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_a8;
  FUN_00448a17(uVar1);
  iVar2 = 0xbe - *(int *)(unaff_EBP + -0x28);
  uVar1 = 0x2a;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_004115d9(iVar2,0x2a);
  FUN_00448e3a(iVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_a0 = 0x541658;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_a0 = 0x541665;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x541670;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a0 = 0x54167d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_a0 = 0x541688;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_a0 = 0x5416bc;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


