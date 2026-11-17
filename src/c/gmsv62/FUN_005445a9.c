/* FUN_005445a9 - 0x005445a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005445a9(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int unaff_EBP;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iStack_22c;
  int iStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 uStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 *puStack_1e4;
  
  FUN_00879bb8();
  puStack_1e4 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  uStack_1e8 = 0x5445c9;
  FUN_0081622a();
  puStack_1e4 = (undefined4 *)(unaff_EBP + -0x14);
  uStack_1e8 = 0x5445d4;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x194);
  iVar4 = *(int *)(iVar3 + 0x68);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 4) {
    puStack_1e4 = &DAT_00980690;
    if (*(int *)(iVar3 + 0x6c) < 2) {
      uStack_1e8 = 0x5446c5;
      FUN_00403191();
      puStack_1e4 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_1e8 = 0x5446d2;
      FUN_00403191();
      puStack_1e4 = (undefined4 *)0x0;
      uStack_1e8 = 0;
      iStack_1ec = unaff_EBP + -0x50;
      iStack_1f0 = unaff_EBP + -0x40;
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1f4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_1ec = 0x54471c;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x10);
      uStack_1e8 = 0x54472b;
      puStack_1e4 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1e4 < 0) && (puStack_1e4 != (undefined4 *)0x80004002)) {
        uStack_1e8 = 0x54473c;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_1e8 = 0x544749;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x544754;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_1e8 = 0x544761;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x54476c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      uStack_1e8 = 0x54460a;
      FUN_00403191();
      puStack_1e4 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_1e8 = 0x544617;
      FUN_00403191();
      puStack_1e4 = (undefined4 *)0x0;
      uStack_1e8 = 0;
      iStack_1ec = unaff_EBP + -0x50;
      iStack_1f0 = unaff_EBP + -0x40;
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1f4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_1ec = 0x544661;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x10);
      uStack_1e8 = 0x544670;
      puStack_1e4 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1e4 < 0) && (puStack_1e4 != (undefined4 *)0x80004002)) {
        uStack_1e8 = 0x544681;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_1e8 = 0x54468e;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x544699;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_1e8 = 0x5446a6;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x5446b1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  else {
    puStack_1e4 = &DAT_00980690;
    if (iVar4 == 5) {
      uStack_1e8 = 0x54478f;
      FUN_00403191();
      puStack_1e4 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uStack_1e8 = 0x54479c;
      FUN_00403191();
      puStack_1e4 = (undefined4 *)0x0;
      uStack_1e8 = 0;
      iStack_1ec = unaff_EBP + -0x50;
      iStack_1f0 = unaff_EBP + -0x40;
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1f4;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_1ec = 0x5447e6;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x10);
      uStack_1e8 = 0x5447f5;
      puStack_1e4 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1e4 < 0) && (puStack_1e4 != (undefined4 *)0x80004002)) {
        uStack_1e8 = 0x544806;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_1e8 = 0x544813;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x54481e;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uStack_1e8 = 0x54482b;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x544836;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      uStack_1e8 = 0x54484a;
      FUN_00403191();
      puStack_1e4 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_1e8 = 0x544857;
      FUN_00403191();
      puStack_1e4 = (undefined4 *)0x0;
      uStack_1e8 = 0;
      iStack_1ec = unaff_EBP + -0x50;
      iStack_1f0 = unaff_EBP + -0x40;
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1f4;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1ec = 0x5448a1;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x10);
      uStack_1e8 = 0x5448b0;
      puStack_1e4 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1e4 < 0) && (puStack_1e4 != (undefined4 *)0x80004002)) {
        uStack_1e8 = 0x5448c1;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_1e8 = 0x5448ce;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x5448d9;
        FUN_00878dfb();
      }
      puStack_1e4 = (undefined4 *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_1e8 = 0x5448e6;
      puStack_1e4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1e4 < 0) {
        uStack_1e8 = 0x5448f1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  puStack_1e4 = (undefined4 *)(unaff_EBP + -0x50);
  uStack_1e8 = 0x5448fe;
  puStack_1e4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1e4 < 0) {
    uStack_1e8 = 0x544909;
    FUN_00878dfb();
  }
  puStack_1e4 = (undefined4 *)0x544910;
  iVar3 = FUN_00545d42();
  if (iVar3 == 0) {
    puStack_1e4 = (undefined4 *)0x54491f;
    FUN_00426311();
    puStack_1e4 = (undefined4 *)0x54492a;
    FUN_00426311();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_1e4 = (undefined4 *)0x80004003;
    uStack_1e8 = 0x544939;
    FUN_00878dfb();
  }
  iStack_1ec = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x1c);
  puStack_1e4 = (undefined4 *)0xffffff;
  uStack_1e8 = 0x19a;
  iStack_1f0 = 0;
  uStack_1f4 = 0;
  iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x8c))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x28) + 0x194) + 0x68) == 5) {
    FUN_00403191();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar6 == (int *)0x0) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar6;
    *(int **)(unaff_EBP + -0x10) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      uStack_220 = *(uint *)(unaff_EBP + -0x10);
      iStack_228 = 0x5449cd;
      uStack_224 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_220 = 0x5449da;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_220 = 0x5449e7;
      FUN_00878dfb();
    }
    uStack_220 = 1;
    uStack_224 = 0x5449f3;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      uStack_220 = 0x544a06;
      FUN_00878dfb();
    }
    uStack_220 = 0x13e;
    uStack_224 = 0x1d4;
    iStack_228 = 7;
    iStack_22c = 10;
    FUN_00545a5c(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_220 = 0x544a31;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_220 = 0x544a3c;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while ((iVar3 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x6a4), iVar3 != 0 &&
           (*(uint *)(unaff_EBP + -0x24) < *(uint *)(iVar3 + -4)))) {
      iVar4 = *(int *)(unaff_EBP + -0x18) + *(int *)(*(int *)(unaff_EBP + -0x28) + 0x6a4);
      iVar7 = *(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 8) * -5;
      iVar3 = iVar7 - *(int *)(*(int *)(unaff_EBP + -0x28) + 0x6ac);
      if ((-0x31 < iVar3) && (iVar3 < 0x158)) {
        uStack_220 = 0x544a9e;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uStack_220 = 0x544aab;
        FUN_00403191();
        uStack_220 = unaff_EBP - 0x50;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        uStack_224 = 0x544ac2;
        uStack_224 = FUN_00449749();
        iStack_228 = 0x544acb;
        iStack_22c = FUN_00449713();
        *(int **)(unaff_EBP + -0x30) = &iStack_228;
        iStack_228 = extraout_ECX_00;
        FUN_00448a17();
        iStack_22c = (iVar7 - *(int *)(*(int *)(unaff_EBP + -0x28) + 0x6ac)) + 7;
        iVar3 = *(int *)(iVar4 + 0x18) + 10;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        FUN_004115d9(iVar3);
        FUN_00448e3a(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uStack_220 = 0x544b0b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x544b16;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        uStack_220 = 0x544b26;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x544b31;
          FUN_00878dfb();
        }
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x3c;
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_220 = 0x544b4a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_220 = 0x544b55;
      FUN_00878dfb();
    }
    FUN_004125e6();
    FUN_004125e6();
  }
  else {
    FUN_00403191();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (piVar6 == (int *)0x0) {
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar6;
    *(int **)(unaff_EBP + -0x10) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      uStack_220 = *(uint *)(unaff_EBP + -0x10);
      iStack_228 = 0x544bbb;
      uStack_224 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_220 = 0x544bc8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_220 = 0x544bd5;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x28);
    if (((*(int *)(iVar3 + 400) == 0) && (*(int *)(iVar3 + 0x688) != 0)) &&
       (*(int *)(*(int *)(iVar3 + 0x688) + -4) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      while ((iVar4 = *(int *)(iVar3 + 0x688), iVar4 != 0 &&
             (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar4 + -4)))) {
        puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + iVar4);
        uStack_220 = 0x544c29;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uStack_220 = 0x544c36;
        FUN_00403191();
        uStack_220 = 0;
        uStack_224 = unaff_EBP + -0x50;
        iStack_228 = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iStack_22c = 0x544c4e;
        uVar2 = FUN_00411641();
        *(int **)(unaff_EBP + -0x30) = &iStack_22c;
        FUN_004033a1(uVar2);
        iVar3 = unaff_EBP + -0x6c;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        uStack_224 = 0x544c80;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x58) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        if (iVar3 != 0) {
          uStack_220 = 0x544c96;
          iVar3 = FUN_0041a581();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            uStack_220 = 0x544ca7;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        uStack_220 = 0x544cb4;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x544cbf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        uStack_220 = 0x544ccc;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x544cd7;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_220 = 0x544ce4;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x544cef;
          FUN_00878dfb();
        }
        uStack_220 = 0xff;
        uStack_224 = 0x544d01;
        FUN_004031b7();
        piVar6 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        if (piVar6 == (int *)0x0) {
          uStack_220 = 0x544d16;
          FUN_00878dfb();
          piVar6 = *(int **)(unaff_EBP + -0x14);
        }
        uVar2 = puVar5[1];
        iStack_22c = *(int *)(unaff_EBP + -0x24);
        iStack_228 = *(int *)(unaff_EBP + -0x8c);
        uStack_224 = *(int *)(unaff_EBP + -0x88);
        *(undefined4 *)(unaff_EBP + -0x54) = *puVar5;
        iVar3 = *piVar6;
        uStack_220 = *(uint *)(unaff_EBP + -0x84);
        *(int **)(unaff_EBP + -0x5c) = piVar6;
        iVar3 = (**(code **)(iVar3 + 0x80))(piVar6,*(undefined4 *)(unaff_EBP + -0x54),uVar2);
        if (iVar3 < 0) {
          uStack_220 = *(uint *)(unaff_EBP + -0x5c);
          iStack_228 = 0x544d55;
          uStack_224 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uStack_220 = 0x544d65;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x544d70;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_004125e6();
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0xc;
        iVar3 = *(int *)(unaff_EBP + -0x28);
      }
    }
    uStack_220 = unaff_EBP - 0x20;
    piVar6 = (int *)(*(int *)(iVar3 + 0x194) + 0x54);
    *(int **)(unaff_EBP + -0x5c) = piVar6;
    uStack_224 = 0x544da2;
    FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iVar4 = *(int *)(iVar3 + 400);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (0 < iVar4) {
      do {
        uStack_220 = unaff_EBP - 0x7c;
        uStack_224 = 0x544dcf;
        FUN_00545b91();
        iVar4 = *piVar6 + *(int *)(unaff_EBP + -0x24) * 8;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x78) + 3;
        if (*(int *)(*(int *)(iVar3 + 0x194) + 0x68) == 4) {
          iVar7 = *(int *)(*(int *)(iVar3 + 0x194) + 0x6c);
          if (iVar7 == 2) {
            uStack_220 = unaff_EBP - 0x54;
            uStack_224 = 0x544e0f;
            FUN_00545abf();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            uStack_220 = 0x544e1c;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            if (*(int *)(unaff_EBP + -0x54) != 0) {
              uStack_220 = 0x544e30;
              FUN_00434e38();
            }
            uStack_220 = 0x544e3d;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            uStack_220 = 0x544e4d;
            FUN_00403191();
            uStack_220 = unaff_EBP - 0x1a0;
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            uStack_224 = 0x544e67;
            uStack_224 = FUN_00449749();
            iStack_228 = 0x544e70;
            iStack_22c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_228;
            iStack_228 = extraout_ECX_01;
            FUN_00448a17();
            iStack_22c = *(int *)(unaff_EBP + -0x18);
            iVar7 = *(int *)(unaff_EBP + -0x7c) + 5;
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            FUN_004115d9(iVar7);
            FUN_00448e3a(iVar7);
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            uStack_220 = 0x544ea9;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              uStack_220 = 0x544eb4;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
LAB_00544f85:
            uStack_220 = 0x544f8b;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              uStack_220 = 0x544f96;
              FUN_00878dfb();
            }
          }
          else if (iVar7 == 3) {
            uStack_220 = unaff_EBP - 0x58;
            uStack_224 = 0x544edf;
            FUN_00545b0d();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            uStack_220 = 0x544eec;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00414ebb();
            uStack_220 = 0x544f04;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            uStack_220 = 0x544f14;
            FUN_00403191();
            uStack_220 = unaff_EBP - 0x1d0;
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            uStack_224 = 0x544f2e;
            uStack_224 = FUN_00449749();
            iStack_228 = 0x544f37;
            iStack_22c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_228;
            iStack_228 = extraout_ECX_02;
            FUN_00448a17();
            iStack_22c = *(int *)(unaff_EBP + -0x18);
            iVar7 = *(int *)(unaff_EBP + -0x7c) + 5;
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            FUN_004115d9(iVar7);
            FUN_00448e3a(iVar7);
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            uStack_220 = 0x544f70;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              uStack_220 = 0x544f7b;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            goto LAB_00544f85;
          }
          *(undefined4 *)(unaff_EBP + -0x10) = DAT_00973a94;
          FUN_0045e2eb();
          uStack_220 = unaff_EBP - 0x90;
          uStack_224 = 0x544fbd;
          FUN_0045a1d8();
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          uStack_220 = 0x544fca;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00414ebb();
          uStack_224 = unaff_EBP + -0x20;
          *(uint **)(unaff_EBP + -0x1c) = &uStack_220;
          iStack_228 = 0x544fea;
          FUN_0046fcc9();
          uStack_224 = unaff_EBP + 8;
          iStack_228 = 0x544ff3;
          FUN_007d3a22();
          iVar3 = *(int *)(*(int *)(iVar3 + 0x194) + 0x6c);
          if (iVar3 == 2) {
            iVar3 = *(int *)(iVar4 + 4);
            sVar1 = *(short *)(iVar3 + 0x1c);
            *(undefined4 *)(unaff_EBP + -0x10) = 0x47;
            if (sVar1 == 0) {
              uVar8 = *(uint *)(iVar3 + 0x24);
            }
            else {
LAB_0054503e:
              uVar8 = *(int *)(iVar3 + 0xfc) + *(int *)(iVar3 + 0x24);
            }
          }
          else {
            if (iVar3 != 3) {
              iVar3 = *(int *)(iVar4 + 4);
              *(undefined4 *)(unaff_EBP + -0x10) = 10;
              goto LAB_0054503e;
            }
            uVar8 = *(int *)(*(int *)(iVar4 + 4) + 0xfc) + *(int *)(*(int *)(iVar4 + 4) + 0x10);
            *(undefined4 *)(unaff_EBP + -0x10) = 0x47;
          }
          uStack_220 = 0x545050;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          uStack_220 = 0x545060;
          FUN_00403191();
          uStack_220 = unaff_EBP - 0x1c0;
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          uStack_224 = 0x545077;
          uStack_224 = FUN_00449749();
          iStack_228 = 0x545080;
          iStack_22c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_228;
          FUN_00448a17();
          iStack_22c = *(int *)(unaff_EBP + -0x18);
          iVar3 = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x7c);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          FUN_004115d9(iVar3);
          FUN_00448e3a(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          uStack_220 = 0x5450bb;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5450c6;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_220 = 0x5450d3;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5450de;
            FUN_00878dfb();
          }
          uStack_224 = unaff_EBP + 8;
          iStack_228 = 0x5450ea;
          uStack_220 = uVar8;
          FUN_007d3546();
          iVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x18) + 0x18))();
          if (1 < iVar3) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            piVar6 = *(int **)(*(int *)(iVar4 + 4) + 0x18);
            uStack_220 = unaff_EBP - 0x98;
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            uStack_224 = 0x545121;
            puVar5 = (undefined4 *)FUN_00679d22();
            *(undefined4 *)(unaff_EBP + -0x1c) = *puVar5;
            iVar3 = *piVar6;
            *(undefined1 *)(unaff_EBP + -4) = 0x32;
            (**(code **)(iVar3 + 0x18))();
            uStack_220 = *(uint *)(unaff_EBP + -0x1c);
            uStack_224 = unaff_EBP + -0x10;
            iStack_228 = 0x54513e;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            FUN_00414ebb();
            uStack_220 = *(uint *)(unaff_EBP + -0x10);
            uStack_224 = 0x545168;
            FUN_0045efbb();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00414ebb();
          }
          if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x28) + 0x194) + 0x6c) < 2) {
            uStack_220 = 0x545196;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
            uStack_220 = unaff_EBP - 0xe0;
            uStack_224 = 0x5451a3;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x5451af;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            uStack_220 = 0x5451bc;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x100));
            uStack_220 = unaff_EBP - 0x100;
            uStack_224 = 0x5451c9;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x5451d5;
              FUN_00878dfb();
            }
            uStack_220 = unaff_EBP - 0x100;
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
            uStack_224 = 0x5451ef;
            uStack_224 = FUN_00449749();
            iStack_228 = 0x5451f8;
            iStack_22c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_228;
            FUN_00448a17();
            iStack_22c = *(int *)(unaff_EBP + -0x18);
            iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x126;
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
            FUN_004115d9(iVar3);
            FUN_00448e3a(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            uStack_220 = 0x545233;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              uStack_220 = 0x54523e;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
          }
          else {
            uStack_220 = 0x54525c;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x120));
            uStack_220 = unaff_EBP - 0x120;
            uStack_224 = 0x545269;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x545275;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            uStack_220 = 0x545282;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
            uStack_220 = unaff_EBP - 0xb0;
            uStack_224 = 0x54528f;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x54529b;
              FUN_00878dfb();
            }
            uStack_220 = unaff_EBP - 0xb0;
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            uStack_224 = 0x5452b5;
            uStack_224 = FUN_00449749();
            iStack_228 = 0x5452be;
            iStack_22c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_228;
            FUN_00448a17();
            iStack_22c = *(int *)(unaff_EBP + -0x18);
            iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x17c;
            *(undefined1 *)(unaff_EBP + -4) = 0x37;
            FUN_004115d9(iVar3);
            FUN_00448e3a(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            uStack_220 = 0x5452f9;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              uStack_220 = 0x545304;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
          }
          uStack_220 = 0x545314;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x54531f;
            FUN_00878dfb();
          }
          uStack_220 = *(int *)(iVar4 + 4) + 0x2c;
          uStack_224 = 0x545333;
          (*DAT_0097b4b0)();
          uStack_220 = unaff_EBP - 0xa0;
          uStack_224 = 0x545349;
          piVar6 = (int *)FUN_00679d22();
          iStack_228 = *piVar6;
          uStack_220 = (uint)*(ushort *)(unaff_EBP + -0x17e);
          uStack_224 = (uint)*(ushort *)(unaff_EBP + -0x180);
          iStack_22c = unaff_EBP + 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00414ebb();
          if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x28) + 0x194) + 0x6c) < 2) {
            uStack_220 = 0x54539f;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x160));
            uStack_220 = unaff_EBP - 0x160;
            uStack_224 = 0x5453ac;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x5453b8;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            uStack_220 = 0x5453c5;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xd0));
            uStack_220 = unaff_EBP - 0xd0;
            uStack_224 = 0x5453d2;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x5453de;
              FUN_00878dfb();
            }
            uStack_220 = unaff_EBP - 0xd0;
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            uStack_224 = 0x5453f8;
            uStack_224 = FUN_00449749();
            iStack_228 = 0x545401;
            iStack_22c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_228;
            iStack_228 = extraout_ECX_03;
            FUN_00448a17();
            iStack_22c = *(int *)(unaff_EBP + -0x18);
            iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x165;
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            FUN_004115d9(iVar3);
            FUN_00448e3a(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x3a;
            uStack_220 = 0x54543c;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              uStack_220 = 0x545447;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
          }
          else {
            uStack_220 = 0x54545f;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x140));
            uStack_220 = unaff_EBP - 0x140;
            uStack_224 = 0x54546c;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x545478;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
            uStack_220 = 0x545485;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xf0));
            uStack_220 = unaff_EBP - 0xf0;
            uStack_224 = 0x545492;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              uStack_220 = 0x54549e;
              FUN_00878dfb();
            }
            uStack_220 = unaff_EBP - 0xf0;
            *(undefined1 *)(unaff_EBP + -4) = 0x3e;
            uStack_224 = 0x5454b8;
            uStack_224 = FUN_00449749();
            iStack_228 = 0x5454c1;
            iStack_22c = FUN_00449713();
            *(int **)(unaff_EBP + -0x1c) = &iStack_228;
            iStack_228 = extraout_ECX_04;
            FUN_00448a17();
            iStack_22c = *(int *)(unaff_EBP + -0x18);
            iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x1bc;
            *(undefined1 *)(unaff_EBP + -4) = 0x3e;
            FUN_004115d9(iVar3);
            FUN_00448e3a(iVar3);
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
            uStack_220 = 0x5454fc;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              uStack_220 = 0x545507;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
          }
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x1c) = DAT_00973a94;
          FUN_0045e2eb();
          uStack_220 = unaff_EBP - 0x9c;
          uStack_224 = 0x54553d;
          FUN_0045a1d8();
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          uStack_220 = 0x54554a;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00414ebb();
          uStack_224 = unaff_EBP + -0x20;
          *(uint **)(unaff_EBP + -0x1c) = &uStack_220;
          iStack_228 = 0x54556d;
          FUN_0046fcc9();
          uStack_224 = unaff_EBP + 8;
          iStack_228 = 0x545576;
          FUN_007d3a22();
          uStack_220 = 0x545586;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x150));
          uStack_220 = unaff_EBP - 0x150;
          uStack_224 = 0x545593;
          iVar7 = FUN_00402e32();
          if (iVar7 < 0) {
            uStack_220 = 0x54559f;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          uStack_220 = 0x5455b0;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x110));
          uStack_220 = unaff_EBP - 0x110;
          uStack_224 = 0x5455bd;
          iVar7 = FUN_00402e32();
          if (iVar7 < 0) {
            uStack_220 = 0x5455c9;
            FUN_00878dfb();
          }
          uStack_220 = unaff_EBP - 0x110;
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          uStack_224 = 0x5455e3;
          uStack_224 = FUN_00449749();
          iStack_228 = 0x5455ec;
          iStack_22c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_228;
          FUN_00448a17();
          iStack_22c = *(int *)(unaff_EBP + -0x18);
          iVar7 = *(int *)(unaff_EBP + -0x7c) + 0xb;
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          FUN_004115d9(iVar7);
          FUN_00448e3a(iVar7);
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          uStack_220 = 0x545625;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            uStack_220 = 0x545630;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_220 = 0x545640;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            uStack_220 = 0x54564b;
            FUN_00878dfb();
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x194) + 0x68);
          if (iVar3 == 1) {
            uStack_220 = *(int *)(*(int *)(iVar4 + 4) + 0xfc) + *(int *)(*(int *)(iVar4 + 4) + 0x24)
            ;
          }
          else {
            iVar7 = *(int *)(iVar4 + 4);
            if (iVar3 == 3) {
              uStack_220 = *(int *)(iVar7 + 0xfc) + *(int *)(iVar7 + 0x10);
            }
            else {
              uStack_220 = *(uint *)(iVar7 + 0x24);
            }
          }
          uStack_224 = unaff_EBP + 8;
          iStack_228 = 0x54568b;
          FUN_007d3546();
          iVar3 = (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x18) + 0x18))();
          if (1 < iVar3) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            piVar6 = *(int **)(*(int *)(iVar4 + 4) + 0x18);
            uStack_220 = unaff_EBP - 0x94;
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            uStack_224 = 0x5456c2;
            puVar5 = (undefined4 *)FUN_00679d22();
            *(undefined4 *)(unaff_EBP + -0x1c) = *puVar5;
            iVar3 = *piVar6;
            *(undefined1 *)(unaff_EBP + -4) = 0x45;
            (**(code **)(iVar3 + 0x18))();
            uStack_220 = *(uint *)(unaff_EBP + -0x1c);
            uStack_224 = unaff_EBP + -0x10;
            iStack_228 = 0x5456df;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            FUN_00414ebb();
            uStack_220 = *(uint *)(unaff_EBP + -0x10);
            uStack_224 = 0x545709;
            FUN_0045efbb();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00414ebb();
          }
          uStack_220 = 0x545724;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x170));
          uStack_220 = unaff_EBP - 0x170;
          uStack_224 = 0x545731;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            uStack_220 = 0x54573d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          uStack_220 = 0x54574a;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x130));
          uStack_220 = unaff_EBP - 0x130;
          uStack_224 = 0x545757;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            uStack_220 = 0x545763;
            FUN_00878dfb();
          }
          uStack_220 = unaff_EBP - 0x130;
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          uStack_224 = 0x54577d;
          uStack_224 = FUN_00449749();
          iStack_228 = 0x545786;
          iStack_22c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_228;
          FUN_00448a17();
          iStack_22c = *(int *)(unaff_EBP + -0x18);
          iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x17a;
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          FUN_004115d9(iVar3);
          FUN_00448e3a(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          uStack_220 = 0x5457c1;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5457cc;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_220 = 0x5457dc;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5457e7;
            FUN_00878dfb();
          }
          uStack_220 = *(int *)(iVar4 + 4) + 0x66;
          uStack_224 = 0x5457f8;
          FUN_00414edd();
          uStack_220 = 0x545801;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
          uStack_220 = unaff_EBP - 0xc0;
          uStack_224 = 0x54580e;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            uStack_220 = 0x54581a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          uStack_220 = 0x545827;
          VariantInit((VARIANTARG *)(unaff_EBP + -400));
          uStack_220 = unaff_EBP - 400;
          uStack_224 = 0x545834;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            uStack_220 = 0x545840;
            FUN_00878dfb();
          }
          uStack_220 = unaff_EBP - 400;
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          uStack_224 = 0x54585a;
          uStack_224 = FUN_00449749();
          iStack_228 = 0x545863;
          iStack_22c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_228;
          FUN_00448a17();
          iStack_22c = *(int *)(unaff_EBP + -0x18);
          iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x125;
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          FUN_004115d9(iVar3);
          FUN_00448e3a(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          uStack_220 = 0x54589e;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5458a9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_220 = 0x5458b9;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5458c4;
            FUN_00878dfb();
          }
          uStack_220 = *(int *)(iVar4 + 4) + 0x2c;
          uStack_224 = 0x5458d8;
          (*DAT_0097b4b0)();
          uStack_220 = unaff_EBP - 0x30;
          uStack_224 = 0x5458eb;
          piVar6 = (int *)FUN_00679d22();
          iStack_228 = *piVar6;
          uStack_220 = (uint)*(ushort *)(unaff_EBP + -0x8a);
          uStack_224 = (uint)*(ushort *)(unaff_EBP + -0x8c);
          iStack_22c = unaff_EBP + 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00414ebb();
          uStack_220 = 0x545928;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          uStack_220 = unaff_EBP - 0x40;
          uStack_224 = 0x545932;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            uStack_220 = 0x54593e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4d;
          uStack_220 = 0x545948;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
          uStack_220 = unaff_EBP - 0x50;
          uStack_224 = 0x545952;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            uStack_220 = 0x54595e;
            FUN_00878dfb();
          }
          uStack_220 = unaff_EBP - 0x50;
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          uStack_224 = 0x545972;
          uStack_224 = FUN_00449749();
          iStack_228 = 0x54597b;
          iStack_22c = FUN_00449713();
          *(int **)(unaff_EBP + -0x1c) = &iStack_228;
          iStack_228 = extraout_ECX_05;
          FUN_00448a17();
          iStack_22c = *(int *)(unaff_EBP + -0x18);
          iVar3 = *(int *)(unaff_EBP + -0x7c) + 0x1bb;
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          FUN_004115d9(iVar3);
          FUN_00448e3a(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x4d;
          uStack_220 = 0x5459b3;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            uStack_220 = 0x5459be;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
        }
        uStack_220 = 0x5459cb;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_220 = 0x5459d6;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
        iVar3 = *(int *)(unaff_EBP + -0x28);
        if (*(int *)(iVar3 + 400) <= *(int *)(unaff_EBP + -0x24)) break;
        piVar6 = *(int **)(unaff_EBP + -0x5c);
      } while( true );
    }
    iVar4 = *(int *)(iVar3 + 0x194);
    *(undefined4 *)(iVar3 + 0x690) = *(undefined4 *)(iVar4 + 0x68);
    *(undefined4 *)(iVar3 + 0x694) = *(undefined4 *)(iVar4 + 0x6c);
    *(undefined4 *)(iVar3 + 0x698) = *(undefined4 *)(iVar4 + 0x70);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      uStack_220 = 0x545a29;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      uStack_220 = 0x545a3a;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      uStack_220 = 0x545a4b;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


