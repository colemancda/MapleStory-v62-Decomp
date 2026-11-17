/* FUN_0070d29b - 0x0070d29b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070d29b(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  undefined4 *puStack_278;
  int *piStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 *puStack_258;
  int *piStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 *puStack_21c;
  int *piStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  undefined4 uStack_200;
  undefined4 *puStack_1fc;
  int *piStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 *puStack_1c0;
  int *piStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 *puStack_184;
  int *piStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  int *piStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 *puStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  
  FUN_00879bb8();
  puStack_a0 = (undefined4 *)0x70d2bb;
  uVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
  *(undefined4 *)(unaff_EBP + -0x48) = uVar1;
  puStack_a0 = (undefined4 *)0x70d2c5;
  uVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
  puStack_a0 = (undefined4 *)0x3;
  iStack_a4 = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x4c) = uVar1;
  uStack_a8 = 0x70d2d4;
  FUN_004031b7();
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_a4 = 0x70d2e4;
  piVar2 = (int *)FUN_004489f5();
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    puStack_a0 = (undefined4 *)0x80004003;
    iStack_a4 = 0x70d2f8;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_a4 = unaff_EBP + -0x20;
  uStack_a8 = 0x70d307;
  FUN_0041141a();
  puStack_a0 = (undefined4 *)0x70d30f;
  FUN_004125e6();
  puStack_a0 = (undefined4 *)0x70d317;
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_a4 = 0x70d324;
  puStack_a0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a0 < 0) {
    iStack_a4 = 0x70d32f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_a0 = (undefined4 *)0x3af;
  iStack_a4 = unaff_EBP + -0x20;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uStack_a8 = 0x70d34c;
  puVar3 = (undefined4 *)FUN_00679d86();
  uStack_a8 = *puVar3;
  puStack_a0 = (undefined4 *)0x0;
  iStack_a4 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_ac = 0x70d35d;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_a0 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    iStack_a4 = 0x70d374;
    FUN_00403384();
  }
  puStack_a0 = &DAT_00980690;
  iStack_a4 = 0x70d383;
  FUN_00403191();
  puStack_a0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_a4 = 0x70d390;
  FUN_00403191();
  piStack_c8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_c8 == (int *)0x0) {
    puStack_a0 = (undefined4 *)0x80004003;
    iStack_a4 = 0x70d3a5;
    FUN_00878dfb();
    piStack_c8 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_c0 = *(undefined4 *)(extraout_ECX + 0x20);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar4 = *piStack_c8;
  iStack_a4 = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_a0 = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_c4 = *(undefined4 *)(extraout_ECX + 0x1c);
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piStack_c8;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_cc = (undefined4 *)0x70d3d0;
  iVar4 = (**(code **)(iVar4 + 0x2c))();
  if (iVar4 < 0) {
    puStack_cc = (undefined4 *)&DAT_00963cc8;
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_d8 = 0x70d3e2;
    iStack_d4 = iVar4;
    FUN_00878e09();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_d0 = 0x70d3ef;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x70d3fa;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_d0 = 0x70d407;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x70d412;
    FUN_00878dfb();
  }
  puStack_cc = &DAT_00980690;
  *(int *)(unaff_EBP + -0x20) =
       (*(int *)(extraout_ECX + 0x1c) - *(int *)(extraout_ECX + 0x8c)) -
       *(int *)(extraout_ECX + 0x88);
  *(int *)(unaff_EBP + -0x34) =
       (*(int *)(extraout_ECX + 0x20) - *(int *)(extraout_ECX + 0x94)) -
       *(int *)(extraout_ECX + 0x90);
  uStack_d0 = 0x70d443;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x98);
  piStack_e8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piStack_e8 == (int *)0x0) {
    puStack_cc = (undefined4 *)0x80004003;
    uStack_d0 = 0x70d461;
    FUN_00878dfb();
    piStack_e8 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piStack_e8;
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_e0 = 0;
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_e4 = 0;
  *(int **)(unaff_EBP + -0x14) = piStack_e8;
  puStack_cc = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_ec = (undefined4 *)0x70d483;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_ec = (undefined4 *)&DAT_00963cc8;
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_f8 = 0x70d495;
    iStack_f4 = iVar4;
    FUN_00878e09();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_f0 = 0x70d4a2;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x70d4ad;
    FUN_00878dfb();
  }
  puStack_ec = &DAT_00980690;
  uStack_f0 = 0x70d4ba;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x9c);
  piStack_124 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_124 == (int *)0x0) {
    puStack_ec = (undefined4 *)0x80004003;
    uStack_f0 = 0x70d4d8;
    FUN_00878dfb();
    piStack_124 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_120 = *(undefined4 *)(extraout_ECX + 0x88);
  iVar4 = *piStack_124;
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_ec = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_104 = 0;
  uStack_108 = 0;
  uStack_10c = 0;
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x20);
  *(int **)(unaff_EBP + -0x1c) = piStack_124;
  uStack_114 = 0xff;
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_11c = 0;
  puStack_128 = (undefined4 *)0x70d50d;
  iVar4 = (**(code **)(iVar4 + 0x84))();
  if (iVar4 < 0) {
    puStack_128 = (undefined4 *)&DAT_00963cc8;
    uStack_12c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_134 = 0x70d51f;
    iStack_130 = iVar4;
    FUN_00878e09();
  }
  puStack_128 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_12c = 0x70d52c;
  puStack_128 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_128 < 0) {
    uStack_12c = 0x70d537;
    FUN_00878dfb();
  }
  puStack_128 = &DAT_00980690;
  uStack_12c = 0x70d544;
  FUN_00403191();
  piStack_144 = *(int **)(unaff_EBP + -0x10);
  uVar1 = *(undefined4 *)(extraout_ECX + 0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  if (piStack_144 == (int *)0x0) {
    puStack_128 = (undefined4 *)0x80004003;
    uStack_12c = 0x70d562;
    FUN_00878dfb();
    piStack_144 = *(int **)(unaff_EBP + -0x10);
  }
  iStack_140 = *(int *)(extraout_ECX + 0x1c) - *(int *)(extraout_ECX + 0x8c);
  iVar4 = *piStack_144;
  uStack_138 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_134 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_130 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_13c = 0;
  uStack_12c = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x1c) = piStack_144;
  puStack_128 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_148 = (undefined4 *)0x70d58c;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_148 = (undefined4 *)&DAT_00963cc8;
    uStack_14c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_154 = 0x70d59e;
    iStack_150 = iVar4;
    FUN_00878e09();
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_14c = 0x70d5ab;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    uStack_14c = 0x70d5b6;
    FUN_00878dfb();
  }
  puStack_148 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x90);
  uStack_14c = 0x70d5cc;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0xa4);
  piStack_180 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_180 == (int *)0x0) {
    puStack_148 = (undefined4 *)0x80004003;
    uStack_14c = 0x70d5ea;
    FUN_00878dfb();
    piStack_180 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_154 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_150 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_14c = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *piStack_180;
  puStack_148 = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_158 = 0;
  uStack_15c = 0;
  uStack_160 = 0;
  uStack_164 = 0;
  uStack_168 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x18) = piStack_180;
  uStack_16c = 0;
  uStack_170 = 0xff;
  uStack_174 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_178 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_17c = 0;
  puStack_184 = (undefined4 *)0x70d61b;
  iVar4 = (**(code **)(iVar4 + 0x84))();
  if (iVar4 < 0) {
    puStack_184 = (undefined4 *)&DAT_00963cc8;
    uStack_188 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_190 = 0x70d62d;
    iStack_18c = iVar4;
    FUN_00878e09();
  }
  puStack_184 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_188 = 0x70d63a;
  puStack_184 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_184 < 0) {
    uStack_188 = 0x70d645;
    FUN_00878dfb();
  }
  puStack_184 = &DAT_00980690;
  uStack_188 = 0x70d652;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0xa8);
  piStack_1bc = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piStack_1bc == (int *)0x0) {
    puStack_184 = (undefined4 *)0x80004003;
    uStack_188 = 0x70d670;
    FUN_00878dfb();
    piStack_1bc = *(int **)(unaff_EBP + -0x10);
  }
  uStack_190 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_18c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_1b8 = *(undefined4 *)(extraout_ECX + 0x88);
  uStack_188 = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *piStack_1bc;
  puStack_184 = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_194 = 0;
  uStack_198 = 0;
  uStack_19c = 0;
  uStack_1a0 = 0;
  uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = piStack_1bc;
  uStack_1a8 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_1ac = 0xff;
  uStack_1b0 = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_1b4 = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_1c0 = (undefined4 *)0x70d6a9;
  iVar4 = (**(code **)(iVar4 + 0x84))();
  if (iVar4 < 0) {
    puStack_1c0 = (undefined4 *)&DAT_00963cc8;
    uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_1cc = 0x70d6bb;
    iStack_1c8 = iVar4;
    FUN_00878e09();
  }
  puStack_1c0 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_1c4 = 0x70d6c8;
  puStack_1c0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1c0 < 0) {
    uStack_1c4 = 0x70d6d3;
    FUN_00878dfb();
  }
  puStack_1c0 = &DAT_00980690;
  uStack_1c4 = 0x70d6e0;
  FUN_00403191();
  piStack_1f8 = *(int **)(unaff_EBP + -0x10);
  uVar1 = *(undefined4 *)(extraout_ECX + 0xac);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  if (piStack_1f8 == (int *)0x0) {
    puStack_1c0 = (undefined4 *)0x80004003;
    uStack_1c4 = 0x70d6fe;
    FUN_00878dfb();
    piStack_1f8 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_1cc = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_1c8 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_1f4 = *(int *)(extraout_ECX + 0x1c) - *(int *)(extraout_ECX + 0x8c);
  uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *piStack_1f8;
  puStack_1c0 = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_1d0 = 0;
  uStack_1d4 = 0;
  uStack_1d8 = 0;
  uStack_1dc = 0;
  uStack_1e0 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = piStack_1f8;
  uStack_1e4 = 0;
  uStack_1e8 = 0xff;
  uStack_1ec = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_1f0 = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_1fc = (undefined4 *)0x70d738;
  iVar4 = (**(code **)(iVar4 + 0x84))();
  if (iVar4 < 0) {
    puStack_1fc = (undefined4 *)&DAT_00963cc8;
    uStack_200 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_208 = 0x70d74a;
    iStack_204 = iVar4;
    FUN_00878e09();
  }
  puStack_1fc = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_200 = 0x70d757;
  puStack_1fc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1fc < 0) {
    uStack_200 = 0x70d762;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x34);
  puStack_1fc = &DAT_00980690;
  uStack_200 = 0x70d775;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0xb0);
  piStack_218 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piStack_218 == (int *)0x0) {
    puStack_1fc = (undefined4 *)0x80004003;
    uStack_200 = 0x70d793;
    FUN_00878dfb();
    piStack_218 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piStack_218;
  uStack_20c = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_210 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_208 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_204 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_200 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_214 = 0;
  *(int **)(unaff_EBP + -0x14) = piStack_218;
  puStack_1fc = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_21c = (undefined4 *)0x70d7b6;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_21c = (undefined4 *)&DAT_00963cc8;
    uStack_220 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_228 = 0x70d7c8;
    iStack_224 = iVar4;
    FUN_00878e09();
  }
  puStack_21c = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_220 = 0x70d7d5;
  puStack_21c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_21c < 0) {
    uStack_220 = 0x70d7e0;
    FUN_00878dfb();
  }
  puStack_21c = &DAT_00980690;
  uStack_220 = 0x70d7ed;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0xb4);
  piStack_254 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piStack_254 == (int *)0x0) {
    puStack_21c = (undefined4 *)0x80004003;
    uStack_220 = 0x70d80b;
    FUN_00878dfb();
    piStack_254 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_228 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_224 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_250 = *(undefined4 *)(extraout_ECX + 0x88);
  uStack_220 = *(undefined4 *)(unaff_EBP + -0x28);
  iVar4 = *piStack_254;
  puStack_21c = *(undefined4 **)(unaff_EBP + -0x24);
  uStack_22c = 0;
  uStack_230 = 0;
  uStack_234 = 0;
  uStack_238 = 0;
  uStack_23c = 0;
  uStack_240 = *(undefined4 *)(unaff_EBP + -0x20);
  *(int **)(unaff_EBP + -0x14) = piStack_254;
  uStack_244 = 0xff;
  uStack_248 = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_24c = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_258 = (undefined4 *)0x70d842;
  iVar4 = (**(code **)(iVar4 + 0x84))();
  if (iVar4 < 0) {
    puStack_258 = (undefined4 *)&DAT_00963cc8;
    uStack_25c = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_264 = 0x70d854;
    iStack_260 = iVar4;
    FUN_00878e09();
  }
  puStack_258 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_25c = 0x70d861;
  puStack_258 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_258 < 0) {
    uStack_25c = 0x70d86c;
    FUN_00878dfb();
  }
  puStack_258 = &DAT_00980690;
  uStack_25c = 0x70d879;
  FUN_00403191();
  piStack_274 = *(int **)(unaff_EBP + -0x10);
  uVar1 = *(undefined4 *)(extraout_ECX + 0xb8);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  if (piStack_274 == (int *)0x0) {
    puStack_258 = (undefined4 *)0x80004003;
    uStack_25c = 0x70d897;
    FUN_00878dfb();
    piStack_274 = *(int **)(unaff_EBP + -0x10);
  }
  iStack_270 = *(int *)(extraout_ECX + 0x1c) - *(int *)(extraout_ECX + 0x8c);
  iVar4 = *piStack_274;
  uStack_268 = *(undefined4 *)(unaff_EBP + -0x18);
  uStack_26c = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_264 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_260 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_25c = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x14) = piStack_274;
  puStack_258 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_278 = (undefined4 *)0x70d8c2;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_278 = (undefined4 *)&DAT_00963cc8;
    iStack_27c = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_284 = 0x70d8d4;
    iStack_280 = iVar4;
    FUN_00878e09();
  }
  puStack_278 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_27c = 0x70d8e1;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70d8ec;
    FUN_00878dfb();
  }
  puStack_278 = &DAT_00980690;
  iStack_27c = 0x70d8fa;
  FUN_00403191();
  puStack_278 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_27c = 0x70d907;
  FUN_00403191();
  puStack_278 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_27c = unaff_EBP + -0x30;
  iStack_284 = unaff_EBP + -0x18;
  iStack_280 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_280 = 0x70d92b;
  iStack_280 = FUN_00449749();
  iStack_284 = 0x70d934;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_284;
  FUN_00448a17(uVar1);
  uVar6 = 5;
  uVar1 = 5;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_004115d9(5,5);
  FUN_00448e3a(uVar1,uVar6);
  puStack_278 = (undefined4 *)0x70d95f;
  FUN_004497b5();
  puStack_278 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_27c = 0x70d96c;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70d977;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_27c = 0x70d984;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70d98f;
    FUN_00878dfb();
  }
  puStack_278 = &DAT_00980690;
  iStack_27c = 0x70d998;
  FUN_00403191();
  puStack_278 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_27c = 0x70d9a5;
  FUN_00403191();
  puStack_278 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_27c = 0x70d9b2;
  FUN_00403191();
  puStack_278 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_27c = 0x70d9c2;
  FUN_00403191();
  puStack_278 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_27c = 0x70d9cf;
  FUN_00424aee();
  puStack_278 = (undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_27c = 0x70d9de;
  FUN_004489f5();
  puStack_278 = (undefined4 *)(unaff_EBP + -0x7c);
  iStack_27c = unaff_EBP + -0x6c;
  iStack_280 = unaff_EBP + -0x5c;
  iStack_284 = unaff_EBP + -0x8c;
  iVar4 = unaff_EBP + -0x30;
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar5 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00424e27(iVar5,uVar1,iVar4);
  FUN_004250ac(iVar5,uVar1,iVar4);
  puStack_278 = (undefined4 *)(unaff_EBP + -0x9c);
  iStack_27c = 0x70da1d;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70da28;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)0x70da30;
  FUN_00412600();
  puStack_278 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_27c = 0x70da3d;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70da48;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_27c = 0x70da58;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70da63;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_27c = 0x70da70;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70da7b;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_27c = 0x70da88;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70da93;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_27c = 0x70daa0;
  puStack_278 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_278 < 0) {
    iStack_27c = 0x70daab;
    FUN_00878dfb();
  }
  puStack_278 = (undefined4 *)0x4;
  iStack_27c = *(int *)(extraout_ECX + 0x1c) + -0x10;
  iStack_280 = 0x70dabf;
  FUN_0070daec();
  puStack_278 = (undefined4 *)0x0;
  iStack_27c = 0x70dac8;
  FUN_008161f1();
  puStack_278 = *(undefined4 **)(unaff_EBP + -0x4c);
  iStack_27c = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_280 = 0x70dad5;
  FUN_004deee3();
  puStack_278 = (undefined4 *)0x70dadd;
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


