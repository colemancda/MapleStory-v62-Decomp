/* FUN_004d9357 - 0x004d9357 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d9357(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  int iStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x44) = extraout_ECX;
  iStack_184 = 0x4d9377;
  FUN_0081622a();
  iStack_184 = 0x4d9382;
  FUN_00448dc6();
  iVar1 = *(int *)(extraout_ECX + 0x88);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  iVar1 = 0;
  if (*(int *)(extraout_ECX + 0x88) != 0) {
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x88) + -4);
  }
  iVar1 = (uint)(iVar1 * 0xe) / 0x14 + 1;
  if (iVar1 == 1) {
    iVar1 = 2;
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x14) = (iVar1 * 0x14 + iVar2 * -0xe) / 2 + 0x18;
  uVar6 = 0;
  iVar1 = extraout_ECX;
  while ((*(int *)(iVar1 + 0x88) != 0 && (uVar6 < *(uint *)(*(int *)(iVar1 + 0x88) + -4)))) {
    iStack_184 = 0x4d9403;
    FUN_00414f8b();
    iStack_184 = 0x4d940f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_184 = 0x4d9422;
    uStack_188 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_184;
    iStack_18c = 0x4d942e;
    FUN_00448a17();
    iStack_18c = unaff_EBP + -0x30;
    uStack_188 = 0xf;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_188 = 0x4d944a;
    FUN_0044974c();
    uStack_188 = 0x4d9451;
    iVar1 = FUN_00448ebb();
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d946b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_184 = 0x4d9476;
      FUN_00878dfb();
    }
    iVar2 = (0xea - iVar1) / 2;
    iVar7 = iVar2 + 0xf;
    iStack_184 = 0x4d9493;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_184 = 0x4d94a3;
    FUN_00403191();
    iStack_184 = unaff_EBP + -0x14c;
    iStack_18c = unaff_EBP + -0x38;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_188 = 0x4d94cd;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d94d6;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_18c;
    FUN_00448a17(uVar3);
    iVar4 = *(int *)(unaff_EBP + -0x14) + -2;
    iVar1 = iVar2 + 0xe;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar5 = iVar1;
    FUN_004115d9(iVar1,iVar4);
    FUN_00448e3a(iVar5,iVar4);
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_184 = 0x4d9518;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_184 = 0x4d9523;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d9533;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_184 = 0x4d953e;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d954a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_184 = 0x4d955a;
    FUN_00403191();
    iStack_184 = unaff_EBP + -0x16c;
    iStack_18c = unaff_EBP + -0x4c;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_188 = 0x4d9584;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d958d;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_18c;
    FUN_00448a17(uVar3);
    iVar4 = *(int *)(unaff_EBP + -0x14) + -1;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar5 = iVar1;
    FUN_004115d9(iVar1,iVar4);
    FUN_00448e3a(iVar5,iVar4);
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_184 = 0x4d95ca;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_184 = 0x4d95d5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d95e5;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_184 = 0x4d95f0;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d95fc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_184 = 0x4d960c;
    FUN_00403191();
    iStack_184 = unaff_EBP + -0x11c;
    iStack_18c = unaff_EBP + -0x48;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_188 = 0x4d9636;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d963f;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_18c;
    FUN_00448a17(uVar3);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_004115d9(iVar1,uVar3);
    FUN_00448e3a(iVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
      iStack_184 = 0x4d9673;
      (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_184 = 0x4d9683;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d968e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d969e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d96a9;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d96b5;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_184 = 0x4d96c5;
    FUN_00403191();
    iStack_184 = unaff_EBP + -0x15c;
    iStack_18c = unaff_EBP + -0x24;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_188 = 0x4d96ef;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d96f8;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    iVar5 = *(int *)(unaff_EBP + -0x14) + -2;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    *(int *)(unaff_EBP + -0x1c) = iVar5;
    iVar1 = iVar7;
    FUN_004115d9(iVar7,iVar5);
    FUN_00448e3a(iVar1,iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_184 = 0x4d9733;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_184 = 0x4d9743;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d974e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d975e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9769;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d9775;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
    iStack_184 = unaff_EBP + -0x5c;
    uStack_188 = 0x4d977f;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d978b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_184 = 0x4d9798;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xec));
    iStack_184 = unaff_EBP + -0xec;
    uStack_188 = 0x4d97a5;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d97b1;
      FUN_00878dfb();
    }
    iStack_184 = unaff_EBP + -0xec;
    iStack_18c = unaff_EBP + -0x40;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    uStack_188 = 0x4d97d8;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d97e1;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar1 = iVar7;
    FUN_004115d9(iVar7,uVar3);
    FUN_00448e3a(iVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      iStack_184 = 0x4d9815;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_184 = 0x4d9825;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9830;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d983d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9848;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d9851;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
    iStack_184 = unaff_EBP + -0x9c;
    uStack_188 = 0x4d985e;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d986a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_184 = 0x4d9877;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xbc));
    iStack_184 = unaff_EBP + -0xbc;
    uStack_188 = 0x4d9884;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9890;
      FUN_00878dfb();
    }
    iStack_184 = unaff_EBP + -0xbc;
    iStack_18c = unaff_EBP + -0x28;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_188 = 0x4d98ba;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d98c3;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
    iVar1 = iVar2 + 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004115d9(iVar1,uVar3);
    FUN_00448e3a(iVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_184 = 0x4d98fa;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_184 = 0x4d990a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9915;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d9925;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9930;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d9936;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    iStack_184 = unaff_EBP + -0x7c;
    uStack_188 = 0x4d9940;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d994c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_184 = 0x4d9959;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xdc));
    iStack_184 = unaff_EBP + -0xdc;
    uStack_188 = 0x4d9966;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9972;
      FUN_00878dfb();
    }
    iStack_184 = unaff_EBP + -0xdc;
    iStack_18c = unaff_EBP + -0x2c;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    uStack_188 = 0x4d9999;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d99a2;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    iVar5 = *(int *)(unaff_EBP + -0x14) + -1;
    iVar1 = iVar2 + 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_004115d9(iVar1,iVar5);
    FUN_00448e3a(iVar1,iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      iStack_184 = 0x4d99db;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_184 = 0x4d99eb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d99f6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d9a03;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9a0e;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d9a17;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
    iStack_184 = unaff_EBP + -0xac;
    uStack_188 = 0x4d9a24;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9a30;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_184 = 0x4d9a3d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    iStack_184 = unaff_EBP + -0x8c;
    uStack_188 = 0x4d9a4a;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9a56;
      FUN_00878dfb();
    }
    iStack_184 = unaff_EBP + -0x8c;
    iStack_18c = unaff_EBP + -0x34;
    uStack_188 = 0x11;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    uStack_188 = 0x4d9a80;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d9a89;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar2 = iVar2 + 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_004115d9(iVar2,uVar3);
    FUN_00448e3a(iVar2,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      iStack_184 = 0x4d9ac0;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_184 = 0x4d9ad0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9adb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d9aeb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9af6;
      FUN_00878dfb();
    }
    iStack_184 = 0x4d9afc;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    iStack_184 = unaff_EBP + -0x6c;
    uStack_188 = 0x4d9b06;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9b12;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_184 = 0x4d9b1f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xcc));
    iStack_184 = unaff_EBP + -0xcc;
    uStack_188 = 0x4d9b2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9b38;
      FUN_00878dfb();
    }
    iStack_184 = unaff_EBP + -0xcc;
    iStack_18c = unaff_EBP + -0x3c;
    uStack_188 = 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    uStack_188 = 0x4d9b5f;
    uStack_188 = FUN_00449749();
    iStack_18c = 0x4d9b68;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_18c;
    FUN_00448a17(uVar3);
    iVar1 = *(int *)(unaff_EBP + -0x14) + -1;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_004115d9(iVar7,iVar1);
    FUN_00448e3a(iVar7,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
      iStack_184 = 0x4d9b9e;
      (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_184 = 0x4d9bae;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9bb9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_184 = 0x4d9bc6;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_184 = 0x4d9bd1;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0xe;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    iVar1 = *(int *)(unaff_EBP + -0x44);
    uVar6 = *(uint *)(unaff_EBP + -0x20);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_184 = 0x4d9c00;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


