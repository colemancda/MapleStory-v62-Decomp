/* FUN_0061c587 - 0x0061c587 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_0061c587(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  char cVar5;
  short sVar6;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar7;
  undefined1 *puStack_c;
  int *piStack_8;
  
  piStack_8 = (int *)0x1;
  puStack_c = (undefined1 *)0x7;
  *(undefined4 *)(unaff_EBP + -4) = 0x7e;
  FUN_0046691d();
  iVar7 = 0;
  do {
    piStack_8 = (int *)FUN_00411641();
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffffc;
    puStack_c = (undefined1 *)0x61c5ba;
    FUN_00402e8e();
    piStack_8 = *(int **)(unaff_EBP + 8);
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_c;
    puStack_c = extraout_ECX;
    FUN_00424dbc(unaff_EBP + 0x10);
    FUN_007d6c55(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x95;
    cVar5 = (char)unaff_EBX;
    if ((*(int **)(unaff_EBP + -0x24) != unaff_EBX) &&
       ((char)**(int **)(unaff_EBP + -0x24) != cVar5)) {
      piStack_8 = (int *)0x61c5f8;
      FUN_00414f8b();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x7e;
    FUN_00414ebb();
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x18);
  puStack_c = &stack0xfffffffc;
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffffc;
  piStack_8 = (int *)0x411;
  FUN_00679e4e();
  piStack_8 = (int *)(unaff_EBP + -0x158);
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  puStack_c = (undefined1 *)0x61c632;
  FUN_0040263d();
  puStack_c = (undefined1 *)0x61c639;
  FUN_004048a4();
  puStack_c = &stack0xfffffffc;
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffffc;
  piStack_8 = (int *)0x3ef;
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  FUN_00679e4e();
  piStack_8 = (int *)(unaff_EBP + -0x168);
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  puStack_c = (undefined1 *)0x61c663;
  FUN_0040263d();
  puStack_c = (undefined1 *)0x61c66a;
  FUN_004048a4();
  puStack_c = &stack0xfffffffc;
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffffc;
  piStack_8 = (int *)0x5c8;
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  FUN_00679e4e();
  piStack_8 = (int *)(unaff_EBP + -0x188);
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  puStack_c = (undefined1 *)0x61c694;
  FUN_0040263d();
  puStack_c = (undefined1 *)0x61c69b;
  FUN_004048a4();
  sVar6 = (short)unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_8 = (int *)(uint)(*(short *)(unaff_EBP + -0x158) != sVar6);
  if ((int *)(uint)(*(short *)(unaff_EBP + -0x188) != sVar6) == unaff_EBX) {
    if ((piStack_8 == unaff_EBX) ||
       ((int *)(uint)(*(short *)(unaff_EBP + -0x168) != sVar6) == unaff_EBX)) {
      *(undefined1 *)(unaff_EBP + -4) = 0x99;
      piStack_8 = (int *)0x61d029;
      iVar7 = FUN_00402bc3();
      if (iVar7 < (int)unaff_EBX) {
        piStack_8 = (int *)0x61d034;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x97;
      piStack_8 = (int *)0x61d044;
      iVar7 = FUN_00402bc3();
      if (iVar7 < (int)unaff_EBX) {
        piStack_8 = (int *)0x61d04f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x7e;
      piStack_8 = (int *)0x61d05f;
      iVar7 = FUN_00402bc3();
      if (iVar7 < (int)unaff_EBX) {
        piStack_8 = (int *)0x61d06a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x6b;
      if (*(int **)(unaff_EBP + -0x9c) != unaff_EBX) {
        piStack_8 = (int *)0x61d07e;
        (**(code **)(**(int **)(unaff_EBP + -0x9c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      if (*(int **)(unaff_EBP + -0xa0) != unaff_EBX) {
        piStack_8 = (int *)0x61d092;
        (**(code **)(**(int **)(unaff_EBP + -0xa0) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int **)(unaff_EBP + -0x90) != unaff_EBX) {
        piStack_8 = (int *)0x61d0a6;
        (**(code **)(**(int **)(unaff_EBP + -0x90) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int **)(unaff_EBP + -0x60) != unaff_EBX) {
        piStack_8 = (int *)0x61d0b7;
        (**(code **)(**(int **)(unaff_EBP + -0x60) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x5c) != unaff_EBX) {
        piStack_8 = (int *)0x61d0c8;
        (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x40) != unaff_EBX) {
        piStack_8 = (int *)0x61d0d9;
        (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
        piStack_8 = (int *)0x61d0eb;
        FUN_0061d2a0();
        *(int **)(unaff_EBP + -0x38) = unaff_EBX;
      }
      *(char *)(unaff_EBP + -4) = cVar5;
      if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
        piStack_8 = (int *)0x61d0fe;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + 0x10) != unaff_EBX) {
        piStack_8 = (int *)0x61d10f;
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      unaff_EBX = (int *)0x0;
      goto LAB_0061d111;
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 8) = 2;
  }
  else {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 8) = 3;
  }
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0x437;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x9d;
  puStack_c = (undefined1 *)0x61c728;
  uVar2 = FUN_00412550();
  iVar7 = FUN_0061d22d();
  *(undefined4 *)(iVar7 + 0xc) = uVar2;
  piVar4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_8 = (int *)0x61c747;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    piStack_8 = (int *)0x61c752;
    FUN_00878dfb();
    piVar4 = extraout_ECX_00;
  }
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0x95a;
  piStack_8 = piVar4;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x9f;
  puStack_c = (undefined1 *)0x61c78a;
  uVar2 = FUN_00412550();
  iVar7 = FUN_0061d22d();
  *(undefined4 *)(iVar7 + 0x10) = uVar2;
  piVar4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_8 = (int *)0x61c7a9;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    piStack_8 = (int *)0x61c7b4;
    FUN_00878dfb();
    piVar4 = extraout_ECX_01;
  }
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0x959;
  piStack_8 = piVar4;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa1;
  puStack_c = (undefined1 *)0x61c7ec;
  uVar2 = FUN_00412550();
  iVar7 = FUN_0061d22d();
  *(undefined4 *)(iVar7 + 0x14) = uVar2;
  piVar4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_8 = (int *)0x61c80b;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    piStack_8 = (int *)0x61c816;
    FUN_00878dfb();
    piVar4 = extraout_ECX_02;
  }
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xbd1;
  piStack_8 = piVar4;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa3;
  puStack_c = (undefined1 *)0x61c84e;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x18) = (uint)(iVar7 != 0);
  piVar4 = (int *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  piStack_8 = (int *)0x61c873;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    piStack_8 = (int *)0x61c87e;
    FUN_00878dfb();
    piVar4 = extraout_ECX_03;
  }
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xbd4;
  piStack_8 = piVar4;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa5;
  puStack_c = (undefined1 *)0x61c8b6;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x1c) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xbd5;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa7;
  puStack_c = (undefined1 *)0x61c912;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x20) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xbd6;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xa9;
  puStack_c = (undefined1 *)0x61c96e;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x24) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xbd8;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xab;
  puStack_c = (undefined1 *)0x61c9ca;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x28) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xbd9;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xad;
  puStack_c = (undefined1 *)0x61ca26;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x2c) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0x11de;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xaf;
  puStack_c = (undefined1 *)0x61ca82;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x30) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0xdb2;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb1;
  puStack_c = (undefined1 *)0x61cade;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x34) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  *(int ***)(unaff_EBP + -0x18) = &piStack_8;
  puStack_c = (undefined1 *)0x11e1;
  FUN_00679e4e(&piStack_8);
  puStack_c = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_0040263d();
  piStack_8 = (int *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb3;
  puStack_c = (undefined1 *)0x61cb3a;
  iVar7 = FUN_00412550();
  iVar3 = FUN_0061d22d();
  *(uint *)(iVar3 + 0x38) = (uint)(iVar7 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x9b;
  FUN_00404892();
  piStack_8 = (int *)0x61cb6a;
  FUN_0040263d();
  piStack_8 = (int *)0x61cb71;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 0xb4;
  piStack_8 = (int *)0x61cb81;
  FUN_004035f5();
  FUN_00402623();
  FUN_00550bb6();
  *(undefined1 *)(unaff_EBP + -4) = 0xb7;
  *(int **)(unaff_EBP + -200) = unaff_EBX;
  while( true ) {
    piVar4 = (int *)FUN_005593b9();
    piStack_8 = (int *)(unaff_EBP + -0x128);
    puStack_c = (undefined1 *)0x1;
    iVar7 = (**(code **)(*piVar4 + 0xc))(piVar4);
    if (iVar7 != 0) break;
    piVar4 = *(int **)(unaff_EBP + -0x120);
    piStack_8 = (int *)(unaff_EBP + -0x7c);
    puStack_c = (undefined1 *)0x61cbdd;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xb8;
    FUN_00411641();
    puStack_c = (undefined1 *)0x61cbef;
    piStack_8 = piVar4;
    iVar7 = FUN_0087c71f();
    if (iVar7 == 0) {
LAB_0061cee4:
      *(undefined1 *)(unaff_EBP + -0x11) = 1;
    }
    else {
      piStack_8 = (int *)(unaff_EBP + -0x6c);
      puStack_c = (undefined1 *)0x61cc09;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xb9;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cc1b;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0x50);
      puStack_c = (undefined1 *)0x61cc4b;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xba;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cc5d;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0x70);
      puStack_c = (undefined1 *)0x61cc8d;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbb;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cc9f;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0x78);
      puStack_c = (undefined1 *)0x61cccf;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbc;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cce1;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0x94);
      puStack_c = (undefined1 *)0x61cd14;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbd;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cd26;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0x98);
      puStack_c = (undefined1 *)0x61cd5c;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbe;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cd6e;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0xb0);
      puStack_c = (undefined1 *)0x61cda4;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xbf;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cdb6;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0xa8);
      puStack_c = (undefined1 *)0x61cdec;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc0;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cdfe;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0xb4);
      puStack_c = (undefined1 *)0x61ce34;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc1;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61ce46;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -0x58);
      puStack_c = (undefined1 *)0x61ce75;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc2;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61ce87;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      if (*(char *)(unaff_EBP + -0x11) != cVar5) goto LAB_0061cee4;
      piStack_8 = (int *)(unaff_EBP + -100);
      puStack_c = (undefined1 *)0x61ceb3;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc3;
      FUN_00411641();
      puStack_c = (undefined1 *)0x61cec5;
      piStack_8 = piVar4;
      iVar7 = FUN_0087c71f();
      *(char *)(unaff_EBP + -0x11) = '\x01' - (iVar7 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0xb8;
      FUN_00402676();
      cVar1 = *(char *)(unaff_EBP + -0x11);
      *(char *)(unaff_EBP + -0x11) = cVar5;
      if (cVar1 != cVar5) goto LAB_0061cee4;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb7;
    FUN_00402676();
    if (*(char *)(unaff_EBP + -0x11) == cVar5) {
      piStack_8 = (int *)(unaff_EBP + -0xa4);
      puStack_c = (undefined1 *)0x61cf0c;
      piStack_8 = (int *)FUN_00405a23();
      *(undefined1 *)(unaff_EBP + -4) = 0xc4;
      puStack_c = (undefined1 *)0x61cf1d;
      FUN_0061d22d();
      puStack_c = (undefined1 *)0x61cf27;
      FUN_0061d1e7();
      *(undefined1 *)(unaff_EBP + -4) = 0xb7;
      FUN_00403621();
    }
    FUN_00550ba4();
  }
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  piStack_8 = (int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  puStack_c = (undefined1 *)0x61cf5d;
  iVar7 = FUN_0061d57d();
  if (iVar7 == 0) {
    piStack_8 = (int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    puStack_c = (undefined1 *)0x61cf73;
    FUN_0061d204();
    unaff_EBX = (int *)0x1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb6;
  FUN_00404892();
  FUN_00402653();
  *(undefined1 *)(unaff_EBP + -4) = 0x99;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x97;
  FUN_00404892();
  *(undefined1 *)(unaff_EBP + -4) = 0x7e;
  FUN_00404892();
  FUN_00402630();
  FUN_00402630();
  FUN_00402630();
  FUN_00402630();
  FUN_00402630();
  FUN_00402630();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0061d217();
  FUN_00402630();
  FUN_00402630();
LAB_0061d111:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return unaff_EBX;
}


