/* FUN_00602d25 - 0x00602d25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00602d25(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  int unaff_EBP;
  wchar_t *pwStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  wchar_t *pwVar5;
  int *piStack_f8;
  undefined4 uStack_f4;
  wchar_t *pwStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  wchar_t *pwStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 *puStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int *piStack_94;
  code *pcStack_90;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x2c) = extraout_ECX;
  *extraout_ECX = 0;
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[1] = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = uVar4;
  pcStack_90 = (code *)0x602d59;
  FUN_0074b9b2();
  piVar1 = extraout_ECX + 0x13e;
  *piVar1 = 0;
  pcStack_90 = FUN_004115cc;
  piStack_94 = (int *)&LAB_00450362;
  uStack_98 = 3;
  puStack_a0 = extraout_ECX + 0x13f;
  uStack_9c = 4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_a4 = 0x602d7f;
  FUN_0087b2f0();
  extraout_ECX[0x142] = 0;
  extraout_ECX[0x143] = 0;
  extraout_ECX[0x144] = 0;
  pcStack_90 = (code *)0x3af;
  piStack_94 = (int *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_98 = 0x602da8;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_98 = *puVar2;
  pcStack_90 = (code *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_9c = 0x602db6;
  piStack_94 = piVar1;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    pcStack_90 = (code *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    piStack_94 = (int *)0x602dcd;
    FUN_00403384();
  }
  pcStack_90 = (code *)&DAT_00980690;
  piStack_94 = (int *)0x602ddb;
  FUN_00403191();
  pcStack_90 = (code *)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_94 = (int *)0x602dec;
  FUN_00403191();
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    pcStack_90 = (code *)0x80004003;
    piStack_94 = (int *)0x602dfe;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)extraout_ECX[0x13e];
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
  iVar3 = *piStack_b8;
  piStack_94 = *(int **)(unaff_EBP + -0x34);
  pcStack_90 = *(code **)(unaff_EBP + -0x30);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_b0 = 0x15e;
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_b4 = 0x122;
  *(int **)(unaff_EBP + -0x1c) = piStack_b8;
  puStack_a0 = *(undefined4 **)(unaff_EBP + -0x40);
  puStack_bc = (undefined4 *)0x602e2f;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_bc = (undefined4 *)&DAT_00963cc8;
    uStack_c0 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_c8 = 0x602e41;
    iStack_c4 = iVar3;
    FUN_00878e09();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_c0 = 0x602e4e;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    uStack_c0 = 0x602e5b;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_c0 = 0x602e68;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    uStack_c0 = 0x602e73;
    FUN_00878dfb();
  }
  puStack_bc = &DAT_00980690;
  uStack_c0 = 0x602e81;
  FUN_00403191();
  puStack_bc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_c0 = 0x602e8e;
  FUN_00403191();
  puStack_bc = (undefined4 *)0x0;
  uStack_c0 = 0;
  iStack_c4 = unaff_EBP + -0x6c;
  iStack_c8 = unaff_EBP + -0x5c;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_cc;
  pwStack_d0 = u_UI_UIWindow_img_Delivery_npc1_00967d58;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_d4 = 0x602eac;
  FUN_004033a1();
  pwStack_d0 = (wchar_t *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_d4 = 0x602eb9;
  FUN_00405a1d();
  uStack_d4 = 0x602ec0;
  FUN_00402660();
  uStack_d4 = 0x602ec7;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_c4 = 0x602ed2;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar3 != 0) {
    puStack_bc = (undefined4 *)(unaff_EBP + -0x20);
    uStack_c0 = 0x602ee8;
    puStack_bc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_bc < 0) && (puStack_bc != (undefined4 *)0x80004002)) {
      uStack_c0 = 0x602ef9;
      FUN_00878dfb();
    }
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_c0 = 0x602f06;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    uStack_c0 = 0x602f11;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_c0 = 0x602f1e;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    uStack_c0 = 0x602f29;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_c0 = 0x602f36;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    uStack_c0 = 0x602f41;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)0x3;
  uStack_c0 = 0xff;
  iStack_c4 = 0x602f50;
  FUN_004031b7();
  iVar3 = extraout_ECX[0x13e];
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    puStack_bc = (undefined4 *)0x80004003;
    uStack_c0 = 0x602f66;
    FUN_00878dfb();
  }
  piStack_d8 = (int *)extraout_ECX[0x13e];
  iVar3 = *piStack_d8;
  uStack_cc = *(undefined4 *)(unaff_EBP + 8);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x48);
  pwStack_d0 = (wchar_t *)0x6e;
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_d4 = 0x12;
  *(int **)(unaff_EBP + -0x1c) = piStack_d8;
  puStack_bc = *(undefined4 **)(unaff_EBP + -0x40);
  puStack_dc = (undefined4 *)0x602f8b;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_dc = (undefined4 *)&DAT_00963cc8;
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_e8 = 0x602f9d;
    iStack_e4 = iVar3;
    FUN_00878e09();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_e0 = 0x602faa;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    uStack_e0 = 0x602fb7;
    FUN_00878dfb();
  }
  puStack_dc = &DAT_00980690;
  uStack_e0 = 0x602fc5;
  FUN_00403191();
  puStack_dc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_e0 = 0x602fd2;
  FUN_00403191();
  puStack_dc = (undefined4 *)0x0;
  uStack_e0 = 0;
  iStack_e4 = unaff_EBP + -0x3c;
  iStack_e8 = unaff_EBP + -0x4c;
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_ec;
  pwStack_f0 = u_UI_UIWindow_img_Delivery_icon0_00967d18;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_f4 = 0x602ff0;
  FUN_004033a1();
  pwStack_f0 = (wchar_t *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_f4 = 0x603000;
  FUN_00405a1d();
  uStack_f4 = 0x603007;
  FUN_00402660();
  uStack_f4 = 0x60300e;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_e4 = 0x603019;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  puStack_dc = (undefined4 *)(unaff_EBP + -0x1c);
  uStack_e0 = 0x603028;
  puStack_dc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
    uStack_e0 = 0x603039;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_e0 = 0x603049;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    uStack_e0 = 0x603054;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_e0 = 0x603061;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    uStack_e0 = 0x60306c;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_e0 = 0x603079;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    uStack_e0 = 0x603084;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x3;
  uStack_e0 = 0xff;
  iStack_e4 = 0x603093;
  FUN_004031b7();
  iVar3 = extraout_ECX[0x13e];
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar3 == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    uStack_e0 = 0x6030a9;
    FUN_00878dfb();
  }
  piStack_f8 = (int *)extraout_ECX[0x13e];
  iVar3 = *piStack_f8;
  uStack_ec = *(undefined4 *)(unaff_EBP + 8);
  iStack_e8 = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_e4 = *(undefined4 *)(unaff_EBP + -0x48);
  pwStack_f0 = (wchar_t *)0x40;
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_f4 = 0xd;
  *(int **)(unaff_EBP + -0x1c) = piStack_f8;
  puStack_dc = *(undefined4 **)(unaff_EBP + -0x40);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_100 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_108 = 0x6030e0;
    iStack_104 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_100 = 0x6030ed;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x6030f8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX + 0x13f;
  do {
    iStack_100 = 0x603113;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_100 = 0x603120;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_0087a1b0();
    iStack_100 = 0;
    iStack_104 = unaff_EBP + -0x3c;
    iStack_108 = unaff_EBP + -0x4c;
    pwStack_10c = u_UI_UIWindow_img_Delivery_line_00967cdc;
    uVar4 = FUN_004033a1();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    pwStack_10c = (wchar_t *)&piStack_f8;
    pwStack_10c = (wchar_t *)FUN_00412335(*(undefined4 *)(unaff_EBP + -0x10));
    uVar4 = FUN_004ef663(unaff_EBP + -0x18);
    *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_10c;
    FUN_0046fd15(uVar4);
    iVar3 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_104 = 0x60319b;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    iStack_100 = 0x6031aa;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_100 = 0x6031bb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_100 = 0x6031cb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_100 = 0x6031d6;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_100 = 0x603203;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_100 = 0x60320e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_100 = 0x60321b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_100 = 0x603226;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 3);
  iStack_100 = 0x603243;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_100 = unaff_EBP + -0x4c;
  iStack_104 = 0x60324d;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_100 = 0x603259;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_100 = 0x603263;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_100 = unaff_EBP + -0x3c;
  pwStack_10c = (wchar_t *)&DAT_00980690;
  iStack_104 = 0x60326d;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_100 = 0x603279;
    FUN_00878dfb();
    pwStack_10c = extraout_ECX_00;
  }
  iStack_100 = 0;
  iStack_104 = unaff_EBP + -0x4c;
  iStack_108 = unaff_EBP + -0x3c;
  *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_10c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_receive_00967c94);
  iVar3 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_104 = 0x6032c2;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  iStack_100 = 0x6032d4;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_100 = 0x6032e5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_100 = 0x6032f5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x603300;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_100 = 0x60330d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x603318;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_100 = 0x603325;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x603330;
    FUN_00878dfb();
  }
  iStack_100 = 0x603336;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_100 = unaff_EBP + -0x3c;
  iStack_104 = 0x603340;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_100 = 0x60334c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_100 = 0x603356;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_100 = unaff_EBP + -0x4c;
  pwVar5 = (wchar_t *)&DAT_00980690;
  iStack_104 = 0x603360;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_100 = 0x60336c;
    FUN_00878dfb();
    pwVar5 = extraout_ECX_01;
  }
  iStack_100 = 0;
  iStack_104 = unaff_EBP + -0x3c;
  iStack_108 = unaff_EBP + -0x4c;
  *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_10c;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  pwStack_10c = pwVar5;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_empty_00967c54);
  iVar3 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_104 = 0x6033b5;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  iStack_100 = 0x6033c7;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_100 = 0x6033d8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_100 = 0x6033e8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x6033f3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_100 = 0x603400;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x60340b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_100 = 0x603418;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x603423;
    FUN_00878dfb();
  }
  iStack_100 = 0x603429;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_100 = unaff_EBP + -0x3c;
  iStack_104 = 0x603433;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_100 = 0x60343f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_100 = 0x603449;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_100 = unaff_EBP + -0x4c;
  pwVar5 = (wchar_t *)&DAT_00980690;
  iStack_104 = 0x603453;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_100 = 0x60345f;
    FUN_00878dfb();
    pwVar5 = extraout_ECX_02;
  }
  iStack_100 = 0;
  iStack_104 = unaff_EBP + -0x3c;
  iStack_108 = unaff_EBP + -0x4c;
  *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_10c;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  pwStack_10c = pwVar5;
  FUN_00679e4e(&pwStack_10c,0x4e9);
  iVar3 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_104 = 0x6034ae;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  iStack_100 = 0x6034c0;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_100 = 0x6034d1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_100 = 0x6034e1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x6034ec;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_100 = 0x6034f9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x603504;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_100 = 0x603511;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_100 = 0x60351c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_100 = 0x60352d;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


