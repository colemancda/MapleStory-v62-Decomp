/* FUN_00495553 - 0x00495553 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00495553(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_54;
  undefined4 *puStack_50;
  
  FUN_00879bb8();
  puStack_50 = *(undefined4 **)(unaff_EBP + 8);
  iStack_54 = 0x49556d;
  FUN_0081622a();
  puStack_50 = (undefined4 *)(unaff_EBP + 8);
  iStack_54 = 0x495578;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_50 = *(undefined4 **)(*(int *)(extraout_ECX + 0x84) + 0x24);
  iStack_54 = *(int *)(extraout_ECX + 0x84) + 0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00413367();
  FUN_007d3546();
  FUN_00413367();
  FUN_007d3546();
  puStack_50 = &DAT_00980690;
  iStack_54 = 0x4955d4;
  FUN_00403191();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_54 = 0x4955e4;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_54;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  puStack_50 = (undefined4 *)0x49561e;
  FUN_004497b5();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_54 = 0x49562b;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x495636;
    FUN_00878dfb();
  }
  puStack_50 = &DAT_00980690;
  iStack_54 = 0x49563f;
  FUN_00403191();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_54 = 0x49564f;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_54;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  puStack_50 = (undefined4 *)0x495689;
  FUN_004497b5();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_54 = 0x495696;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x4956a1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_50 = *(undefined4 **)(*(int *)(extraout_ECX + 0x84) + 0x3c);
  iStack_54 = *(int *)(extraout_ECX + 0x84) + 0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00413367();
  FUN_007d3546();
  puStack_50 = &DAT_00980690;
  iStack_54 = 0x4956d2;
  FUN_00403191();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_54 = 0x4956e2;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x24) = &iStack_54;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  puStack_50 = (undefined4 *)0x49571c;
  FUN_004497b5();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_54 = 0x495729;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    iStack_54 = 0x495734;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  if (piVar3 == (int *)0x0) {
    puStack_50 = (undefined4 *)0x80004003;
    iStack_54 = 0x495745;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar3;
  puStack_50 = (undefined4 *)0xfff3f4f5;
  iStack_54 = 0xc;
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
    iStack_9c = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_a4 = 0x4957ea;
    iStack_a0 = iVar2;
    FUN_00878e09();
  }
  iStack_9c = 0x4957f3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_9c = 0x495800;
  FUN_00403191();
  iStack_9c = unaff_EBP + -0x4c;
  iStack_a4 = unaff_EBP + -0x1c;
  iStack_a0 = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_a0 = 0x495824;
  iStack_a0 = FUN_00449749();
  iStack_a4 = 0x49582d;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_a4;
  FUN_00448a17(uVar1);
  iVar2 = 0xf0 - *(int *)(unaff_EBP + -0x20);
  uVar1 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004115d9(iVar2,4);
  FUN_00448e3a(iVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_9c = 0x49586a;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_9c = 0x495877;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x495882;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_9c = 0x49588f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x49589a;
    FUN_00878dfb();
  }
  iStack_9c = 0x4958a6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_9c = unaff_EBP + -0x3c;
  iStack_a0 = 0x4958b0;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_9c = 0x4958bc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_9c = 0x4958c9;
  FUN_00403191();
  iStack_9c = unaff_EBP + -0x4c;
  iStack_a4 = unaff_EBP + -0x20;
  iStack_a0 = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_a0 = 0x4958ed;
  iStack_a0 = FUN_00449749();
  iStack_a4 = 0x4958f6;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_a4;
  FUN_00448a17(uVar1);
  iVar2 = 0xf0 - *(int *)(unaff_EBP + -0x24);
  uVar1 = 0x12;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9(iVar2,0x12);
  FUN_00448e3a(iVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_9c = 0x49592e;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_9c = 0x49593b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x495946;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_9c = 0x495953;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x49595e;
    FUN_00878dfb();
  }
  iStack_9c = 0x495964;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_9c = unaff_EBP + -0x4c;
  iStack_a0 = 0x49596e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_9c = 0x49597a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_9c = 0x495984;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_9c = unaff_EBP + -0x3c;
  iStack_a0 = 0x49598e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_9c = 0x49599a;
    FUN_00878dfb();
  }
  iStack_9c = unaff_EBP + -0x3c;
  iStack_a4 = unaff_EBP + -0x24;
  iStack_a0 = 0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_a0 = 0x4959be;
  iStack_a0 = FUN_00449749();
  iStack_a4 = 0x4959c7;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x2c) = &iStack_a4;
  FUN_00448a17(uVar1);
  iVar2 = 0xf0 - *(int *)(unaff_EBP + -0x28);
  uVar1 = 0x21;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_004115d9(iVar2,0x21);
  FUN_00448e3a(iVar2,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_9c = 0x4959fd;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_9c = 0x495a0a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x495a15;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_9c = 0x495a22;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_9c = 0x495a2d;
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
    iStack_9c = 0x495a62;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


