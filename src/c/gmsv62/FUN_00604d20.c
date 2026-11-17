/* FUN_00604d20 - 0x00604d20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00604d20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  wchar_t *pwStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 *puStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  wchar_t *pwStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 *puStack_80;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  *(undefined4 *)(extraout_ECX + 0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  *(undefined4 *)(extraout_ECX + 0x20) = 1;
  *(undefined4 *)(extraout_ECX + 0x24) = uVar4;
  puStack_80 = (undefined4 *)0x604d64;
  FUN_0074b9b2();
  piVar1 = (int *)(extraout_ECX + 0x510);
  *piVar1 = 0;
  *(undefined4 *)(extraout_ECX + 0x514) = 0;
  *(undefined4 *)(extraout_ECX + 0x518) = 0;
  *(undefined4 *)(extraout_ECX + 0x51c) = 0;
  *(undefined4 *)(extraout_ECX + 0x520) = 0;
  puStack_80 = (undefined4 *)0x3af;
  piStack_84 = (int *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_88 = 0x604d9b;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_88 = *puVar2;
  puStack_80 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_8c = 0x604da9;
  piStack_84 = piVar1;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_80 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    piStack_84 = (int *)0x604dc0;
    FUN_00403384();
  }
  puStack_80 = &DAT_00980690;
  piStack_84 = (int *)0x604dce;
  FUN_00403191();
  puStack_80 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_84 = (int *)0x604ddf;
  FUN_00403191();
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    puStack_80 = (undefined4 *)0x80004003;
    piStack_84 = (int *)0x604df1;
    FUN_00878dfb();
  }
  piStack_a8 = (int *)*piVar1;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x28);
  iVar3 = *piStack_a8;
  piStack_84 = *(int **)(unaff_EBP + -0x24);
  puStack_80 = *(undefined4 **)(unaff_EBP + -0x20);
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_a0 = 0x15e;
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_a4 = 0x122;
  *(int **)(unaff_EBP + -0x10) = piStack_a8;
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_ac = (undefined4 *)0x604e1e;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_ac = (undefined4 *)&DAT_00963cc8;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_b8 = 0x604e32;
    iStack_b4 = iVar3;
    FUN_00878e09();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_b0 = 0x604e3f;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x604e4a;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_b0 = 0x604e57;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x604e62;
    FUN_00878dfb();
  }
  puStack_ac = &DAT_00980690;
  uStack_b0 = 0x604e70;
  FUN_00403191();
  puStack_ac = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_b0 = 0x604e7d;
  FUN_00403191();
  puStack_ac = (undefined4 *)0x0;
  uStack_b0 = 0;
  iStack_b4 = unaff_EBP + -0x5c;
  iStack_b8 = unaff_EBP + -0x4c;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_bc;
  pwStack_c0 = u_UI_UIWindow_img_Delivery_icon3_00967e90;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_c4 = 0x604e9b;
  FUN_004033a1();
  pwStack_c0 = (wchar_t *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_c4 = 0x604ea8;
  FUN_00405a1d();
  uStack_c4 = 0x604eaf;
  FUN_00402660();
  uStack_c4 = 0x604eb6;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_b4 = 0x604ec1;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar3 != 0) {
    puStack_ac = (undefined4 *)(unaff_EBP + -0x10);
    uStack_b0 = 0x604ed7;
    puStack_ac = (undefined4 *)FUN_0041a581();
    if (((int)puStack_ac < 0) && (puStack_ac != (undefined4 *)0x80004002)) {
      uStack_b0 = 0x604ee8;
      FUN_00878dfb();
    }
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_b0 = 0x604ef5;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x604f00;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_b0 = 0x604f0d;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x604f18;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_b0 = 0x604f25;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x604f30;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)0x3;
  uStack_b0 = 0xff;
  iStack_b4 = 0x604f3f;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 0x510);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    puStack_ac = (undefined4 *)0x80004003;
    uStack_b0 = 0x604f5b;
    FUN_00878dfb();
  }
  piStack_c8 = *(int **)(extraout_ECX + 0x510);
  iVar3 = *piStack_c8;
  uStack_bc = *(undefined4 *)(unaff_EBP + 8);
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_b4 = *(undefined4 *)(unaff_EBP + -0x38);
  pwStack_c0 = (wchar_t *)0x40;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_c4 = 0xd;
  *(int **)(unaff_EBP + -0x14) = piStack_c8;
  puStack_ac = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_cc = (undefined4 *)0x604f7c;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_cc = (undefined4 *)&DAT_00963cc8;
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_d8 = 0x604f90;
    iStack_d4 = iVar3;
    FUN_00878e09();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_d0 = 0x604f9d;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x604fa8;
    FUN_00878dfb();
  }
  puStack_cc = &DAT_00980690;
  uStack_d0 = 0x604fb6;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_d0 = 0x604fc3;
  FUN_00403191();
  puStack_cc = (undefined4 *)0x0;
  uStack_d0 = 0;
  iStack_d4 = unaff_EBP + -0x2c;
  iStack_d8 = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_dc;
  pwStack_e0 = u_UI_UIWindow_img_Delivery_npc2_00967e54;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_e4 = 0x604fe1;
  FUN_004033a1();
  pwStack_e0 = (wchar_t *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_e4 = 0x604fee;
  FUN_00405a1d();
  uStack_e4 = 0x604ff5;
  FUN_00402660();
  uStack_e4 = 0x604ffc;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_d4 = 0x605007;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_cc = (undefined4 *)(unaff_EBP + -0x14);
  uStack_d0 = 0x605016;
  puStack_cc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_cc < 0) && (puStack_cc != (undefined4 *)0x80004002)) {
    uStack_d0 = 0x605027;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_d0 = 0x605034;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x60503f;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_d0 = 0x60504c;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x605057;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_d0 = 0x605064;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x60506f;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)0x3;
  uStack_d0 = 0xff;
  iStack_d4 = 0x60507e;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 0x510);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar3 == 0) {
    puStack_cc = (undefined4 *)0x80004003;
    uStack_d0 = 0x60509a;
    FUN_00878dfb();
  }
  piStack_e8 = *(int **)(extraout_ECX + 0x510);
  iVar3 = *piStack_e8;
  uStack_dc = *(undefined4 *)(unaff_EBP + 8);
  iStack_d8 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x38);
  pwStack_e0 = (wchar_t *)0x6e;
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_e4 = 0x12;
  *(int **)(unaff_EBP + -0x14) = piStack_e8;
  puStack_cc = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_ec = (undefined4 *)0x6050bb;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_ec = (undefined4 *)&DAT_00963cc8;
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_f8 = 0x6050cf;
    iStack_f4 = iVar3;
    FUN_00878e09();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_f0 = 0x6050dc;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x6050e7;
    FUN_00878dfb();
  }
  puStack_ec = &DAT_00980690;
  uStack_f0 = 0x6050f5;
  FUN_00403191();
  puStack_ec = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_f0 = 0x605102;
  FUN_00403191();
  puStack_ec = (undefined4 *)0x0;
  uStack_f0 = 0;
  iStack_f4 = unaff_EBP + -0x2c;
  iStack_f8 = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_f4 = 0x605146;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_ec = (undefined4 *)(unaff_EBP + -0x14);
  uStack_f0 = 0x605155;
  puStack_ec = (undefined4 *)FUN_0041a581();
  if (((int)puStack_ec < 0) && (puStack_ec != (undefined4 *)0x80004002)) {
    uStack_f0 = 0x605166;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_f0 = 0x605173;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x60517e;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_f0 = 0x60518b;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x605196;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_f0 = 0x6051a3;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x6051ae;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)0x3;
  uStack_f0 = 0xff;
  iStack_f4 = 0x6051bd;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 0x510);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar3 == 0) {
    puStack_ec = (undefined4 *)0x80004003;
    uStack_f0 = 0x6051d9;
    FUN_00878dfb();
  }
  iVar3 = **(int **)(extraout_ECX + 0x510);
  uStack_fc = *(undefined4 *)(unaff_EBP + 8);
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = *(int **)(extraout_ECX + 0x510);
  puStack_ec = *(undefined4 **)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_110 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_118 = 0x60520f;
    iStack_114 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_110 = 0x60521c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x605227;
    FUN_00878dfb();
  }
  iStack_110 = 0x605233;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_110 = unaff_EBP + -0x3c;
  iStack_114 = 0x605242;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_110 = 0x60524e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_110 = 0x605258;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_110 = unaff_EBP + -0x2c;
  puStack_11c = &DAT_00980690;
  iStack_114 = 0x605262;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_110 = 0x60526e;
    FUN_00878dfb();
    puStack_11c = extraout_ECX_00;
  }
  iStack_110 = 0;
  iStack_114 = unaff_EBP + -0x3c;
  iStack_118 = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_11c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00679e4e(&puStack_11c,0x4e9);
  iVar3 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_114 = 0x6052ba;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  iStack_110 = 0x6052cc;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_110 = 0x6052dd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_110 = 0x6052ea;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x6052f5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_110 = 0x605302;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x60530d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_110 = 0x60531a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x605325;
    FUN_00878dfb();
  }
  iStack_110 = 0x60532b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_110 = unaff_EBP + -0x2c;
  iStack_114 = 0x605335;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_110 = 0x605341;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_110 = 0x60534b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_110 = unaff_EBP + -0x3c;
  puVar2 = &DAT_00980690;
  iStack_114 = 0x605355;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_110 = 0x605361;
    FUN_00878dfb();
    puVar2 = extraout_ECX_01;
  }
  iStack_110 = 0;
  iStack_114 = unaff_EBP + -0x2c;
  iStack_118 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_11c;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_11c = puVar2;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_tax1_00967dd8);
  iVar3 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_114 = 0x6053a7;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  iStack_110 = 0x6053b9;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_110 = 0x6053ca;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_110 = 0x6053d7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x6053e2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_110 = 0x6053ef;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x6053fa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_110 = 0x605407;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_110 = 0x605412;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_110 = 0x605423;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


