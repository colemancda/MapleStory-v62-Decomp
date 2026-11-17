/* FUN_00703351 - 0x00703351 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00703351(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 *extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  int unaff_EBP;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  int iStack_364;
  undefined4 *puStack_360;
  undefined8 uStack_35c;
  undefined4 *puStack_354;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 *puStack_33c;
  int iStack_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined1 *puStack_32c;
  int *piStack_328;
  int *piStack_324;
  undefined4 uStack_320;
  int iStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  int iStack_310;
  int iStack_30c;
  undefined4 *puStack_308;
  
  FUN_00879bb8();
  puStack_308 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  iStack_30c = 0x703379;
  FUN_0081622a();
  puStack_308 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_30c = 0x703384;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  iVar3 = *(int *)(extraout_ECX + 0x578);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(iVar3 + -4);
  }
  puStack_308 = (undefined4 *)0xddc;
  iStack_30c = unaff_EBP + 8;
  iStack_310 = 0x7033b2;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_30c = *puVar1;
  iStack_310 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_314 = 0x7033c3;
  puStack_308 = (undefined4 *)uVar7;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_308 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
    iStack_30c = 0x7033da;
    FUN_00434e38();
  }
  puStack_308 = &DAT_00980690;
  iStack_30c = 0x7033ec;
  FUN_00403191();
  puStack_308 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_30c = 0x7033f9;
  FUN_00403191();
  puStack_308 = (undefined4 *)(unaff_EBP + -0xd4);
  iStack_30c = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_310 = 0x703413;
  iStack_310 = FUN_00449749();
  uStack_314 = 0x70341c;
  uStack_318 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_314;
  iStack_31c = 0x703428;
  uStack_314 = extraout_ECX_00;
  FUN_00448a17();
  uStack_318 = 2;
  iStack_31c = 10;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_320 = 0x703438;
  FUN_004115d9();
  uStack_320 = 0x70343f;
  FUN_00448e3a();
  puStack_308 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_30c = 0x70344c;
  puStack_308 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_308 < 0) {
    iStack_30c = 0x703459;
    FUN_00878dfb();
  }
  puStack_308 = (undefined4 *)(unaff_EBP + -0xd4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_30c = 0x703469;
  puStack_308 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_308 < 0) {
    iStack_30c = 0x703474;
    FUN_00878dfb();
  }
  if (((*(int *)(extraout_ECX + 0x57c) == 0) || (*(int *)(extraout_ECX + 0x578) == 0)) ||
     (*(int *)(*(int *)(extraout_ECX + 0x578) + -4) == 0)) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x60) != 0) {
      puStack_308 = (undefined4 *)(*(int *)(unaff_EBP + -0x60) + -0xc);
      iStack_30c = 0x704b75;
      FUN_00434e38();
    }
    puStack_308 = (undefined4 *)0x704b7e;
    FUN_004125e6();
  }
  else {
    puStack_308 = (undefined4 *)0x70349e;
    iVar2 = FUN_007052e6();
    iVar2 = iVar2 / 0x12;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    iVar3 = extraout_ECX;
    if (0 < iVar2) {
      *(undefined4 *)(unaff_EBP + 8) = 0x19;
      *(int *)(unaff_EBP + -0x40) = iVar2;
      *(int *)(unaff_EBP + -0x20) = iVar2;
      do {
        puStack_308 = &DAT_00980690;
        iStack_30c = 0x7034c5;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar3 + 0x5dc);
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (piVar5 == (int *)0x0) {
          puStack_308 = (undefined4 *)0x80004003;
          iStack_30c = 0x7034e3;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x18);
        }
        iVar3 = *piVar5;
        uStack_318 = *(undefined4 *)(unaff_EBP + -0x2c);
        iStack_31c = *(undefined4 *)(unaff_EBP + 8);
        uStack_314 = *(undefined4 *)(unaff_EBP + -0x80);
        iStack_310 = *(int *)(unaff_EBP + -0x7c);
        iStack_30c = *(undefined4 *)(unaff_EBP + -0x78);
        uStack_320 = 0;
        *(int **)(unaff_EBP + -0x1c) = piVar5;
        puStack_308 = *(undefined4 **)(unaff_EBP + -0x74);
        piStack_328 = (int *)0x703506;
        piStack_324 = piVar5;
        iVar3 = (**(code **)(iVar3 + 0x80))();
        if (iVar3 < 0) {
          puStack_308 = (undefined4 *)&DAT_00963cc8;
          iStack_30c = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_314 = 0x703518;
          iStack_310 = iVar3;
          FUN_00878e09();
        }
        puStack_308 = (undefined4 *)(unaff_EBP + -0x80);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_30c = 0x703525;
        puStack_308 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_308 < 0) {
          iStack_30c = 0x703530;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x12;
        piVar5 = (int *)(unaff_EBP + -0x40);
        *piVar5 = *piVar5 + -1;
        iVar3 = *(int *)(unaff_EBP + -0x10);
      } while (*piVar5 != 0);
    }
    puStack_308 = &DAT_00980690;
    iStack_30c = 0x703545;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar3 + 0x5e0);
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar5 == (int *)0x0) {
      puStack_308 = (undefined4 *)0x80004003;
      iStack_30c = 0x703563;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x18);
    }
    iVar3 = *piVar5;
    uStack_318 = *(undefined4 *)(unaff_EBP + 8);
    uStack_314 = *(undefined4 *)(unaff_EBP + -0x80);
    iStack_310 = *(undefined4 *)(unaff_EBP + -0x7c);
    iStack_31c = *(int *)(unaff_EBP + -0x20) * 0x12 + 0x19;
    iStack_30c = *(undefined4 *)(unaff_EBP + -0x78);
    uStack_320 = 0;
    *(int **)(unaff_EBP + -0x2c) = piVar5;
    puStack_308 = *(undefined4 **)(unaff_EBP + -0x74);
    piStack_328 = (int *)0x70358e;
    piStack_324 = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      piStack_328 = (int *)&DAT_00963cc8;
      puStack_32c = *(undefined1 **)(unaff_EBP + -0x2c);
      uStack_334 = 0x7035a0;
      iStack_330 = iVar3;
      FUN_00878e09();
    }
    piStack_328 = (int *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_32c = (undefined1 *)0x7035ad;
    piStack_328 = (int *)FUN_00402bc3();
    if ((int)piStack_328 < 0) {
      puStack_32c = (undefined1 *)0x7035b8;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x58) = DAT_0097926c;
    *(undefined4 *)(unaff_EBP + -0x94) = DAT_00978368;
    puStack_32c = (undefined1 *)0x0;
    if (*(int *)(iVar3 + 0x578) != 0) {
      puStack_32c = *(undefined1 **)(*(int *)(iVar3 + 0x578) + -4);
    }
    piStack_328 = (int *)(unaff_EBP + 0xb);
    iStack_330 = 0x7035eb;
    FUN_0047266d();
    puStack_32c = (undefined1 *)0x0;
    if (*(int *)(iVar3 + 0x578) != 0) {
      puStack_32c = *(undefined1 **)(*(int *)(iVar3 + 0x578) + -4);
    }
    piStack_328 = (int *)(unaff_EBP + 0xb);
    iStack_330 = 0x703608;
    FUN_004fae8e();
    puStack_32c = (undefined1 *)0x0;
    if (*(int *)(iVar3 + 0x578) != 0) {
      puStack_32c = *(undefined1 **)(*(int *)(iVar3 + 0x578) + -4);
    }
    piStack_328 = (int *)(unaff_EBP + 0xb);
    iStack_330 = 0x703625;
    FUN_004fae8e();
    *(undefined4 *)(unaff_EBP + 8) = 0x19;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    uVar4 = 0;
    while ((iVar2 = *(int *)(iVar3 + 0x578), iVar2 != 0 && (uVar4 < *(uint *)(iVar2 + -4)))) {
      piStack_328 = (int *)CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(uVar4 * 4 + iVar2))
      ;
      *(int **)(unaff_EBP + -0x44) = piStack_328;
      puStack_32c = (undefined1 *)(unaff_EBP + -0x38);
      iStack_330 = 0x703663;
      FUN_00704b95();
      piStack_328 = (int *)0xaa;
      iStack_330 = iVar3 + 0x584;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_32c;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_334 = 0x70367e;
      FUN_0046fcc9();
      iStack_330 = unaff_EBP + -0x38;
      uStack_334 = 0x703687;
      iVar3 = FUN_007d3a22();
      if (iVar3 == 0) {
        piStack_328 = (int *)0xffffffff;
        puStack_32c = &DAT_00978474;
        iStack_330 = 0x703820;
        FUN_00414edd();
        piStack_328 = &DAT_00980690;
        puStack_32c = (undefined1 *)0x70382c;
        FUN_00403191();
        iVar3 = *(int *)(unaff_EBP + 8) + 0x12;
        puStack_32c = (undefined1 *)(unaff_EBP + -0x2b4);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_330 = 0x703846;
        piStack_328 = (int *)iVar3;
        uStack_334 = FUN_00449713();
        *(int **)(unaff_EBP + -0x14) = &iStack_330;
        iStack_338 = 0x703852;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        uStack_334 = 0x703864;
        FUN_0044974c();
        uStack_334 = 0x70386b;
        iVar2 = FUN_00448ebb();
        puStack_32c = (undefined1 *)(iVar2 + 10);
        iStack_330 = *(int *)(unaff_EBP + 8);
        uStack_334 = 10;
        iStack_338 = *(undefined4 *)(unaff_EBP + -0x20);
        puStack_33c = (undefined4 *)0x703882;
        iStack_338 = FUN_007063e7();
        puStack_33c = (undefined4 *)0x703889;
        (*DAT_0097b504)();
        *(undefined1 *)(unaff_EBP + -4) = 8;
      }
      else {
        piStack_328 = &DAT_00980690;
        puStack_32c = (undefined1 *)0x70369e;
        FUN_00403191();
        iVar3 = *(int *)(unaff_EBP + 8) + 0x12;
        puStack_32c = (undefined1 *)(unaff_EBP + -0x234);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_330 = 0x7036b8;
        piStack_328 = (int *)iVar3;
        uStack_334 = FUN_00449713();
        *(int **)(unaff_EBP + -0x14) = &iStack_330;
        iStack_338 = 0x7036c4;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_334 = 0x7036d6;
        FUN_0044974c();
        uStack_334 = 0x7036dd;
        iVar2 = FUN_00448ebb();
        puStack_32c = (undefined1 *)(iVar2 + 10);
        iStack_330 = *(int *)(unaff_EBP + 8);
        iStack_338 = unaff_EBP + -0x2f4;
        uStack_334 = 10;
        puStack_33c = (undefined4 *)0x7036f3;
        (*DAT_0097b504)();
        puStack_33c = (undefined4 *)(unaff_EBP + -0x234);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_340 = 0x703703;
        puStack_33c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_33c < 0) {
          iStack_340 = 0x70370e;
          FUN_00878dfb();
        }
        puStack_33c = *(undefined4 **)(unaff_EBP + -0x44);
        iStack_340 = unaff_EBP + -0xa4;
        uStack_344 = 0x703720;
        iStack_340 = FUN_00704b95();
        puStack_33c = (undefined4 *)(unaff_EBP + -0x2f4);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        uStack_344 = 0x70373a;
        FUN_00706155();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0xa4) != 0) {
          puStack_33c = (undefined4 *)(*(int *)(unaff_EBP + -0xa4) + -0xc);
          iStack_340 = 0x703751;
          FUN_00434e38();
        }
        puStack_33c = *(undefined4 **)(unaff_EBP + -0x44);
        iStack_340 = unaff_EBP + -0x88;
        uStack_344 = 0x703764;
        puStack_33c = (undefined4 *)FUN_00704b95();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_340 = 0x70377a;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0x88) != 0) {
          puStack_33c = (undefined4 *)(*(int *)(unaff_EBP + -0x88) + -0xc);
          iStack_340 = 0x703791;
          FUN_00434e38();
        }
        puStack_33c = &DAT_00980690;
        iStack_340 = 0x70379e;
        FUN_00403191();
        iStack_340 = unaff_EBP + -0x254;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uStack_344 = 0x7037b2;
        puStack_33c = (undefined4 *)iVar3;
        uStack_348 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x14) = &uStack_344;
        uStack_34c = 0x7037be;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uStack_348 = 0x7037d0;
        FUN_0044974c();
        uStack_348 = 0x7037d7;
        iStack_340 = FUN_00448ebb();
        iStack_340 = iStack_340 + 10;
        uStack_344 = *(undefined4 *)(unaff_EBP + 8);
        uStack_348 = 10;
        uStack_34c = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_34c = FUN_007063e7();
        (*DAT_0097b504)();
        *(undefined1 *)(unaff_EBP + -4) = 8;
      }
      puStack_354 = (undefined4 *)0x703899;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        puStack_354 = (undefined4 *)0x7038a4;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 8);
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x5b0 + *(int *)(unaff_EBP + -0x20) * 8);
      *(undefined4 *)(unaff_EBP + -0x3c) = 1;
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0xb8) = 0;
        *(undefined4 *)(unaff_EBP + -0xc4) = 1;
        *(undefined4 *)(unaff_EBP + -0xc0) = 0;
        *(undefined4 *)(unaff_EBP + -0xbc) = 0;
        puStack_354 = (undefined4 *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        uStack_35c = (double)CONCAT44(0x7038f7,(undefined4 *)uStack_35c);
        FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_354 = (undefined4 *)0x703907;
        FUN_00419192();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (*(int *)(unaff_EBP + -0x8c) != 0) {
          puStack_354 = (undefined4 *)0x70391e;
          FUN_00403384();
        }
        puStack_354 = (undefined4 *)0x70392e;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x14) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (iVar2 != 0) {
          FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_354 = (undefined4 *)0x70395d;
        FUN_00450382();
        puStack_354 = (undefined4 *)0x703969;
        FUN_00403191();
        puStack_354 = (undefined4 *)0x0;
        uStack_35c._4_4_ = *(int *)(unaff_EBP + 8) + -2;
        uStack_35c._0_4_ = (undefined4 *)(unaff_EBP + -0x274);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        puStack_360 = (undefined4 *)0x70398c;
        iStack_364 = FUN_00449713();
        *(undefined4 ***)(unaff_EBP + 8) = &puStack_360;
        FUN_00448a17();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_364 = 0x7039aa;
        FUN_0044974c();
        iStack_364 = 0x7039b1;
        uVar7 = FUN_00448ebb();
        *(undefined4 *)(unaff_EBP + 8) = uVar7;
        uStack_35c._0_4_ = (undefined4 *)0x7039bb;
        piVar5 = (int *)FUN_00705ae5();
        uStack_35c = (double)CONCAT44(uStack_35c._4_4_,*(int *)(unaff_EBP + 8) + 0xf);
        puStack_360 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x7d2);
        iStack_364 = *(int *)(unaff_EBP + -0x10);
        (**(code **)(*piVar5 + 0x20))();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_354 = (undefined4 *)0x7039e6;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_354 = (undefined4 *)0x7039f1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00402676();
      }
      *(int *)(unaff_EBP + 8) = iVar3;
      puStack_354 = (undefined4 *)0x703a0e;
      iVar2 = FUN_006fcb31();
      iVar3 = *(int *)(iVar2 + 0x50);
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        while( true ) {
          if ((*(int *)(iVar2 + 0x50) == 0) ||
             (uVar4 = *(uint *)(unaff_EBP + -0x24), *(uint *)(*(int *)(iVar2 + 0x50) + -4) <= uVar4)
             ) break;
          puStack_354 = (undefined4 *)(unaff_EBP + -0x6c);
          uStack_35c = (double)CONCAT44(0x703a5f,(undefined4 *)uStack_35c);
          FUN_0045a1d8();
          iVar3 = *(int *)(*(int *)(iVar2 + 0x50) + 4 + uVar4 * 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          *(int *)(unaff_EBP + -0x1c) = iVar3;
          puStack_354 = (undefined4 *)0x703a7d;
          iVar2 = FUN_0084c94e();
          *(int *)(unaff_EBP + -0x34) = iVar2;
          if ((*(int *)(unaff_EBP + -0x3c) == 0) || (iVar2 < iVar3)) {
            *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x3c) = 1;
          }
          FUN_0087a1b0();
          uStack_35c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x34),0x703aac);
          puStack_354 = &uStack_34c;
          puStack_354 = (undefined4 *)FUN_0087b818();
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
          uStack_35c = (double)CONCAT44(0x703abe,(undefined4 *)uStack_35c);
          FUN_00414edd();
          *(undefined4 *)(unaff_EBP + -0x5c) = 0;
          puStack_354 = (undefined4 *)&DAT_0096b488;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          uStack_35c = (double)CONCAT44(unaff_EBP + -0x5c,0x703ad7);
          FUN_00434e21();
          puStack_354 = (undefined4 *)0x703ae6;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_354 = (undefined4 *)0x703af9;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x703b05);
          FUN_00448a17();
          iVar3 = *(int *)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          uStack_35c = (double)CONCAT44(0x703b19,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x703b20,(undefined4 *)uStack_35c);
          FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703b37;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x703b42;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x703b4e;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          puStack_354 = (undefined4 *)0x703b61;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x703b6d);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          uStack_35c = (double)CONCAT44(0x703b78,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x703b7f,(undefined4 *)uStack_35c);
          FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703b91;
          puVar1 = (undefined4 *)(unaff_EBP + -0x294);
          iVar2 = FUN_00402bc3();
          puStack_354 = puVar1;
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x703b9c;
            FUN_00878dfb();
            puStack_354 = extraout_ECX_01;
          }
          *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_354;
          uStack_35c = (double)CONCAT44(iVar3 + 0x580,0x703ba9);
          FUN_0046fcc9();
          uStack_35c = (double)CONCAT44(unaff_EBP + -0x6c,0x703bb2);
          FUN_007d3a22();
          puStack_354 = (undefined4 *)0x703bc1;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puStack_354 = (undefined4 *)0x703bd1;
          FUN_00403191();
          puStack_354 = (undefined4 *)(unaff_EBP + -0x2d4);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          uStack_35c = (double)CONCAT44(0x703bea,(undefined4 *)uStack_35c);
          uStack_35c._4_4_ = FUN_00449749();
          uStack_35c._0_4_ = (undefined4 *)0x703bf3;
          puStack_360 = (undefined4 *)FUN_00449713();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,extraout_ECX_02);
          *(undefined8 **)(unaff_EBP + -0x14) = &uStack_35c;
          iStack_364 = 0x703bff;
          FUN_00448a17();
          puStack_360 = *(undefined4 **)(unaff_EBP + 8);
          iStack_364 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puStack_354 = (undefined4 *)0x703c27;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703c32;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703c42;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703c4d;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x703c59;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          puStack_354 = (undefined4 *)0x703c6c;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x703c78);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          uStack_35c = (double)CONCAT44(0x703c83,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x703c8a,(undefined4 *)uStack_35c);
          iVar3 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703c9d;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x703ca8;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x703cb4;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          puStack_354 = (undefined4 *)0x703cc4;
          FUN_00403191();
          iVar2 = *(int *)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (iVar2 == 0) {
            iVar2 = 1;
          }
          puStack_354 = (undefined4 *)(unaff_EBP + -0x284);
          uStack_35c = (double)CONCAT44((*(int *)(unaff_EBP + -0x34) * 100) / iVar2,
                                        unaff_EBP + -0xb4);
          puStack_360 = (undefined4 *)0x703cf9;
          FUN_00704c2c();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_35c = (double)CONCAT44(0x703d04,(undefined4 *)uStack_35c);
          uStack_35c._4_4_ = FUN_00449749();
          uStack_35c._0_4_ = (undefined4 *)0x703d0d;
          puStack_360 = (undefined4 *)FUN_00449713();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,extraout_ECX_03);
          *(undefined8 **)(unaff_EBP + -0x14) = &uStack_35c;
          iStack_364 = 0x703d19;
          FUN_00448a17();
          puStack_360 = *(undefined4 **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          iStack_364 = iVar3 + 0x14;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (*(int **)(unaff_EBP + -0xb4) != (int *)0x0) {
            puStack_354 = (undefined4 *)0x703d44;
            (**(code **)(**(int **)(unaff_EBP + -0xb4) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          puStack_354 = (undefined4 *)0x703d54;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x703d5f;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703d6f;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x703d7a;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x703d86;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          puStack_354 = (undefined4 *)0x703d99;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x703da5);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          uStack_35c = (double)CONCAT44(0x703db0,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x703db7,(undefined4 *)uStack_35c);
          iVar2 = FUN_00448ebb();
          *(int *)(unaff_EBP + -0x1c) = iVar3 + 0x14 + iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703dcc;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703dd7;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x703de6;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x1a4));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x1a4);
          uStack_35c = (double)CONCAT44(0x703df3,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703dff;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          puStack_354 = (undefined4 *)0x703e0c;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x144));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x144);
          uStack_35c = (double)CONCAT44(0x703e19,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703e25;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)(unaff_EBP + -0x144);
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          uStack_35c = (double)CONCAT44(0x703e3e,(undefined4 *)uStack_35c);
          uStack_35c._4_4_ = FUN_00449749();
          uStack_35c._0_4_ = (undefined4 *)0x703e47;
          puStack_360 = (undefined4 *)FUN_00449713();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,extraout_ECX_04);
          *(undefined8 **)(unaff_EBP + -0x14) = &uStack_35c;
          iStack_364 = 0x703e53;
          FUN_00448a17();
          puStack_360 = *(undefined4 **)(unaff_EBP + 8);
          iStack_364 = *(int *)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          puStack_354 = (undefined4 *)0x703e7c;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703e87;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          puStack_354 = (undefined4 *)0x703e97;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703ea2;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x12;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00414ebb();
          *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
          iVar2 = *(int *)(unaff_EBP + -0x2c);
        }
      }
      pcVar8 = VariantInit_exref;
      if ((*(int *)(iVar2 + 0x54) != 0) && (*(int *)(*(int *)(iVar2 + 0x54) + -4) != 0)) {
        *(undefined4 *)(unaff_EBP + -0x70) = 0;
        pcVar8 = VariantInit_exref;
        *(undefined4 *)(unaff_EBP + -0x1c) = 3;
        *(undefined4 *)(unaff_EBP + -0x34) = 8;
        while( true ) {
          *(int **)(unaff_EBP + -0x28) = (int *)(iVar2 + 0x54);
          iVar3 = *(int *)(iVar2 + 0x54);
          if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= *(uint *)(unaff_EBP + -0x70)))
          goto LAB_0070469d;
          puStack_354 = (undefined4 *)0x703f27;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x1c4));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x1c4);
          uStack_35c = (double)CONCAT44(0x703f34,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703f40;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          puStack_354 = (undefined4 *)0x703f4d;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x124));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x124);
          puVar1 = &DAT_00980690;
          uStack_35c = (double)CONCAT44(0x703f5a,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x703f66;
            FUN_00878dfb();
            puVar1 = extraout_ECX_05;
          }
          puStack_354 = (undefined4 *)0x0;
          uStack_35c = (double)CONCAT44(unaff_EBP + -0x1c4,unaff_EBP + -0x124);
          *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_360;
          iStack_364 = 0x8a2;
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          puStack_360 = puVar1;
          FUN_00679e4e(&puStack_360);
          iStack_364 = unaff_EBP + -0x304;
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          FUN_00405a1d();
          FUN_00402660();
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          uStack_35c = (double)CONCAT44(0x703fbb,(undefined4 *)uStack_35c);
          iVar3 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x68) = 0;
          *(int *)(unaff_EBP + -0x90) = iVar3;
          if (iVar3 != 0) {
            puStack_354 = (undefined4 *)0x703fd8;
            iVar3 = FUN_00404b30();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              puStack_354 = (undefined4 *)0x703fe9;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          puStack_354 = (undefined4 *)0x703ff9;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x704004;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          puStack_354 = (undefined4 *)0x704014;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x70401f;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          puStack_354 = (undefined4 *)0x70402f;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x70403a;
            FUN_00878dfb();
          }
          *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffcb0;
          puStack_354 = (undefined4 *)0x64b;
          uStack_35c = (double)CONCAT44(&stack0xfffffcb0,0x704050);
          FUN_00679e4e();
          puStack_354 = *(undefined4 **)(unaff_EBP + -0x70);
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          uStack_35c = (double)CONCAT44(0x70405f,(undefined4 *)uStack_35c);
          puStack_354 = (undefined4 *)FUN_007063db();
          puStack_354 = (undefined4 *)*puStack_354;
          uStack_35c._0_4_ = (undefined4 *)(unaff_EBP + -0x68);
          *(int *)(unaff_EBP + -0x14) = (int)&uStack_35c + 4;
          puStack_360 = (undefined4 *)0x704070;
          uStack_35c._4_4_ = extraout_ECX_06;
          FUN_00424dbc();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,unaff_EBP + -0x54);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          puStack_360 = (undefined4 *)0x70407d;
          FUN_007d6c55();
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          puStack_354 = (undefined4 *)0x704096;
          iVar3 = FUN_00455c59();
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar3 + 4);
          if (*(int *)(unaff_EBP + -0x9c) != 0) {
            puStack_354 = (undefined4 *)0x7040b2;
            FUN_0045e7c2();
            *(undefined4 *)(unaff_EBP + -0x9c) = 0;
          }
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
          *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x44);
          puStack_354 = (undefined4 *)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          uStack_35c = (double)CONCAT44(0x7040dd,(undefined4 *)uStack_35c);
          iVar3 = FUN_004b95d3();
          if (iVar3 == 0) break;
          iVar3 = *(int *)(**(int **)(unaff_EBP + -0x28) + -4 + *(int *)(unaff_EBP + -0x34));
          iVar2 = 0;
          *(int *)(unaff_EBP + -0x14) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (*(int *)(unaff_EBP + -0x4c) != 0) {
            iVar2 = *(int *)(*(int *)(unaff_EBP + -0x4c) + -4);
          }
          if (*(int *)(unaff_EBP + -0x1c) <= iVar2) {
            puStack_354 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + -3);
            uStack_35c = (double)CONCAT44(unaff_EBP + -0x98,0x70411e);
            FUN_0045e053();
            puStack_354 = (undefined4 *)0x704125;
            uVar7 = FUN_0087b6ab();
            *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
            FUN_00414ebb();
          }
          if ((*(int *)(unaff_EBP + -0x3c) == 0) || (*(int *)(unaff_EBP + -0x24) < iVar3)) {
            *(undefined4 *)(unaff_EBP + -0x3c) = 0;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x3c) = 1;
          }
          FUN_0087a1b0();
          uStack_35c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x24),0x704161);
          puStack_354 = &uStack_34c;
          puStack_354 = (undefined4 *)FUN_0087b818();
          *(undefined4 *)(unaff_EBP + -0x48) = 0;
          uStack_35c = (double)CONCAT44(0x704173,(undefined4 *)uStack_35c);
          FUN_00414edd();
          *(undefined4 *)(unaff_EBP + -100) = 0;
          puStack_354 = (undefined4 *)&DAT_0096b488;
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          uStack_35c = (double)CONCAT44(unaff_EBP + -100,0x70418a);
          FUN_00434e21();
          puStack_354 = (undefined4 *)0x704196;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x114));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x114);
          uStack_35c = (double)CONCAT44(0x7041a3,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x7041af;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          puStack_354 = (undefined4 *)0x7041c2;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x7041ce);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          uStack_35c = (double)CONCAT44(0x7041e0,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x7041e7,(undefined4 *)uStack_35c);
          FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x7041fe;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x704209;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x704212;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x1e4));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x1e4);
          uStack_35c = (double)CONCAT44(0x70421f,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x70422b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          puStack_354 = (undefined4 *)0x70423e;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x70424a);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          uStack_35c = (double)CONCAT44(0x70425c,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x704263,(undefined4 *)uStack_35c);
          FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x704275;
          puVar1 = (undefined4 *)(unaff_EBP + -0x1e4);
          iVar3 = FUN_00402bc3();
          puStack_354 = puVar1;
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x704280;
            FUN_00878dfb();
            puStack_354 = extraout_ECX_07;
          }
          *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_354;
          uStack_35c = (double)CONCAT44(*(int *)(unaff_EBP + -0x10) + 0x580,0x704295);
          FUN_0046fcc9();
          uStack_35c = (double)CONCAT44(unaff_EBP + -0x54,0x70429e);
          FUN_007d3a22();
          puStack_354 = (undefined4 *)0x7042aa;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x204));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x204);
          uStack_35c = (double)CONCAT44(0x7042b7,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x7042c3;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          puStack_354 = (undefined4 *)0x7042d0;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x134));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x134);
          uStack_35c = (double)CONCAT44(0x7042dd,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x7042e9;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)(unaff_EBP + -0x134);
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x10) + 0x580;
          uStack_35c = (double)CONCAT44(0x70430c,(undefined4 *)uStack_35c);
          uStack_35c._4_4_ = FUN_00449749();
          uStack_35c._0_4_ = (undefined4 *)0x704315;
          puStack_360 = (undefined4 *)FUN_00449713();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,extraout_ECX_08);
          *(undefined8 **)(unaff_EBP + -0x30) = &uStack_35c;
          iStack_364 = 0x704321;
          FUN_00448a17();
          puStack_360 = *(undefined4 **)(unaff_EBP + 8);
          iStack_364 = 10;
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          puStack_354 = (undefined4 *)0x704349;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x704354;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x704364;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x70436f;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x704378;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x154));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x154);
          uStack_35c = (double)CONCAT44(0x704385,(undefined4 *)uStack_35c);
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x704391;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          puStack_354 = (undefined4 *)0x7043a4;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x7043b0);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          uStack_35c = (double)CONCAT44(0x7043bc,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x7043c3,(undefined4 *)uStack_35c);
          iVar3 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x7043d6;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x7043e1;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x7043ea;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x174));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x174);
          uStack_35c = (double)CONCAT44(0x7043f7,(undefined4 *)uStack_35c);
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x704403;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          puStack_354 = (undefined4 *)0x704410;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x224));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x224);
          uStack_35c = (double)CONCAT44(0x70441d,(undefined4 *)uStack_35c);
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x704429;
            FUN_00878dfb();
          }
          iVar2 = *(int *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          if (iVar2 == 0) {
            iVar2 = 1;
          }
          puStack_354 = (undefined4 *)(unaff_EBP + -0x224);
          uStack_35c = (double)CONCAT44((*(int *)(unaff_EBP + -0x24) * 100) / iVar2,
                                        unaff_EBP + -0xb0);
          puStack_360 = (undefined4 *)0x70445e;
          FUN_00704c2c();
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          uStack_35c = (double)CONCAT44(0x704469,(undefined4 *)uStack_35c);
          uStack_35c._4_4_ = FUN_00449749();
          uStack_35c._0_4_ = (undefined4 *)0x704472;
          puStack_360 = (undefined4 *)FUN_00449713();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,extraout_ECX_09);
          *(undefined8 **)(unaff_EBP + -0x30) = &uStack_35c;
          iStack_364 = 0x70447e;
          FUN_00448a17();
          puStack_360 = *(undefined4 **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x43;
          iStack_364 = iVar3 + 0x14;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          if (*(int **)(unaff_EBP + -0xb0) != (int *)0x0) {
            puStack_354 = (undefined4 *)0x7044a9;
            (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          puStack_354 = (undefined4 *)0x7044b9;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x7044c4;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x7044d4;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x7044df;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x7044e8;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x1d4));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x1d4);
          uStack_35c = (double)CONCAT44(0x7044f5,(undefined4 *)uStack_35c);
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            puStack_354 = (undefined4 *)0x704501;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          puStack_354 = (undefined4 *)0x704514;
          uVar7 = FUN_00449713();
          *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_354;
          uStack_35c = (double)CONCAT44(uVar7,0x704520);
          FUN_00448a17();
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          uStack_35c = (double)CONCAT44(0x70452c,(undefined4 *)uStack_35c);
          FUN_0044974c();
          uStack_35c = (double)CONCAT44(0x704533,(undefined4 *)uStack_35c);
          iVar2 = FUN_00448ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x704545;
          iVar6 = FUN_00402bc3();
          if (iVar6 < 0) {
            puStack_354 = (undefined4 *)0x704550;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)0x704559;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x214));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x214);
          uStack_35c = (double)CONCAT44(0x704566,(undefined4 *)uStack_35c);
          iVar6 = FUN_00402e32();
          if (iVar6 < 0) {
            puStack_354 = (undefined4 *)0x704572;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          puStack_354 = (undefined4 *)0x70457f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x194));
          puStack_354 = (undefined4 *)(unaff_EBP + -0x194);
          uStack_35c = (double)CONCAT44(0x70458c,(undefined4 *)uStack_35c);
          iVar6 = FUN_00402e32();
          if (iVar6 < 0) {
            puStack_354 = (undefined4 *)0x704598;
            FUN_00878dfb();
          }
          puStack_354 = (undefined4 *)(unaff_EBP + -0x194);
          *(undefined1 *)(unaff_EBP + -4) = 0x48;
          uStack_35c = (double)CONCAT44(0x7045b2,(undefined4 *)uStack_35c);
          uStack_35c._4_4_ = FUN_00449749();
          uStack_35c._0_4_ = (undefined4 *)0x7045bb;
          puStack_360 = (undefined4 *)FUN_00449713();
          uStack_35c = (double)CONCAT44(uStack_35c._4_4_,extraout_ECX_10);
          *(undefined8 **)(unaff_EBP + -0x30) = &uStack_35c;
          iStack_364 = 0x7045c7;
          FUN_00448a17();
          puStack_360 = *(undefined4 **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x48;
          iStack_364 = iVar3 + 0x14 + iVar2;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x47;
          puStack_354 = (undefined4 *)0x7045ee;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x7045f9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          puStack_354 = (undefined4 *)0x704609;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_354 = (undefined4 *)0x704614;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x12;
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (*(int **)(unaff_EBP + -0x68) != (int *)0x0) {
            puStack_354 = (undefined4 *)0x704659;
            (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
          }
          *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x70) + 1;
          *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 8;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 3;
          iVar2 = *(int *)(unaff_EBP + -0x2c);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int **)(unaff_EBP + -0x68) != (int *)0x0) {
          puStack_354 = (undefined4 *)0x704695;
          (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
        }
      }
LAB_0070469d:
      if (*(int *)(iVar2 + 0x2c) != 0) {
        puStack_354 = (undefined4 *)0x7046b9;
        iVar3 = FUN_00455c59();
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar3 + 4);
        if (*(int *)(unaff_EBP + -0xa8) != 0) {
          puStack_354 = (undefined4 *)0x7046d5;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0xa8) = 0;
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 0x2c);
        puStack_354 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xa5);
        uStack_35c = (double)CONCAT44(0x7046f6,(undefined4 *)uStack_35c);
        uVar7 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
        puStack_354 = (undefined4 *)0x704704;
        (*pcVar8)();
        puStack_354 = &DAT_00980690;
        uStack_35c = (double)CONCAT44(unaff_EBP + -500,0x704711);
        puStack_354 = (undefined4 *)FUN_00402e32();
        if ((int)puStack_354 < 0) {
          uStack_35c = (double)CONCAT44(0x70471d,(undefined4 *)uStack_35c);
          FUN_00878dfb();
        }
        puStack_354 = (undefined4 *)(unaff_EBP + -0x1b4);
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        uStack_35c = (double)CONCAT44(0x70472a,(undefined4 *)uStack_35c);
        (*pcVar8)();
        uStack_35c = (double)CONCAT44(&DAT_00980690,unaff_EBP + -0x1b4);
        puStack_360 = (undefined4 *)0x704737;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          uStack_35c = (double)CONCAT44(iVar3,0x704743);
          FUN_00878dfb();
        }
        uStack_35c = (double)CONCAT44(unaff_EBP + -500,unaff_EBP + -0x1b4);
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        puStack_360 = (undefined4 *)0x704763;
        puStack_360 = (undefined4 *)FUN_00449749();
        *(int **)(unaff_EBP + -0x30) = &iStack_364;
        FUN_00679e4e(&iStack_364,0xaa1);
        uVar7 = *(undefined4 *)(unaff_EBP + 8);
        uVar9 = 10;
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        FUN_004115d9(10,uVar7);
        FUN_00448e3a(uVar9,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        uStack_35c = (double)CONCAT44(unaff_EBP + -0x1b4,0x7047a4);
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_35c = (double)CONCAT44(iVar3,0x7047af);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uStack_35c = (double)CONCAT44(unaff_EBP + -500,0x7047bf);
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_35c = (double)CONCAT44(iVar3,0x7047ca);
          FUN_00878dfb();
        }
        uStack_35c._4_4_ = unaff_EBP + -0x164;
        uStack_35c._0_4_ = (undefined4 *)0x7047d3;
        (*pcVar8)();
        puStack_360 = (undefined4 *)(unaff_EBP + -0x164);
        uStack_35c._0_4_ = &DAT_00980690;
        iStack_364 = 0x7047e0;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_360 = (undefined4 *)0x7047ec;
          uStack_35c._0_4_ = (undefined4 *)iVar3;
          FUN_00878dfb();
          uStack_35c._0_4_ = extraout_ECX_11;
        }
        *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_360;
        iStack_364 = 0xaa1;
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        puStack_360 = (undefined4 *)uStack_35c;
        uStack_35c._0_4_ = (undefined4 *)(unaff_EBP + -0x164);
        FUN_00679e4e(&puStack_360);
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        iStack_364 = 0x70481c;
        FUN_0044974c();
        iStack_364 = 0x704823;
        iVar3 = FUN_00448ebb();
        *(int *)(unaff_EBP + -0x34) = iVar3 + 0x14;
        uStack_35c._0_4_ = (undefined4 *)(unaff_EBP + -0x164);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_360 = (undefined4 *)0x704839;
        uStack_35c._0_4_ = (undefined4 *)FUN_00402bc3();
        if ((int)(undefined4 *)uStack_35c < 0) {
          puStack_360 = (undefined4 *)0x704844;
          FUN_00878dfb();
        }
        uStack_35c = (double)CONCAT44(uStack_35c._4_4_,unaff_EBP + -0xe4);
        puStack_360 = (undefined4 *)0x70484d;
        (*pcVar8)();
        iStack_364 = unaff_EBP + -0xe4;
        puStack_360 = &DAT_00980690;
        puStack_360 = (undefined4 *)FUN_00402e32();
        if ((int)puStack_360 < 0) {
          iStack_364 = 0x704866;
          FUN_00878dfb();
        }
        puStack_360 = (undefined4 *)(unaff_EBP + -0x184);
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        iStack_364 = 0x704873;
        (*pcVar8)();
        puStack_354 = (undefined4 *)(unaff_EBP + -0x184);
        uStack_35c = (double)CONCAT44(0x704880,(undefined4 *)uStack_35c);
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          puStack_354 = (undefined4 *)0x70488c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x50;
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x1c);
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          *(undefined4 *)(unaff_EBP + -0x2c) = 1;
        }
        FUN_0087a1b0();
        uStack_35c = (double)*(int *)(unaff_EBP + -0x14) / (double)*(int *)(unaff_EBP + -0x2c);
        puStack_354 = (undefined4 *)(unaff_EBP + -0x184);
        puStack_360 = (undefined4 *)(unaff_EBP + -0x84);
        iStack_364 = 0x7048d3;
        FUN_00704c7b();
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        uStack_35c = (double)CONCAT44(0x7048de,(undefined4 *)uStack_35c);
        uVar7 = FUN_00449749();
        uStack_35c = (double)CONCAT44(uVar7,&uStack_34c);
        puStack_360 = *(undefined4 **)(unaff_EBP + -0x1c);
        iStack_364 = 0x7048e8;
        puStack_360 = (undefined4 *)FUN_0048b981();
        *(undefined8 **)(unaff_EBP + -0x30) = &uStack_35c;
        iStack_364 = 0x7048f4;
        FUN_00448a17();
        puStack_360 = *(undefined4 **)(unaff_EBP + 8);
        iStack_364 = *(int *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x50;
        if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
          puStack_354 = (undefined4 *)0x704921;
          (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        puStack_354 = (undefined4 *)0x704931;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_354 = (undefined4 *)0x70493c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_354 = (undefined4 *)0x70494c;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_354 = (undefined4 *)0x704957;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x12;
      }
      puStack_354 = (undefined4 *)0xaa;
      puStack_360 = (undefined4 *)
                    (*(int *)(unaff_EBP + -0x20) * 0x10 +
                    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x628));
      uStack_35c = (double)CONCAT44(*(int *)(unaff_EBP + -0x40) + 0x12,10);
      iStack_364 = 0x704982;
      (*DAT_0097b504)();
      if (*(int *)(unaff_EBP + -0x3c) == 0) {
        *(uint *)(unaff_EBP + -0x14) = (uint)*(ushort *)(unaff_EBP + -0x44);
        iStack_364 = 0;
        iVar3 = FUN_006defab(unaff_EBP + -0x14);
        if (iVar3 == 0) goto LAB_00704a68;
        iStack_364 = unaff_EBP + -0x104;
        (*pcVar8)();
        iVar3 = FUN_00402e32(unaff_EBP + -0x104,&DAT_00980690);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        (*pcVar8)(unaff_EBP + -0xf4);
        puStack_32c = (undefined1 *)(unaff_EBP + -0xf4);
        piStack_328 = &DAT_00980690;
        iStack_330 = 0x7049e8;
        piStack_328 = (int *)FUN_00402e32();
        if ((int)piStack_328 < 0) {
          puStack_32c = (undefined1 *)0x7049f4;
          FUN_00878dfb();
        }
        piStack_328 = (int *)(unaff_EBP + -0x104);
        puStack_32c = (undefined1 *)(unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        iStack_330 = 0x704a11;
        iStack_330 = FUN_00449749();
        uStack_334 = 0x704a1a;
        iStack_338 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x30) = &uStack_334;
        puStack_33c = (undefined4 *)0x704a26;
        uStack_334 = extraout_ECX_12;
        FUN_00448a17();
        iStack_338 = *(undefined4 *)(unaff_EBP + -0x40);
        puStack_33c = (undefined4 *)0xa;
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        iStack_340 = 0x704a37;
        FUN_004115d9();
        iStack_340 = 0x704a3e;
        FUN_00448e3a();
        piStack_328 = (int *)(unaff_EBP + -0xf4);
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        puStack_32c = (undefined1 *)0x704a4e;
        piStack_328 = (int *)FUN_00402bc3();
        if ((int)piStack_328 < 0) {
          puStack_32c = (undefined1 *)0x704a59;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_328 = (int *)(unaff_EBP + -0x104);
      }
      else {
LAB_00704a68:
        iStack_364 = unaff_EBP + -0x80;
        (*pcVar8)();
        iVar3 = FUN_00402e32(unaff_EBP + -0x80,&DAT_00980690);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        (*pcVar8)(unaff_EBP + -0xd4);
        puStack_32c = (undefined1 *)(unaff_EBP + -0xd4);
        piStack_328 = &DAT_00980690;
        iStack_330 = 0x704a9e;
        piStack_328 = (int *)FUN_00402e32();
        if ((int)piStack_328 < 0) {
          puStack_32c = (undefined1 *)0x704aaa;
          FUN_00878dfb();
        }
        piStack_328 = (int *)(unaff_EBP + -0x80);
        puStack_32c = (undefined1 *)(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        iStack_330 = 0x704ac4;
        iStack_330 = FUN_00449749();
        uStack_334 = 0x704acd;
        iStack_338 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x30) = &uStack_334;
        puStack_33c = (undefined4 *)0x704ad9;
        uStack_334 = extraout_ECX_13;
        FUN_00448a17();
        iStack_338 = *(undefined4 *)(unaff_EBP + -0x40);
        puStack_33c = (undefined4 *)0xa;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        iStack_340 = 0x704aea;
        FUN_004115d9();
        iStack_340 = 0x704af1;
        FUN_00448e3a();
        piStack_328 = (int *)(unaff_EBP + -0xd4);
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        puStack_32c = (undefined1 *)0x704b01;
        piStack_328 = (int *)FUN_00402bc3();
        if ((int)piStack_328 < 0) {
          puStack_32c = (undefined1 *)0x704b0c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        piStack_328 = (int *)(unaff_EBP + -0x80);
      }
      puStack_32c = (undefined1 *)0x704b19;
      piStack_328 = (int *)FUN_00402bc3();
      if ((int)piStack_328 < 0) {
        puStack_32c = (undefined1 *)0x704b24;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x12;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_328 = (int *)0x704b34;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      iVar3 = *(int *)(unaff_EBP + -0x10);
      uVar4 = *(uint *)(unaff_EBP + -0x20);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_328 = (int *)0x704b4e;
    FUN_00414ebb();
    piStack_328 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_328 != (int *)0x0) {
      puStack_32c = (undefined1 *)0x704b5f;
      (**(code **)(*piStack_328 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


