/* FUN_007b0fd0 - 0x007b0fd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b0fd0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 *puStack_160;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x2458);
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  if (iVar3 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    puStack_160 = (undefined4 *)0x3af;
    iStack_164 = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_168 = 0x7b100f;
    puVar1 = (undefined4 *)FUN_00679d86();
    iStack_168 = *puVar1;
    puStack_160 = (undefined4 *)0x0;
    iStack_164 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_16c = 0x7b1020;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_160 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      iStack_164 = 0x7b1037;
      FUN_00403384();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iVar3 = *(int *)(extraout_ECX + 0x1e64);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if ((((iVar3 == 0x111ae9) || (iVar3 == 0x12a189)) || (iVar3 == 0x142829)) || (iVar3 == 0x4dd5cc)
       ) {
      puStack_160 = &DAT_00980690;
      iStack_164 = 0x7b1302;
      FUN_00403191();
      puStack_160 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_164 = 0x7b1312;
      FUN_00403191();
      puStack_160 = (undefined4 *)0x0;
      iStack_164 = 0;
      iStack_168 = unaff_EBP + -0x10c;
      iStack_16c = unaff_EBP + -0xfc;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_170;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004033a1(u_UI_Basic_img_KeyDownBar1_bar_0096c1bc);
      iVar3 = unaff_EBP + -300;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_168 = 0x7b135f;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar2;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x50);
      iStack_164 = 0x7b136e;
      puStack_160 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
        iStack_164 = 0x7b1381;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -300);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_164 = 0x7b1391;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b139c;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0xfc);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_164 = 0x7b13ac;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b13b7;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_164 = 0x7b13c7;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b13d2;
        FUN_00878dfb();
      }
      puStack_160 = &DAT_00980690;
      iStack_164 = 0x7b13de;
      FUN_00403191();
      puStack_160 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_164 = 0x7b13eb;
      FUN_00403191();
      puStack_160 = (undefined4 *)0x0;
      iStack_164 = 0;
      iStack_168 = unaff_EBP + -0x8c;
      iStack_16c = unaff_EBP + -0x7c;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_170;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_004033a1(u_UI_Basic_img_KeyDownBar1_gauge_0096c17c);
      iVar3 = unaff_EBP + -0x13c;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_168 = 0x7b1435;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x58) = uVar2;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x58);
      iStack_164 = 0x7b1444;
      puStack_160 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
        iStack_164 = 0x7b1452;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x13c);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_164 = 0x7b1462;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b146d;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_164 = 0x7b147a;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b1485;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_164 = 0x7b1495;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b14a0;
        FUN_00878dfb();
      }
      puStack_160 = &DAT_00980690;
      iStack_164 = 0x7b14a9;
      FUN_00403191();
      puStack_160 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_164 = 0x7b14b6;
      FUN_00403191();
      puStack_160 = (undefined4 *)0x0;
      iStack_164 = 0;
      iStack_168 = unaff_EBP + -0x2c;
      iStack_16c = unaff_EBP + -0x4c;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_170;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_004033a1(u_UI_Basic_img_KeyDownBar1_graduat_0096c134);
      iVar3 = unaff_EBP + -0x9c;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_168 = 0x7b14fd;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x10);
      iStack_164 = 0x7b150c;
      puStack_160 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
        iStack_164 = 0x7b151a;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_164 = 0x7b152a;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b1535;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_164 = 0x7b1542;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b154d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x2c);
    }
    else {
      puStack_160 = &DAT_00980690;
      iStack_164 = 0x7b1088;
      FUN_00403191();
      puStack_160 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_164 = 0x7b1095;
      FUN_00403191();
      puStack_160 = (undefined4 *)0x0;
      iStack_164 = 0;
      iStack_168 = unaff_EBP + -0xdc;
      iStack_16c = unaff_EBP + -0x6c;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_170;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_004033a1(u_UI_Basic_img_KeyDownBar_bar_0096c27c);
      iVar3 = unaff_EBP + -0x11c;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_168 = 0x7b10df;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x18);
      iStack_164 = 0x7b10ee;
      puStack_160 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
        iStack_164 = 0x7b1101;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x11c);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_164 = 0x7b1111;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b111c;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_164 = 0x7b1129;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b1134;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0xdc);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_164 = 0x7b1144;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b114f;
        FUN_00878dfb();
      }
      puStack_160 = &DAT_00980690;
      iStack_164 = 0x7b115b;
      FUN_00403191();
      puStack_160 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_164 = 0x7b116b;
      FUN_00403191();
      puStack_160 = (undefined4 *)0x0;
      iStack_164 = 0;
      iStack_168 = unaff_EBP + -0xbc;
      iStack_16c = unaff_EBP + -0xac;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_170;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_004033a1(u_UI_Basic_img_KeyDownBar_gauge_0096c240);
      iVar3 = unaff_EBP + -0x15c;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_168 = 0x7b11b8;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x54);
      iStack_164 = 0x7b11c7;
      puStack_160 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
        iStack_164 = 0x7b11d5;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x15c);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_164 = 0x7b11e5;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b11f0;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_164 = 0x7b1200;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b120b;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_164 = 0x7b121b;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b1226;
        FUN_00878dfb();
      }
      puStack_160 = &DAT_00980690;
      iStack_164 = 0x7b1232;
      FUN_00403191();
      puStack_160 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_164 = 0x7b1242;
      FUN_00403191();
      puStack_160 = (undefined4 *)0x0;
      iStack_164 = 0;
      iStack_168 = unaff_EBP + -0xec;
      iStack_16c = unaff_EBP + -0xcc;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_170;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_004033a1(u_UI_Basic_img_KeyDownBar_graduati_0096c1f8);
      iVar3 = unaff_EBP + -0x14c;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_168 = 0x7b128f;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x5c) = uVar2;
      puStack_160 = (undefined4 *)(unaff_EBP + -0x5c);
      iStack_164 = 0x7b129e;
      puStack_160 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
        iStack_164 = 0x7b12ac;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0x14c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_164 = 0x7b12bc;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b12c7;
        FUN_00878dfb();
      }
      puStack_160 = (undefined4 *)(unaff_EBP + -0xcc);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_164 = 0x7b12d7;
      puStack_160 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_160 < 0) {
        iStack_164 = 0x7b12e2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      puStack_160 = (undefined4 *)(unaff_EBP + -0xec);
    }
    iStack_164 = 0x7b155a;
    puStack_160 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_160 < 0) {
      iStack_164 = 0x7b1565;
      FUN_00878dfb();
    }
    puStack_160 = &DAT_00980690;
    iStack_164 = 0x7b156e;
    FUN_00403191();
    puStack_160 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_164 = 0x7b157b;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    if (piVar4 == (int *)0x0) {
      puStack_160 = (undefined4 *)0x80004003;
      iStack_164 = 0x7b1590;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iStack_16c = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_168 = *(undefined4 *)(unaff_EBP + -0x48);
    iVar3 = *piVar4;
    iStack_164 = *(undefined4 *)(unaff_EBP + -0x44);
    puStack_160 = *(undefined4 **)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + -0x10) = piVar4;
    uStack_170 = *(undefined4 *)(unaff_EBP + -0x20);
    iVar3 = (**(code **)(iVar3 + 0x2c))
                      (piVar4,0x48,0xc,*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_004031b7(0xff,3);
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + -0x10) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar4,0,0,*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x245c);
    *(undefined4 *)(unaff_EBP + -0x18) = 2;
    if (1 < iVar3) {
      do {
        FUN_004031b7(0xff,3);
        piVar4 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + -0x14);
        }
        iVar3 = *piVar4;
        *(int **)(unaff_EBP + -0x10) = piVar4;
        iVar3 = (**(code **)(iVar3 + 0x80))
                          (piVar4,*(undefined4 *)(unaff_EBP + -0x18),2,
                           *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x2c),
                           *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x20));
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      } while (*(int *)(unaff_EBP + -0x18) <= *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x245c));
    }
    FUN_004031b7(0xff,3);
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + -0x10) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar4,0,0,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    FUN_004031b7(0xfffffffe,3);
    iVar3 = *(int *)(unaff_EBP + -0x3c);
    iVar5 = *(int *)(iVar3 + 0x2458);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + -0x10,unaff_EBP + -0x2c);
    piVar4 = *(int **)(unaff_EBP + -0x10);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    iVar5 = FUN_00402e32(unaff_EBP + -0x6c,&DAT_00980690);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)(iVar3 + 0x2458);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_004250ac(unaff_EBP + -0x9c,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x2c,
                 unaff_EBP + -0x4c,unaff_EBP + -0x8c,unaff_EBP + -0x7c,unaff_EBP + -0x6c);
    iVar3 = FUN_00402bc3(unaff_EBP + -0x9c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x8c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x7c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    piVar4 = *(int **)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


