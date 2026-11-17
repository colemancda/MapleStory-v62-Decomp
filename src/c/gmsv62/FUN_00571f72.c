/* FUN_00571f72 - 0x00571f72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00571f72(void)

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
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_b8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  iStack_bc = 0x571f9b;
  FUN_00403191();
  puStack_b8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_bc = 0x571fad;
  FUN_00403191();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar7) {
    puStack_b8 = (undefined4 *)0x80004003;
    iStack_bc = 0x571fc4;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -100);
  iStack_bc = unaff_EBP + -0x84;
  uStack_c0 = 10;
  uStack_c4 = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_d4 = unaff_EBP + -0x1c;
  piStack_c8 = *(int **)(unaff_EBP + 0xc);
  puStack_cc = (undefined *)0x0;
  uStack_d0 = 0;
  uStack_d8 = 0x571fe8;
  FUN_0042a39f();
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x571ff8;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    iStack_bc = 0x572003;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_bc = 0x572010;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    iStack_bc = 0x57201b;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x3c);
  iStack_bc = 0x572027;
  puVar2 = (undefined4 *)FUN_004489f5();
  iStack_bc = *puVar2;
  puStack_b8 = (undefined4 *)0x1;
  uStack_c0 = 0x572033;
  FUN_0040ee87();
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piVar6 == (int *)0x0) {
    puStack_b8 = (undefined4 *)0x80004003;
    iStack_bc = 0x572044;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x1c);
  }
  iVar3 = *piVar6;
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x38) = piVar6;
  puStack_b8 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_cc = (undefined *)0x57205f;
  piStack_c8 = piVar6;
  iVar3 = (**(code **)(iVar3 + 0xfc))();
  if (iVar3 < 0) {
    puStack_cc = &DAT_00963df8;
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_d8 = 0x572071;
    iStack_d4 = iVar3;
    FUN_00878e09();
  }
  puStack_cc = (undefined *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_d0 = 0x57207e;
  puStack_cc = (undefined *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x572089;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_cc = (undefined *)0x572095;
  FUN_00412600();
  puStack_cc = (undefined *)(unaff_EBP + -0x10);
  uStack_d0 = 0x5720a1;
  puVar2 = (undefined4 *)FUN_004489f5();
  uStack_d0 = *puVar2;
  puStack_cc = (undefined *)0x1;
  iStack_d4 = 0x5720ae;
  FUN_0040ee87();
  piStack_dc = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_dc == (int *)0x0) {
    puStack_cc = (undefined *)0x80004003;
    uStack_d0 = 0x5720c3;
    FUN_00878dfb();
    piStack_dc = *(int **)(unaff_EBP + -0x1c);
  }
  iVar3 = *piStack_dc;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x3c) = piStack_dc;
  puStack_cc = *(undefined **)(unaff_EBP + -0x20);
  puStack_e0 = (undefined4 *)0x5720db;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    puStack_e0 = (undefined4 *)&DAT_00963de8;
    uStack_e4 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_ec = 0x5720ed;
    iStack_e8 = iVar3;
    FUN_00878e09();
  }
  puStack_e0 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_e4 = 0x5720fa;
  puStack_e0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_e0 < 0) {
    uStack_e4 = 0x572105;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_e0 = (undefined4 *)0x572111;
  FUN_00412600();
  puStack_e0 = &DAT_00980690;
  uStack_e4 = 0x57211f;
  FUN_00403191();
  puStack_e0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_e4 = 0x57212c;
  FUN_00403191();
  piStack_108 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (piStack_108 == (int *)0x0) {
    puStack_e0 = (undefined4 *)0x80004003;
    uStack_e4 = 0x572141;
    FUN_00878dfb();
    piStack_108 = *(int **)(unaff_EBP + -0x1c);
  }
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_e8 = *(undefined4 *)(unaff_EBP + -0x4c);
  iVar3 = *piStack_108;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x48);
  puStack_e0 = *(undefined4 **)(unaff_EBP + -0x44);
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_100 = 0;
  uStack_f4 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_104 = 0;
  *(int **)(unaff_EBP + -0x3c) = piStack_108;
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x20);
  puStack_10c = (undefined *)0x57216a;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    puStack_10c = &DAT_00963de8;
    piStack_110 = *(int **)(unaff_EBP + -0x3c);
    piStack_118 = (int *)0x57217c;
    puStack_114 = (undefined4 *)iVar3;
    FUN_00878e09();
  }
  puStack_10c = (undefined *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_110 = (int *)0x572189;
  puStack_10c = (undefined *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    piStack_110 = (int *)0x572194;
    FUN_00878dfb();
  }
  puStack_10c = (undefined *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_110 = (int *)0x5721a1;
  puStack_10c = (undefined *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    piStack_110 = (int *)0x5721ac;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_10c = (undefined *)0x80004003;
    piStack_110 = (int *)0x5721bb;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  puStack_10c = (undefined *)0xffffffff;
  puStack_114 = (undefined4 *)0x5721c9;
  piStack_110 = piVar6;
  iStack_11c = (**(code **)(*piVar6 + 0xe0))();
  if (iStack_11c < 0) {
    puStack_114 = (undefined4 *)&DAT_00963df8;
    iStack_120 = 0x5721d9;
    piStack_118 = piVar6;
    FUN_00878e09();
  }
  puStack_114 = (undefined4 *)0x3;
  piStack_118 = (int *)0x0;
  iStack_11c = 0x5721e7;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_114 = (undefined4 *)0x80004003;
    piStack_118 = (int *)0x5721fa;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0xa4);
  piStack_118 = (int *)(unaff_EBP + -0x14);
  iStack_11c = 0x57220d;
  FUN_00425067();
  puStack_114 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_118 = (int *)0x57221d;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x572228;
    FUN_00878dfb();
  }
  puStack_114 = &DAT_00980690;
  piStack_118 = (int *)0x572239;
  FUN_00403191();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_118 = (int *)0x572246;
  FUN_00403191();
  puStack_114 = (undefined4 *)0x0;
  piStack_118 = (int *)0x0;
  iStack_11c = unaff_EBP + -0x94;
  iStack_120 = unaff_EBP + -0x74;
  puStack_12c = (undefined1 *)&puStack_124;
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_124;
  iStack_128 = 0xc25;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_130 = (int *)0x57226f;
  FUN_00679e4e();
  iStack_128 = unaff_EBP + -0xb4;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_12c = (undefined1 *)0x57227f;
  FUN_00405a1d();
  puStack_12c = (undefined1 *)0x572286;
  FUN_00402660();
  puStack_12c = (undefined1 *)0x57228d;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_11c = 0x572298;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar3 != 0) {
    puStack_114 = (undefined4 *)(unaff_EBP + -0x3c);
    piStack_118 = (int *)0x5722ae;
    puStack_114 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_114 < 0) && (puStack_114 != (undefined4 *)0x80004002)) {
      piStack_118 = (int *)0x5722bf;
      FUN_00878dfb();
    }
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_118 = (int *)0x5722cf;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x5722da;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_118 = (int *)0x5722e7;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x5722f2;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_118 = (int *)0x572302;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_114;
  if (iVar3 < 0) {
    piStack_118 = (int *)0x57230d;
    puStack_114 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  puStack_114 = (undefined4 *)0x0;
  piStack_118 = (int *)0x0;
  puStack_124 = (undefined1 *)&iStack_11c;
  *(int **)(unaff_EBP + -0x30) = &iStack_11c;
  iStack_120 = 0x574;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_128 = 0x57232c;
  iStack_11c = (int)puVar2;
  FUN_00679e4e();
  iStack_120 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_124 = (undefined1 *)0x57233c;
  FUN_0040263d();
  puStack_124 = (undefined1 *)0x572343;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_11c = 0x57234e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_114 = (undefined4 *)(unaff_EBP + -0x10);
  piStack_118 = (int *)0x57235d;
  puStack_114 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_114 < 0) && (puStack_114 != (undefined4 *)0x80004002)) {
    piStack_118 = (int *)0x57236e;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_118 = (int *)0x57237b;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    piStack_118 = (int *)0x572386;
    FUN_00878dfb();
  }
  puStack_114 = &DAT_00980690;
  piStack_118 = (int *)0x57238f;
  FUN_00403191();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar6 == (int *)0x0) {
    puStack_114 = (undefined4 *)0x80004003;
    piStack_118 = (int *)0x5723a4;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar6;
  puStack_124 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_11c = *(int *)(unaff_EBP + -0x28);
  iStack_128 = 0;
  piStack_118 = *(int **)(unaff_EBP + -0x24);
  puStack_12c = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x10) = piVar6;
  puStack_114 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_134 = (undefined4 *)0x5723c4;
  piStack_130 = piVar6;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_134 = (undefined4 *)&DAT_00963cc8;
    uStack_138 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_140 = 0x5723d6;
    iStack_13c = iVar3;
    FUN_00878e09();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_138 = 0x5723e3;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_134;
  if (iVar3 < 0) {
    uStack_138 = 0x5723ee;
    puStack_134 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_01;
  }
  puStack_134 = (undefined4 *)0x0;
  uStack_138 = 0;
  puStack_144 = (undefined1 *)&iStack_13c;
  *(int **)(unaff_EBP + -0x30) = &iStack_13c;
  iStack_140 = 0x576;
  uStack_148 = 0x572406;
  iStack_13c = (int)puVar2;
  FUN_00679e4e();
  iStack_140 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_144 = (undefined1 *)0x572416;
  FUN_0040263d();
  puStack_144 = (undefined1 *)0x57241d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_13c = 0x572428;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_134 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_138 = 0x572437;
  puStack_134 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_134 < 0) && (puStack_134 != (undefined4 *)0x80004002)) {
    uStack_138 = 0x572448;
    FUN_00878dfb();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_138 = 0x572455;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    uStack_138 = 0x572460;
    FUN_00878dfb();
  }
  puStack_134 = &DAT_00980690;
  uStack_138 = 0x57246d;
  FUN_00403191();
  piStack_150 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (piStack_150 == (int *)0x0) {
    puStack_134 = (undefined4 *)0x80004003;
    uStack_138 = 0x572482;
    FUN_00878dfb();
    piStack_150 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piStack_150;
  puStack_144 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_140 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_13c = *(int *)(unaff_EBP + -0x28);
  iStack_14c = *(int *)(unaff_EBP + 0xc) + -9;
  uStack_148 = 0;
  uStack_138 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + -0x10) = piStack_150;
  *(int *)(unaff_EBP + -0x38) = iStack_14c;
  puStack_134 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_154 = (undefined4 *)0x5724ab;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_154 = (undefined4 *)&DAT_00963cc8;
    uStack_158 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_160 = 0x5724bd;
    iStack_15c = iVar3;
    FUN_00878e09();
  }
  puStack_154 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_158 = 0x5724ca;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_154;
  if (iVar3 < 0) {
    uStack_158 = 0x5724d5;
    puStack_154 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_02;
  }
  puStack_154 = (undefined4 *)0x0;
  uStack_158 = 0;
  puStack_164 = (undefined1 *)&iStack_15c;
  *(int **)(unaff_EBP + -0x30) = &iStack_15c;
  iStack_160 = 0x57a;
  iStack_168 = 0x5724ed;
  iStack_15c = (int)puVar2;
  FUN_00679e4e();
  iStack_160 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_164 = (undefined1 *)0x5724fd;
  FUN_0040263d();
  puStack_164 = (undefined1 *)0x572504;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_15c = 0x57250f;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  puStack_154 = (undefined4 *)(unaff_EBP + 0xc);
  uStack_158 = 0x57251e;
  puStack_154 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_154 < 0) && (puStack_154 != (undefined4 *)0x80004002)) {
    uStack_158 = 0x57252f;
    FUN_00878dfb();
  }
  puStack_154 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_158 = 0x57253c;
  puStack_154 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_154 < 0) {
    uStack_158 = 0x572547;
    FUN_00878dfb();
  }
  puStack_154 = &DAT_00980690;
  uStack_158 = 0x572554;
  FUN_00403191();
  piStack_170 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (piStack_170 == (int *)0x0) {
    puStack_154 = (undefined4 *)0x80004003;
    uStack_158 = 0x572569;
    FUN_00878dfb();
    piStack_170 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piStack_170;
  puStack_164 = *(undefined1 **)(unaff_EBP + -0x18);
  iStack_160 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_15c = *(int *)(unaff_EBP + -0x28);
  iStack_168 = *(int *)(unaff_EBP + 0x10) + -9;
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_16c = 0;
  *(int **)(unaff_EBP + 0xc) = piStack_170;
  *(int *)(unaff_EBP + 0x10) = iStack_168;
  puStack_154 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_174 = (undefined4 *)0x572592;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_174 = (undefined4 *)&DAT_00963cc8;
    uStack_178 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_17c = iVar3;
    FUN_00878e09();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_178 = 0x5725b1;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_174;
  if (iVar3 < 0) {
    uStack_178 = 0x5725bc;
    puStack_174 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_03;
  }
  puStack_174 = (undefined4 *)0x0;
  uStack_178 = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_17c;
  iStack_17c = (int)puVar2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_17c = 0x5725f6;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  puStack_174 = (undefined4 *)(unaff_EBP + 0xc);
  uStack_178 = 0x572605;
  puStack_174 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_174 < 0) && (puStack_174 != (undefined4 *)0x80004002)) {
    uStack_178 = 0x572616;
    FUN_00878dfb();
  }
  puStack_174 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_178 = 0x572623;
  puStack_174 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_174 < 0) {
    uStack_178 = 0x57262e;
    FUN_00878dfb();
  }
  puStack_174 = &DAT_00980690;
  uStack_178 = 0x57263b;
  FUN_00403191();
  piVar6 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar6 == (int *)0x0) {
    puStack_174 = (undefined4 *)0x80004003;
    uStack_178 = 0x572650;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piVar6;
  iStack_17c = *(int *)(unaff_EBP + -0x28);
  uStack_178 = *(undefined4 *)(unaff_EBP + -0x24);
  *(int **)(unaff_EBP + 0xc) = piVar6;
  puStack_174 = *(undefined4 **)(unaff_EBP + -0x20);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_198 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_19c = iVar3;
    FUN_00878e09();
  }
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x572693;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x57269e;
    FUN_00878dfb();
    iVar3 = extraout_ECX_04;
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x575);
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_19c = 0x5726da;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x5726e9;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x5726fa;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x572707;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x572712;
    FUN_00878dfb();
    iVar3 = extraout_ECX_05;
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x57b);
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_19c = 0x572749;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x572758;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x572769;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x572776;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x572781;
    FUN_00878dfb();
    iVar3 = extraout_ECX_06;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 9;
  if (9 < *(int *)(unaff_EBP + -0x38)) {
    do {
      iStack_198 = 0x57279d;
      FUN_00403191();
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (piVar6 == (int *)0x0) {
        iStack_198 = 0x5727b2;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      iStack_19c = *(int *)(unaff_EBP + -0x28);
      iStack_198 = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,*(undefined4 *)(unaff_EBP + 0xc),0,
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x2c);
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
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                         *(undefined4 *)(unaff_EBP + -0x44));
      if (iVar3 < 0) {
        iStack_198 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_19c = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_198 = 0x572863;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_198 = 0x57286e;
        FUN_00878dfb();
        iVar3 = extraout_ECX_07;
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x38));
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x578);
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_19c = 0x5728bc;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x5728cb;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x5728dc;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x5728e9;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x5728f4;
    FUN_00878dfb();
    iVar3 = extraout_ECX_08;
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x577);
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_19c = 0x57292b;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x57293a;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x57294b;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x572958;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_198 = 0x572963;
    FUN_00878dfb();
    iVar3 = extraout_ECX_09;
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 9;
  if (9 < *(int *)(unaff_EBP + 0x10)) {
    do {
      iStack_198 = 0x572979;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      iStack_198 = unaff_EBP + -0x50;
      iStack_19c = 0x572987;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_198 = 0x572993;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (piVar6 == (int *)0x0) {
        iStack_198 = 0x5729a8;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      iStack_19c = *(int *)(unaff_EBP + -0x4c);
      iStack_198 = *(undefined4 *)(unaff_EBP + -0x48);
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,0,*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x50));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar3 = FUN_00402e32(unaff_EBP + -0x2c,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      if (piVar6 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar6;
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20));
      if (iVar3 < 0) {
        iStack_198 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_19c = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_198 = 0x572a70;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_198 = 0x572a7b;
        FUN_00878dfb();
        iVar3 = extraout_ECX_10;
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + 0x10));
  }
  iStack_198 = 0;
  *(int **)(unaff_EBP + -0x30) = &iStack_19c;
  iStack_19c = iVar3;
  FUN_00679e4e(&iStack_19c,0x579);
  iVar3 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_19c = 0x572ac9;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_198 = 0x572ad8;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x572ae9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_198 = 0x572af6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x572b01;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 9;
  if (9 < *(int *)(unaff_EBP + -0x38)) {
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 9;
      if (9 < *(int *)(unaff_EBP + 0x10)) {
        do {
          iStack_198 = 0x572b23;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
          iStack_198 = unaff_EBP + -0x2c;
          iStack_19c = 0x572b31;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_198 = 0x572b3d;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          if (piVar6 == (int *)0x0) {
            iStack_198 = 0x572b52;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + -0x14);
          }
          iVar3 = *piVar6;
          iStack_19c = *(int *)(unaff_EBP + -0x28);
          iStack_198 = *(undefined4 *)(unaff_EBP + -0x24);
          *(int **)(unaff_EBP + -0x30) = piVar6;
          iVar3 = (**(code **)(iVar3 + 0x80))
                            (piVar6,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x18),
                             *(undefined4 *)(unaff_EBP + -0x2c));
          if (iVar3 < 0) {
            iStack_198 = *(undefined4 *)(unaff_EBP + -0x30);
            iStack_19c = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_198 = 0x572b95;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_198 = 0x572ba0;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + 0x10));
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + -0x38));
  }
  piVar6 = *(int **)(unaff_EBP + -0x1c);
  piVar1 = *(int **)(unaff_EBP + 8);
  *piVar1 = (int)piVar6;
  if (piVar6 != (int *)0x0) {
    iStack_198 = 0x572bd3;
    (**(code **)(*piVar6 + 4))();
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    iStack_198 = 0x572beb;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_198 = 0x572bfc;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    iStack_198 = 0x572c0d;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_198 = 0x572c1e;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_198 = 0x572c2e;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar1;
}


