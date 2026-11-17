/* FUN_005fa472 - 0x005fa472 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fa472(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int unaff_EBP;
  bool bVar9;
  undefined4 uVar10;
  int iStack_370;
  undefined4 *puStack_36c;
  int *piStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  int iStack_354;
  int iStack_350;
  int iStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  int iStack_33c;
  int *piStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  int iStack_320;
  int iStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 *puStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  int iStack_2a8;
  undefined4 *puStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  int iStack_294;
  undefined4 uStack_290;
  undefined4 *puStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  int iStack_27c;
  int iStack_278;
  undefined4 *puStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined1 *puStack_264;
  int iStack_260;
  undefined4 *puStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  int iStack_24c;
  int iStack_248;
  undefined4 *puStack_244;
  int *piStack_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int iStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 *puStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 *puStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 *puStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 *puStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 *puStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 *puStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 uStack_180;
  undefined4 *puStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  undefined4 *puStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  int iStack_150;
  undefined4 *puStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  undefined4 *puStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined *puStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined *puStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined *puStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  
  FUN_00879bb8();
  iStack_b4 = *(undefined4 *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  uStack_b8 = 0x5fa492;
  FUN_005c11da();
  iStack_b4 = unaff_EBP + 8;
  uStack_b8 = 0x5fa49d;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_b4 = 3;
  uStack_b8 = 0xff;
  uStack_bc = 0x5fa4b1;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x1c8);
  piStack_d0 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_d0 == (int *)0x0) {
    iStack_b4 = 0x80004003;
    uStack_b8 = 0x5fa4cf;
    FUN_00878dfb();
    piStack_d0 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piStack_d0;
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_c8 = 0x95;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_cc = 0x194;
  *(int **)(unaff_EBP + -0x1c) = piStack_d0;
  iStack_b4 = *(undefined4 *)(unaff_EBP + -0x20);
  puStack_d4 = (undefined *)0x5fa4f7;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_d4 = &DAT_00963cc8;
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_e0 = 0x5fa509;
    iStack_dc = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_d4 = (undefined *)(unaff_EBP + -0x2c);
  uStack_d8 = 0x5fa516;
  puStack_d4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x5fa521;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined *)0x3;
  uStack_d8 = 0xff;
  iStack_dc = 0x5fa52c;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1c8);
  piStack_f0 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_f0 == (int *)0x0) {
    puStack_d4 = (undefined *)0x80004003;
    uStack_d8 = 0x5fa54d;
    FUN_00878dfb();
    piStack_f0 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piStack_f0;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_dc = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_e8 = 0x95;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_ec = 0x1ea;
  *(int **)(unaff_EBP + -0x1c) = piStack_f0;
  puStack_d4 = *(undefined **)(unaff_EBP + -0x20);
  puStack_f4 = (undefined *)0x5fa575;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_f4 = &DAT_00963cc8;
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_100 = 0x5fa587;
    iStack_fc = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_f4 = (undefined *)(unaff_EBP + -0x2c);
  uStack_f8 = 0x5fa594;
  puStack_f4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    uStack_f8 = 0x5fa59f;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined *)0x3;
  uStack_f8 = 0xff;
  iStack_fc = 0x5fa5aa;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1cc);
  piStack_110 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_110 == (int *)0x0) {
    puStack_f4 = (undefined *)0x80004003;
    uStack_f8 = 0x5fa5cb;
    FUN_00878dfb();
    piStack_110 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piStack_110;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_108 = 0xa7;
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_10c = 0x194;
  *(int **)(unaff_EBP + -0x1c) = piStack_110;
  puStack_f4 = *(undefined **)(unaff_EBP + -0x20);
  puStack_114 = (undefined *)0x5fa5f3;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_114 = &DAT_00963cc8;
    uStack_118 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_120 = 0x5fa605;
    iStack_11c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_114 = (undefined *)(unaff_EBP + -0x2c);
  uStack_118 = 0x5fa612;
  puStack_114 = (undefined *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    uStack_118 = 0x5fa61d;
    FUN_00878dfb();
  }
  puStack_114 = (undefined *)0x3;
  uStack_118 = 0xff;
  iStack_11c = 0x5fa628;
  FUN_004031b7();
  uStack_124 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x1d4);
  piStack_130 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piStack_130 == (int *)0x0) {
    puStack_114 = (undefined *)0x80004003;
    uStack_118 = 0x5fa646;
    FUN_00878dfb();
    piStack_130 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piStack_130;
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_128 = 0x3f;
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_12c = 0x1cc;
  *(int **)(unaff_EBP + -0x10) = piStack_130;
  puStack_114 = *(undefined **)(unaff_EBP + -0x20);
  puStack_134 = (undefined4 *)0x5fa669;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_134 = (undefined4 *)&DAT_00963cc8;
    iStack_138 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_140 = 0x5fa67b;
    iStack_13c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_134 = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_138 = 0x5fa688;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    iStack_138 = 0x5fa693;
    FUN_00878dfb();
  }
  puStack_134 = &DAT_00980690;
  iStack_138 = 0x5fa6a1;
  FUN_00403191();
  puStack_134 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_138 = 0x5fa6ae;
  FUN_00403191();
  puStack_134 = (undefined4 *)(unaff_EBP + -0x68);
  iStack_138 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_13c = 0x5fa6c8;
  iStack_13c = FUN_00449749();
  uStack_140 = 0x5fa6d4;
  uStack_144 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_140;
  uStack_148 = 0x5fa6e0;
  FUN_00448a17();
  uStack_144 = 0x16;
  uStack_148 = 0x1fb;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_14c = (undefined4 *)0x5fa6f3;
  FUN_004115d9();
  puStack_14c = (undefined4 *)0x5fa6fa;
  FUN_00448e3a();
  puStack_134 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_138 = 0x5fa707;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    iStack_138 = 0x5fa714;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_134 = (undefined4 *)(unaff_EBP + -0x68);
  iStack_138 = 0x5fa721;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    iStack_138 = 0x5fa72c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  puStack_134 = (undefined4 *)0x0;
  iStack_138 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_13c = 0x5fa742;
  puStack_134 = (undefined4 *)FUN_005b1a45();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_138 = 0x5fa74f;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_134 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_138 = 0x5fa763;
    FUN_00434e38();
  }
  puStack_134 = &DAT_00980690;
  iStack_138 = 0x5fa76d;
  FUN_00403191();
  puStack_134 = (undefined4 *)0x0;
  iStack_138 = 0;
  iStack_13c = 0xffffffff;
  uStack_140 = *(undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_144 = 0;
  uStack_148 = 0;
  puStack_14c = (undefined4 *)0x5fa782;
  (*DAT_0097b4c8)();
  puStack_14c = (undefined4 *)0x5fa78f;
  FUN_0087a1b0();
  puStack_14c = (undefined4 *)(unaff_EBP + -0x2c);
  iStack_150 = -1;
  uStack_158 = 0x5fa79f;
  puStack_154 = (undefined1 *)&uStack_148;
  uStack_158 = FUN_00449713();
  uStack_15c = 0x5fa7a5;
  puStack_154 = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x18) = &iStack_150;
  uStack_158 = 0x5fa7b2;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_154 = (undefined1 *)0x5fa7c4;
  FUN_0044974c();
  puStack_154 = (undefined1 *)0x5fa7cb;
  iVar3 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x30) = iVar3 + 5;
  puStack_14c = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_150 = 0x5fa7de;
  iVar3 = FUN_00402bc3();
  puVar4 = puStack_14c;
  if (iVar3 < 0) {
    iStack_150 = 0x5fa7e9;
    puStack_14c = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar4 = (undefined4 *)extraout_ECX_00;
  }
  if (0x49 < *(int *)(unaff_EBP + -0x30)) {
    puStack_14c = (undefined4 *)0x49;
    puStack_154 = (undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0x20c);
    *(int **)(unaff_EBP + -0x18) = &iStack_150;
    uStack_158 = 0x5fa809;
    iStack_150 = (int)puVar4;
    FUN_0046fcc9();
    puStack_154 = (undefined1 *)(unaff_EBP + -0x58);
    uStack_158 = 0x5fa812;
    FUN_007d3a22();
    puStack_14c = &DAT_00980690;
    iStack_150 = 0x5fa81e;
    FUN_00403191();
    puStack_14c = (undefined4 *)0x0;
    iStack_150 = 0;
    puStack_154 = (undefined1 *)0xffffffff;
    uStack_158 = *(undefined4 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_15c = 0;
    uStack_160 = 0;
    puStack_164 = (undefined4 *)0x5fa830;
    (*DAT_0097b4c8)();
    puStack_14c = (undefined4 *)0x5fa83d;
    FUN_0087a1b0();
    puStack_14c = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_150 = -1;
    uStack_158 = 0x5fa84d;
    puStack_154 = (undefined1 *)&uStack_148;
    uStack_158 = FUN_00449713();
    uStack_15c = 0x5fa853;
    puStack_154 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x18) = &iStack_150;
    uStack_158 = 0x5fa860;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_154 = (undefined1 *)0x5fa872;
    FUN_0044974c();
    puStack_154 = (undefined1 *)0x5fa879;
    iVar3 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x30) = iVar3 + 5;
    puStack_14c = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_150 = 0x5fa88c;
    puStack_14c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_14c < 0) {
      iStack_150 = 0x5fa897;
      FUN_00878dfb();
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x20c) == 0) {
    puStack_14c = (undefined4 *)0x80004003;
    iStack_150 = 0x5fa8ad;
    FUN_00878dfb();
  }
  puStack_14c = (undefined4 *)0x5fa8c0;
  FUN_004a2734();
  puStack_14c = &DAT_00980690;
  iStack_150 = 0x5fa8c9;
  FUN_00403191();
  puStack_14c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_150 = 0x5fa8d6;
  FUN_00403191();
  puStack_14c = (undefined4 *)0x0;
  iStack_150 = 0;
  puStack_154 = (undefined1 *)0xffffffff;
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_15c = 0;
  uStack_160 = 0;
  puStack_164 = (undefined4 *)0x5fa8e8;
  (*DAT_0097b4c8)();
  puStack_164 = (undefined4 *)0x5fa8f5;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_160;
  puStack_164 = (undefined4 *)(unaff_EBP + -0x68);
  iStack_168 = unaff_EBP + -0x2c;
  iStack_16c = 0x5fa90e;
  iStack_16c = FUN_00449749();
  uStack_170 = 0xffffffff;
  uStack_174 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_178 = 0x5fa91b;
  iStack_178 = FUN_00449713();
  puStack_17c = (undefined4 *)0x5fa921;
  uStack_174 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_170;
  iStack_178 = 0x5fa92e;
  FUN_004033a1();
  iStack_178 = 0x1bc - *(int *)(unaff_EBP + -0x30) / 2;
  uStack_174 = 0x98;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_17c = (undefined4 *)0x5fa94f;
  FUN_004115d9();
  puStack_17c = (undefined4 *)0x5fa956;
  FUN_00448e3a();
  puStack_164 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_168 = 0x5fa963;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    iStack_168 = 0x5fa96e;
    FUN_00878dfb();
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_168 = 0x5fa97b;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    iStack_168 = 0x5fa986;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  puStack_164 = (undefined4 *)0x0;
  iStack_168 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x13c) + 0x10);
  iStack_16c = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  uStack_170 = 0x5fa9ac;
  FUN_007d3546();
  uStack_170 = 0;
  uStack_174 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x13c) + 4);
  iStack_178 = unaff_EBP + -0x48;
  puStack_17c = (undefined4 *)0x5fa9c2;
  FUN_007d3546();
  puStack_17c = (undefined4 *)0x0;
  uStack_180 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x13c) + 0xc);
  iStack_184 = unaff_EBP + -0x50;
  uStack_188 = 0x5fa9d8;
  FUN_007d3546();
  uStack_188 = 0;
  uStack_18c = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x13c) + 8);
  iStack_190 = unaff_EBP + -0x44;
  puStack_194 = (undefined4 *)0x5fa9ee;
  FUN_007d3546();
  puStack_164 = &DAT_00980690;
  iStack_168 = 0x5fa9fa;
  FUN_00403191();
  puStack_164 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_168 = 0x5faa07;
  FUN_00403191();
  puStack_164 = (undefined4 *)0x0;
  iStack_168 = 0;
  iStack_16c = 0xffffffff;
  uStack_170 = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_174 = 0;
  iStack_178 = 0;
  puStack_17c = (undefined4 *)0x5faa19;
  (*DAT_0097b4c8)();
  puStack_17c = (undefined4 *)0x5faa26;
  FUN_0087a1b0();
  *(int **)(unaff_EBP + -0x10) = &iStack_178;
  puStack_17c = &DAT_00980690;
  uStack_180 = 0x5faa32;
  FUN_00403191();
  puStack_17c = (undefined4 *)0x0;
  uStack_180 = 0;
  iStack_184 = 0xffffffff;
  uStack_188 = *(undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_18c = 0;
  iStack_190 = 0;
  puStack_194 = (undefined4 *)0x5faa44;
  (*DAT_0097b4c8)();
  puStack_194 = (undefined4 *)0x5faa51;
  FUN_0087a1b0();
  puStack_194 = (undefined4 *)(unaff_EBP + -0x40);
  *(int **)(unaff_EBP + -0x1c) = &iStack_190;
  iStack_198 = unaff_EBP + -0x68;
  uStack_19c = 0x5faa6a;
  uStack_19c = FUN_00449749();
  uStack_1a0 = 0xffffffff;
  uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_1a8 = 0x5faa77;
  iStack_1a8 = FUN_00449713();
  puStack_1ac = (undefined4 *)0x5faa7d;
  uStack_1a4 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_1a0;
  iStack_1a8 = 0x5faa8a;
  FUN_004033a1();
  uStack_1a4 = 0xa8;
  iStack_1a8 = unaff_EBP + -0x2c;
  puStack_1ac = (undefined4 *)0xffffffff;
  uStack_1b0 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_1b4 = 0x5faaa3;
  uStack_1b4 = FUN_00449713();
  uStack_1b8 = 0x5faaa9;
  uStack_1b0 = FUN_00456ad5();
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_1ac;
  uStack_1b4 = 0x5faab6;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_1b0 = 0x5faac8;
  FUN_0044974c();
  uStack_1b0 = 0x5faacf;
  iStack_1a8 = FUN_00448ebb();
  iStack_1a8 = 0x1c2 - iStack_1a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_1ac = (undefined4 *)0x5faae3;
  FUN_004115d9();
  puStack_1ac = (undefined4 *)0x5faaea;
  FUN_00448e3a();
  puStack_194 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_198 = 0x5faaf7;
  puStack_194 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_194 < 0) {
    iStack_198 = 0x5fab02;
    FUN_00878dfb();
  }
  puStack_194 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_198 = 0x5fab0f;
  puStack_194 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_194 < 0) {
    iStack_198 = 0x5fab1a;
    FUN_00878dfb();
  }
  puStack_194 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_198 = 0x5fab27;
  puStack_194 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_194 < 0) {
    iStack_198 = 0x5fab32;
    FUN_00878dfb();
  }
  puStack_194 = &DAT_00980690;
  iStack_198 = 0x5fab3b;
  FUN_00403191();
  puStack_194 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_198 = 0x5fab48;
  FUN_00403191();
  puStack_194 = (undefined4 *)0x0;
  iStack_198 = 0;
  uStack_19c = 0xffffffff;
  uStack_1a0 = *(undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uStack_1a4 = 0;
  iStack_1a8 = 0;
  puStack_1ac = (undefined4 *)0x5fab5a;
  (*DAT_0097b4c8)();
  puStack_1ac = (undefined4 *)0x5fab67;
  FUN_0087a1b0();
  *(int **)(unaff_EBP + -0x10) = &iStack_1a8;
  puStack_1ac = &DAT_00980690;
  uStack_1b0 = 0x5fab73;
  FUN_00403191();
  puStack_1ac = (undefined4 *)0x0;
  uStack_1b0 = 0;
  uStack_1b4 = 0xffffffff;
  uStack_1b8 = *(undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_1bc = 0;
  uStack_1c0 = 0;
  puStack_1c4 = (undefined4 *)0x5fab85;
  (*DAT_0097b4c8)();
  puStack_1c4 = (undefined4 *)0x5fab92;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_1c0;
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x40);
  iStack_1c8 = unaff_EBP + -0x68;
  uStack_1cc = 0x5fabab;
  uStack_1cc = FUN_00449749();
  uStack_1d0 = 0xffffffff;
  uStack_1d4 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_1d8 = 0x5fabb8;
  iStack_1d8 = FUN_00449713();
  puStack_1dc = (undefined4 *)0x5fabbe;
  uStack_1d4 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_1d0;
  iStack_1d8 = 0x5fabcb;
  FUN_004033a1();
  uStack_1d4 = 0xba;
  iStack_1d8 = unaff_EBP + -0x2c;
  puStack_1dc = (undefined4 *)0xffffffff;
  uStack_1e0 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_1e4 = 0x5fabe4;
  uStack_1e4 = FUN_00449713();
  uStack_1e8 = 0x5fabea;
  uStack_1e0 = FUN_00456ad5();
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_1dc;
  uStack_1e4 = 0x5fabf7;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_1e0 = 0x5fac09;
  FUN_0044974c();
  uStack_1e0 = 0x5fac10;
  iStack_1d8 = FUN_00448ebb();
  iStack_1d8 = 0x1cc - iStack_1d8;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_1dc = (undefined4 *)0x5fac24;
  FUN_004115d9();
  puStack_1dc = (undefined4 *)0x5fac2b;
  FUN_00448e3a();
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_1c8 = 0x5fac38;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x5fac43;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_1c8 = 0x5fac50;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x5fac5b;
    FUN_00878dfb();
  }
  puStack_1c4 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_1c8 = 0x5fac68;
  puStack_1c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c4 < 0) {
    iStack_1c8 = 0x5fac73;
    FUN_00878dfb();
  }
  puStack_1c4 = &DAT_00980690;
  iStack_1c8 = 0x5fac7c;
  FUN_00403191();
  puStack_1c4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_1c8 = 0x5fac89;
  FUN_00403191();
  puStack_1c4 = (undefined4 *)0x0;
  iStack_1c8 = 0;
  uStack_1cc = 0xffffffff;
  uStack_1d0 = *(undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_1d4 = 0;
  iStack_1d8 = 0;
  puStack_1dc = (undefined4 *)0x5fac9b;
  (*DAT_0097b4c8)();
  puStack_1dc = (undefined4 *)0x5faca8;
  FUN_0087a1b0();
  *(int **)(unaff_EBP + -0x10) = &iStack_1d8;
  puStack_1dc = &DAT_00980690;
  uStack_1e0 = 0x5facb4;
  FUN_00403191();
  puStack_1dc = (undefined4 *)0x0;
  uStack_1e0 = 0;
  uStack_1e4 = 0xffffffff;
  uStack_1e8 = *(undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uStack_1ec = 0;
  uStack_1f0 = 0;
  puStack_1f4 = (undefined4 *)0x5facc6;
  (*DAT_0097b4c8)();
  puStack_1f4 = (undefined4 *)0x5facd3;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_1f0;
  puStack_1f4 = (undefined4 *)(unaff_EBP + -0x40);
  iStack_1f8 = unaff_EBP + -0x68;
  uStack_1fc = 0x5facec;
  uStack_1fc = FUN_00449749();
  uStack_200 = 0xffffffff;
  uStack_204 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_208 = 0x5facf9;
  iStack_208 = FUN_00449713();
  puStack_20c = (undefined4 *)0x5facff;
  uStack_204 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_200;
  iStack_208 = 0x5fad0c;
  FUN_004033a1();
  uStack_204 = 200;
  iStack_208 = unaff_EBP + -0x2c;
  puStack_20c = (undefined4 *)0xffffffff;
  uStack_210 = *(undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  uStack_214 = 0x5fad25;
  uStack_214 = FUN_00449713();
  uStack_218 = 0x5fad2b;
  uStack_210 = FUN_00456ad5();
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_20c;
  uStack_214 = 0x5fad38;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  uStack_210 = 0x5fad4a;
  FUN_0044974c();
  uStack_210 = 0x5fad51;
  iStack_208 = FUN_00448ebb();
  iStack_208 = 0x1cc - iStack_208;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_20c = (undefined4 *)0x5fad65;
  FUN_004115d9();
  puStack_20c = (undefined4 *)0x5fad6c;
  FUN_00448e3a();
  puStack_1f4 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_1f8 = 0x5fad79;
  puStack_1f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1f4 < 0) {
    iStack_1f8 = 0x5fad84;
    FUN_00878dfb();
  }
  puStack_1f4 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_1f8 = 0x5fad91;
  puStack_1f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1f4 < 0) {
    iStack_1f8 = 0x5fad9c;
    FUN_00878dfb();
  }
  puStack_1f4 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_1f8 = 0x5fada9;
  puStack_1f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1f4 < 0) {
    iStack_1f8 = 0x5fadb4;
    FUN_00878dfb();
  }
  puStack_1f4 = &DAT_00980690;
  iStack_1f8 = 0x5fadbd;
  FUN_00403191();
  puStack_1f4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_1f8 = 0x5fadca;
  FUN_00403191();
  puStack_1f4 = (undefined4 *)0x0;
  iStack_1f8 = 0;
  uStack_1fc = 0xffffffff;
  uStack_200 = *(undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  uStack_204 = 0;
  iStack_208 = 0;
  puStack_20c = (undefined4 *)0x5faddc;
  (*DAT_0097b4c8)();
  puStack_20c = (undefined4 *)0x5fade9;
  FUN_0087a1b0();
  *(int **)(unaff_EBP + -0x10) = &iStack_208;
  puStack_20c = &DAT_00980690;
  uStack_210 = 0x5fadf5;
  FUN_00403191();
  puStack_20c = (undefined4 *)0x0;
  uStack_210 = 0;
  uStack_214 = 0xffffffff;
  uStack_218 = *(undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  uStack_21c = 0;
  uStack_220 = 0;
  iStack_224 = 0x5fae07;
  (*DAT_0097b4c8)();
  iStack_224 = 0x5fae14;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_220;
  iStack_224 = unaff_EBP + -0x40;
  iStack_228 = unaff_EBP + -0x68;
  uStack_22c = 0x5fae2d;
  uStack_22c = FUN_00449749();
  uStack_230 = 0xffffffff;
  uStack_234 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_238 = 0x5fae3a;
  iStack_238 = FUN_00449713();
  uStack_23c = 0x5fae40;
  uStack_234 = FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_230;
  iStack_238 = 0x5fae4d;
  FUN_004033a1();
  uStack_234 = 0xd6;
  iStack_238 = unaff_EBP + -0x2c;
  uStack_23c = 0xffffffff;
  piStack_240 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_244 = (undefined4 *)0x5fae66;
  puStack_244 = (undefined4 *)FUN_00449713();
  iStack_248 = 0x5fae6c;
  piStack_240 = (int *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_23c;
  puStack_244 = (undefined4 *)0x5fae79;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  piStack_240 = (int *)0x5fae8b;
  FUN_0044974c();
  piStack_240 = (int *)0x5fae92;
  iStack_238 = FUN_00448ebb();
  iStack_238 = 0x1cc - iStack_238;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  uStack_23c = 0x5faea6;
  FUN_004115d9();
  uStack_23c = 0x5faead;
  FUN_00448e3a();
  iStack_224 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_228 = 0x5faeba;
  iStack_224 = FUN_00402bc3();
  if (iStack_224 < 0) {
    iStack_228 = 0x5faec5;
    FUN_00878dfb();
  }
  iStack_224 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_228 = 0x5faed2;
  iStack_224 = FUN_00402bc3();
  if (iStack_224 < 0) {
    iStack_228 = 0x5faedd;
    FUN_00878dfb();
  }
  iStack_224 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_228 = 0x5faeea;
  iStack_224 = FUN_00402bc3();
  if (iStack_224 < 0) {
    iStack_228 = 0x5faef5;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iStack_224 = 3;
  iStack_228 = 0xff;
  if (*(int *)(iVar3 + 200) < 2) {
    uStack_22c = 0x5fc048;
    FUN_004031b7();
    piVar8 = *(int **)(unaff_EBP + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0x1d0);
    *(undefined1 *)(unaff_EBP + -4) = 100;
    if (piVar8 == (int *)0x0) {
      iStack_224 = 0x80004003;
      iStack_228 = 0x5fc063;
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar8;
    uStack_230 = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_22c = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_238 = 0xaa;
    iStack_228 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_23c = 0x1ea;
    *(int **)(unaff_EBP + -0x18) = piVar8;
    iStack_224 = *(undefined4 *)(unaff_EBP + -0x20);
    puStack_244 = (undefined4 *)0x5fc089;
    piStack_240 = piVar8;
    uStack_234 = uVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      piStack_338 = *(int **)(unaff_EBP + -0x18);
      uStack_340 = 0x5fc09b;
      iStack_33c = iVar3;
      FUN_00878e09();
    }
    piVar8 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_338 = (int *)0x5fc0a8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_338 = (int *)0x5fc0b3;
      FUN_00878dfb();
      piVar8 = extraout_ECX_05;
    }
  }
  else {
    uStack_22c = 0x5faf14;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 0x1cc);
    piVar8 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (piVar8 == (int *)0x0) {
      iStack_224 = 0x80004003;
      iStack_228 = 0x5faf32;
      FUN_00878dfb();
      piVar8 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar8;
    uStack_234 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_230 = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_22c = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_238 = 0xa7;
    iStack_228 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_23c = 0x1ea;
    *(int **)(unaff_EBP + -0x1c) = piVar8;
    iStack_224 = *(undefined4 *)(unaff_EBP + -0x20);
    puStack_244 = (undefined4 *)0x5faf5a;
    piStack_240 = piVar8;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_244 = (undefined4 *)&DAT_00963cc8;
      iStack_248 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_250 = 0x5faf6c;
      iStack_24c = iVar3;
      FUN_00878e09();
    }
    puStack_244 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_248 = 0x5faf79;
    puStack_244 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_244 < 0) {
      iStack_248 = 0x5faf86;
      FUN_00878dfb();
    }
    puStack_244 = (undefined4 *)0x1;
    iStack_248 = unaff_EBP + -0x10;
    iStack_24c = 0x5faf94;
    puStack_244 = (undefined4 *)FUN_005b1a45();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_248 = 0x5fafa1;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_244 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      iStack_248 = 0x5fafb5;
      FUN_00434e38();
    }
    puStack_244 = &DAT_00980690;
    iStack_248 = 0x5fafbf;
    FUN_00403191();
    puStack_244 = (undefined4 *)0x0;
    iStack_248 = 0;
    iStack_24c = -1;
    uStack_250 = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    uStack_254 = 0;
    uStack_258 = 0;
    puStack_25c = (undefined4 *)0x5fafd4;
    (*DAT_0097b4c8)();
    puStack_25c = (undefined4 *)0x5fafe1;
    FUN_0087a1b0();
    puStack_25c = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_260 = -1;
    uStack_268 = 0x5faff1;
    puStack_264 = (undefined1 *)&uStack_258;
    uStack_268 = FUN_00449713();
    uStack_26c = 0x5faff7;
    puStack_264 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x18) = &iStack_260;
    uStack_268 = 0x5fb004;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_264 = (undefined1 *)0x5fb016;
    FUN_0044974c();
    puStack_264 = (undefined1 *)0x5fb01d;
    iVar3 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x30) = iVar3 + 5;
    puStack_25c = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_260 = 0x5fb030;
    iVar3 = FUN_00402bc3();
    puVar4 = puStack_25c;
    if (iVar3 < 0) {
      iStack_260 = 0x5fb03b;
      puStack_25c = (undefined4 *)iVar3;
      FUN_00878dfb();
      puVar4 = (undefined4 *)extraout_ECX_01;
    }
    if (0x49 < *(int *)(unaff_EBP + -0x30)) {
      puStack_25c = (undefined4 *)0x49;
      puStack_264 = (undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0x20c);
      *(int **)(unaff_EBP + -0x18) = &iStack_260;
      uStack_268 = 0x5fb05b;
      iStack_260 = (int)puVar4;
      FUN_0046fcc9();
      puStack_264 = (undefined1 *)(unaff_EBP + -0x54);
      uStack_268 = 0x5fb064;
      FUN_007d3a22();
      puStack_25c = &DAT_00980690;
      iStack_260 = 0x5fb070;
      FUN_00403191();
      puStack_25c = (undefined4 *)0x0;
      iStack_260 = 0;
      puStack_264 = (undefined1 *)0xffffffff;
      uStack_268 = *(undefined4 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      uStack_26c = 0;
      uStack_270 = 0;
      puStack_274 = (undefined4 *)0x5fb082;
      (*DAT_0097b4c8)();
      puStack_25c = (undefined4 *)0x5fb08f;
      FUN_0087a1b0();
      puStack_25c = (undefined4 *)(unaff_EBP + -0x2c);
      iStack_260 = -1;
      uStack_268 = 0x5fb09f;
      puStack_264 = (undefined1 *)&uStack_258;
      uStack_268 = FUN_00449713();
      uStack_26c = 0x5fb0a5;
      puStack_264 = (undefined1 *)FUN_00456ad5();
      *(int **)(unaff_EBP + -0x18) = &iStack_260;
      uStack_268 = 0x5fb0b2;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      puStack_264 = (undefined1 *)0x5fb0c4;
      FUN_0044974c();
      puStack_264 = (undefined1 *)0x5fb0cb;
      iVar3 = FUN_00448ebb();
      *(int *)(unaff_EBP + -0x30) = iVar3 + 5;
      puStack_25c = (undefined4 *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_260 = 0x5fb0de;
      puStack_25c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_25c < 0) {
        iStack_260 = 0x5fb0e9;
        FUN_00878dfb();
      }
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x20c) == 0) {
      puStack_25c = (undefined4 *)0x80004003;
      iStack_260 = 0x5fb0ff;
      FUN_00878dfb();
    }
    puStack_25c = (undefined4 *)0x5fb112;
    FUN_004a2734();
    puStack_25c = &DAT_00980690;
    iStack_260 = 0x5fb11b;
    FUN_00403191();
    puStack_25c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_260 = 0x5fb128;
    FUN_00403191();
    puStack_25c = (undefined4 *)0x0;
    iStack_260 = 0;
    puStack_264 = (undefined1 *)0xffffffff;
    uStack_268 = *(undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    uStack_26c = 0;
    uStack_270 = 0;
    puStack_274 = (undefined4 *)0x5fb13a;
    (*DAT_0097b4c8)();
    puStack_274 = (undefined4 *)0x5fb147;
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_270;
    puStack_274 = (undefined4 *)(unaff_EBP + -0x68);
    iStack_278 = unaff_EBP + -0x2c;
    iStack_27c = 0x5fb160;
    iStack_27c = FUN_00449749();
    uStack_280 = 0xffffffff;
    uStack_284 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_288 = 0x5fb16d;
    iStack_288 = FUN_00449713();
    puStack_28c = (undefined4 *)0x5fb173;
    uStack_284 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_280;
    iStack_288 = 0x5fb180;
    FUN_004033a1();
    iStack_288 = 0x212 - *(int *)(unaff_EBP + -0x30) / 2;
    uStack_284 = 0x98;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    puStack_28c = (undefined4 *)0x5fb1a1;
    FUN_004115d9();
    puStack_28c = (undefined4 *)0x5fb1a8;
    FUN_00448e3a();
    puStack_274 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_278 = 0x5fb1b5;
    puStack_274 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_274 < 0) {
      iStack_278 = 0x5fb1c0;
      FUN_00878dfb();
    }
    puStack_274 = (undefined4 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_278 = 0x5fb1cd;
    puStack_274 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_274 < 0) {
      iStack_278 = 0x5fb1d8;
      FUN_00878dfb();
    }
    puStack_274 = (undefined4 *)0x0;
    iStack_278 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x144) + 0x10);
    iStack_27c = unaff_EBP + -0x4c;
    uStack_280 = 0x5fb1ee;
    FUN_007d3546();
    uStack_280 = 0;
    uStack_284 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x144) + 4);
    iStack_288 = unaff_EBP + -0x48;
    puStack_28c = (undefined4 *)0x5fb204;
    FUN_007d3546();
    puStack_28c = (undefined4 *)0x0;
    uStack_290 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x144) + 0xc);
    iStack_294 = unaff_EBP + -0x50;
    uStack_298 = 0x5fb21a;
    FUN_007d3546();
    uStack_298 = 0;
    uStack_29c = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x144) + 8);
    iStack_2a0 = unaff_EBP + -0x44;
    puStack_2a4 = (undefined4 *)0x5fb230;
    FUN_007d3546();
    puStack_274 = &DAT_00980690;
    iStack_278 = 0x5fb23c;
    FUN_00403191();
    puStack_274 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_278 = 0x5fb249;
    FUN_00403191();
    puStack_274 = (undefined4 *)0x0;
    iStack_278 = 0;
    iStack_27c = 0xffffffff;
    uStack_280 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    uStack_284 = 0;
    iStack_288 = 0;
    puStack_28c = (undefined4 *)0x5fb25b;
    (*DAT_0097b4c8)();
    puStack_28c = (undefined4 *)0x5fb268;
    FUN_0087a1b0();
    *(int **)(unaff_EBP + -0x10) = &iStack_288;
    puStack_28c = &DAT_00980690;
    uStack_290 = 0x5fb274;
    FUN_00403191();
    puStack_28c = (undefined4 *)0x0;
    uStack_290 = 0;
    iStack_294 = 0xffffffff;
    uStack_298 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    uStack_29c = 0;
    iStack_2a0 = 0;
    puStack_2a4 = (undefined4 *)0x5fb286;
    (*DAT_0097b4c8)();
    puStack_2a4 = (undefined4 *)0x5fb293;
    FUN_0087a1b0();
    *(int **)(unaff_EBP + -0x1c) = &iStack_2a0;
    puStack_2a4 = (undefined4 *)(unaff_EBP + -0x40);
    iStack_2a8 = unaff_EBP + -0x68;
    uStack_2ac = 0x5fb2ac;
    uStack_2ac = FUN_00449749();
    uStack_2b0 = 0xffffffff;
    uStack_2b4 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_2b8 = 0x5fb2b9;
    iStack_2b8 = FUN_00449713();
    puStack_2bc = (undefined4 *)0x5fb2bf;
    uStack_2b4 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2b0;
    iStack_2b8 = 0x5fb2cc;
    FUN_004033a1();
    uStack_2b4 = 0xa8;
    iStack_2b8 = unaff_EBP + -0x2c;
    puStack_2bc = (undefined4 *)0xffffffff;
    uStack_2c0 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    uStack_2c4 = 0x5fb2e5;
    uStack_2c4 = FUN_00449713();
    uStack_2c8 = 0x5fb2eb;
    uStack_2c0 = FUN_00456ad5();
    *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_2bc;
    uStack_2c4 = 0x5fb2f8;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    uStack_2c0 = 0x5fb30a;
    FUN_0044974c();
    uStack_2c0 = 0x5fb311;
    iStack_2b8 = FUN_00448ebb();
    iStack_2b8 = 0x218 - iStack_2b8;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_2bc = (undefined4 *)0x5fb325;
    FUN_004115d9();
    puStack_2bc = (undefined4 *)0x5fb32c;
    FUN_00448e3a();
    puStack_2a4 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_2a8 = 0x5fb339;
    puStack_2a4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a4 < 0) {
      iStack_2a8 = 0x5fb344;
      FUN_00878dfb();
    }
    puStack_2a4 = (undefined4 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_2a8 = 0x5fb351;
    puStack_2a4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a4 < 0) {
      iStack_2a8 = 0x5fb35c;
      FUN_00878dfb();
    }
    puStack_2a4 = (undefined4 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_2a8 = 0x5fb369;
    puStack_2a4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2a4 < 0) {
      iStack_2a8 = 0x5fb374;
      FUN_00878dfb();
    }
    puStack_2a4 = &DAT_00980690;
    iStack_2a8 = 0x5fb37d;
    FUN_00403191();
    puStack_2a4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_2a8 = 0x5fb38a;
    FUN_00403191();
    puStack_2a4 = (undefined4 *)0x0;
    iStack_2a8 = 0;
    uStack_2ac = 0xffffffff;
    uStack_2b0 = *(undefined4 *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    uStack_2b4 = 0;
    iStack_2b8 = 0;
    puStack_2bc = (undefined4 *)0x5fb39c;
    (*DAT_0097b4c8)();
    puStack_2bc = (undefined4 *)0x5fb3a9;
    FUN_0087a1b0();
    *(int **)(unaff_EBP + -0x10) = &iStack_2b8;
    puStack_2bc = &DAT_00980690;
    uStack_2c0 = 0x5fb3b5;
    FUN_00403191();
    puStack_2bc = (undefined4 *)0x0;
    uStack_2c0 = 0;
    uStack_2c4 = 0xffffffff;
    uStack_2c8 = *(undefined4 *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    uStack_2cc = 0;
    uStack_2d0 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_2d0;
    iStack_2d8 = unaff_EBP + -0x68;
    uStack_2dc = 0x5fb3ed;
    uStack_2dc = FUN_00449749();
    uStack_2e0 = 0xffffffff;
    uStack_2e4 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_2e8 = 0x5fb3fa;
    iStack_2e8 = FUN_00449713();
    uStack_2e4 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_2e0;
    iStack_2e8 = 0x5fb40d;
    FUN_004033a1();
    uStack_2e4 = 0xba;
    iStack_2e8 = unaff_EBP + -0x2c;
    iStack_2f0 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    uStack_2f4 = 0x5fb426;
    uStack_2f4 = FUN_00449713();
    uStack_2f8 = 0x5fb42c;
    iStack_2f0 = FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffd14;
    uStack_2f4 = 0x5fb439;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_2f0 = 0x5fb44b;
    FUN_0044974c();
    iStack_2f0 = 0x5fb452;
    iStack_2e8 = FUN_00448ebb();
    iStack_2e8 = 0x222 - iStack_2e8;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_2d8 = 0x5fb47a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_2d8 = 0x5fb485;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_2d8 = 0x5fb492;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_2d8 = 0x5fb49d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_2d8 = 0x5fb4aa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_2d8 = 0x5fb4b5;
      FUN_00878dfb();
    }
    iStack_2d8 = 0x5fb4bf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_2d8 = unaff_EBP + -0x40;
    uStack_2dc = 0x5fb4c9;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_2d8 = 0x5fb4d5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_2d8 = 0x5fb4e3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    iStack_2d8 = unaff_EBP + -0x7c;
    uStack_2dc = 0x5fb4ed;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_2d8 = 0x5fb4f9;
      FUN_00878dfb();
    }
    iStack_2d8 = 0;
    uStack_2dc = 0xffffffff;
    uStack_2e0 = *(undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    uStack_2e4 = 0;
    iStack_2e8 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(int **)(unaff_EBP + -0x10) = &iStack_2e8;
    iStack_2f0 = 0x5fb528;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    iStack_2f0 = unaff_EBP + -0x8c;
    uStack_2f4 = 0x5fb535;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_2f0 = 0x5fb541;
      FUN_00878dfb();
    }
    iStack_2f0 = 0;
    uStack_2f4 = 0xffffffff;
    uStack_2f8 = *(undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    uStack_2fc = 0;
    uStack_300 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_300;
    iStack_308 = unaff_EBP + -0x7c;
    uStack_30c = 0x5fb579;
    uStack_30c = FUN_00449749();
    uStack_310 = 0xffffffff;
    uStack_314 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_318 = 0x5fb586;
    iStack_318 = FUN_00449713();
    uStack_314 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_310;
    iStack_318 = 0x5fb599;
    FUN_004033a1();
    uStack_314 = 200;
    iStack_318 = unaff_EBP + -0x8c;
    iStack_320 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    uStack_324 = 0x5fb5b5;
    uStack_324 = FUN_00449713();
    uStack_328 = 0x5fb5bb;
    iStack_320 = FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffce4;
    uStack_324 = 0x5fb5c8;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iStack_320 = 0x5fb5da;
    FUN_0044974c();
    iStack_320 = 0x5fb5e1;
    iStack_318 = FUN_00448ebb();
    iStack_318 = 0x222 - iStack_318;
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    iStack_308 = 0x5fb60c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_308 = 0x5fb617;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_308 = 0x5fb624;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_308 = 0x5fb62f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_308 = 0x5fb63c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_308 = 0x5fb647;
      FUN_00878dfb();
    }
    iStack_308 = 0x5fb654;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    iStack_308 = unaff_EBP + -0x8c;
    uStack_30c = 0x5fb661;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_308 = 0x5fb66d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iStack_308 = 0x5fb67b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    iStack_308 = unaff_EBP + -0x7c;
    uStack_30c = 0x5fb685;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_308 = 0x5fb691;
      FUN_00878dfb();
    }
    iStack_308 = 0;
    uStack_30c = 0xffffffff;
    uStack_310 = *(undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    uStack_314 = 0;
    iStack_318 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(int **)(unaff_EBP + -0x10) = &iStack_318;
    iStack_320 = 0x5fb6bd;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_320 = unaff_EBP + -0x40;
    uStack_324 = 0x5fb6c7;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_320 = 0x5fb6d3;
      FUN_00878dfb();
    }
    iStack_320 = 0;
    uStack_324 = 0xffffffff;
    uStack_328 = *(undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    uStack_32c = 0;
    uStack_330 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_330;
    piStack_338 = (int *)(unaff_EBP + -0x7c);
    iStack_33c = 0x5fb70e;
    iStack_33c = FUN_00449749();
    uStack_340 = 0xffffffff;
    uStack_344 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_348 = 0x5fb71b;
    iStack_348 = FUN_00449713();
    uStack_344 = FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_340;
    iStack_348 = 0x5fb72e;
    FUN_004033a1();
    uStack_344 = 0xd6;
    iStack_348 = unaff_EBP + -0x40;
    iStack_350 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    iStack_354 = 0x5fb747;
    iStack_354 = FUN_00449713();
    uStack_358 = 0x5fb74d;
    iStack_350 = FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffcb4;
    iStack_354 = 0x5fb75a;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    iStack_350 = 0x5fb76c;
    FUN_0044974c();
    iStack_350 = 0x5fb773;
    iStack_348 = FUN_00448ebb();
    iStack_348 = 0x222 - iStack_348;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_338 = (int *)0x5fb79b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_338 = (int *)0x5fb7a6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    piStack_338 = (int *)0x5fb7b3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_338 = (int *)0x5fb7be;
      FUN_00878dfb();
    }
    piVar8 = (int *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_338 = (int *)0x5fb7ce;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_338 = (int *)0x5fb7d9;
      FUN_00878dfb();
      piVar8 = extraout_ECX_02;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xaa0) == 1) {
      *(undefined4 *)(unaff_EBP + -0x6c) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      piStack_338 = (int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      iStack_33c = 0x5fb809;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_338 = (int *)*puVar4;
      iStack_33c = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      uStack_340 = 0x5fb81c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_00414ebb();
      piStack_338 = (int *)(unaff_EBP + -0x10);
      iStack_33c = 0x5fb83a;
      puVar4 = (undefined4 *)FUN_00679d22();
      piStack_338 = (int *)*puVar4;
      iStack_33c = unaff_EBP + -0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      uStack_340 = 0x5fb84d;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_338 = (int *)0x5fb86d;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
      piStack_338 = (int *)(unaff_EBP + -0x7c);
      iStack_33c = 0x5fb877;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_338 = (int *)0x5fb883;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      piStack_338 = (int *)0x5fb891;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_338 = (int *)(unaff_EBP + -0x40);
      iStack_33c = 0x5fb89b;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_338 = (int *)0x5fb8a7;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      iVar5 = *(int *)(iVar3 + 0xa9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      if (iVar5 == 0) {
        puVar4 = (undefined4 *)(unaff_EBP + -0x30);
        if (*(int *)(iVar3 + 0xc0) != 0) {
          puVar4 = (undefined4 *)(unaff_EBP + -0x6c);
        }
      }
      else {
        puVar4 = (undefined4 *)(unaff_EBP + -0x6c);
        if (*(int *)(iVar3 + 0xc0) != 0) {
          puVar4 = (undefined4 *)(unaff_EBP + -0x30);
        }
      }
      uStack_340 = *puVar4;
      piStack_338 = (int *)0x0;
      iStack_33c = -1;
      uStack_344 = 0;
      iStack_348 = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      iVar5 = *(int *)(iVar3 + 0xa9c);
      *(int **)(unaff_EBP + -0x18) = &iStack_348;
      if (iVar5 == 0) {
        iVar5 = unaff_EBP + -0x30;
        if (*(int *)(iVar3 + 0xc0) != 0) {
          iVar5 = unaff_EBP + -0x6c;
        }
      }
      else {
        iVar5 = unaff_EBP + -0x6c;
        if (*(int *)(iVar3 + 0xc0) != 0) {
          iVar5 = unaff_EBP + -0x30;
        }
      }
      *(int *)(unaff_EBP + -0x10) = iVar5;
      iStack_350 = unaff_EBP + -0x40;
      iStack_354 = 0x5fb92f;
      iStack_354 = FUN_00449749();
      uStack_358 = 0xffffffff;
      uStack_35c = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_360 = 0x5fb93d;
      uStack_360 = FUN_00449713();
      uStack_35c = FUN_00456ad5();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_358;
      uStack_360 = 0x5fb950;
      FUN_004033a1();
      uStack_35c = 0x196;
      uStack_360 = 0xd;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      iStack_350 = 0x5fb977;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_350 = 0x5fb982;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      iStack_350 = 0x5fb98f;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_350 = 0x5fb99a;
        FUN_00878dfb();
      }
      iStack_350 = unaff_EBP + -0x18;
      iStack_354 = 0x5fb9ad;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_350 = *puVar4;
      iStack_354 = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      uStack_358 = 0x5fb9c3;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      FUN_00414ebb();
      iStack_350 = 0x5fb9dc;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
      iStack_350 = unaff_EBP + -0x7c;
      iStack_354 = 0x5fb9e6;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_350 = 0x5fb9f2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      iStack_350 = 0x5fba00;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iStack_350 = unaff_EBP + -0x40;
      iStack_354 = 0x5fba0a;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_350 = 0x5fba16;
        FUN_00878dfb();
      }
      iStack_350 = 0;
      iStack_354 = 0xffffffff;
      uStack_358 = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      uStack_35c = 0;
      uStack_360 = 0;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_360;
      piStack_368 = (int *)(unaff_EBP + -0x40);
      puStack_36c = (undefined4 *)0x5fba4c;
      puStack_36c = (undefined4 *)FUN_00449749();
      iStack_370 = -1;
      uVar6 = FUN_00449713(*(undefined4 *)(unaff_EBP + -0x18));
      uVar6 = FUN_00456ad5(uVar6);
      *(int **)(unaff_EBP + -0x18) = &iStack_370;
      FUN_004033a1(uVar6);
      uVar10 = 0x196;
      uVar6 = 300;
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      FUN_004115d9(300,0x196);
      FUN_00448e3a(uVar6,uVar10);
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      piStack_368 = (int *)0x5fba97;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_368 = (int *)0x5fbaa2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_368 = (int *)0x5fbaaf;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_368 = (int *)0x5fbaba;
        FUN_00878dfb();
      }
      if (*(int *)(iVar3 + 0x1f0) == 0) {
        piStack_368 = (int *)0x5fbad6;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        piStack_368 = (int *)(unaff_EBP + -0x40);
        puStack_36c = (undefined4 *)0x5fbae0;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbaec;
          FUN_00878dfb();
        }
        piStack_368 = (int *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        puStack_36c = (undefined4 *)0x5fbafc;
        FUN_004031b7();
        bVar9 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        if (bVar9) {
          piStack_368 = (int *)0x5fbb13;
          FUN_00878dfb();
        }
        piStack_368 = (int *)(unaff_EBP + -0x2c);
        puStack_36c = (undefined4 *)0x5;
        iStack_370 = 0;
        piVar7 = (int *)FUN_0042a39f(unaff_EBP + -0x18,0,0,0);
        piVar7 = (int *)*piVar7;
        piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
        piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
        *(undefined1 *)(unaff_EBP + -4) = 0x55;
        if (piVar1 != piVar7) {
          *piVar8 = (int)piVar7;
          FUN_00424ed4();
          if (piVar1 != (int *)0x0) {
            piStack_368 = (int *)0x5fbb5e;
            (**(code **)(*piVar1 + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          piStack_368 = (int *)0x5fbb6f;
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        piStack_368 = (int *)0x5fbb7c;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbb87;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        piStack_368 = (int *)0x5fbb94;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbb9f;
          FUN_00878dfb();
        }
        piStack_368 = (int *)0x5fbbab;
        puVar4 = (undefined4 *)FUN_004489f5();
        piVar7 = (int *)*puVar4;
        *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
        *(int **)(unaff_EBP + -0x38) = piVar7;
        iVar3 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        piStack_368 = (int *)0x5fbbc0;
        (**(code **)(iVar3 + 4))();
        iVar3 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        if (iVar3 == 0) {
          piStack_368 = (int *)0x80004003;
          puStack_36c = (undefined4 *)0x5fbbd3;
          FUN_00878dfb();
        }
        iStack_370 = *(int *)(unaff_EBP + -0x3c);
        piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
        iVar3 = *piVar8;
        puStack_36c = *(undefined4 **)(unaff_EBP + -0x38);
        *(int **)(unaff_EBP + -0x18) = piVar8;
        piStack_368 = *(int **)(unaff_EBP + -0x34);
        iVar3 = (**(code **)(iVar3 + 100))(piVar8,*(undefined4 *)(unaff_EBP + -0x40));
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        piVar8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        iVar3 = *(int *)(unaff_EBP + -0x14);
        puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x10);
        piVar8 = (int *)*puVar4;
        *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
        *(int **)(unaff_EBP + -0x38) = piVar8;
        iVar5 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        (**(code **)(iVar5 + 4))(piVar8);
        iVar3 = *(int *)(iVar3 + 0x1f0);
        *(undefined1 *)(unaff_EBP + -4) = 0x59;
        if (iVar3 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
        iVar3 = *piVar8;
        *(int **)(unaff_EBP + -0x18) = piVar8;
        iVar3 = (**(code **)(iVar3 + 0xfc))
                          (piVar8,*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34));
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x58;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x40);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
        piVar8 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))(piVar8);
        }
        piVar8 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
        if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1f0) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)*piVar8;
        puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0xe0))(piVar7,0xffffffff);
        if ((int)puVar4 < 0) {
          iStack_370 = 0x5fbd03;
          puStack_36c = puVar4;
          piStack_368 = piVar7;
          FUN_00878e09();
        }
        piStack_368 = (int *)0x5fbd0f;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        piStack_368 = (int *)(unaff_EBP + -0x2c);
        puStack_36c = (undefined4 *)0x5fbd19;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbd25;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5a;
        piStack_368 = (int *)0x5fbd2f;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
        piStack_368 = (int *)(unaff_EBP + -0x68);
        puStack_36c = (undefined4 *)0x5fbd39;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbd45;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        piStack_368 = (int *)0x5fbd52;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
        piStack_368 = (int *)(unaff_EBP + -0x8c);
        puStack_36c = (undefined4 *)0x5fbd5f;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbd6b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5c;
        piStack_368 = (int *)0x5fbd75;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
        piStack_368 = (int *)(unaff_EBP + -0x7c);
        puStack_36c = (undefined4 *)0x5fbd7f;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbd8b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        piStack_368 = (int *)0x5fbd95;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        piStack_368 = (int *)(unaff_EBP + -0x40);
        puVar4 = &DAT_00980690;
        puStack_36c = (undefined4 *)0x5fbd9f;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbdab;
          FUN_00878dfb();
          puVar4 = extraout_ECX_03;
        }
        piStack_368 = (int *)0x0;
        *(undefined4 ***)(unaff_EBP + -0x90) = &puStack_36c;
        iStack_370 = 0x62d;
        *(undefined1 *)(unaff_EBP + -4) = 0x5e;
        puStack_36c = puVar4;
        FUN_00679e4e(&puStack_36c);
        iStack_370 = unaff_EBP + -0xb0;
        *(undefined1 *)(unaff_EBP + -4) = 0x5e;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x60;
        puStack_36c = (undefined4 *)0x5fbdf7;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x18) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iVar3 != 0) {
          piStack_368 = (int *)0x5fbe0d;
          iVar3 = FUN_0041a581();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            piStack_368 = (int *)0x5fbe1e;
            FUN_00878dfb();
          }
        }
        iVar3 = *piVar8;
        uVar6 = *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x61;
        if (iVar3 == 0) {
          piStack_368 = (int *)0x5fbe34;
          FUN_00878dfb();
        }
        piStack_368 = (int *)(unaff_EBP + -0x68);
        puStack_36c = (undefined4 *)(unaff_EBP + -0x8c);
        iStack_370 = unaff_EBP + -0x7c;
        FUN_004250ac(unaff_EBP + -0xa0,uVar6,unaff_EBP + -0x40);
        piStack_368 = (int *)0x5fbe66;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbe71;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x60;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          piStack_368 = (int *)0x5fbe82;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5e;
        piStack_368 = (int *)0x5fbe92;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbe9d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5d;
        piStack_368 = (int *)0x5fbeaa;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbeb5;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5c;
        piStack_368 = (int *)0x5fbec2;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbecd;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        piStack_368 = (int *)0x5fbedd;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbee8;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5a;
        piStack_368 = (int *)0x5fbef5;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbf00;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        piStack_368 = (int *)0x5fbf0d;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_368 = (int *)0x5fbf18;
          FUN_00878dfb();
        }
      }
      piStack_368 = (int *)0x5fbf24;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      piStack_368 = (int *)(unaff_EBP + -0x68);
      puStack_36c = (undefined4 *)0x5fbf2e;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_368 = (int *)0x5fbf3a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      piStack_368 = (int *)0x5fbf44;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      piStack_368 = (int *)(unaff_EBP + -0x2c);
      puStack_36c = (undefined4 *)0x5fbf4e;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_368 = (int *)0x5fbf5a;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      iVar5 = *(int *)(iVar3 + 0xa9c);
      iVar2 = *(int *)(iVar3 + 0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 99;
      if (iVar5 == 0) {
        iVar5 = (-(uint)(iVar2 != 0) & 0xffffffaa) + 0x1e8;
      }
      else {
        iVar5 = (-(uint)(iVar2 != 0) & 0x56) + 0x192;
      }
      iVar3 = *(int *)(iVar3 + 0x1f0);
      *(int *)(unaff_EBP + -0x10) = iVar5;
      if (iVar3 == 0) {
        piStack_368 = (int *)0x5fbfa6;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1f0);
      iStack_370 = *(int *)(unaff_EBP + -0x68);
      puStack_36c = *(undefined4 **)(unaff_EBP + -100);
      piStack_368 = *(int **)(unaff_EBP + -0x60);
      iVar3 = (**(code **)(*piVar8 + 0x90))
                        (piVar8,*(undefined4 *)(unaff_EBP + -0x10),0x37,
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20));
      if (iVar3 < 0) {
        uStack_340 = 0x5fbfea;
        iStack_33c = iVar3;
        piStack_338 = piVar8;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      piStack_338 = (int *)0x5fbff7;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_338 = (int *)0x5fc002;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      piStack_338 = (int *)0x5fc00f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_338 = (int *)0x5fc01a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00414ebb();
      piVar8 = extraout_ECX_04;
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xaa0) == 2) {
    iStack_33c = unaff_EBP + 8;
    *(int ***)(unaff_EBP + -0x90) = &piStack_338;
    uStack_340 = 0x5fc0d7;
    piStack_338 = piVar8;
    FUN_0046fc23();
    iStack_33c = 0x5fc0de;
    FUN_005fc14e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_338 = (int *)0x5fc137;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


