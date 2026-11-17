/* FUN_006b70a7 - 0x006b70a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b70a7(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int unaff_EBP;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 *puStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined1 *puStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  int *piStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined1 *puStack_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  int *piStack_154;
  undefined1 *puStack_150;
  int iStack_14c;
  undefined1 *puStack_148;
  int iStack_144;
  int iStack_140;
  int *piStack_13c;
  undefined4 *puStack_138;
  int *piStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined *puStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined4 *puStack_f4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  puStack_f4 = (undefined4 *)0x3af;
  piStack_f8 = (int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_fc = 0x6b70da;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_fc = *puVar2;
  puStack_f4 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_100 = 0x6b70eb;
  piStack_f8 = (int *)(extraout_ECX + 0x60);
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_f4 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    piStack_f8 = (int *)0x6b7101;
    FUN_00403384();
  }
  puStack_f4 = &DAT_00980690;
  piStack_f8 = (int *)0x6b7110;
  FUN_00403191();
  puStack_f4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_f8 = (int *)0x6b711d;
  FUN_00403191();
  iVar3 = *(int *)(extraout_ECX + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar3 == 0) {
    puStack_f4 = (undefined4 *)0x80004003;
    piStack_f8 = (int *)0x6b712f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  piStack_11c = *(int **)(iVar3 + 0x60);
  uStack_114 = *(undefined4 *)(iVar3 + 0x20);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x4c);
  piStack_f8 = *(int **)(unaff_EBP + -0x48);
  puStack_f4 = *(undefined4 **)(unaff_EBP + -0x44);
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_10c = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 0x1c);
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar3 = *piStack_11c;
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x18) = piStack_11c;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x24);
  puStack_120 = (undefined *)0x6b7163;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_120 = &DAT_00963cc8;
    uStack_124 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_12c = 0x6b7175;
    iStack_128 = iVar3;
    FUN_00878e09();
  }
  puStack_120 = (undefined *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_124 = 0x6b7182;
  puStack_120 = (undefined *)FUN_00402bc3();
  if ((int)puStack_120 < 0) {
    uStack_124 = 0x6b718d;
    FUN_00878dfb();
  }
  puStack_120 = (undefined *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_124 = 0x6b7199;
  puStack_120 = (undefined *)FUN_00402bc3();
  if ((int)puStack_120 < 0) {
    uStack_124 = 0x6b71a4;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar5 = *(int *)(iVar3 + 0x60);
  *(int *)(unaff_EBP + -0x10) = iVar3 + 0x60;
  if (iVar5 == 0) {
    puStack_120 = (undefined *)0x80004003;
    uStack_124 = 0x6b71bc;
    FUN_00878dfb();
  }
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
  uStack_124 = *(undefined4 *)(iVar3 + 0x20);
  iStack_128 = *(undefined4 *)(iVar3 + 0x1c);
  puStack_120 = (undefined *)0xffffff;
  uStack_12c = 0;
  uStack_130 = 0;
  puStack_138 = (undefined4 *)0x6b71d9;
  piStack_134 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    puStack_138 = (undefined4 *)&DAT_00963cc8;
    iStack_144 = 0x6b71e9;
    iStack_140 = iVar3;
    piStack_13c = piVar1;
    FUN_00878e09();
  }
  puStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x6b71fa;
  FUN_00403191();
  puStack_138 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_13c = (int *)0x6b7207;
  FUN_00403191();
  puStack_138 = (undefined4 *)0x0;
  piStack_13c = (int *)0x0;
  iStack_140 = unaff_EBP + -0xb0;
  iStack_144 = unaff_EBP + -0x70;
  puStack_150 = (undefined1 *)&puStack_148;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_148;
  iStack_14c = 0x10e4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_154 = (int *)0x6b7230;
  FUN_00679e4e();
  iStack_14c = unaff_EBP + -0xd0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_150 = (undefined1 *)0x6b7240;
  FUN_00405a1d();
  puStack_150 = (undefined1 *)0x6b7247;
  FUN_00402660();
  puStack_150 = (undefined1 *)0x6b724e;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_140 = 0x6b7259;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar3 != 0) {
    puStack_138 = (undefined4 *)(unaff_EBP + -0x58);
    piStack_13c = (int *)0x6b726f;
    puStack_138 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_138 < 0) && (puStack_138 != (undefined4 *)0x80004002)) {
      piStack_13c = (int *)0x6b7280;
      FUN_00878dfb();
    }
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_13c = (int *)0x6b7290;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b729b;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_13c = (int *)0x6b72a8;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b72b3;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_13c = (int *)0x6b72c3;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b72ce;
    FUN_00878dfb();
  }
  puStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x6b72da;
  FUN_00403191();
  puStack_138 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_13c = (int *)0x6b72ea;
  FUN_00403191();
  puStack_138 = (undefined4 *)0x0;
  piStack_13c = (int *)0x0;
  iStack_140 = unaff_EBP + -0xc0;
  iStack_144 = unaff_EBP + -0xa0;
  puStack_150 = (undefined1 *)&puStack_148;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_148;
  iStack_14c = 0x10e5;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_154 = (int *)0x6b7311;
  FUN_00679e4e();
  iStack_14c = unaff_EBP + -0xe0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_150 = (undefined1 *)0x6b7321;
  FUN_00405a1d();
  puStack_150 = (undefined1 *)0x6b7328;
  FUN_00402660();
  puStack_150 = (undefined1 *)0x6b732f;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_140 = 0x6b733a;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x5c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar3 != 0) {
    puStack_138 = (undefined4 *)(unaff_EBP + -0x5c);
    piStack_13c = (int *)0x6b7350;
    puStack_138 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_138 < 0) && (puStack_138 != (undefined4 *)0x80004002)) {
      piStack_13c = (int *)0x6b7361;
      FUN_00878dfb();
    }
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_13c = (int *)0x6b7371;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b737c;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_13c = (int *)0x6b738c;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b7397;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_13c = (int *)0x6b73a7;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b73b2;
    FUN_00878dfb();
  }
  puStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x6b73be;
  FUN_00403191();
  puStack_138 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_13c = (int *)0x6b73cb;
  FUN_00403191();
  puStack_138 = (undefined4 *)0x0;
  piStack_13c = (int *)0x0;
  iStack_140 = unaff_EBP + -0x90;
  iStack_144 = unaff_EBP + -0x80;
  puStack_150 = (undefined1 *)&puStack_148;
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_148;
  iStack_14c = 0x10e6;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_154 = (int *)0x6b73ef;
  FUN_00679e4e();
  iStack_14c = unaff_EBP + -0xf0;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_150 = (undefined1 *)0x6b73ff;
  FUN_00405a1d();
  puStack_150 = (undefined1 *)0x6b7406;
  FUN_00402660();
  puStack_150 = (undefined1 *)0x6b740d;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_140 = 0x6b7418;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (iVar3 != 0) {
    puStack_138 = (undefined4 *)(unaff_EBP + -0x54);
    piStack_13c = (int *)0x6b742e;
    puStack_138 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_138 < 0) && (puStack_138 != (undefined4 *)0x80004002)) {
      piStack_13c = (int *)0x6b743f;
      FUN_00878dfb();
    }
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0xf0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_13c = (int *)0x6b744f;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b745a;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_13c = (int *)0x6b7467;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b7472;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_13c = (int *)0x6b7482;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_138;
  if (iVar3 < 0) {
    piStack_13c = (int *)0x6b748d;
    puStack_138 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  puStack_138 = (undefined4 *)0x0;
  piStack_13c = (int *)0x0;
  puStack_148 = (undefined1 *)&iStack_140;
  *(int **)(unaff_EBP + -0x20) = &iStack_140;
  iStack_144 = 0xea2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_14c = 0x6b74ac;
  iStack_140 = (int)puVar2;
  FUN_00679e4e();
  iStack_144 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_148 = (undefined1 *)0x6b74bc;
  FUN_0040263d();
  puStack_148 = (undefined1 *)0x6b74c3;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_140 = 0x6b74ce;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  puStack_138 = (undefined4 *)(unaff_EBP + -0x18);
  piStack_13c = (int *)0x6b74dd;
  puStack_138 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_138 < 0) && (puStack_138 != (undefined4 *)0x80004002)) {
    piStack_13c = (int *)0x6b74ee;
    FUN_00878dfb();
  }
  puStack_138 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  piStack_13c = (int *)0x6b74fb;
  puStack_138 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_138 < 0) {
    piStack_13c = (int *)0x6b7506;
    FUN_00878dfb();
  }
  puStack_138 = &DAT_00980690;
  piStack_13c = (int *)0x6b750f;
  FUN_00403191();
  iVar3 = **(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar3 == 0) {
    puStack_138 = (undefined4 *)0x80004003;
    piStack_13c = (int *)0x6b7524;
    FUN_00878dfb();
  }
  puStack_148 = *(undefined1 **)(unaff_EBP + -0x1c);
  iStack_144 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_140 = *(int *)(unaff_EBP + -0x2c);
  iStack_14c = 0;
  piStack_154 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
  iVar3 = *piStack_154;
  piStack_13c = *(int **)(unaff_EBP + -0x28);
  puStack_150 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x10) = piStack_154;
  puStack_138 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_158 = (undefined4 *)0x6b7549;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_158 = (undefined4 *)&DAT_00963cc8;
    uStack_15c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_164 = 0x6b755b;
    iStack_160 = iVar3;
    FUN_00878e09();
  }
  puStack_158 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_15c = 0x6b7568;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_158;
  if (iVar3 < 0) {
    uStack_15c = 0x6b7573;
    puStack_158 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_01;
  }
  puStack_158 = (undefined4 *)0x0;
  uStack_15c = 0;
  puStack_168 = (undefined1 *)&iStack_160;
  *(int **)(unaff_EBP + -0x20) = &iStack_160;
  iStack_164 = 0xea3;
  uStack_16c = 0x6b758b;
  iStack_160 = (int)puVar2;
  FUN_00679e4e();
  iStack_164 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_168 = (undefined1 *)0x6b759b;
  FUN_0040263d();
  puStack_168 = (undefined1 *)0x6b75a2;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_160 = 0x6b75ad;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_158 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_15c = 0x6b75bc;
  puStack_158 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_158 < 0) && (puStack_158 != (undefined4 *)0x80004002)) {
    uStack_15c = 0x6b75cd;
    FUN_00878dfb();
  }
  puStack_158 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_15c = 0x6b75da;
  puStack_158 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_158 < 0) {
    uStack_15c = 0x6b75e5;
    FUN_00878dfb();
  }
  puStack_158 = &DAT_00980690;
  uStack_15c = 0x6b75f2;
  FUN_00403191();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar3 == 0) {
    puStack_158 = (undefined4 *)0x80004003;
    uStack_15c = 0x6b760a;
    FUN_00878dfb();
  }
  piStack_174 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
  iVar3 = *piStack_174;
  puStack_168 = *(undefined1 **)(unaff_EBP + -0x1c);
  iStack_164 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_160 = *(int *)(unaff_EBP + -0x2c);
  uStack_16c = 0;
  iStack_170 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) + -6;
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = piStack_174;
  puStack_158 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_178 = (undefined4 *)0x6b7633;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_178 = (undefined4 *)&DAT_00963cc8;
    uStack_17c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_184 = 0x6b7645;
    iStack_180 = iVar3;
    FUN_00878e09();
  }
  puStack_178 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_17c = 0x6b7652;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_178;
  if (iVar3 < 0) {
    uStack_17c = 0x6b765d;
    puStack_178 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_02;
  }
  puStack_178 = (undefined4 *)0x0;
  uStack_17c = 0;
  puStack_188 = (undefined1 *)&iStack_180;
  *(int **)(unaff_EBP + -0x20) = &iStack_180;
  iStack_184 = 0xea2;
  iStack_18c = 0x6b7675;
  iStack_180 = (int)puVar2;
  FUN_00679e4e();
  iStack_184 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_188 = (undefined1 *)0x6b7685;
  FUN_0040263d();
  puStack_188 = (undefined1 *)0x6b768c;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_180 = 0x6b7697;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_178 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_17c = 0x6b76a6;
  puStack_178 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_178 < 0) && (puStack_178 != (undefined4 *)0x80004002)) {
    uStack_17c = 0x6b76b7;
    FUN_00878dfb();
  }
  puStack_178 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_17c = 0x6b76c4;
  puStack_178 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    uStack_17c = 0x6b76cf;
    FUN_00878dfb();
  }
  puStack_178 = &DAT_00980690;
  uStack_17c = 0x6b76dc;
  FUN_00403191();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar3 == 0) {
    puStack_178 = (undefined4 *)0x80004003;
    uStack_17c = 0x6b76f4;
    FUN_00878dfb();
  }
  piStack_194 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
  iVar3 = *piStack_194;
  puStack_188 = *(undefined1 **)(unaff_EBP + -0x1c);
  iStack_184 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_180 = *(int *)(unaff_EBP + -0x2c);
  iStack_18c = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x20) + -6;
  uStack_17c = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_190 = 0;
  *(int **)(unaff_EBP + -0x10) = piStack_194;
  puStack_178 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_198 = (undefined4 *)0x6b771d;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_198 = (undefined4 *)&DAT_00963cc8;
    uStack_19c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_1a0 = iVar3;
    FUN_00878e09();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_19c = 0x6b773c;
  iVar3 = FUN_00402bc3();
  puVar2 = puStack_198;
  if (iVar3 < 0) {
    uStack_19c = 0x6b7747;
    puStack_198 = (undefined4 *)iVar3;
    FUN_00878dfb();
    puVar2 = (undefined4 *)extraout_ECX_03;
  }
  puStack_198 = (undefined4 *)0x0;
  uStack_19c = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_1a0;
  iStack_1a0 = (int)puVar2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_1a0 = 0x6b7781;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_198 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_19c = 0x6b7790;
  puStack_198 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_198 < 0) && (puStack_198 != (undefined4 *)0x80004002)) {
    uStack_19c = 0x6b77a1;
    FUN_00878dfb();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_19c = 0x6b77ae;
  puStack_198 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_198 < 0) {
    uStack_19c = 0x6b77b9;
    FUN_00878dfb();
  }
  puStack_198 = &DAT_00980690;
  uStack_19c = 0x6b77c6;
  FUN_00403191();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (iVar3 == 0) {
    puStack_198 = (undefined4 *)0x80004003;
    uStack_19c = 0x6b77de;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
  iStack_1a0 = *(int *)(unaff_EBP + -0x2c);
  uStack_19c = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  puStack_198 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar3 = (**(code **)(*piVar1 + 0x80))();
  if (iVar3 < 0) {
    iStack_1bc = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_1c0 = iVar3;
    FUN_00878e09();
  }
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1bc = 0x6b782e;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1bc = 0x6b7839;
    FUN_00878dfb();
    iVar3 = extraout_ECX_04;
  }
  iStack_1bc = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_1c0;
  iStack_1c0 = iVar3;
  FUN_00679e4e(&iStack_1c0,0x10e7);
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_1c0 = 0x6b7876;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_1bc = 0x6b7885;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1bc = 0x6b7896;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1bc = 0x6b78a3;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1bc = 0x6b78ae;
    FUN_00878dfb();
    iVar3 = extraout_ECX_05;
  }
  iStack_1bc = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_1c0;
  iStack_1c0 = iVar3;
  FUN_00679e4e(&iStack_1c0,0x10e7);
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_1c0 = 0x6b78e1;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_1bc = 0x6b78f0;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1bc = 0x6b7901;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1bc = 0x6b790e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1bc = 0x6b7919;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  iVar3 = *(int *)(iVar5 + 0x1c) + -6;
  *(undefined4 *)(unaff_EBP + -0x18) = 6;
  if (6 < iVar3) {
    do {
      iStack_1bc = 0x6b7939;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      iStack_1bc = unaff_EBP + -0x50;
      iStack_1c0 = 0x6b7947;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_1bc = 0x6b7953;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(iVar5 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      if (iVar3 == 0) {
        iStack_1bc = 0x6b7969;
        FUN_00878dfb();
      }
      iStack_1c0 = *(int *)(unaff_EBP + -0x4c);
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
      iVar3 = *piVar1;
      iStack_1bc = *(undefined4 *)(unaff_EBP + -0x48);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x18),0,
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x50));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x50);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iVar3 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x20);
      iVar5 = *piVar1;
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar3 = (**(code **)(iVar5 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x18),iVar3 + -6,
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar3 < 0) {
        iStack_1bc = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_1c0 = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_1bc = 0x6b7a40;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1bc = 0x6b7a4b;
        FUN_00878dfb();
        iVar3 = extraout_ECX_06;
      }
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar5 = *(int *)(unaff_EBP + -0x14);
    } while (*(int *)(unaff_EBP + -0x18) < iVar6 + -6);
  }
  iStack_1bc = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_1c0;
  iStack_1c0 = iVar3;
  FUN_00679e4e(&iStack_1c0,0xea2);
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_1c0 = 0x6b7a9f;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_1bc = 0x6b7aae;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1bc = 0x6b7abf;
    FUN_00878dfb();
  }
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1bc = 0x6b7acc;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_1bc = 0x6b7ad7;
    FUN_00878dfb();
    iVar3 = extraout_ECX_07;
  }
  iStack_1bc = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_1c0;
  iStack_1c0 = iVar3;
  FUN_00679e4e(&iStack_1c0,0xea3);
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_1c0 = 0x6b7b0e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_1bc = 0x6b7b1d;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1bc = 0x6b7b2e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1bc = 0x6b7b3b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1bc = 0x6b7b46;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(iVar5 + 0x20) + -6;
  *(undefined4 *)(unaff_EBP + -0x18) = 6;
  if (6 < iVar3) {
    do {
      iStack_1bc = 0x6b7b63;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iStack_1bc = unaff_EBP + -0x30;
      iStack_1c0 = 0x6b7b71;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_1bc = 0x6b7b7d;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(iVar5 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (iVar3 == 0) {
        iStack_1bc = 0x6b7b93;
        FUN_00878dfb();
      }
      iStack_1c0 = *(int *)(unaff_EBP + -0x2c);
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
      iVar3 = *piVar1;
      iStack_1bc = *(undefined4 *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar1,0,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x30));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
      iVar3 = FUN_00402e32(unaff_EBP + -0x50,&DAT_00980690);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
      iVar5 = *piVar1;
      *(int **)(unaff_EBP + -0x10) = piVar1;
      iVar3 = (**(code **)(iVar5 + 0x80))
                        (piVar1,iVar3 + -6,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                         *(undefined4 *)(unaff_EBP + -0x44));
      if (iVar3 < 0) {
        iStack_1bc = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_1c0 = iVar3;
        FUN_00878e09();
      }
      iVar3 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_1bc = 0x6b7c6a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1bc = 0x6b7c75;
        FUN_00878dfb();
        iVar3 = extraout_ECX_08;
      }
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x20);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar5 = *(int *)(unaff_EBP + -0x14);
    } while (*(int *)(unaff_EBP + -0x18) < iVar6 + -6);
  }
  iStack_1bc = 0;
  *(int **)(unaff_EBP + -0x20) = &iStack_1c0;
  iStack_1c0 = iVar3;
  FUN_00679e4e(&iStack_1c0,0x10e7);
  iVar3 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_1c0 = 0x6b7cc9;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_1bc = 0x6b7cd8;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1bc = 0x6b7ce9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_1bc = 0x6b7cf6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1bc = 0x6b7d01;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(iVar5 + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x18) = 6;
  if (6 < iVar3 + -6) {
    do {
      iVar3 = *(int *)(iVar5 + 0x20);
      *(undefined4 *)(unaff_EBP + -0x10) = 6;
      if (6 < iVar3 + -6) {
        do {
          iStack_1bc = 0x6b7d33;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
          iStack_1bc = unaff_EBP + -0x30;
          iStack_1c0 = 0x6b7d41;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_1bc = 0x6b7d4d;
            FUN_00878dfb();
          }
          iVar3 = *(int *)(iVar5 + 0x60);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          if (iVar3 == 0) {
            iStack_1bc = 0x6b7d63;
            FUN_00878dfb();
          }
          iStack_1c0 = *(int *)(unaff_EBP + -0x2c);
          piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x60);
          iVar3 = *piVar1;
          iStack_1bc = *(undefined4 *)(unaff_EBP + -0x28);
          *(int **)(unaff_EBP + -0x20) = piVar1;
          iVar3 = (**(code **)(iVar3 + 0x80))
                            (piVar1,*(undefined4 *)(unaff_EBP + -0x18),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x1c),
                             *(undefined4 *)(unaff_EBP + -0x30));
          if (iVar3 < 0) {
            iStack_1bc = *(undefined4 *)(unaff_EBP + -0x20);
            iStack_1c0 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_1bc = 0x6b7dab;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1bc = 0x6b7db6;
            FUN_00878dfb();
          }
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x20);
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          iVar5 = *(int *)(unaff_EBP + -0x14);
        } while (*(int *)(unaff_EBP + -0x10) < iVar3 + -6);
      }
      iVar3 = *(int *)(iVar5 + 0x1c);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) < iVar3 + -6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    iStack_1bc = 0x6b7df1;
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_1bc = 0x6b7e02;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    iStack_1bc = 0x6b7e13;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    iStack_1bc = 0x6b7e24;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    iStack_1bc = 0x6b7e34;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


