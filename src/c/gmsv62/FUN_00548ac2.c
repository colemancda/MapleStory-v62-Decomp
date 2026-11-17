/* FUN_00548ac2 - 0x00548ac2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00548ac2(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined *puVar5;
  undefined4 extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 uStack_174;
  int iStack_170;
  undefined1 *puStack_16c;
  undefined4 uStack_168;
  undefined4 *puStack_164;
  undefined1 *puStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined *puStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  int iStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int *piStack_108;
  undefined4 *puStack_104;
  int *piStack_100;
  undefined *puStack_fc;
  int *piStack_f8;
  undefined *puStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 *puStack_c8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_c8 = (undefined4 *)0x3af;
  iStack_cc = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_d0 = 0x548af2;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_d0 = *puVar1;
  puStack_c8 = (undefined4 *)0x0;
  iStack_cc = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_d4 = 0x548b03;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_c8 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    iStack_cc = 0x548b1a;
    FUN_00403384();
  }
  puStack_c8 = &DAT_00980690;
  *(undefined4 *)(extraout_ECX + 0x1c) = 0xca;
  *(undefined4 *)(extraout_ECX + 0x20) = 0x12e;
  iStack_cc = 0x548b37;
  FUN_00403191();
  puStack_c8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_cc = 0x548b44;
  FUN_00403191();
  piStack_f0 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_f0 == (int *)0x0) {
    puStack_c8 = (undefined4 *)0x80004003;
    iStack_cc = 0x548b59;
    FUN_00878dfb();
    piStack_f0 = *(int **)(unaff_EBP + -0x14);
  }
  uStack_e8 = *(undefined4 *)(extraout_ECX + 0x20);
  uStack_d4 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x58);
  iVar2 = *piStack_f0;
  iStack_cc = *(undefined4 *)(unaff_EBP + -0x54);
  puStack_c8 = *(undefined4 **)(unaff_EBP + -0x50);
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x70);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x6c);
  uStack_ec = *(undefined4 *)(extraout_ECX + 0x1c);
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x68);
  *(int **)(unaff_EBP + -0x10) = piStack_f0;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -100);
  puStack_f4 = (undefined *)0x548b84;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    puStack_f4 = &DAT_00963cc8;
    piStack_f8 = *(int **)(unaff_EBP + -0x10);
    piStack_100 = (int *)0x548b97;
    puStack_fc = (undefined *)iVar2;
    FUN_00878e09();
  }
  puStack_f4 = (undefined *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_f8 = (int *)0x548ba4;
  puStack_f4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    piStack_f8 = (int *)0x548baf;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_f4 = (undefined *)(unaff_EBP + -0x5c);
  piStack_f8 = (int *)0x548bbc;
  puStack_f4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    piStack_f8 = (int *)0x548bc7;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_f4 = (undefined *)0x80004003;
    piStack_f8 = (int *)0x548bd7;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  puStack_f4 = (undefined *)0x0;
  puStack_fc = (undefined *)0x548be2;
  piStack_f8 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x70))();
  if (iVar2 < 0) {
    puStack_fc = &DAT_00963cc8;
    piStack_108 = (int *)0x548bee;
    puStack_104 = (undefined4 *)iVar2;
    piStack_100 = piVar3;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_fc = (undefined *)0x80004003;
    piStack_100 = (int *)0x548bfe;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  puStack_fc = (undefined *)0x0;
  puStack_104 = (undefined4 *)0x548c09;
  piStack_100 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x78))();
  if (iVar2 < 0) {
    puStack_104 = (undefined4 *)&DAT_00963cc8;
    iStack_110 = 0x548c15;
    iStack_10c = iVar2;
    piStack_108 = piVar3;
    FUN_00878e09();
  }
  puStack_104 = &DAT_00980690;
  piStack_108 = (int *)0x548c23;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_108 = (int *)0x548c30;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_108 = (int *)0x548c40;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_108 = (int *)0x548c4d;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_108 = (int *)0x548c5a;
  FUN_00403191();
  puStack_104 = (undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_108 = (int *)0x548c69;
  piVar3 = (int *)FUN_004489f5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    puStack_104 = (undefined4 *)0x80004003;
    piStack_108 = (int *)0x548c7e;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x4c);
  piStack_108 = (int *)(unaff_EBP + -0x3c);
  iStack_10c = unaff_EBP + -0xa4;
  iStack_110 = unaff_EBP + -0x70;
  iStack_114 = unaff_EBP + -0x5c;
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_11c = unaff_EBP + -0x94;
  uStack_120 = 0x548ca8;
  FUN_004250ac();
  puStack_104 = (undefined4 *)(unaff_EBP + -0x94);
  piStack_108 = (int *)0x548cb4;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x548cbf;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)0x548cc7;
  FUN_00412600();
  puStack_104 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_108 = (int *)0x548cd4;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x548cdf;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_108 = (int *)0x548cec;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x548cf7;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_108 = (int *)0x548d07;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x548d12;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_108 = (int *)0x548d1f;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x548d2a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_104 = (undefined4 *)(unaff_EBP + -0x4c);
  piStack_108 = (int *)0x548d37;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    piStack_108 = (int *)0x548d42;
    FUN_00878dfb();
  }
  puStack_104 = &DAT_00980690;
  piStack_108 = (int *)0x548d4b;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_108 = (int *)0x548d58;
  FUN_00403191();
  puStack_104 = (undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_108 = (int *)0x548d67;
  piVar3 = (int *)FUN_004489f5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    puStack_104 = (undefined4 *)0x80004003;
    piStack_108 = (int *)0x548d7c;
    FUN_00878dfb();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x28);
  piStack_108 = (int *)0x548d87;
  piVar3 = (int *)FUN_0042fb5e();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar2 == 0) {
    puStack_104 = (undefined4 *)0x80004003;
    piStack_108 = (int *)0x548d9c;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  iVar2 = *(int *)(extraout_ECX + 0x20);
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iStack_110 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_10c = *(undefined4 *)(unaff_EBP + -0x38);
  piStack_108 = *(int **)(unaff_EBP + -0x34);
  puStack_104 = *(undefined4 **)(unaff_EBP + -0x30);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x4c);
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_124 = (600 - iVar2) / 2;
  iStack_128 = (800 - *(int *)(extraout_ECX + 0x1c)) / 2;
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_114 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_130 = (undefined *)0x548de2;
  iVar2 = (**(code **)(*piVar3 + 0x90))();
  if (iVar2 < 0) {
    puStack_130 = &DAT_00963de8;
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_13c = 0x548df6;
    iStack_138 = iVar2;
    FUN_00878e09();
  }
  puStack_130 = (undefined *)0x548dfe;
  FUN_004125d9();
  puStack_130 = (undefined *)0x548e06;
  FUN_00412600();
  puStack_130 = (undefined *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_134 = 0x548e13;
  puStack_130 = (undefined *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x548e1e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_130 = (undefined *)(unaff_EBP + -0x3c);
  iStack_134 = 0x548e2b;
  iVar2 = FUN_00402bc3();
  puVar5 = puStack_130;
  if (iVar2 < 0) {
    iStack_134 = 0x548e36;
    puStack_130 = (undefined *)iVar2;
    FUN_00878dfb();
    puVar5 = (undefined *)extraout_ECX_00;
  }
  puStack_130 = (undefined *)0x0;
  iStack_134 = 0;
  puStack_140 = (undefined1 *)&iStack_138;
  *(int **)(unaff_EBP + -0x1c) = &iStack_138;
  uStack_13c = 0x1145;
  uStack_144 = 0x548e50;
  iStack_138 = (int)puVar5;
  FUN_00679e4e();
  uStack_13c = 0x548e57;
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  *(undefined4 *)(unaff_EBP + -0x84) = 1;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  puStack_130 = (undefined *)0x9f7;
  iStack_134 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_138 = 0x548e7e;
  puStack_130 = (undefined *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_134 = 0x548e8b;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_130 = (undefined *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_134 = 0x548e9f;
    FUN_00403384();
  }
  puStack_130 = (undefined *)0x578;
  iStack_134 = 0x548eaf;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 == 0) {
    puStack_130 = (undefined *)0x0;
  }
  else {
    puStack_130 = (undefined *)0x548ec1;
    puStack_130 = (undefined *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_134 = 0x548ed5;
  FUN_00450382();
  puStack_130 = (undefined *)(unaff_EBP + -0x84);
  iStack_134 = 2;
  iStack_138 = 0xd;
  uStack_13c = 0xb2;
  puStack_140 = (undefined1 *)0x3e8;
  puStack_148 = (undefined4 *)0x548ef6;
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))();
  puStack_148 = &DAT_00980690;
  uStack_14c = 0x548f04;
  FUN_00403191();
  puStack_148 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_14c = 0x548f11;
  FUN_00403191();
  puStack_148 = (undefined4 *)0x0;
  uStack_14c = 0;
  iStack_150 = unaff_EBP + -0x3c;
  iStack_154 = unaff_EBP + -0x4c;
  puStack_160 = (undefined1 *)&uStack_158;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_158;
  iStack_15c = 0x4e9;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_164 = (undefined4 *)0x548f35;
  FUN_00679e4e();
  iStack_15c = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_160 = (undefined1 *)0x548f45;
  FUN_00405a1d();
  puStack_160 = (undefined1 *)0x548f4c;
  FUN_00402660();
  puStack_160 = (undefined1 *)0x548f53;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_150 = 0x548f5e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  puStack_148 = (undefined4 *)(unaff_EBP + -0x18);
  uStack_14c = 0x548f70;
  puStack_148 = (undefined4 *)FUN_00404b30();
  if (((int)puStack_148 < 0) && (puStack_148 != (undefined4 *)0x80004002)) {
    uStack_14c = 0x548f81;
    FUN_00878dfb();
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_14c = 0x548f91;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    uStack_14c = 0x548f9c;
    FUN_00878dfb();
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_14c = 0x548fa9;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    uStack_14c = 0x548fb4;
    FUN_00878dfb();
  }
  puStack_148 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_14c = 0x548fc1;
  puStack_148 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_148 < 0) {
    uStack_14c = 0x548fcc;
    FUN_00878dfb();
  }
  puStack_148 = (undefined4 *)0x68;
  uStack_14c = 0x548fd8;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar2 == 0) {
    puStack_148 = (undefined4 *)0x0;
  }
  else {
    puStack_148 = (undefined4 *)0x548fea;
    puStack_148 = (undefined4 *)FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_14c = 0x548ffb;
  FUN_0048b9a0();
  puStack_148 = (undefined4 *)0x0;
  uStack_14c = 0xa6;
  iStack_150 = 0x2f;
  iStack_154 = 0x12;
  uStack_158 = 5;
  iStack_15c = 0x3e9;
  puStack_164 = (undefined4 *)0x549015;
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 8))();
  iVar2 = *(int *)(extraout_ECX + 0x78);
  puStack_164 = &DAT_00980690;
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  uStack_168 = 0x54902b;
  FUN_00403191();
  puStack_164 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_168 = 0x549038;
  FUN_00403191();
  puStack_164 = (undefined4 *)0x0;
  uStack_168 = 0;
  puStack_16c = (undefined1 *)(unaff_EBP + -0x3c);
  iStack_170 = unaff_EBP + -0x4c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_174;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00679e4e(&uStack_174,0x1146);
  iVar2 = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_16c = (undefined1 *)0x549085;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    puStack_164 = (undefined4 *)(unaff_EBP + -0x18);
    uStack_168 = 0x54909b;
    puStack_164 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_164 < 0) && (puStack_164 != (undefined4 *)0x80004002)) {
      uStack_168 = 0x5490ac;
      FUN_00878dfb();
    }
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_168 = 0x5490bc;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x5490c7;
    FUN_00878dfb();
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uStack_168 = 0x5490d4;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x5490df;
    FUN_00878dfb();
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_168 = 0x5490ec;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x5490f7;
    FUN_00878dfb();
  }
  puStack_164 = &DAT_00980690;
  uStack_168 = 0x549100;
  FUN_00403191();
  puStack_164 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_168 = 0x549110;
  FUN_00403191();
  puStack_164 = (undefined4 *)0x0;
  uStack_168 = 0;
  puStack_16c = (undefined1 *)(unaff_EBP + -0x5c);
  iStack_170 = unaff_EBP + -0xa4;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_174;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_174 = extraout_ECX_01;
  FUN_00679e4e(&uStack_174,0x1147);
  iVar2 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puStack_16c = (undefined1 *)0x54915d;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 != 0) {
    puStack_164 = (undefined4 *)(unaff_EBP + -0x28);
    uStack_168 = 0x549173;
    puStack_164 = (undefined4 *)FUN_00404b30();
    if (((int)puStack_164 < 0) && (puStack_164 != (undefined4 *)0x80004002)) {
      uStack_168 = 0x549184;
      FUN_00878dfb();
    }
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_168 = 0x549191;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x54919c;
    FUN_00878dfb();
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_168 = 0x5491ac;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x5491b7;
    FUN_00878dfb();
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  uStack_168 = 0x5491c4;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x5491cf;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    puStack_164 = (undefined4 *)0x5491da;
    FUN_0087a1b0();
    puStack_164 = (undefined4 *)0x0;
    uStack_168 = 0;
    iStack_170 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_174 = 0x5491e7;
    puStack_16c = (undefined1 *)&puStack_160;
    iStack_170 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_16c;
    uStack_174 = 0x5491f3;
    FUN_00448a17();
    iStack_170 = unaff_EBP + -0xc4;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    uStack_174 = 0x549206;
    FUN_0040263d();
    uStack_174 = 0x54920d;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_16c = (undefined1 *)0x549218;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x74) = uVar4;
    puStack_164 = (undefined4 *)0x549223;
    FUN_0087a1b0();
    puStack_164 = (undefined4 *)0x0;
    uStack_168 = 0;
    iStack_170 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_174 = 0x549230;
    puStack_16c = (undefined1 *)&puStack_160;
    iStack_170 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_16c;
    uStack_174 = 0x54923c;
    FUN_00448a17();
    iStack_170 = unaff_EBP + -0xb4;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uStack_174 = 0x54924f;
    FUN_0040263d();
    uStack_174 = 0x549256;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_16c = (undefined1 *)0x549261;
    uVar4 = FUN_004032b4();
    puStack_164 = (undefined4 *)0x1;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    puStack_16c = (undefined1 *)(unaff_EBP + -0x74);
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_168;
    iStack_170 = 0x549277;
    FUN_0048bb05();
    iStack_170 = unaff_EBP + -0x1c;
    *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_16c;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    uStack_174 = 0x54928a;
    puStack_16c = extraout_ECX_02;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_170 = 0x549296;
    FUN_0048b99c();
    iStack_170 = 0x54929d;
    FUN_004b22e5();
    puStack_164 = (undefined4 *)(unaff_EBP + -0xb4);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uStack_168 = 0x5492ad;
    puStack_164 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_164 < 0) {
      uStack_168 = 0x5492b8;
      FUN_00878dfb();
    }
    puStack_164 = (undefined4 *)(unaff_EBP + -0xc4);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    uStack_168 = 0x5492c8;
    puStack_164 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_164 < 0) {
      uStack_168 = 0x5492d3;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 4);
  puStack_164 = (undefined4 *)0x74;
  uStack_168 = 0x5492ec;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x60) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar2 == 0) {
    puStack_164 = (undefined4 *)0x0;
  }
  else {
    puStack_164 = (undefined4 *)0x5492fe;
    puStack_164 = (undefined4 *)FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  uStack_168 = 0x54930f;
  FUN_0048b9e9();
  puStack_164 = (undefined4 *)0x0;
  uStack_168 = 200;
  puStack_16c = (undefined1 *)0x47;
  iStack_170 = 0xa5;
  uStack_174 = 3;
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))(extraout_ECX,0x3ea,1);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x80) + 0x34) = 0x8e;
  *(undefined4 *)(extraout_ECX + 0x574) = 1;
  FUN_004b2699(*(int *)(extraout_ECX + 0x578) + -1);
  piVar3 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


