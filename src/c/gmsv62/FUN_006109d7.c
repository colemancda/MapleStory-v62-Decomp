/* FUN_006109d7 - 0x006109d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006109d7(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint uVar6;
  int iVar7;
  int unaff_EBP;
  undefined1 *puStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  undefined1 *puStack_1cc;
  undefined *puStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int *piStack_1bc;
  
  FUN_00879bb8();
  piStack_1bc = *(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  iStack_1c0 = 0x6109f7;
  FUN_0081622a();
  piStack_1bc = (int *)(unaff_EBP + 8);
  iStack_1c0 = 0x610a02;
  FUN_00448dc6();
  uVar4 = *(undefined4 *)(*(int *)(extraout_ECX + 0x84) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = uVar4;
  do {
    uVar2 = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x58);
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x34) + 0x74);
    iVar7 = *(int *)(iVar3 + 400);
    uVar6 = 0;
    if (iVar7 != 0) {
      uVar6 = *(uint *)(iVar7 + -4);
    }
    if (uVar6 < uVar2) break;
    iVar3 = *(int *)(iVar3 + 400);
    if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar2)) {
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      piStack_1bc = (int *)0xaf7;
      iStack_1c0 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_1c4 = 0x610e7b;
      piVar5 = (int *)FUN_00679e4e();
      puVar1 = (undefined4 *)*piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (puVar1 == (undefined4 *)0x0) {
        iStack_1c0 = 0;
      }
      else {
        iStack_1c0 = *puVar1;
      }
      piStack_1bc = (int *)0x895441;
      iStack_1c4 = unaff_EBP + -0x40;
      puStack_1c8 = (undefined *)0x610e9a;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_1bc = (int *)0x610eac;
      FUN_00402fa6();
      piStack_1bc = &DAT_00980690;
      iStack_1c0 = 0x610ebd;
      FUN_00403191();
      piStack_1bc = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_1c0 = 0x610ecd;
      FUN_00403191();
      piStack_1bc = (int *)0x0;
      iStack_1c0 = 0;
      iStack_1c4 = unaff_EBP + -0xd8;
      puStack_1c8 = (undefined *)(unaff_EBP + -0x148);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_1cc = (undefined1 *)0x610ee9;
      FUN_00411641();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1cc;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_1c4 = 0x610f1e;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x4c) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      if (iVar3 != 0) {
        piStack_1bc = (int *)(unaff_EBP + -0x4c);
        iStack_1c0 = 0x610f34;
        piStack_1bc = (int *)FUN_00404b30();
        if (((int)piStack_1bc < 0) && (piStack_1bc != (int *)0x80004002)) {
          iStack_1c0 = 0x610f47;
          FUN_00878dfb();
        }
      }
      piStack_1bc = (int *)(unaff_EBP + -0x198);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_1c0 = 0x610f5e;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x610f69;
        FUN_00878dfb();
      }
      piStack_1bc = (int *)(unaff_EBP + -0x148);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_1c0 = 0x610f79;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x610f84;
        FUN_00878dfb();
      }
      piStack_1bc = (int *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_1c0 = 0x610f94;
      iVar3 = FUN_00402bc3();
      piVar5 = piStack_1bc;
      if (iVar3 < 0) {
        iStack_1c0 = 0x610f9f;
        piStack_1bc = (int *)iVar3;
        FUN_00878dfb();
        piVar5 = (int *)extraout_ECX_01;
      }
      piStack_1bc = (int *)0x0;
      iStack_1c0 = 0;
      puStack_1cc = (undefined1 *)&iStack_1c4;
      *(int **)(unaff_EBP + -0x10) = &iStack_1c4;
      puStack_1c8 = (undefined *)0x63a;
      iStack_1c4 = (int)piVar5;
      FUN_00679e4e();
      puStack_1c8 = (undefined *)(unaff_EBP + -0x1a8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_1cc = (undefined1 *)0x610fc7;
      FUN_0040263d();
      puStack_1cc = (undefined1 *)0x610fce;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_1c4 = 0x610fd9;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x50) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      if (iVar3 != 0) {
        piStack_1bc = (int *)(unaff_EBP + -0x50);
        iStack_1c0 = 0x610fef;
        piStack_1bc = (int *)FUN_00404b30();
        if (((int)piStack_1bc < 0) && (piStack_1bc != (int *)0x80004002)) {
          iStack_1c0 = 0x610ffd;
          FUN_00878dfb();
        }
      }
      piStack_1bc = (int *)(unaff_EBP + -0x1a8);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_1c0 = 0x61100d;
      iVar3 = FUN_00402bc3();
      piVar5 = piStack_1bc;
      if (iVar3 < 0) {
        iStack_1c0 = 0x611018;
        piStack_1bc = (int *)iVar3;
        FUN_00878dfb();
        piVar5 = (int *)extraout_ECX_02;
      }
      piStack_1bc = (int *)0x0;
      iStack_1c0 = 0;
      *(int **)(unaff_EBP + -0x10) = &iStack_1c4;
      puStack_1c8 = &DAT_00964308;
      puStack_1cc = (undefined1 *)0x61102a;
      iStack_1c4 = (int)piVar5;
      FUN_004033a1();
      puStack_1c8 = (undefined *)(unaff_EBP + -0x1b8);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      puStack_1cc = (undefined1 *)0x61103d;
      FUN_0040263d();
      puStack_1cc = (undefined1 *)0x611044;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      iStack_1c4 = 0x61104f;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x48) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar3 != 0) {
        piStack_1bc = (int *)(unaff_EBP + -0x48);
        iStack_1c0 = 0x611065;
        piStack_1bc = (int *)FUN_0041a581();
        if (((int)piStack_1bc < 0) && (piStack_1bc != (int *)0x80004002)) {
          iStack_1c0 = 0x611073;
          FUN_00878dfb();
        }
      }
      piStack_1bc = (int *)(unaff_EBP + -0x1b8);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_1c0 = 0x611083;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x61108e;
        FUN_00878dfb();
      }
      piStack_1bc = (int *)0x3;
      iStack_1c0 = 0xff;
      iStack_1c4 = 0x6110a0;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_1bc = (int *)0x80004003;
        iStack_1c0 = 0x6110b4;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_1bc = (int *)0x80004003;
          iStack_1c0 = 0x6110bf;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_1bc = (int *)0x80004003;
        iStack_1c0 = 0x6110cd;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x2c) = piVar5;
      iVar7 = *(int *)(unaff_EBP + -0x1c) * 0x3a;
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x18);
      piStack_1bc = (int *)0x6110e4;
      iVar3 = FUN_0040eed0();
      *(int *)(unaff_EBP + -0x3c) = (iVar7 - iVar3) + 0x4b;
      piStack_1bc = (int *)0x6110f7;
      FUN_0040eea9();
      puStack_1cc = *(undefined1 **)(unaff_EBP + -0x10);
      puStack_1c8 = *(undefined **)(unaff_EBP + -0xf8);
      iStack_1c4 = *(int *)(unaff_EBP + -0xf4);
      iStack_1c0 = *(undefined4 *)(unaff_EBP + -0xf0);
      piStack_1bc = *(int **)(unaff_EBP + -0xec);
      iVar3 = (**(code **)(*piVar5 + 0x80))();
      if (iVar3 < 0) {
        iStack_1e0 = *(int *)(unaff_EBP + -0x2c);
        puStack_1e8 = (undefined1 *)0x61112f;
        iStack_1e4 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_1e0 = 0x61113f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x61114a;
        FUN_00878dfb();
      }
      iStack_1e0 = 0x611157;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
      iStack_1e0 = unaff_EBP + -0xa8;
      iStack_1e4 = 0x611168;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_1e0 = 0x611174;
        FUN_00878dfb();
      }
      iStack_1e0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_1e4 = 0x61118b;
      FUN_004031b7();
      iStack_1e0 = unaff_EBP + -0x118;
      puStack_1e8 = (undefined1 *)(unaff_EBP + -0x68);
      iStack_1e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iStack_1e4 = 0x6111b5;
      iStack_1e4 = FUN_00449749();
      puStack_1e8 = (undefined1 *)0xa12;
      FUN_00679d22(unaff_EBP + -0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_1e8 = (undefined1 *)0x6111d6;
      uVar4 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1e8;
      FUN_00448a17(uVar4);
      iVar3 = iVar7 + 0x20;
      uVar4 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_004115d9(0x32,iVar3);
      FUN_00448e3a(uVar4,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (*(int **)(unaff_EBP + -0x68) != (int *)0x0) {
        iStack_1e0 = 0x611218;
        (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_1e0 = 0x611228;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x611233;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iStack_1e0 = 0x611243;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x61124e;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      iStack_1e0 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x34) + 0x74) + 0x178);
      iStack_1e4 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      puStack_1e8 = (undefined1 *)0x611271;
      FUN_007d3546();
      iStack_1e0 = unaff_EBP + -0x70;
      iStack_1e4 = 0x611284;
      piVar5 = (int *)FUN_00679d22();
      iStack_1e0 = *piVar5;
      iStack_1e4 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puStack_1e8 = (undefined1 *)0x611297;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_00414ebb();
      iStack_1e0 = 0x6112b3;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
      iStack_1e0 = unaff_EBP + -0x98;
      iStack_1e4 = 0x6112c4;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_1e0 = 0x6112d0;
        FUN_00878dfb();
      }
      iStack_1e0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_1e4 = 0x6112e2;
      FUN_004031b7();
      iStack_1e0 = unaff_EBP + -0x138;
      puStack_1e8 = (undefined1 *)(unaff_EBP + -0x78);
      iStack_1e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_1e4 = 0x61130c;
      iStack_1e4 = FUN_00449749();
      puStack_1e8 = (undefined1 *)0x611315;
      uVar4 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1e8;
      FUN_00448a17(uVar4);
      iVar3 = iVar7 + 0x33;
      uVar4 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_004115d9(0x32,iVar3);
      FUN_00448e3a(uVar4,iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
        iStack_1e0 = 0x61134b;
        (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_1e0 = 0x61135b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x611366;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_1e0 = 0x611376;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x611381;
        FUN_00878dfb();
      }
      iStack_1e0 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x34) + 0x74) + 0x17c);
      iStack_1e4 = unaff_EBP + -0x24;
      puStack_1e8 = (undefined1 *)0x611398;
      FUN_007d3546();
      iStack_1e0 = unaff_EBP + -0x80;
      iStack_1e4 = 0x6113ab;
      piVar5 = (int *)FUN_00679d22();
      iStack_1e0 = *piVar5;
      iStack_1e4 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      puStack_1e8 = (undefined1 *)0x6113be;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_00414ebb();
      iStack_1e0 = 0x6113da;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
      iStack_1e0 = unaff_EBP + -0xb8;
      iStack_1e4 = 0x6113eb;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_1e0 = 0x6113f7;
        FUN_00878dfb();
      }
      iStack_1e0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_1e4 = 0x611409;
      FUN_004031b7();
      iStack_1e0 = unaff_EBP + -0x158;
      puStack_1e8 = (undefined1 *)(unaff_EBP + -0x88);
      iStack_1e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      iStack_1c4 = 0x611436;
      iStack_1c4 = FUN_00449749();
      puStack_1c8 = (undefined *)0x61143f;
      puStack_1cc = (undefined1 *)FUN_00449713();
      *(undefined ***)(unaff_EBP + -0x10) = &puStack_1c8;
      FUN_00448a17();
      puStack_1cc = (undefined1 *)(iVar7 + 0x46);
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      FUN_004115d9();
      FUN_00448e3a();
      piStack_1bc = *(int **)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (piStack_1bc != (int *)0x0) {
        iStack_1c0 = 0x611478;
        (**(code **)(*piStack_1bc + 8))();
      }
      piStack_1bc = (int *)(unaff_EBP + -0x158);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_1c0 = 0x611488;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x611493;
        FUN_00878dfb();
      }
      piStack_1bc = (int *)(unaff_EBP + -0xb8);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_1c0 = 0x6114a3;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x6114ae;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      piStack_1bc = (int *)0x6114ba;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      piStack_1bc = (int *)0x6114c6;
      FUN_00414ebb();
      piStack_1bc = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      if (piStack_1bc != (int *)0x0) {
        iStack_1c0 = 0x6114d7;
        (**(code **)(*piStack_1bc + 8))();
      }
      piStack_1bc = *(int **)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (piStack_1bc != (int *)0x0) {
        iStack_1c0 = 0x6114e8;
        (**(code **)(*piStack_1bc + 8))();
      }
      piStack_1bc = *(int **)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (piStack_1bc != (int *)0x0) {
        iStack_1c0 = 0x6114f9;
        (**(code **)(*piStack_1bc + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_1bc = (int *)0x611505;
      FUN_00402676();
    }
    else {
      *(uint *)(unaff_EBP + -0x30) = iVar3 + uVar2 * 0x18;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piStack_1bc = (int *)0x0;
      iStack_1c0 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_1c4 = 0x610a72;
      iStack_1c4 = FUN_0045e2eb();
      puStack_1c8 = (undefined *)(unaff_EBP + -0x20);
      puStack_1cc = (undefined1 *)0x610a7e;
      FUN_005536ce();
      piStack_1bc = (int *)0x3;
      iStack_1c0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1c4 = 0x610a94;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        piStack_1bc = (int *)0x80004003;
        iStack_1c0 = 0x610aa8;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          piStack_1bc = (int *)0x80004003;
          iStack_1c0 = 0x610ab3;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_1bc = (int *)0x80004003;
        iStack_1c0 = 0x610ac1;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + -0x2c) = piVar5;
      iVar7 = *(int *)(unaff_EBP + -0x1c) * 0x3a;
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x20);
      piStack_1bc = (int *)0x610ad8;
      iVar3 = FUN_0040eed0();
      *(int *)(unaff_EBP + -0x10) = (iVar7 - iVar3) + 0x4b;
      piStack_1bc = (int *)0x610aeb;
      FUN_0040eea9();
      puStack_1cc = *(undefined1 **)(unaff_EBP + -0x3c);
      puStack_1c8 = *(undefined **)(unaff_EBP + -0x188);
      iStack_1c4 = *(int *)(unaff_EBP + -0x184);
      iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x180);
      piStack_1bc = *(int **)(unaff_EBP + -0x17c);
      iVar3 = (**(code **)(*piVar5 + 0x80))();
      if (iVar3 < 0) {
        iStack_1e0 = *(int *)(unaff_EBP + -0x2c);
        puStack_1e8 = (undefined1 *)0x610b23;
        iStack_1e4 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1e0 = 0x610b33;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x610b3e;
        FUN_00878dfb();
      }
      FUN_0045e2eb();
      iStack_1e0 = unaff_EBP + -0x6c;
      iStack_1e4 = 0x610b58;
      FUN_0045a1d8();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_1e0 = 0x610b65;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1e0 = extraout_ECX_00;
      if (*(int *)(unaff_EBP + -0x6c) != 0) {
        iStack_1e0 = 0x610b79;
        iVar3 = *(int *)(unaff_EBP + -0x6c) + -0xc;
        FUN_00434e38();
        iStack_1e0 = iVar3;
      }
      puStack_1e8 = (undefined1 *)&iStack_1e0;
      *(int **)(unaff_EBP + -0x10) = &iStack_1e0;
      iStack_1e4 = 1;
      FUN_007d4a9a();
      iStack_1e4 = unaff_EBP + -0x14;
      puStack_1e8 = (undefined1 *)0x610b98;
      FUN_007d3a22();
      iStack_1e0 = 0x610bac;
      FUN_00403191();
      iStack_1e0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_1e4 = 0x610bc3;
      FUN_004031b7();
      iStack_1e0 = unaff_EBP + -0xe8;
      puStack_1e8 = (undefined1 *)(unaff_EBP + -0x54);
      iStack_1e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_1e4 = 0x610bed;
      iStack_1e4 = FUN_00449749();
      puStack_1e8 = (undefined1 *)0x610bf6;
      uVar4 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1e8;
      FUN_00448a17(uVar4);
      iVar3 = iVar7 + 0x20;
      uVar4 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004115d9(0x32,iVar3);
      FUN_00448e3a(uVar4,iVar3);
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_1e0 = 0x610c33;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x610c3e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1e0 = 0x610c4e;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x610c59;
        FUN_00878dfb();
      }
      iStack_1e0 = unaff_EBP + -0x7c;
      iStack_1e4 = 0x610c6c;
      piVar5 = (int *)FUN_00679d22();
      iStack_1e0 = *piVar5;
      iStack_1e4 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_1e8 = (undefined1 *)0x610c82;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x7c) != 0) {
        iStack_1e0 = 0x610c99;
        FUN_00434e38();
      }
      iStack_1e0 = 0x610ca6;
      FUN_00403191();
      iStack_1e0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1e4 = 0x610cb8;
      FUN_004031b7();
      iStack_1e0 = unaff_EBP + -0x108;
      puStack_1e8 = (undefined1 *)(unaff_EBP + -0x5c);
      iStack_1e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_1e4 = 0x610ce2;
      iStack_1e4 = FUN_00449749();
      puStack_1e8 = (undefined1 *)0x610ceb;
      uVar4 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_1e8;
      FUN_00448a17(uVar4);
      iVar3 = iVar7 + 0x33;
      uVar4 = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004115d9(0x32,iVar3);
      FUN_00448e3a(uVar4,iVar3);
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1e0 = 0x610d28;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x610d33;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1e0 = 0x610d43;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1e0 = 0x610d4e;
        FUN_00878dfb();
      }
      iStack_1e0 = unaff_EBP + -0x74;
      iStack_1e4 = 0x610d61;
      piVar5 = (int *)FUN_00679d22();
      iStack_1e0 = *piVar5;
      iStack_1e4 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_1e8 = (undefined1 *)0x610d77;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x74) != 0) {
        iStack_1e0 = 0x610d8e;
        FUN_00434e38();
      }
      iStack_1e0 = 0x610d9b;
      FUN_00403191();
      iStack_1e0 = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_1e4 = 0x610dad;
      FUN_004031b7();
      iStack_1e0 = unaff_EBP + -0x128;
      puStack_1e8 = (undefined1 *)(unaff_EBP + -100);
      iStack_1e4 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1c4 = 0x610dd7;
      iStack_1c4 = FUN_00449749();
      puStack_1c8 = (undefined *)0x610de0;
      puStack_1cc = (undefined1 *)FUN_00449713();
      *(undefined ***)(unaff_EBP + -0x10) = &puStack_1c8;
      FUN_00448a17();
      puStack_1cc = (undefined1 *)(iVar7 + 0x46);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_004115d9();
      FUN_00448e3a();
      piStack_1bc = (int *)0x610e0d;
      FUN_004497b5();
      piStack_1bc = (int *)(unaff_EBP + -0x128);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_1c0 = 0x610e1d;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x610e28;
        FUN_00878dfb();
      }
      piStack_1bc = (int *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1c0 = 0x610e38;
      piStack_1bc = (int *)FUN_00402bc3();
      if ((int)piStack_1bc < 0) {
        iStack_1c0 = 0x610e43;
        FUN_00878dfb();
      }
      piStack_1bc = (int *)0x610e4b;
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_1bc = (int *)0x610e57;
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
  } while (*(int *)(unaff_EBP + -0x1c) < 4);
  piStack_1bc = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_1bc != (int *)0x0) {
    iStack_1c0 = 0x611523;
    (**(code **)(*piStack_1bc + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


