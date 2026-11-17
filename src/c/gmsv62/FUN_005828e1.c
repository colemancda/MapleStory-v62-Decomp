/* FUN_005828e1 - 0x005828e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_005828e1(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int unaff_EBP;
  bool bVar7;
  int iStack_19c;
  int iStack_198;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 *puStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 *puStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  int *piStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  int iStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 *puStack_134;
  int *piStack_130;
  undefined1 *puStack_12c;
  int iStack_128;
  undefined1 *puStack_124;
  int iStack_120;
  int iStack_11c;
  int *piStack_118;
  undefined4 *puStack_114;
  int *piStack_110;
  undefined *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 *puStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined *puStack_cc;
  int *piStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_b8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  iStack_bc = 0x58290d;
  FUN_00403191();
  puStack_b8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_bc = 0x58291c;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar7) {
    puStack_b8 = (undefined4 *)0x80004003;
    iStack_bc = 0x582933;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x94);
  iStack_bc = unaff_EBP + -0x74;
  iStack_c4 = (-(uint)(*(int *)(unaff_EBP + 0x14) != 0) & 0xfffffff0) + 0x10 +
              *(int *)(unaff_EBP + 0x10);
  uStack_c0 = 10;
  piStack_c8 = (int *)((-(uint)(*(int *)(unaff_EBP + 0x14) != 0) & 10) + *(int *)(unaff_EBP + 0xc));
  puStack_cc = (undefined *)0x0;
  uStack_d0 = 0;
  iStack_d4 = unaff_EBP + -0x20;
  uStack_d8 = 0x582970;
  FUN_0042a39f();
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x58297d;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    iStack_bc = 0x582988;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_bc = 0x582998;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    iStack_bc = 0x5829a3;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x3c);
  iStack_bc = 0x5829af;
  puVar2 = (undefined4 *)FUN_004489f5();
  iStack_bc = *puVar2;
  puStack_b8 = (undefined4 *)0x1;
  uStack_c0 = 0x5829bb;
  FUN_0040ee87();
  piVar6 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar6 == (int *)0x0) {
    puStack_b8 = (undefined4 *)0x80004003;
    iStack_bc = 0x5829cc;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x20);
  }
  iVar3 = *piVar6;
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x28) = piVar6;
  puStack_b8 = *(undefined4 **)(unaff_EBP + -0x2c);
  puStack_cc = (undefined *)0x5829e7;
  piStack_c8 = piVar6;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    puStack_cc = &DAT_00963df8;
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_d8 = 0x5829f9;
    iStack_d4 = iVar3;
    FUN_00878e09();
  }
  puStack_cc = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_d0 = 0x582a06;
  puStack_cc = (undefined *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x582a11;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_cc = (undefined *)0x582a1d;
  FUN_00412600();
  puStack_cc = (undefined *)(unaff_EBP + -0x10);
  uStack_d0 = 0x582a29;
  puVar2 = (undefined4 *)FUN_004489f5();
  uStack_d0 = *puVar2;
  puStack_cc = (undefined *)0x1;
  iStack_d4 = 0x582a36;
  FUN_0040ee87();
  piStack_dc = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_dc == (int *)0x0) {
    puStack_cc = (undefined *)0x80004003;
    uStack_d0 = 0x582a4b;
    FUN_00878dfb();
    piStack_dc = *(int **)(unaff_EBP + -0x20);
  }
  iVar3 = *piStack_dc;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x3c) = piStack_dc;
  puStack_cc = *(undefined **)(unaff_EBP + -0x2c);
  puStack_e0 = (undefined4 *)0x582a63;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    puStack_e0 = (undefined4 *)&DAT_00963de8;
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_ec = 0x582a75;
    iStack_e8 = iVar3;
    FUN_00878e09();
  }
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_e4 = 0x582a82;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    uStack_e4 = 0x582a8d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_e0 = (undefined4 *)0x582a99;
  FUN_00412600();
  puStack_e0 = &DAT_00980690;
  uStack_e4 = 0x582aa7;
  FUN_00403191();
  puStack_e0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_e4 = 0x582ab4;
  FUN_00403191();
  piStack_108 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piStack_108 == (int *)0x0) {
    puStack_e0 = (undefined4 *)0x80004003;
    uStack_e4 = 0x582ac9;
    FUN_00878dfb();
    piStack_108 = *(int **)(unaff_EBP + -0x20);
  }
  uStack_ec = *(undefined4 *)(unaff_EBP + -100);
  iStack_e8 = *(undefined4 *)(unaff_EBP + -0x60);
  iVar3 = *piStack_108;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x5c);
  puStack_e0 = *(undefined4 **)(unaff_EBP + -0x58);
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_100 = 0;
  uStack_f4 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_104 = 0;
  *(int **)(unaff_EBP + -0x3c) = piStack_108;
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_10c = (undefined *)0x582af2;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    puStack_10c = &DAT_00963de8;
    piStack_110 = *(int **)(unaff_EBP + -0x3c);
    piStack_118 = (int *)0x582b04;
    puStack_114 = (undefined4 *)iVar3;
    FUN_00878e09();
  }
  puStack_10c = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_110 = (int *)0x582b11;
  puStack_10c = (undefined *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    piStack_110 = (int *)0x582b1c;
    FUN_00878dfb();
  }
  puStack_10c = (undefined *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_110 = (int *)0x582b29;
  puStack_10c = (undefined *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    piStack_110 = (int *)0x582b34;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_10c = (undefined *)0x80004003;
    piStack_110 = (int *)0x582b43;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x20);
  puStack_10c = (undefined *)0xffffffff;
  puStack_114 = (undefined4 *)0x582b51;
  piStack_110 = piVar6;
  iStack_11c = (**(code **)(*piVar6 + 0xe0))();
  if (iStack_11c < 0) {
    puStack_114 = (undefined4 *)&DAT_00963df8;
    iStack_120 = 0x582b61;
    piStack_118 = piVar6;
    FUN_00878e09();
  }
  puStack_114 = (undefined4 *)0x3;
  piStack_118 = (int *)0x0;
  iStack_11c = 0x582b6c;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_114 = (undefined4 *)0x80004003;
    piStack_118 = (int *)0x582b7f;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -100);
  piStack_118 = (int *)(unaff_EBP + -0x14);
  iStack_11c = 0x582b8f;
  FUN_00425067();
  puStack_114 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_118 = (int *)0x582b9c;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x582ba7;
    FUN_00878dfb();
  }
  puStack_114 = &DAT_00980690;
  piStack_118 = (int *)0x582bb8;
  FUN_00403191();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_118 = (int *)0x582bc8;
  FUN_00403191();
  puStack_114 = (undefined4 *)0x0;
  piStack_118 = (int *)0x0;
  iStack_11c = unaff_EBP + -0x84;
  iStack_120 = unaff_EBP + -0xa4;
  puStack_12c = (undefined1 *)&puStack_124;
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_124;
  iStack_128 = 0xc25;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x582bf4;
  FUN_00679e4e();
  iStack_128 = unaff_EBP + -0xb4;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_12c = (undefined1 *)0x582c04;
  FUN_00405a1d();
  puStack_12c = (undefined1 *)0x582c0b;
  FUN_00402660();
  puStack_12c = (undefined1 *)0x582c12;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_11c = 0x582c1d;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar3 != 0) {
    puStack_114 = (undefined4 *)(unaff_EBP + -0x3c);
    piStack_118 = (int *)0x582c33;
    puStack_114 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_114 < 0) && (puStack_114 != (undefined4 *)0x80004002)) {
      piStack_118 = (int *)0x582c44;
      FUN_00878dfb();
    }
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_118 = (int *)0x582c54;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x582c5f;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_118 = (int *)0x582c6f;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x582c7a;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_118 = (int *)0x582c8a;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_114;
  if (iVar3 < 0) {
    piStack_118 = (int *)0x582c95;
    puStack_114 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  puStack_114 = (undefined4 *)0x0;
  piStack_118 = (int *)0x0;
  puStack_124 = (undefined1 *)&iStack_11c;
  *(int **)(unaff_EBP + -0x24) = &iStack_11c;
  iStack_120 = 0x574;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_128 = 0x582cb4;
  iStack_11c = (int)puVar2;
  FUN_00679e4e();
  iStack_120 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_124 = (undefined1 *)0x582cc4;
  FUN_0040263d();
  puStack_124 = (undefined1 *)0x582ccb;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_11c = 0x582cd6;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_114 = (undefined4 *)(unaff_EBP + -0x10);
  piStack_118 = (int *)0x582ce5;
  puStack_114 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_114 < 0) && (puStack_114 != (undefined4 *)0x80004002)) {
    piStack_118 = (int *)0x582cf6;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_118 = (int *)0x582d03;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x582d0e;
    FUN_00878dfb();
  }
  puStack_114 = &DAT_00980690;
  piStack_118 = (int *)0x582d17;
  FUN_00403191();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar6 == (int *)0x0) {
    puStack_114 = (undefined4 *)0x80004003;
    piStack_118 = (int *)0x582d2c;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar6;
  puStack_124 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_11c = *(int *)(unaff_EBP + -0x34);
  iStack_128 = 0;
  piStack_118 = *(int **)(unaff_EBP + -0x30);
  puStack_12c = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x10) = piVar6;
  puStack_114 = *(undefined4 **)(unaff_EBP + -0x2c);
  puStack_134 = (undefined4 *)0x582d4c;
  piStack_130 = piVar6;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_134 = (undefined4 *)&DAT_00963cc8;
    uStack_138 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_140 = 0x582d5e;
    iStack_13c = iVar3;
    FUN_00878e09();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_138 = 0x582d6b;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_134;
  if (iVar3 < 0) {
    uStack_138 = 0x582d76;
    puStack_134 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_01;
  }
  puStack_134 = (undefined4 *)0x0;
  uStack_138 = 0;
  puStack_144 = (undefined1 *)&iStack_13c;
  *(int **)(unaff_EBP + -0x24) = &iStack_13c;
  iStack_140 = 0x576;
  uStack_148 = 0x582d8e;
  iStack_13c = (int)puVar2;
  FUN_00679e4e();
  iStack_140 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_144 = (undefined1 *)0x582d9e;
  FUN_0040263d();
  puStack_144 = (undefined1 *)0x582da5;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_13c = 0x582db0;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_134 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_138 = 0x582dbf;
  puStack_134 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_134 < 0) && (puStack_134 != (undefined4 *)0x80004002)) {
    uStack_138 = 0x582dd0;
    FUN_00878dfb();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_138 = 0x582ddd;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    uStack_138 = 0x582de8;
    FUN_00878dfb();
  }
  puStack_134 = &DAT_00980690;
  uStack_138 = 0x582df5;
  FUN_00403191();
  piStack_150 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (piStack_150 == (int *)0x0) {
    puStack_134 = (undefined4 *)0x80004003;
    uStack_138 = 0x582e0a;
    FUN_00878dfb();
    piStack_150 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piStack_150;
  puStack_144 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_140 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_13c = *(int *)(unaff_EBP + -0x34);
  iStack_14c = *(int *)(unaff_EBP + 0xc) + -9;
  uStack_148 = 0;
  uStack_138 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x10) = piStack_150;
  *(int *)(unaff_EBP + -0x28) = iStack_14c;
  puStack_134 = *(undefined4 **)(unaff_EBP + -0x2c);
  puStack_154 = (undefined4 *)0x582e33;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_154 = (undefined4 *)&DAT_00963cc8;
    uStack_158 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_160 = 0x582e45;
    iStack_15c = iVar3;
    FUN_00878e09();
  }
  puStack_154 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_158 = 0x582e52;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_154;
  if (iVar3 < 0) {
    uStack_158 = 0x582e5d;
    puStack_154 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_02;
  }
  puStack_154 = (undefined4 *)0x0;
  uStack_158 = 0;
  puStack_164 = (undefined1 *)&iStack_15c;
  *(int **)(unaff_EBP + -0x24) = &iStack_15c;
  iStack_160 = 0x57a;
  iStack_168 = 0x582e75;
  iStack_15c = (int)puVar2;
  FUN_00679e4e();
  iStack_160 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_164 = (undefined1 *)0x582e85;
  FUN_0040263d();
  puStack_164 = (undefined1 *)0x582e8c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_15c = 0x582e97;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  puStack_154 = (undefined4 *)(unaff_EBP + 0xc);
  uStack_158 = 0x582ea6;
  puStack_154 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_154 < 0) && (puStack_154 != (undefined4 *)0x80004002)) {
    uStack_158 = 0x582eb7;
    FUN_00878dfb();
  }
  puStack_154 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_158 = 0x582ec4;
  puStack_154 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_154 < 0) {
    uStack_158 = 0x582ecf;
    FUN_00878dfb();
  }
  puStack_154 = &DAT_00980690;
  uStack_158 = 0x582edc;
  FUN_00403191();
  piStack_170 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (piStack_170 == (int *)0x0) {
    puStack_154 = (undefined4 *)0x80004003;
    uStack_158 = 0x582ef1;
    FUN_00878dfb();
    piStack_170 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piStack_170;
  puStack_164 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_160 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_15c = *(int *)(unaff_EBP + -0x34);
  iStack_168 = *(int *)(unaff_EBP + 0x10) + -9;
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_16c = 0;
  *(int **)(unaff_EBP + 0xc) = piStack_170;
  *(int *)(unaff_EBP + 0x10) = iStack_168;
  puStack_154 = *(undefined4 **)(unaff_EBP + -0x2c);
  puStack_174 = (undefined4 *)0x582f1a;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_174 = (undefined4 *)&DAT_00963cc8;
    uStack_178 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_17c = iVar3;
    FUN_00878e09();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_178 = 0x582f39;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_174;
  if (iVar3 < 0) {
    uStack_178 = 0x582f44;
    puStack_174 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_03;
  }
  puStack_174 = (undefined4 *)0x0;
  uStack_178 = 0;
  *(int **)(unaff_EBP + -0x24) = &iStack_17c;
  iStack_17c = (int)puVar2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_17c = 0x582f7e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  puStack_174 = (undefined4 *)(unaff_EBP + 0xc);
  uStack_178 = 0x582f8d;
  puStack_174 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
    uStack_178 = 0x582f9e;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_178 = 0x582fab;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x582fb6;
    FUN_00878dfb();
  }
  puStack_174 = &DAT_00980690;
  uStack_178 = 0x582fc3;
  FUN_00403191();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar6 == (int *)0x0) {
    puStack_174 = (undefined4 *)0x80004003;
    uStack_178 = 0x582fd8;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar6;
  iStack_17c = *(int *)(unaff_EBP + -0x34);
  uStack_178 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + 0xc) = piVar6;
  puStack_174 = *(undefined4 **)(unaff_EBP + -0x2c);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_198 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_19c = iVar3;
    FUN_00878e09();
  }
  iVar3 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x58301b;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x583026;
    FUN_00878dfb();
    iVar3 = extraout_ECX_04;
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x24) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x575);
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_19c = 0x583062;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x583071;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x583082;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x58308f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x58309a;
    FUN_00878dfb();
    iVar3 = extraout_ECX_05;
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x24) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x57b);
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_19c = 0x5830d1;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x5830e0;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x5830f1;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x5830fe;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x583109;
    FUN_00878dfb();
    iVar3 = extraout_ECX_06;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 9;
  if (9 < *(int *)(unaff_EBP + -0x28)) {
    do {
      iStack_198 = 0x583125;
      FUN_00403191();
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (piVar6 == (int *)0x0) {
        iStack_198 = 0x58313a;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      iStack_19c = *(int *)(unaff_EBP + -0x34);
      iStack_198 = *(undefined4 *)(unaff_EBP + -0x30);
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,*(undefined4 *)(unaff_EBP + 0xc),0,
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x38));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (piVar6 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40));
      if (iVar3 < 0) {
        iStack_198 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_19c = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x4c;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_198 = 0x5831eb;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_198 = 0x5831f6;
        FUN_00878dfb();
        iVar3 = extraout_ECX_07;
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x28));
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x24) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x578);
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_19c = 0x583244;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x583253;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x583264;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x583271;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x58327c;
    FUN_00878dfb();
    iVar3 = extraout_ECX_08;
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x24) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x577);
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_19c = 0x5832b3;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x5832c2;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x5832d3;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x5832e0;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x5832eb;
    FUN_00878dfb();
    iVar3 = extraout_ECX_09;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 9;
  if (9 < *(int *)(unaff_EBP + 0x10)) {
    do {
      iStack_198 = 0x583304;
      FUN_00403191();
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (piVar6 == (int *)0x0) {
        iStack_198 = 0x583319;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      iStack_19c = *(int *)(unaff_EBP + -0x48);
      iStack_198 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,0,*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      FUN_00403191(&DAT_00980690);
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (piVar6 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar3 < 0) {
        iStack_198 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_19c = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_198 = 0x5833ca;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_198 = 0x5833d5;
        FUN_00878dfb();
        iVar3 = extraout_ECX_10;
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + 0x10));
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x24) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x579);
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_19c = 0x583423;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x583432;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x583443;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x583450;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x58345b;
    FUN_00878dfb();
    iVar3 = extraout_ECX_11;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 9;
  if (9 < *(int *)(unaff_EBP + -0x28)) {
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 9;
      if (9 < *(int *)(unaff_EBP + 0x10)) {
        do {
          iStack_198 = 0x58347d;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
          iStack_198 = unaff_EBP + -0x38;
          iStack_19c = 0x58348b;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_198 = 0x583497;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          if (piVar6 == (int *)0x0) {
            iStack_198 = 0x5834ac;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + -0x14);
          }
          iVar3 = *piVar6;
          iStack_19c = *(int *)(unaff_EBP + -0x34);
          iStack_198 = *(undefined4 *)(unaff_EBP + -0x30);
          *(int **)(unaff_EBP + -0x24) = piVar6;
          iVar3 = (**(code **)(iVar3 + 0x80))
                            (piVar6,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x18),
                             *(undefined4 *)(unaff_EBP + -0x38));
          if (iVar3 < 0) {
            iStack_198 = *(undefined4 *)(unaff_EBP + -0x24);
            iStack_19c = iVar3;
            FUN_00878e09();
          }
          iVar3 = unaff_EBP + -0x38;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_198 = 0x5834ef;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_198 = 0x5834fa;
            FUN_00878dfb();
            iVar3 = extraout_ECX_12;
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + 0x10));
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x28));
  }
  iStack_198 = 0;
  iStack_19c = iVar3;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    *(int **)(unaff_EBP + 0xc) = &iStack_19c;
    FUN_00679e4e(&iStack_19c,0x57e);
    iVar3 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iStack_19c = 0x583644;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x14) = uVar4;
    iStack_198 = 0x583653;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_198 = 0x583664;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_198 = 0x583671;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_198 = 0x58367c;
      FUN_00878dfb();
    }
    iStack_198 = 0x583686;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_198 = unaff_EBP + -0x38;
    iStack_19c = 0x583694;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_198 = 0x5836a0;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    if (piVar6 == (int *)0x0) {
      iStack_198 = 0x5836b5;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar6;
    iStack_19c = *(int *)(unaff_EBP + -0x34);
    iStack_198 = *(undefined4 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + 0x14) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar6,8,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + -0x18)
                       ,*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
  }
  else {
    *(int **)(unaff_EBP + 0xc) = &iStack_19c;
    FUN_00679e4e(&iStack_19c,0x57d);
    iVar3 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_19c = 0x583560;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x14) = uVar4;
    iStack_198 = 0x58356f;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_198 = 0x583580;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_198 = 0x58358d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_198 = 0x583598;
      FUN_00878dfb();
    }
    iStack_198 = 0x5835a2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_198 = unaff_EBP + -0x38;
    iStack_19c = 0x5835b0;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_198 = 0x5835bc;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (piVar6 == (int *)0x0) {
      iStack_198 = 0x5835d1;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piVar6;
    iStack_19c = *(int *)(unaff_EBP + -0x34);
    iStack_198 = *(undefined4 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + 0x14) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar6,*(undefined4 *)(unaff_EBP + -0x28),9,
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0x14),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
  }
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  piVar6 = *(int **)(unaff_EBP + -0x20);
  piVar1 = *(int **)(unaff_EBP + 8);
  *piVar1 = (int)piVar6;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6);
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 1;
  piVar6 = *(int **)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  piVar6 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  piVar6 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar1;
}


