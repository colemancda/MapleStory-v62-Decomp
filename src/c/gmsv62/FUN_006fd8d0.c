/* FUN_006fd8d0 - 0x006fd8d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fd8d0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  undefined4 *extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  undefined4 *extraout_ECX_08;
  int iVar3;
  int unaff_EBP;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined1 *puStack_d8;
  int iStack_d4;
  undefined4 *puVar4;
  undefined1 *puStack_cc;
  int iStack_c8;
  undefined4 *puStack_c4;
  int iStack_c0;
  undefined *puStack_bc;
  int iStack_b8;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff4c;
  iStack_b8 = 0xffffffff;
  puStack_bc = &DAT_0097812c;
  iStack_c0 = 0x6fd8fa;
  FUN_004184ca();
  iStack_b8 = *(undefined4 *)(unaff_EBP + 8);
  puStack_bc = (undefined *)0x6fd904;
  FUN_0078a024();
  iVar3 = 3;
  do {
    iStack_b8 = 0;
    if (*(int *)(DAT_0097926c + 0x80) != 0) {
      iStack_b8 = *(undefined4 *)(*(int *)(DAT_0097926c + 0x80) + -4);
    }
    puStack_bc = (undefined *)0x6fd92c;
    FUN_00649656();
    iStack_b8 = 0;
    if (*(int *)(DAT_0097926c + 0x80) != 0) {
      iStack_b8 = *(undefined4 *)(*(int *)(DAT_0097926c + 0x80) + -4);
    }
    puStack_bc = (undefined *)0x6fd94a;
    FUN_00649656();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iStack_b8 = 0x6fd95e;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_b8 = 0x6fd96c;
  FUN_00403191();
  iStack_b8 = 0;
  puStack_bc = (undefined *)(unaff_EBP + -0x40);
  iStack_c0 = unaff_EBP + -0x1c;
  puStack_cc = (undefined1 *)&puStack_c4;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c4;
  iStack_c8 = 0xc52;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_cc = (undefined1 *)0x6fd99f;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x6fd9a6;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x6fd9ad;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_bc = (undefined *)0x6fd9b8;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_b8 = 0x6fd9ca;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_b8 = 0x6fd9db;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_b8 = 0x6fd9e8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fd9f3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_b8 = 0x6fda00;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fda0b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_b8 = 0x6fda18;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fda23;
    FUN_00878dfb();
  }
  iStack_b8 = 0x6fda2c;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_b8 = 0x6fda3c;
  FUN_00403191();
  iStack_b8 = 0;
  puStack_bc = (undefined *)(unaff_EBP + -0x40);
  iStack_c0 = unaff_EBP + -0x1c;
  puStack_cc = (undefined1 *)&puStack_c4;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c4;
  iStack_c8 = 0x767;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_cc = (undefined1 *)0x6fda6c;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x6fda73;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x6fda7a;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_bc = (undefined *)0x6fda85;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_b8 = 0x6fda97;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_b8 = 0x6fdaa8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_b8 = 0x6fdab5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdac0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_b8 = 0x6fdacd;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdad8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_b8 = 0x6fdae5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdaf0;
    FUN_00878dfb();
  }
  iStack_b8 = 0x6fdaf9;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_b8 = 0x6fdb09;
  FUN_00403191();
  iStack_b8 = 0;
  puStack_bc = (undefined *)(unaff_EBP + -0x40);
  iStack_c0 = unaff_EBP + -0x1c;
  puStack_cc = (undefined1 *)&puStack_c4;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c4;
  iStack_c8 = 0x768;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_cc = (undefined1 *)0x6fdb39;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x6fdb40;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x6fdb47;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_bc = (undefined *)0x6fdb52;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_b8 = 0x6fdb64;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_b8 = 0x6fdb75;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b8 = 0x6fdb82;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdb8d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b8 = 0x6fdb9a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdba5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_b8 = 0x6fdbb2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdbbd;
    FUN_00878dfb();
  }
  iStack_b8 = 0x6fdbc6;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  iStack_b8 = 0x6fdbd6;
  FUN_00403191();
  iStack_b8 = 0;
  puStack_bc = (undefined *)(unaff_EBP + -0x40);
  iStack_c0 = unaff_EBP + -0x1c;
  puStack_cc = (undefined1 *)&puStack_c4;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c4;
  iStack_c8 = 0x769;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_cc = (undefined1 *)0x6fdc06;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x6fdc0d;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x6fdc14;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_bc = (undefined *)0x6fdc1f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_b8 = 0x6fdc31;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_b8 = 0x6fdc42;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_b8 = 0x6fdc4f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdc5a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_b8 = 0x6fdc67;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdc72;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_b8 = 0x6fdc7f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdc8a;
    FUN_00878dfb();
  }
  iStack_b8 = 0x6fdc94;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
  iStack_b8 = unaff_EBP + -0x78;
  puStack_bc = (undefined *)0x6fdc9e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdcaa;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  iStack_b8 = 0x6fdcbb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
  iStack_b8 = unaff_EBP + -0x68;
  puStack_c4 = &DAT_00980690;
  puStack_bc = (undefined *)0x6fdcc5;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdcd1;
    FUN_00878dfb();
    puStack_c4 = extraout_ECX_00;
  }
  iStack_b8 = 0;
  puStack_bc = (undefined *)(unaff_EBP + -0x78);
  iStack_c0 = unaff_EBP + -0x68;
  puStack_cc = (undefined1 *)&puStack_c4;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_c4;
  iStack_c8 = 0x76b;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_cc = (undefined1 *)0x6fdd01;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x6fdd08;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x6fdd0f;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_bc = (undefined *)0x6fdd1a;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_b8 = 0x6fdd2c;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_b8 = 0x6fdd3d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_b8 = 0x6fdd4a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdd55;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b8 = 0x6fdd62;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdd6d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_b8 = 0x6fdd7a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_b8 = 0x6fdd85;
    FUN_00878dfb();
  }
  iStack_b8 = 0x6fdd91;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 != 0) {
    FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_b8 = 0x6fddba;
  FUN_0048b9a0();
  iStack_b8 = 0xef;
  puStack_bc = (undefined *)0x17;
  iStack_c0 = 3;
  puStack_c4 = (undefined4 *)0x1;
  iStack_c8 = 2000;
  (**(code **)(**(int **)(extraout_ECX + 0x57c) + 8))();
  iStack_d4 = 0x6fdde2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
  iStack_d4 = unaff_EBP + -0x68;
  puStack_d8 = (undefined1 *)0x6fddec;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fddf8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x15;
  iStack_d4 = 0x6fde09;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
  iStack_d4 = unaff_EBP + -0x78;
  puStack_e0 = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fde13;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fde1f;
    FUN_00878dfb();
    puStack_e0 = extraout_ECX_01;
  }
  iStack_d4 = 0;
  puStack_d8 = (undefined1 *)(unaff_EBP + -0x68);
  puStack_dc = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00679e4e(&puStack_e0,0xa36);
  iVar3 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_d8 = (undefined1 *)0x6fde6b;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(int *)(unaff_EBP + -0x80) = iVar3;
  if (iVar3 != 0) {
    iStack_d4 = 0x6fde82;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_d4 = 0x6fde93;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_d4 = 0x6fdea3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdeae;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_d4 = 0x6fdebb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdec6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_d4 = 0x6fded3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdede;
    FUN_00878dfb();
  }
  iStack_d4 = 0x6fdee8;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_d4 = unaff_EBP + -0x40;
  puStack_d8 = (undefined1 *)0x6fdef2;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdefe;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_d4 = 0x6fdf0c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  iStack_d4 = unaff_EBP + -0x58;
  puVar4 = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fdf16;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdf22;
    FUN_00878dfb();
    puVar4 = extraout_ECX_02;
  }
  iStack_d4 = 0;
  puStack_d8 = (undefined1 *)(unaff_EBP + -0x40);
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_e0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_e0 = puVar4;
  FUN_00679e4e(&puStack_e0,0xa37);
  iVar3 = unaff_EBP + -0xb0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_d8 = (undefined1 *)0x6fdf6e;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(int *)(unaff_EBP + -0x7c) = iVar3;
  if (iVar3 != 0) {
    iStack_d4 = 0x6fdf85;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_d4 = 0x6fdf96;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_d4 = 0x6fdfa6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdfb1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_d4 = 0x6fdfbe;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdfc9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fdfd6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fdfe1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    FUN_0087a1b0();
    iStack_d4 = 0;
    puStack_dc = *(undefined4 **)(unaff_EBP + 8);
    puStack_e0 = (undefined4 *)0x6fdffc;
    puStack_d8 = (undefined1 *)&puStack_cc;
    puStack_dc = (undefined4 *)FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_d8;
    puStack_e0 = (undefined4 *)0x6fe008;
    FUN_00448a17();
    puStack_dc = (undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    puStack_e0 = (undefined4 *)0x6fe018;
    FUN_0040263d();
    puStack_e0 = (undefined4 *)0x6fe01f;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    puStack_d8 = (undefined1 *)0x6fe02a;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    FUN_0087a1b0();
    iStack_d4 = 0;
    puStack_dc = *(undefined4 **)(unaff_EBP + 8);
    puStack_e0 = (undefined4 *)0x6fe044;
    puStack_d8 = (undefined1 *)&puStack_cc;
    puStack_dc = (undefined4 *)FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_d8;
    puStack_e0 = (undefined4 *)0x6fe050;
    FUN_00448a17();
    puStack_dc = (undefined4 *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    puStack_e0 = (undefined4 *)0x6fe063;
    FUN_0040263d();
    puStack_e0 = (undefined4 *)0x6fe06a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_d8 = (undefined1 *)0x6fe075;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
    puStack_d8 = (undefined1 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x48) = &iStack_d4;
    puStack_dc = (undefined4 *)0x6fe089;
    FUN_0048bb05();
    puStack_dc = (undefined4 *)(unaff_EBP + -0x20);
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_d8;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_e0 = (undefined4 *)0x6fe09c;
    puStack_d8 = extraout_ECX_03;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_dc = (undefined4 *)0x6fe0ab;
    FUN_0048b99c();
    puStack_dc = (undefined4 *)0x6fe0b2;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_d4 = 0x6fe0c2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_d4 = 0x6fe0cd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_d4 = 0x6fe0da;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_d4 = 0x6fe0e5;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 3);
  iVar3 = *(int *)(extraout_ECX + 0x57c);
  *(undefined4 *)(iVar3 + 0x34) = 1;
  *(undefined4 *)(iVar3 + 0x38) = 0x41;
  iStack_d4 = 8;
  puStack_d8 = (undefined1 *)0x6fe117;
  FUN_00450550();
  *(undefined4 *)(unaff_EBP + 8) = 8;
  do {
    iStack_d4 = unaff_EBP + -0x20;
    puStack_d8 = (undefined1 *)0x6fe12e;
    puVar4 = (undefined4 *)FUN_00679d86();
    iStack_d4 = *(int *)(extraout_ECX + 0x5c4) + *(int *)(unaff_EBP + 8);
    puStack_d8 = (undefined1 *)*puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    puStack_dc = (undefined4 *)0x6fe146;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00402676();
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
  } while (*(int *)(unaff_EBP + 8) < 0x20);
  iStack_d4 = 0x6fe169;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_d4 = unaff_EBP + -0x1c;
  puVar4 = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fe173;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe17f;
    FUN_00878dfb();
    puVar4 = extraout_ECX_04;
  }
  iStack_d4 = -0x10000;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  puStack_dc = puVar4;
  FUN_00679e4e(&puStack_dc);
  puStack_e0 = (undefined4 *)0x2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00450708();
  puStack_e0 = (undefined4 *)0x6fe1b6;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe1bd;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fe1ca;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe1d5;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe1e5;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_d4 = 0x6fe1f2;
  FUN_0044f5f6();
  iStack_d4 = -0x10000;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  FUN_00679e4e(&puStack_dc);
  puStack_e0 = (undefined4 *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  FUN_00450708();
  puStack_e0 = (undefined4 *)0x6fe229;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe230;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_d4 = 0x6fe23d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe248;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  iStack_d4 = 0x6fe262;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_d4 = unaff_EBP + -0x1c;
  puStack_dc = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fe26c;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe278;
    FUN_00878dfb();
    puStack_dc = extraout_ECX_05;
  }
  iStack_d4 = -0xff0100;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_00679e4e(&puStack_dc);
  puStack_e0 = (undefined4 *)0x4;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_00450708();
  puStack_e0 = (undefined4 *)0x6fe2af;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe2b6;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fe2c3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe2ce;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe2de;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_d4 = 0x6fe2eb;
  FUN_0044f5f6();
  iStack_d4 = -0xff0100;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  FUN_00679e4e(&puStack_dc);
  puStack_e0 = (undefined4 *)0x5;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  FUN_00450708();
  puStack_e0 = (undefined4 *)0x6fe322;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe329;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_d4 = 0x6fe336;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe341;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  iStack_d4 = 0x6fe35b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_d4 = unaff_EBP + -0x1c;
  puStack_dc = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fe365;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe371;
    FUN_00878dfb();
    puStack_dc = extraout_ECX_06;
  }
  iStack_d4 = -0xffff01;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_00679e4e(&puStack_dc);
  puStack_e0 = (undefined4 *)0x6;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_00450708();
  puStack_e0 = (undefined4 *)0x6fe3a8;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe3af;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fe3bc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe3c7;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe3d7;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iStack_d4 = 0x6fe3e4;
  FUN_0044f5f6();
  iStack_d4 = -0xffff01;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_00679e4e(&puStack_dc);
  puStack_e0 = (undefined4 *)0x7;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  FUN_00450708();
  puStack_e0 = (undefined4 *)0x6fe41b;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe422;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iStack_d4 = 0x6fe42f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe43a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe45a;
  puVar4 = (undefined4 *)FUN_00679d86();
  puStack_d8 = (undefined1 *)*puVar4;
  iStack_d4 = extraout_ECX + 0x5b4;
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  puStack_dc = (undefined4 *)0x6fe46f;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00402676();
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe48e;
  puVar4 = (undefined4 *)FUN_00679d86();
  puStack_d8 = (undefined1 *)*puVar4;
  iStack_d4 = extraout_ECX + 0x5b8;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  puStack_dc = (undefined4 *)0x6fe4a3;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00402676();
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe4c2;
  puVar4 = (undefined4 *)FUN_00679d86();
  puStack_d8 = (undefined1 *)*puVar4;
  iStack_d4 = extraout_ECX + 0x5bc;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_dc = (undefined4 *)0x6fe4d7;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00402676();
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe4f6;
  puVar4 = (undefined4 *)FUN_00679d86();
  puStack_d8 = (undefined1 *)*puVar4;
  iStack_d4 = extraout_ECX + 0x5c0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_dc = (undefined4 *)0x6fe50b;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_00402676();
  iStack_d4 = 0x6fe524;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_d4 = unaff_EBP + -0x1c;
  puVar4 = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fe52e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe53a;
    FUN_00878dfb();
    puVar4 = extraout_ECX_07;
  }
  iStack_d4 = -0x99999a;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  puStack_dc = puVar4;
  FUN_00679e4e(&puStack_dc);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  puStack_e0 = (undefined4 *)0x6fe568;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe56f;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fe57c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe587;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + 8;
  puStack_d8 = (undefined1 *)0x6fe597;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_d4 = 0x6fe5a4;
  FUN_0044f5f6();
  iStack_d4 = -0x99999a;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  FUN_00679e4e(&puStack_dc);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  puStack_e0 = (undefined4 *)0x6fe5d2;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe5d9;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iStack_d4 = 0x6fe5e6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe5f1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  iStack_d4 = 0x6fe60b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  iStack_d4 = unaff_EBP + -0x1c;
  puStack_dc = &DAT_00980690;
  puStack_d8 = (undefined1 *)0x6fe615;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe621;
    FUN_00878dfb();
    puStack_dc = extraout_ECX_08;
  }
  iStack_d4 = -0x1000000;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00679e4e(&puStack_dc);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  puStack_e0 = (undefined4 *)0x6fe650;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe657;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fe664;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe66f;
    FUN_00878dfb();
  }
  iStack_d4 = unaff_EBP + -0x28;
  puStack_d8 = (undefined1 *)0x6fe67f;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  iStack_d4 = 0x6fe68f;
  FUN_0044f5f6();
  iStack_d4 = -0x1000000;
  puStack_d8 = (undefined1 *)0xc;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_dc;
  puStack_e0 = (undefined4 *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  FUN_00679e4e(&puStack_dc);
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  puStack_e0 = (undefined4 *)0x6fe6bc;
  FUN_0044974c();
  puStack_e0 = (undefined4 *)0x6fe6c3;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  iStack_d4 = 0x6fe6d3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_d4 = 0x6fe6de;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  iStack_d4 = 0x6fe6fe;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_d4 = 0x6fe724;
  FUN_0048b9e9();
  iStack_d4 = 0xca;
  puStack_d8 = (undefined1 *)0x32;
  puStack_dc = (undefined4 *)0xe1;
  puStack_e0 = (undefined4 *)0x3;
  (**(code **)(**(int **)(extraout_ECX + 0x584) + 0x20))(extraout_ECX,0x7d1,1);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x584) + 0x34) = 0xd7;
  FUN_004b2699(*(undefined4 *)(extraout_ECX + 0x588));
  piVar2 = (int *)FUN_006b42c2(0xffffffff);
  *piVar2 = extraout_ECX;
  piVar2 = *(int **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x44);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


