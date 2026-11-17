/* FUN_0077ae99 - 0x0077ae99 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077ae99(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  undefined4 *puStack_4a8;
  undefined4 uStack_4a4;
  int iStack_4a0;
  undefined4 *puStack_ec;
  int iStack_e8;
  undefined1 *puStack_e4;
  int iStack_e0;
  undefined4 *puVar4;
  undefined1 auStack_d8 [4];
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  undefined *puStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x38) = &local_c0;
  uStack_c4 = 0xffffffff;
  puStack_c8 = &DAT_0097812c;
  local_c0 = 0;
  uStack_cc = 0x77aec4;
  FUN_004184ca();
  uStack_c4 = *(undefined4 *)(unaff_EBP + 8);
  puStack_c8 = (undefined *)0x77aece;
  FUN_0078a024();
  local_c0 = 0x50;
  uStack_c4 = 0x77aedc;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_c4 = 0x77aeee;
    uVar2 = FUN_0077c7e4();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c0 = 0x34;
  *(undefined4 *)(extraout_ECX + 0x81c) = uVar2;
  uStack_c4 = 0x77af05;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_c4 = 0x77af1b;
    uVar2 = FUN_0077c89d();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c0 = 0x15c;
  *(undefined4 *)(extraout_ECX + 0x820) = uVar2;
  uStack_c4 = 0x77af35;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_c4 = 0x77af4b;
    uVar2 = FUN_0077c97e();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c0 = 0x2e0;
  *(undefined4 *)(extraout_ECX + 0x824) = uVar2;
  uStack_c4 = 0x77af65;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_c4 = 0x77af7b;
    uVar2 = FUN_0077cb1e();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c0 = 0x18;
  *(undefined4 *)(extraout_ECX + 0x828) = uVar2;
  uStack_c4 = 0x77af92;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_c4 = 0x77afa8;
    uVar2 = FUN_0077ccc7();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x830) = uVar2;
  local_c0 = 0x77afc1;
  FUN_007696e2();
  local_c0 = 0x77afcc;
  FUN_0076c856();
  local_c0 = 0x77afd7;
  FUN_0076fd27();
  local_c0 = 0x77afe2;
  FUN_007734d7();
  local_c0 = 0x77afed;
  FUN_00779a21();
  local_c0 = 0;
  uStack_c4 = 0;
  puStack_d0 = (undefined1 *)&puStack_c8;
  *(undefined ***)(unaff_EBP + 8) = &puStack_c8;
  uStack_cc = 0x817;
  *(undefined4 *)(extraout_ECX + 0x808) = 0;
  *(undefined4 *)(extraout_ECX + 0x82c) = 0;
  *(undefined4 *)(extraout_ECX + 0x810) = 0;
  uStack_d4 = 0x77b017;
  FUN_00679e4e();
  uStack_cc = 0x77b01e;
  FUN_008163ca();
  local_c0 = 0x68;
  uStack_c4 = 0x77b027;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = 0x77b03c;
    local_c0 = FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_c4 = 0x77b050;
  FUN_0048b9a0();
  local_c0 = 0;
  uStack_c4 = 0x10e;
  puStack_c8 = (undefined *)0x17;
  uStack_cc = 6;
  puStack_d0 = (undefined1 *)0x1;
  uStack_d4 = 0x7d1;
  (**(code **)(**(int **)(extraout_ECX + 0x57c) + 8))();
  iStack_e0 = 0x77b077;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
  iStack_e0 = unaff_EBP + -0x6c;
  puStack_e4 = (undefined1 *)0x77b085;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b091;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_e0 = 0x77b0a2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  iStack_e0 = unaff_EBP + -0x58;
  puStack_ec = &DAT_00980690;
  puStack_e4 = (undefined1 *)0x77b0b0;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b0bc;
    FUN_00878dfb();
    puStack_ec = extraout_ECX_00;
  }
  iStack_e0 = 0;
  puStack_e4 = (undefined1 *)(unaff_EBP + -0x6c);
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_e4 = (undefined1 *)0x77b109;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x48) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    iStack_e0 = 0x77b11f;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_e0 = 0x77b130;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_e0 = 0x77b140;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b14b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x77b158;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b163;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_e0 = 0x77b170;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b17b;
    FUN_00878dfb();
  }
  iStack_e0 = 0x77b185;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  iStack_e0 = unaff_EBP + -0x7c;
  puStack_e4 = (undefined1 *)0x77b193;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b19f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_e0 = 0x77b1b0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
  iStack_e0 = unaff_EBP + -0x8c;
  puVar4 = &DAT_00980690;
  puStack_e4 = (undefined1 *)0x77b1c1;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b1cd;
    FUN_00878dfb();
    puVar4 = extraout_ECX_01;
  }
  iStack_e0 = 0;
  puStack_e4 = (undefined1 *)(unaff_EBP + -0x7c);
  iStack_e8 = unaff_EBP + -0x8c;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ec = puVar4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_e4 = (undefined1 *)0x77b21d;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar1 != 0) {
    iStack_e0 = 0x77b233;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_e0 = 0x77b244;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_e0 = 0x77b254;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b25f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_e0 = 0x77b26f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b27a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_e0 = 0x77b287;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_e0 = 0x77b292;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    FUN_0087a1b0();
    iStack_e0 = 0;
    iStack_e8 = *(undefined4 *)(unaff_EBP + 8);
    puStack_ec = (undefined4 *)0x77b2aa;
    puStack_e4 = auStack_d8;
    iStack_e8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_e4;
    puStack_ec = (undefined4 *)0x77b2b6;
    FUN_00448a17();
    iStack_e8 = unaff_EBP + -0xbc;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_ec = (undefined4 *)0x77b2c9;
    FUN_0040263d();
    puStack_ec = (undefined4 *)0x77b2d0;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_e4 = (undefined1 *)0x77b2db;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
    FUN_0087a1b0();
    iStack_e0 = 0;
    iStack_e8 = *(undefined4 *)(unaff_EBP + 8);
    puStack_ec = (undefined4 *)0x77b2f3;
    puStack_e4 = auStack_d8;
    iStack_e8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x3c) = &puStack_e4;
    puStack_ec = (undefined4 *)0x77b2ff;
    FUN_00448a17();
    iStack_e8 = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_ec = (undefined4 *)0x77b30f;
    FUN_0040263d();
    puStack_ec = (undefined4 *)0x77b316;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_e4 = (undefined1 *)0x77b321;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
    puStack_e4 = (undefined1 *)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + -0x3c) = &iStack_e0;
    iStack_e8 = 0x77b335;
    FUN_0048bb05();
    iStack_e8 = unaff_EBP + -0x38;
    *(undefined1 ***)(unaff_EBP + -0x5c) = &puStack_e4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    puStack_ec = (undefined4 *)0x77b348;
    puStack_e4 = extraout_ECX_02;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_e8 = 0x77b357;
    FUN_0048b99c();
    iStack_e8 = 0x77b35e;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_e0 = 0x77b36b;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e0 = 0x77b376;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_e0 = 0x77b386;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_e0 = 0x77b391;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 5);
  iStack_e0 = 0x77b3a7;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_e0 = 0x77b3cd;
  FUN_0048b9e9();
  FUN_0077e699();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_e0 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_e4 = (undefined1 *)0x77b3f9;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_e0 = 0x77b406;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iStack_e0 = 0x77b41f;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_e0 = 0x77b445;
  iVar1 = FUN_00450382();
  iStack_e0 = 1;
  puStack_e4 = (undefined1 *)0x163;
  iStack_e8 = 0xd;
  puStack_ec = (undefined4 *)0x7da;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x4c;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5a;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5b;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5c;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_004184ca();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x5e;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x60;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x61;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x62;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_4a0 = unaff_EBP + 8;
  uStack_4a4 = 0x77c59c;
  puVar4 = (undefined4 *)FUN_00679d86();
  uStack_4a4 = *puVar4;
  iStack_4a0 = extraout_ECX + 0x834;
  *(undefined1 *)(unaff_EBP + -4) = 99;
  puStack_4a8 = (undefined4 *)0x77c5b1;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iStack_4a0 = unaff_EBP + 8;
  uStack_4a4 = 0x77c5cc;
  puVar4 = (undefined4 *)FUN_00679d86();
  uStack_4a4 = *puVar4;
  iStack_4a0 = extraout_ECX + 0x838;
  *(undefined1 *)(unaff_EBP + -4) = 100;
  puStack_4a8 = (undefined4 *)0x77c5e1;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iStack_4a0 = unaff_EBP + 8;
  uStack_4a4 = 0x77c5fc;
  puVar4 = (undefined4 *)FUN_00679d86();
  uStack_4a4 = *puVar4;
  iStack_4a0 = extraout_ECX + 0x83c;
  *(undefined1 *)(unaff_EBP + -4) = 0x65;
  puStack_4a8 = (undefined4 *)0x77c611;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00402676();
  iStack_4a0 = 0x77c62c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_4a0 = unaff_EBP + -0x34;
  puVar4 = &DAT_00980690;
  uStack_4a4 = 0x77c63a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4a0 = 0x77c646;
    FUN_00878dfb();
    puVar4 = extraout_ECX_03;
  }
  iStack_4a0 = 0xffffffff;
  uStack_4a4 = 0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_4a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x66;
  puStack_4a8 = puVar4;
  FUN_00679e4e(&puStack_4a8,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x66;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_4a0 = 0x77c685;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4a0 = 0x77c690;
    FUN_00878dfb();
  }
  iStack_4a0 = 0x77c696;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_4a0 = unaff_EBP + -0x34;
  puVar4 = &DAT_00980690;
  uStack_4a4 = 0x77c6a4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4a0 = 0x77c6b0;
    FUN_00878dfb();
    puVar4 = extraout_ECX_04;
  }
  iStack_4a0 = 0xff000000;
  uStack_4a4 = 0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_4a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  puStack_4a8 = puVar4;
  FUN_00679e4e(&puStack_4a8,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x68;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_4a0 = 0x77c6f2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4a0 = 0x77c6fd;
    FUN_00878dfb();
  }
  iStack_4a0 = 0x77c703;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_4a0 = unaff_EBP + -0x34;
  puVar4 = &DAT_00980690;
  uStack_4a4 = 0x77c711;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_4a0 = 0x77c71d;
    FUN_00878dfb();
    puVar4 = extraout_ECX_05;
  }
  iStack_4a0 = 0xff909090;
  uStack_4a4 = 0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_4a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  puStack_4a8 = puVar4;
  FUN_00679e4e(&puStack_4a8,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_4a0 = 0x77c75f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_4a0 = 0x77c76a;
    FUN_00878dfb();
  }
  iStack_4a0 = 0x77c77b;
  FUN_004b2699();
  FUN_0077e521();
  iStack_4a0 = 0x77c78b;
  FUN_008161f1();
  iStack_4a0 = 0x77c79d;
  piVar3 = (int *)FUN_006b42c2();
  *piVar3 = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_4a0 = 0x77c7bc;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_4a0 = 0x77c7cd;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


