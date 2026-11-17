/* FUN_006a1f4c - 0x006a1f4c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a1f4c(void)

{
  DWORD DVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar6;
  int iStack_194;
  int iStack_190;
  undefined **ppuStack_18c;
  undefined4 uStack_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 *puStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 *puStack_118;
  int *piStack_114;
  undefined4 uStack_110;
  undefined1 *puStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined4 *puStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 *puStack_70;
  
  FUN_00879bb8();
  puStack_70 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_74 = 0x6a1f69;
  FUN_0081622a();
  puStack_70 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_74 = 0x6a1f74;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_70 = (undefined4 *)0x6a1f7f;
  DVar1 = timeGetTime();
  if (-1 < (int)(DVar1 - *(int *)(extraout_ECX + 0xac))) {
    *(undefined4 *)(extraout_ECX + 0xb0) = 0;
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  puStack_70 = (undefined4 *)0xf10;
  iStack_74 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_78 = 0x6a1fa7;
  piVar2 = (int *)FUN_00679e4e();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    iStack_74 = 0;
  }
  else {
    puStack_70 = (undefined4 *)0x6a1fb6;
    iStack_74 = FUN_00409205();
  }
  puStack_70 = (undefined4 *)(*(int *)(extraout_ECX + 0xb0) / 600);
  iStack_78 = unaff_EBP + 8;
  uStack_7c = 0x6a1fd9;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_70 = (undefined4 *)0x6a1fe8;
  FUN_00402fa6();
  puStack_70 = (undefined4 *)0x3;
  iStack_74 = 0xff;
  iStack_78 = 0x6a1ff7;
  FUN_004031b7();
  puStack_70 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_74 = 0x6a2009;
  FUN_00403191();
  puStack_70 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_74 = 0x6a2016;
  FUN_00403191();
  puStack_70 = (undefined4 *)0x0;
  iStack_74 = 0;
  iStack_78 = 0xffffffff;
  uStack_7c = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_80 = 0;
  uStack_84 = 0;
  iStack_88 = 0x6a2029;
  (*DAT_0097b4c8)();
  iStack_88 = 0x6a2036;
  FUN_0087a1b0();
  iStack_88 = 0;
  uStack_8c = 0;
  iStack_90 = unaff_EBP + -0x3c;
  iStack_94 = unaff_EBP + -0x4c;
  uStack_98 = 0xffffffff;
  uStack_a0 = 0x6a204d;
  puStack_9c = (undefined1 *)&uStack_84;
  uStack_a0 = FUN_00449713();
  piStack_a4 = (int *)0x6a2053;
  puStack_9c = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_98;
  uStack_a0 = 0x6a2060;
  FUN_004033a1();
  puStack_9c = (undefined1 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_a0 = 0x6a206d;
  FUN_00405a1d();
  uStack_a0 = 0x6a2074;
  FUN_00402660();
  uStack_a0 = 0x6a207b;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_90 = 0x6a2086;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_88 = unaff_EBP + -0x24;
    uStack_8c = 0x6a209c;
    iStack_88 = FUN_0041a581();
    if ((iStack_88 < 0) && (iStack_88 != -0x7fffbffe)) {
      uStack_8c = 0x6a20ad;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 == (int *)0x0) {
    iStack_88 = 0x80004003;
    uStack_8c = 0x6a20c8;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar2;
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x5c);
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
  puStack_9c = (undefined1 *)0x21;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_a0 = 0x6f;
  *(int **)(unaff_EBP + -0x2c) = piVar2;
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_a8 = (undefined4 *)0x6a20ea;
  piStack_a4 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_a8 = (undefined4 *)&DAT_00963cc8;
    iStack_ac = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_b4 = 0x6a20fc;
    iStack_b0 = iVar3;
    FUN_00878e09();
  }
  puStack_a8 = (undefined4 *)0x6a2104;
  FUN_004125e6();
  puStack_a8 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_ac = 0x6a2111;
  puStack_a8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a8 < 0) {
    iStack_ac = 0x6a211e;
    FUN_00878dfb();
  }
  puStack_a8 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_ac = 0x6a212b;
  puStack_a8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a8 < 0) {
    iStack_ac = 0x6a2136;
    FUN_00878dfb();
  }
  puStack_a8 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_ac = 0x6a2143;
  puStack_a8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a8 < 0) {
    iStack_ac = 0x6a214e;
    FUN_00878dfb();
  }
  puStack_a8 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_ac = 0x6a215b;
  puStack_a8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a8 < 0) {
    iStack_ac = 0x6a2166;
    FUN_00878dfb();
  }
  puStack_a8 = (undefined4 *)0xf10;
  iStack_ac = unaff_EBP + -0x2c;
  iStack_b0 = 0x6a2179;
  piVar2 = (int *)FUN_00679e4e();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    iStack_ac = 0;
  }
  else {
    puStack_a8 = (undefined4 *)0x6a2188;
    iStack_ac = FUN_00409205();
  }
  puStack_a8 = (undefined4 *)((*(int *)(*(int *)(unaff_EBP + -0x14) + 0xb0) / 0x3c) % 10);
  iStack_b0 = unaff_EBP + 8;
  uStack_b4 = 0x6a21ae;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_a8 = (undefined4 *)0x6a21bd;
  FUN_00402fa6();
  puStack_a8 = (undefined4 *)0x3;
  iStack_ac = 0xff;
  iStack_b0 = 0x6a21cc;
  FUN_004031b7();
  puStack_a8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_ac = 0x6a21d9;
  FUN_00403191();
  puStack_a8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_ac = 0x6a21e6;
  FUN_00403191();
  puStack_a8 = (undefined4 *)0x0;
  iStack_ac = 0;
  iStack_b0 = 0xffffffff;
  uStack_b4 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_b8 = 0;
  uStack_bc = 0;
  iStack_c0 = 0x6a21f9;
  (*DAT_0097b4c8)();
  iStack_c0 = 0x6a2206;
  FUN_0087a1b0();
  iStack_c0 = 0;
  uStack_c4 = 0;
  iStack_c8 = unaff_EBP + -0x4c;
  iStack_cc = unaff_EBP + -0x5c;
  uStack_d0 = 0xffffffff;
  uStack_d8 = 0x6a221d;
  puStack_d4 = (undefined1 *)&uStack_bc;
  uStack_d8 = FUN_00449713();
  piStack_dc = (int *)0x6a2223;
  puStack_d4 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_d0;
  uStack_d8 = 0x6a2230;
  FUN_004033a1();
  puStack_d4 = (undefined1 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_d8 = 0x6a223d;
  FUN_00405a1d();
  uStack_d8 = 0x6a2244;
  FUN_00402660();
  uStack_d8 = 0x6a224b;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_c8 = 0x6a2256;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_c0 = unaff_EBP + -0x2c;
    uStack_c4 = 0x6a226c;
    iStack_c0 = FUN_0041a581();
    if ((iStack_c0 < 0) && (iStack_c0 != -0x7fffbffe)) {
      uStack_c4 = 0x6a227d;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar2 == (int *)0x0) {
    iStack_c0 = 0x80004003;
    uStack_c4 = 0x6a2298;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar2;
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_cc = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_d4 = (undefined1 *)0x21;
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_d8 = 0x84;
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_e0 = (undefined4 *)0x6a22bd;
  piStack_dc = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_e0 = (undefined4 *)&DAT_00963cc8;
    iStack_e4 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_ec = 0x6a22cf;
    iStack_e8 = iVar3;
    FUN_00878e09();
  }
  puStack_e0 = (undefined4 *)0x6a22d7;
  FUN_004125e6();
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e4 = 0x6a22e4;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    iStack_e4 = 0x6a22f1;
    FUN_00878dfb();
  }
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_e4 = 0x6a22fe;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    iStack_e4 = 0x6a2309;
    FUN_00878dfb();
  }
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_e4 = 0x6a2316;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    iStack_e4 = 0x6a2321;
    FUN_00878dfb();
  }
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_e4 = 0x6a232e;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    iStack_e4 = 0x6a2339;
    FUN_00878dfb();
  }
  puStack_e0 = (undefined4 *)0xf11;
  iStack_e4 = unaff_EBP + -0x2c;
  iStack_e8 = 0x6a234c;
  piVar2 = (int *)FUN_00679e4e();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    puStack_e0 = (undefined4 *)0x0;
  }
  else {
    puStack_e0 = (undefined4 *)0x6a235b;
    puStack_e0 = (undefined4 *)FUN_00409205();
  }
  iStack_e4 = unaff_EBP + 8;
  iStack_e8 = 0x6a2369;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_e0 = (undefined4 *)0x6a2377;
  FUN_00402fa6();
  puStack_e0 = (undefined4 *)0x3;
  iStack_e4 = 0xff;
  iStack_e8 = 0x6a2386;
  FUN_004031b7();
  puStack_e0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_e4 = 0x6a2393;
  FUN_00403191();
  puStack_e0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e4 = 0x6a23a0;
  FUN_00403191();
  puStack_e0 = (undefined4 *)0x0;
  iStack_e4 = 0;
  iStack_e8 = 0xffffffff;
  uStack_ec = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_f0 = 0;
  uStack_f4 = 0;
  iStack_f8 = 0x6a23b3;
  (*DAT_0097b4c8)();
  iStack_f8 = 0x6a23c0;
  FUN_0087a1b0();
  iStack_f8 = 0;
  uStack_fc = 0;
  iStack_100 = unaff_EBP + -0x4c;
  iStack_104 = unaff_EBP + -0x5c;
  uStack_108 = 0xffffffff;
  uStack_110 = 0x6a23d7;
  puStack_10c = (undefined1 *)&uStack_f4;
  uStack_110 = FUN_00449713();
  piStack_114 = (int *)0x6a23dd;
  puStack_10c = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_108;
  uStack_110 = 0x6a23ea;
  FUN_004033a1();
  puStack_10c = (undefined1 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_110 = 0x6a23f7;
  FUN_00405a1d();
  uStack_110 = 0x6a23fe;
  FUN_00402660();
  uStack_110 = 0x6a2405;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_100 = 0x6a2410;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_f8 = unaff_EBP + -0x2c;
    uStack_fc = 0x6a2426;
    iStack_f8 = FUN_0041a581();
    if ((iStack_f8 < 0) && (iStack_f8 != -0x7fffbffe)) {
      uStack_fc = 0x6a2437;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar2 == (int *)0x0) {
    iStack_f8 = 0x80004003;
    uStack_fc = 0x6a2452;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar2;
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_104 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_100 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_10c = (undefined1 *)0x21;
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_110 = 0x9b;
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_118 = (undefined4 *)0x6a2477;
  piStack_114 = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_118 = (undefined4 *)&DAT_00963cc8;
    iStack_11c = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_124 = 0x6a2489;
    iStack_120 = iVar3;
    FUN_00878e09();
  }
  puStack_118 = (undefined4 *)0x6a2491;
  FUN_004125e6();
  puStack_118 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_11c = 0x6a249e;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    iStack_11c = 0x6a24ab;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_11c = 0x6a24b8;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    iStack_11c = 0x6a24c3;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_11c = 0x6a24d0;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    iStack_11c = 0x6a24db;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_11c = 0x6a24e8;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    iStack_11c = 0x6a24f3;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)0xf10;
  iStack_11c = unaff_EBP + -0x2c;
  iStack_120 = 0x6a2506;
  piVar2 = (int *)FUN_00679e4e();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar3 == 0) {
    iStack_11c = 0;
  }
  else {
    puStack_118 = (undefined4 *)0x6a2515;
    iStack_11c = FUN_00409205();
  }
  puStack_118 = (undefined4 *)((*(int *)(*(int *)(unaff_EBP + -0x14) + 0xb0) % 0x3c) / 10);
  iStack_120 = unaff_EBP + 8;
  uStack_124 = 0x6a253d;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_118 = (undefined4 *)0x6a254c;
  FUN_00402fa6();
  puStack_118 = (undefined4 *)0x3;
  iStack_11c = 0xff;
  iStack_120 = 0x6a255b;
  FUN_004031b7();
  puStack_118 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_11c = 0x6a2568;
  FUN_00403191();
  puStack_118 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_11c = 0x6a2575;
  FUN_00403191();
  puStack_118 = (undefined4 *)0x0;
  iStack_11c = 0;
  iStack_120 = 0xffffffff;
  uStack_124 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_128 = 0;
  uStack_12c = 0;
  iStack_130 = 0x6a2588;
  (*DAT_0097b4c8)();
  iStack_130 = 0x6a2595;
  FUN_0087a1b0();
  iStack_130 = 0;
  uStack_134 = 0;
  iStack_138 = unaff_EBP + -0x4c;
  iStack_13c = unaff_EBP + -0x5c;
  uStack_140 = 0xffffffff;
  uStack_148 = 0x6a25ac;
  puStack_144 = (undefined1 *)&uStack_12c;
  uStack_148 = FUN_00449713();
  piStack_14c = (int *)0x6a25b2;
  puStack_144 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_140;
  uStack_148 = 0x6a25bf;
  FUN_004033a1();
  puStack_144 = (undefined1 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_148 = 0x6a25cc;
  FUN_00405a1d();
  uStack_148 = 0x6a25d3;
  FUN_00402660();
  uStack_148 = 0x6a25da;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_138 = 0x6a25e5;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_130 = unaff_EBP + -0x2c;
    uStack_134 = 0x6a25fb;
    iStack_130 = FUN_0041a581();
    if ((iStack_130 < 0) && (iStack_130 != -0x7fffbffe)) {
      uStack_134 = 0x6a260c;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (piVar2 == (int *)0x0) {
    iStack_130 = 0x80004003;
    uStack_134 = 0x6a2627;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar2;
  uStack_140 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_13c = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_144 = (undefined1 *)0x21;
  uStack_134 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_148 = 0xa8;
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iStack_130 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_150 = (undefined4 *)0x6a264c;
  piStack_14c = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_150 = (undefined4 *)&DAT_00963cc8;
    iStack_154 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_15c = 0x6a265e;
    iStack_158 = iVar3;
    FUN_00878e09();
  }
  puStack_150 = (undefined4 *)0x6a2666;
  FUN_004125e6();
  puStack_150 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_154 = 0x6a2673;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    iStack_154 = 0x6a2680;
    FUN_00878dfb();
  }
  puStack_150 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_154 = 0x6a268d;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    iStack_154 = 0x6a2698;
    FUN_00878dfb();
  }
  puStack_150 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_154 = 0x6a26a5;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    iStack_154 = 0x6a26b0;
    FUN_00878dfb();
  }
  puStack_150 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_154 = 0x6a26bd;
  puStack_150 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    iStack_154 = 0x6a26c8;
    FUN_00878dfb();
  }
  puStack_150 = (undefined4 *)0xf10;
  iStack_154 = unaff_EBP + -0x2c;
  iStack_158 = 0x6a26db;
  piVar2 = (int *)FUN_00679e4e();
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar3 == 0) {
    iStack_154 = 0;
  }
  else {
    puStack_150 = (undefined4 *)0x6a26ea;
    iStack_154 = FUN_00409205();
  }
  puStack_150 = (undefined4 *)((*(int *)(*(int *)(unaff_EBP + -0x14) + 0xb0) % 0x3c) % 10);
  iStack_158 = unaff_EBP + 8;
  uStack_15c = 0x6a2712;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_150 = (undefined4 *)0x6a2721;
  FUN_00402fa6();
  puStack_150 = (undefined4 *)0x3;
  iStack_154 = 0xff;
  iStack_158 = 0x6a2730;
  FUN_004031b7();
  puStack_150 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_154 = 0x6a273d;
  FUN_00403191();
  puStack_150 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_154 = 0x6a274a;
  FUN_00403191();
  puStack_150 = (undefined4 *)0x0;
  iStack_154 = 0;
  iStack_158 = 0xffffffff;
  uStack_15c = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_160 = 0;
  uStack_164 = 0;
  iStack_168 = 0x6a275d;
  (*DAT_0097b4c8)();
  iStack_168 = 0x6a276a;
  FUN_0087a1b0();
  iStack_168 = 0;
  uStack_16c = 0;
  iStack_170 = unaff_EBP + -0x4c;
  iStack_174 = unaff_EBP + -0x5c;
  uStack_178 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_178;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_170 = 0x6a27ba;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_168 = unaff_EBP + -0x2c;
    uStack_16c = 0x6a27d0;
    iStack_168 = FUN_0041a581();
    if ((iStack_168 < 0) && (iStack_168 != -0x7fffbffe)) {
      uStack_16c = 0x6a27e1;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar2 == (int *)0x0) {
    iStack_168 = 0x80004003;
    uStack_16c = 0x6a27fc;
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar2;
  uStack_178 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_174 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_170 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_16c = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x24) = piVar2;
  iStack_168 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    ppuStack_18c = *(undefined ***)(unaff_EBP + -0x24);
    iStack_194 = 0x6a2833;
    iStack_190 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    ppuStack_18c = (undefined **)0x6a2846;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  ppuStack_18c = (undefined **)0x6a2853;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a285e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  ppuStack_18c = (undefined **)0x6a286b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a2876;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  ppuStack_18c = (undefined **)0x6a2883;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a288e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  ppuStack_18c = (undefined **)0x6a289b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a28a6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_190 = unaff_EBP + -0x20;
  ppuStack_18c = (undefined **)&DAT_0096a698;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_194 = 0x6a28c7;
  FUN_00434e21();
  iStack_190 = unaff_EBP + -0x1c;
  ppuStack_18c = &PTR_LAB_0096a694;
  iStack_194 = 0x6a28de;
  FUN_00434e21();
  ppuStack_18c = (undefined **)0x6a28ed;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  ppuStack_18c = (undefined **)(unaff_EBP + -0x4c);
  iStack_190 = 0x6a28f7;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a2903;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  ppuStack_18c = (undefined **)0x6a290d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  ppuStack_18c = (undefined **)(unaff_EBP + -0x3c);
  iStack_190 = 0x6a2917;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a2923;
    FUN_00878dfb();
  }
  ppuStack_18c = (undefined **)(unaff_EBP + -0x3c);
  iStack_194 = unaff_EBP + -0x2c;
  iStack_190 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_190 = 0x6a2946;
  iStack_190 = FUN_00449749();
  iStack_194 = 0x6a294f;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_194;
  FUN_00448a17(uVar4);
  uVar6 = 0x2f;
  uVar4 = 0xed;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0xed,0x2f);
  FUN_00448e3a(uVar4,uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    ppuStack_18c = (undefined **)0x6a2986;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  ppuStack_18c = (undefined **)0x6a2993;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a299e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  ppuStack_18c = (undefined **)0x6a29ab;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a29b6;
    FUN_00878dfb();
  }
  ppuStack_18c = (undefined **)0x6a29bc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  ppuStack_18c = (undefined **)(unaff_EBP + -0x3c);
  iStack_190 = 0x6a29c6;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a29d2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  ppuStack_18c = (undefined **)0x6a29dc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  ppuStack_18c = (undefined **)(unaff_EBP + -0x4c);
  iStack_190 = 0x6a29e6;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a29f2;
    FUN_00878dfb();
  }
  ppuStack_18c = (undefined **)(unaff_EBP + -0x4c);
  iStack_194 = unaff_EBP + -0x2c;
  iStack_190 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_190 = 0x6a2a15;
  iStack_190 = FUN_00449749();
  iStack_194 = 0x6a2a1e;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_194;
  iStack_194 = extraout_ECX_00;
  FUN_00448a17(uVar4);
  uVar6 = 0x180;
  uVar4 = 99;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_004115d9(99,0x180);
  FUN_00448e3a(uVar4,uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    ppuStack_18c = (undefined **)0x6a2a55;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  ppuStack_18c = (undefined **)0x6a2a62;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a2a6d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  ppuStack_18c = (undefined **)0x6a2a7a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    ppuStack_18c = (undefined **)0x6a2a85;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa0) != 0) {
    ppuStack_18c = (undefined **)0xff;
    iStack_190 = 0x6a2aa3;
    FUN_004031b7();
    iVar3 = *(int *)(unaff_EBP + -0x14);
    iVar5 = *(int *)(iVar3 + 0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    *(int *)(unaff_EBP + -0x2c) = iVar5;
    if (iVar5 == 0) {
      ppuStack_18c = (undefined **)0x6a2ac2;
      FUN_00878dfb();
    }
    if (*(int *)(iVar3 + 0xa0) == 0) {
      ppuStack_18c = (undefined **)0x6a2ad2;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      ppuStack_18c = (undefined **)0x6a2ae4;
      FUN_00878dfb();
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x18) = piVar2;
    iVar3 = FUN_0040eed0();
    iVar5 = FUN_0040eea9();
    iStack_194 = *(int *)(unaff_EBP + -0x5c);
    iStack_190 = *(int *)(unaff_EBP + -0x58);
    ppuStack_18c = *(undefined ***)(unaff_EBP + -0x54);
    iVar3 = (**(code **)(*piVar2 + 0x80))
                      (*(undefined4 *)(unaff_EBP + -0x18),0x9c - iVar5,0x11f - iVar3,
                       *(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar3 < 0) {
      ppuStack_18c = *(undefined ***)(unaff_EBP + -0x18);
      iStack_194 = 0x6a2b34;
      iStack_190 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    ppuStack_18c = (undefined **)0x6a2b41;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      ppuStack_18c = (undefined **)0x6a2b4c;
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
    ppuStack_18c = (undefined **)0x6a2b81;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


