/* ptr_006a204e - 0x006a204e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a204e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 uVar5;
  int iStack_f4;
  int iStack_f0;
  undefined **ppuStack_ec;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x2c) = &param_2;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_4 = 0x6a2086;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x24) = piVar1;
  *(int **)(unaff_EBP + -0x18) = unaff_ESI;
  if (piVar1 != unaff_ESI) {
    param_6 = unaff_EBP + -0x24;
    param_5 = 0x6a209c;
    param_6 = FUN_0041a581();
    if ((param_6 < (int)unaff_ESI) && (param_6 != -0x7fffbffe)) {
      param_5 = 0x6a20ad;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar1 == unaff_ESI) {
    param_6 = 0x80004003;
    param_5 = 0x6a20c8;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  param_2 = *(undefined4 *)(unaff_EBP + -0x28);
  param_3 = *(undefined4 *)(unaff_EBP + -0x5c);
  param_4 = *(undefined4 *)(unaff_EBP + -0x58);
  param_5 = *(undefined4 *)(unaff_EBP + -0x54);
  *(int **)(unaff_EBP + -0x2c) = piVar1;
  param_6 = *(undefined4 *)(unaff_EBP + -0x50);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_c = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_14 = 0x6a20fc;
    iStack_10 = iVar2;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_c = 0x6a2111;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c = 0x6a211e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_c = 0x6a212b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c = 0x6a2136;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_c = 0x6a2143;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c = 0x6a214e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_c = 0x6a215b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c = 0x6a2166;
    FUN_00878dfb();
  }
  iStack_c = unaff_EBP + -0x2c;
  iStack_10 = 0x6a2179;
  piVar1 = (int *)FUN_00679e4e();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    iStack_c = 0;
  }
  else {
    iStack_c = FUN_00409205();
  }
  iStack_10 = unaff_EBP + 8;
  uStack_14 = 0x6a21ae;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  iStack_c = 0xff;
  iStack_10 = 0x6a21cc;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_c = 0x6a21d9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c = 0x6a21e6;
  FUN_00403191();
  iStack_c = 0;
  iStack_10 = 0xffffffff;
  uStack_14 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_18 = 0;
  uStack_1c = 0;
  iStack_20 = 0x6a21f9;
  (*DAT_0097b4c8)();
  iStack_20 = 0x6a2206;
  FUN_0087a1b0();
  iStack_20 = 0;
  uStack_24 = 0;
  iStack_28 = unaff_EBP + -0x4c;
  iStack_2c = unaff_EBP + -0x5c;
  uStack_30 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_30;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_28 = 0x6a2256;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_20 = unaff_EBP + -0x2c;
    uStack_24 = 0x6a226c;
    iStack_20 = FUN_0041a581();
    if ((iStack_20 < 0) && (iStack_20 != -0x7fffbffe)) {
      uStack_24 = 0x6a227d;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar1 == (int *)0x0) {
    iStack_20 = 0x80004003;
    uStack_24 = 0x6a2298;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  uStack_30 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_2c = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_28 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_24 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x24) = piVar1;
  iStack_20 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_4c = 0x6a22cf;
    iStack_48 = iVar2;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_44 = 0x6a22e4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x6a22f1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_44 = 0x6a22fe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x6a2309;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_44 = 0x6a2316;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x6a2321;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x6a232e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x6a2339;
    FUN_00878dfb();
  }
  iStack_44 = unaff_EBP + -0x2c;
  iStack_48 = 0x6a234c;
  piVar1 = (int *)FUN_00679e4e();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 != 0) {
    FUN_00409205();
  }
  iStack_44 = unaff_EBP + 8;
  iStack_48 = 0x6a2369;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  iStack_44 = 0xff;
  iStack_48 = 0x6a2386;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_44 = 0x6a2393;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_44 = 0x6a23a0;
  FUN_00403191();
  iStack_44 = 0;
  iStack_48 = 0xffffffff;
  uStack_4c = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_50 = 0;
  uStack_54 = 0;
  iStack_58 = 0x6a23b3;
  (*DAT_0097b4c8)();
  iStack_58 = 0x6a23c0;
  FUN_0087a1b0();
  iStack_58 = 0;
  uStack_5c = 0;
  iStack_60 = unaff_EBP + -0x4c;
  iStack_64 = unaff_EBP + -0x5c;
  uStack_68 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_68;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_60 = 0x6a2410;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_58 = unaff_EBP + -0x2c;
    uStack_5c = 0x6a2426;
    iStack_58 = FUN_0041a581();
    if ((iStack_58 < 0) && (iStack_58 != -0x7fffbffe)) {
      uStack_5c = 0x6a2437;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar1 == (int *)0x0) {
    iStack_58 = 0x80004003;
    uStack_5c = 0x6a2452;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_64 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_5c = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x24) = piVar1;
  iStack_58 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_7c = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_84 = 0x6a2489;
    iStack_80 = iVar2;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_7c = 0x6a249e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_7c = 0x6a24ab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_7c = 0x6a24b8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_7c = 0x6a24c3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_7c = 0x6a24d0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_7c = 0x6a24db;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_7c = 0x6a24e8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_7c = 0x6a24f3;
    FUN_00878dfb();
  }
  iStack_7c = unaff_EBP + -0x2c;
  iStack_80 = 0x6a2506;
  piVar1 = (int *)FUN_00679e4e();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar2 == 0) {
    iStack_7c = 0;
  }
  else {
    iStack_7c = FUN_00409205();
  }
  iStack_80 = unaff_EBP + 8;
  uStack_84 = 0x6a253d;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  iStack_7c = 0xff;
  iStack_80 = 0x6a255b;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_7c = 0x6a2568;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_7c = 0x6a2575;
  FUN_00403191();
  iStack_7c = 0;
  iStack_80 = 0xffffffff;
  uStack_84 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_88 = 0;
  uStack_8c = 0;
  iStack_90 = 0x6a2588;
  (*DAT_0097b4c8)();
  iStack_90 = 0x6a2595;
  FUN_0087a1b0();
  iStack_90 = 0;
  uStack_94 = 0;
  iStack_98 = unaff_EBP + -0x4c;
  iStack_9c = unaff_EBP + -0x5c;
  uStack_a0 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_a0;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_98 = 0x6a25e5;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_90 = unaff_EBP + -0x2c;
    uStack_94 = 0x6a25fb;
    iStack_90 = FUN_0041a581();
    if ((iStack_90 < 0) && (iStack_90 != -0x7fffbffe)) {
      uStack_94 = 0x6a260c;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (piVar1 == (int *)0x0) {
    iStack_90 = 0x80004003;
    uStack_94 = 0x6a2627;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x24) = piVar1;
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_b4 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_bc = 0x6a265e;
    iStack_b8 = iVar2;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_b4 = 0x6a2673;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x6a2680;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_b4 = 0x6a268d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x6a2698;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_b4 = 0x6a26a5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x6a26b0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_b4 = 0x6a26bd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b4 = 0x6a26c8;
    FUN_00878dfb();
  }
  iStack_b4 = unaff_EBP + -0x2c;
  iStack_b8 = 0x6a26db;
  piVar1 = (int *)FUN_00679e4e();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar2 == 0) {
    iStack_b4 = 0;
  }
  else {
    iStack_b4 = FUN_00409205();
  }
  iStack_b8 = unaff_EBP + 8;
  uStack_bc = 0x6a2712;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402fa6();
  iStack_b4 = 0xff;
  iStack_b8 = 0x6a2730;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_b4 = 0x6a273d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_b4 = 0x6a274a;
  FUN_00403191();
  iStack_b4 = 0;
  iStack_b8 = 0xffffffff;
  uStack_bc = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_c0 = 0;
  uStack_c4 = 0;
  iStack_c8 = 0x6a275d;
  (*DAT_0097b4c8)();
  iStack_c8 = 0x6a276a;
  FUN_0087a1b0();
  iStack_c8 = 0;
  uStack_cc = 0;
  iStack_d0 = unaff_EBP + -0x4c;
  iStack_d4 = unaff_EBP + -0x5c;
  uStack_d8 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_d8;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_d0 = 0x6a27ba;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_c8 = unaff_EBP + -0x2c;
    uStack_cc = 0x6a27d0;
    iStack_c8 = FUN_0041a581();
    if ((iStack_c8 < 0) && (iStack_c8 != -0x7fffbffe)) {
      uStack_cc = 0x6a27e1;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar1 == (int *)0x0) {
    iStack_c8 = 0x80004003;
    uStack_cc = 0x6a27fc;
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_d0 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_cc = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x24) = piVar1;
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    ppuStack_ec = *(undefined ***)(unaff_EBP + -0x24);
    iStack_f4 = 0x6a2833;
    iStack_f0 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    ppuStack_ec = (undefined **)0x6a2846;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  ppuStack_ec = (undefined **)0x6a2853;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a285e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  ppuStack_ec = (undefined **)0x6a286b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a2876;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  ppuStack_ec = (undefined **)0x6a2883;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a288e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  ppuStack_ec = (undefined **)0x6a289b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a28a6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_f0 = unaff_EBP + -0x20;
  ppuStack_ec = (undefined **)&DAT_0096a698;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_f4 = 0x6a28c7;
  FUN_00434e21();
  iStack_f0 = unaff_EBP + -0x1c;
  ppuStack_ec = &PTR_LAB_0096a694;
  iStack_f4 = 0x6a28de;
  FUN_00434e21();
  ppuStack_ec = (undefined **)0x6a28ed;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  ppuStack_ec = (undefined **)(unaff_EBP + -0x4c);
  iStack_f0 = 0x6a28f7;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a2903;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  ppuStack_ec = (undefined **)0x6a290d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  ppuStack_ec = (undefined **)(unaff_EBP + -0x3c);
  iStack_f0 = 0x6a2917;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a2923;
    FUN_00878dfb();
  }
  ppuStack_ec = (undefined **)(unaff_EBP + -0x3c);
  iStack_f4 = unaff_EBP + -0x2c;
  iStack_f0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_f0 = 0x6a2946;
  iStack_f0 = FUN_00449749();
  iStack_f4 = 0x6a294f;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_f4;
  FUN_00448a17(uVar3);
  uVar5 = 0x2f;
  uVar3 = 0xed;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0xed,0x2f);
  FUN_00448e3a(uVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    ppuStack_ec = (undefined **)0x6a2986;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  ppuStack_ec = (undefined **)0x6a2993;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a299e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  ppuStack_ec = (undefined **)0x6a29ab;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a29b6;
    FUN_00878dfb();
  }
  ppuStack_ec = (undefined **)0x6a29bc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  ppuStack_ec = (undefined **)(unaff_EBP + -0x3c);
  iStack_f0 = 0x6a29c6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a29d2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  ppuStack_ec = (undefined **)0x6a29dc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  ppuStack_ec = (undefined **)(unaff_EBP + -0x4c);
  iStack_f0 = 0x6a29e6;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a29f2;
    FUN_00878dfb();
  }
  ppuStack_ec = (undefined **)(unaff_EBP + -0x4c);
  iStack_f4 = unaff_EBP + -0x2c;
  iStack_f0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_f0 = 0x6a2a15;
  iStack_f0 = FUN_00449749();
  iStack_f4 = 0x6a2a1e;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_f4;
  iStack_f4 = extraout_ECX;
  FUN_00448a17(uVar3);
  uVar5 = 0x180;
  uVar3 = 99;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_004115d9(99,0x180);
  FUN_00448e3a(uVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    ppuStack_ec = (undefined **)0x6a2a55;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  ppuStack_ec = (undefined **)0x6a2a62;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a2a6d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  ppuStack_ec = (undefined **)0x6a2a7a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    ppuStack_ec = (undefined **)0x6a2a85;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa0) != 0) {
    ppuStack_ec = (undefined **)0xff;
    iStack_f0 = 0x6a2aa3;
    FUN_004031b7();
    iVar2 = *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar2 + 0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    *(int *)(unaff_EBP + -0x2c) = iVar4;
    if (iVar4 == 0) {
      ppuStack_ec = (undefined **)0x6a2ac2;
      FUN_00878dfb();
    }
    if (*(int *)(iVar2 + 0xa0) == 0) {
      ppuStack_ec = (undefined **)0x6a2ad2;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      ppuStack_ec = (undefined **)0x6a2ae4;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x18) = piVar1;
    iVar2 = FUN_0040eed0();
    iVar4 = FUN_0040eea9();
    iStack_f4 = *(int *)(unaff_EBP + -0x5c);
    iStack_f0 = *(int *)(unaff_EBP + -0x58);
    ppuStack_ec = *(undefined ***)(unaff_EBP + -0x54);
    iVar2 = (**(code **)(*piVar1 + 0x80))
                      (*(undefined4 *)(unaff_EBP + -0x18),0x9c - iVar4,0x11f - iVar2,
                       *(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar2 < 0) {
      ppuStack_ec = *(undefined ***)(unaff_EBP + -0x18);
      iStack_f4 = 0x6a2b34;
      iStack_f0 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    ppuStack_ec = (undefined **)0x6a2b41;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      ppuStack_ec = (undefined **)0x6a2b4c;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    ppuStack_ec = (undefined **)0x6a2b81;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


