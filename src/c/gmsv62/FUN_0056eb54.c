/* FUN_0056eb54 - 0x0056eb54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056eb54(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  undefined4 uStack_178;
  int iStack_174;
  int iStack_170;
  undefined4 *puStack_16c;
  int *piStack_164;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  uint uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  int *piStack_14c;
  int *piStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  int iStack_130;
  int *piStack_12c;
  undefined4 *puStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  
  FUN_00879bb8();
  iStack_110 = unaff_EBP + -0x14;
  *(int *)(unaff_EBP + -0x3c) = extraout_ECX;
  iStack_114 = 0x56eb75;
  FUN_00448dc6();
  iVar3 = *(int *)(*(int *)(extraout_ECX + 0xcc) + 0x160);
  iVar4 = *(int *)(*(int *)(extraout_ECX + 0xcc) + 0x164);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x50) = iVar3 * 0x280 + iVar4;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iStack_110 = 0x80004003;
    iStack_114 = 0x56eba4;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iStack_110 = 0x30ffff00;
  iStack_114 = (-(uint)(*(int *)(extraout_ECX + 0xdc) != 0) & 0x24) + 0x70;
  uStack_118 = 0xb7;
  uStack_11c = 0;
  uStack_120 = 0;
  puStack_128 = (undefined4 *)0x56ebcd;
  piStack_124 = piVar1;
  iStack_130 = (**(code **)(*piVar1 + 0x8c))();
  if (iStack_130 < 0) {
    puStack_128 = (undefined4 *)&DAT_00963cc8;
    iStack_134 = 0x56ebdd;
    piStack_12c = piVar1;
    FUN_00878e09();
  }
  puStack_128 = (undefined4 *)0x52a;
  piStack_12c = (int *)(unaff_EBP + -0x80);
  iStack_130 = 0x56ebf0;
  FUN_00679d86();
  iVar3 = *(int *)(extraout_ECX + 0xdc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 != 0) {
    puStack_128 = (undefined4 *)&DAT_00964308;
    piStack_12c = (int *)0x56ec07;
    puStack_128 = (undefined4 *)FUN_0087a007();
    piStack_12c = (int *)&DAT_00964308;
    iStack_130 = 0x56ec12;
    FUN_0046febf();
  }
  puStack_128 = &DAT_00980690;
  piStack_12c = (int *)0x56ec23;
  FUN_00403191();
  puStack_128 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_12c = (int *)0x56ec33;
  FUN_00403191();
  puStack_128 = (undefined4 *)0x0;
  piStack_12c = (int *)0x0;
  iStack_130 = unaff_EBP + -0xbc;
  iStack_134 = unaff_EBP + -0xcc;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_138 = 0x56ec4f;
  iStack_13c = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x58) = &uStack_138;
  uStack_140 = 0x56ec5b;
  FUN_004033a1();
  iStack_13c = unaff_EBP + -0xfc;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_140 = 0x56ec6b;
  FUN_00405a1d();
  uStack_140 = 0x56ec72;
  FUN_00402660();
  uStack_140 = 0x56ec79;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_130 = 0x56ec84;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x8c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x84) = 0;
  if (iVar3 != 0) {
    puStack_128 = (undefined4 *)(unaff_EBP + -0x8c);
    piStack_12c = (int *)0x56eca6;
    puStack_128 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_128 < 0) && (puStack_128 != (undefined4 *)0x80004002)) {
      piStack_12c = (int *)0x56ecb7;
      FUN_00878dfb();
    }
  }
  puStack_128 = (undefined4 *)(unaff_EBP + -0xfc);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_12c = (int *)0x56ecc7;
  puStack_128 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_128 < 0) {
    piStack_12c = (int *)0x56ecd2;
    FUN_00878dfb();
  }
  puStack_128 = (undefined4 *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_12c = (int *)0x56ece2;
  puStack_128 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_128 < 0) {
    piStack_12c = (int *)0x56eced;
    FUN_00878dfb();
  }
  puStack_128 = (undefined4 *)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_12c = (int *)0x56ecfd;
  puStack_128 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_128 < 0) {
    piStack_12c = (int *)0x56ed08;
    FUN_00878dfb();
  }
  puStack_128 = &DAT_00980690;
  piStack_12c = (int *)0x56ed11;
  FUN_00403191();
  piStack_144 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piStack_144 == (int *)0x0) {
    puStack_128 = (undefined4 *)0x80004003;
    piStack_12c = (int *)0x56ed26;
    FUN_00878dfb();
    piStack_144 = *(int **)(unaff_EBP + -0x14);
  }
  iVar3 = *piStack_144;
  uStack_138 = *(undefined4 *)(unaff_EBP + -0x84);
  iStack_134 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_130 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_13c = 0;
  piStack_12c = *(int **)(unaff_EBP + -0x30);
  uStack_140 = 0;
  *(int **)(unaff_EBP + -0x24) = piStack_144;
  puStack_128 = *(undefined4 **)(unaff_EBP + -0x2c);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    piStack_14c = *(int **)(unaff_EBP + -0x24);
    puStack_154 = (undefined1 *)0x56ed5d;
    puStack_150 = (undefined1 *)iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_14c = (int *)0x56ed6a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_14c = (int *)0x56ed75;
    FUN_00878dfb();
  }
  piStack_14c = (int *)(unaff_EBP + -0x1c);
  puStack_150 = (undefined1 *)0x56ed80;
  FUN_007d4a9a();
  iVar3 = *(int *)(unaff_EBP + -0x50);
  puStack_150 = *(undefined1 **)(iVar3 + 0x3d);
  puStack_154 = (undefined1 *)(iVar3 + 0x39);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined1 **)(unaff_EBP + -0x58) = puStack_154;
  uStack_158 = 0x56ed96;
  sVar2 = FUN_0045f084();
  uStack_158 = (uint)sVar2;
  puStack_15c = (undefined1 *)0x56ed9f;
  piStack_14c = (int *)FUN_00482a39();
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  puStack_150 = (undefined1 *)0x56edb1;
  FUN_00414edd();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56edbe;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_14c = (int *)0x56edcb;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_150 = (undefined1 *)0x56eddf;
  puStack_150 = (undefined1 *)FUN_00449749();
  puStack_154 = (undefined1 *)0x56ede8;
  uStack_158 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  puStack_15c = (undefined1 *)0x56edf4;
  FUN_00448a17();
  uStack_158 = 1;
  puStack_15c = (undefined1 *)0x2e;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_160 = 0x56ee04;
  FUN_004115d9();
  uStack_160 = 0x56ee0b;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_14c = (int *)0x56ee18;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56ee23;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56ee30;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56ee3b;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  piStack_14c = (int *)(iVar3 + 0x33);
  puStack_150 = (undefined1 *)0x56ee51;
  uStack_158 = FUN_0045f03e();
  puStack_150 = (undefined1 *)0xa;
  uStack_158 = uStack_158 & 0xff;
  puStack_15c = (undefined1 *)0x56ee5d;
  puStack_154 = (undefined1 *)&piStack_144;
  uVar5 = FUN_0087a25a();
  piStack_14c = (int *)0x56ee6b;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_14c = (int *)0x56ee78;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_150 = (undefined1 *)0x56ee8c;
  puStack_150 = (undefined1 *)FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  puStack_15c = (undefined1 *)0x56ee99;
  uStack_158 = uVar5;
  FUN_004033a1();
  uStack_158 = 0x13;
  puStack_15c = (undefined1 *)0x2e;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_160 = 0x56eea9;
  FUN_004115d9();
  uStack_160 = 0x56eeb0;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_14c = (int *)0x56eebd;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56eec8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56eed5;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56eee0;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  piStack_14c = (int *)(iVar3 + 0x9d);
  puStack_150 = (undefined1 *)0x56eefc;
  sVar2 = FUN_0045f084();
  puStack_150 = (undefined1 *)0xa;
  uStack_158 = (uint)sVar2;
  puStack_15c = (undefined1 *)0x56ef08;
  puStack_154 = (undefined1 *)&piStack_144;
  uVar5 = FUN_0087a25a();
  piStack_14c = (int *)0x56ef16;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_14c = (int *)0x56ef23;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_150 = (undefined1 *)0x56ef37;
  puStack_150 = (undefined1 *)FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  puStack_15c = (undefined1 *)0x56ef44;
  uStack_158 = uVar5;
  FUN_004033a1();
  uStack_158 = 0x13;
  puStack_15c = (undefined1 *)0x88;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_160 = 0x56ef58;
  FUN_004115d9();
  uStack_160 = 0x56ef5f;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_14c = (int *)0x56ef6c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56ef77;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56ef84;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56ef8f;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x24) = &piStack_144;
  piStack_14c = (int *)(iVar3 + 0x41);
  puStack_150 = (undefined1 *)0x56efa6;
  sVar2 = FUN_0045f084();
  puStack_150 = (undefined1 *)0xa;
  puStack_154 = *(undefined1 **)(unaff_EBP + -0x24);
  uStack_158 = (uint)sVar2;
  puStack_15c = (undefined1 *)0x56efb4;
  uVar6 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
  piStack_14c = (int *)0x56efc3;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_14c = (int *)0x56efd0;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_150 = (undefined1 *)0x56efe4;
  puStack_150 = (undefined1 *)FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  uStack_158 = *(uint *)(unaff_EBP + -0x28);
  puStack_15c = (undefined1 *)0x56eff3;
  FUN_004033a1();
  uStack_158 = 0x25;
  puStack_15c = (undefined1 *)0x2e;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_160 = 0x56f003;
  FUN_004115d9();
  uStack_160 = 0x56f00a;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  piStack_14c = (int *)0x56f017;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56f022;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56f02f;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56f03a;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x24) = &piStack_144;
  piStack_14c = (int *)(iVar3 + 0x51);
  puStack_150 = (undefined1 *)0x56f051;
  sVar2 = FUN_0045f084();
  puStack_150 = (undefined1 *)0xa;
  puStack_154 = *(undefined1 **)(unaff_EBP + -0x24);
  uStack_158 = (uint)sVar2;
  puStack_15c = (undefined1 *)0x56f05f;
  uVar6 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
  piStack_14c = (int *)0x56f06e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_14c = (int *)0x56f07b;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_150 = (undefined1 *)0x56f08f;
  puStack_150 = (undefined1 *)FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  uStack_158 = *(uint *)(unaff_EBP + -0x28);
  puStack_15c = (undefined1 *)0x56f09e;
  FUN_004033a1();
  uStack_158 = 0x25;
  puStack_15c = (undefined1 *)0x88;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_160 = 0x56f0ad;
  FUN_004115d9();
  uStack_160 = 0x56f0b4;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_14c = (int *)0x56f0c1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56f0cc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56f0d9;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56f0e4;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x24) = &piStack_144;
  piStack_14c = (int *)(iVar3 + 0x49);
  puStack_150 = (undefined1 *)0x56f0fb;
  sVar2 = FUN_0045f084();
  puStack_150 = (undefined1 *)0xa;
  puStack_154 = *(undefined1 **)(unaff_EBP + -0x24);
  uStack_158 = (uint)sVar2;
  puStack_15c = (undefined1 *)0x56f109;
  uVar6 = FUN_0087a25a();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
  piStack_14c = (int *)0x56f118;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_14c = (int *)0x56f125;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_150 = (undefined1 *)0x56f139;
  puStack_150 = (undefined1 *)FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  uStack_158 = *(uint *)(unaff_EBP + -0x28);
  puStack_15c = (undefined1 *)0x56f148;
  FUN_004033a1();
  uStack_158 = 0x37;
  puStack_15c = (undefined1 *)0x2e;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_160 = 0x56f158;
  FUN_004115d9();
  uStack_160 = 0x56f15f;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piStack_14c = (int *)0x56f16c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56f177;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56f184;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_14c = (int *)0x56f18f;
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  *(int ***)(unaff_EBP + -0x24) = &piStack_144;
  piStack_14c = (int *)(iVar3 + 0x59);
  puStack_150 = (undefined1 *)0x56f1a6;
  sVar2 = FUN_0045f084();
  puStack_150 = (undefined1 *)0xa;
  puStack_154 = *(undefined1 **)(unaff_EBP + -0x24);
  uStack_158 = (uint)sVar2;
  puStack_15c = (undefined1 *)0x56f1b4;
  uVar5 = FUN_0087a25a();
  piStack_14c = (int *)0x56f1c2;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_14c = (int *)0x56f1cf;
  FUN_00403191();
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_150 = (undefined1 *)0x56f1e3;
  puStack_150 = (undefined1 *)FUN_00449749();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
  puStack_15c = (undefined1 *)0x56f1f0;
  uStack_158 = uVar5;
  FUN_004033a1();
  uStack_158 = 0x37;
  puStack_15c = (undefined1 *)0x88;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_160 = 0x56f1ff;
  FUN_004115d9();
  uStack_160 = 0x56f206;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_14c = (int *)0x56f213;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_14c = (int *)0x56f21e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_14c = (int *)0x56f22b;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_14c = (int *)0x56f236;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x3c);
  if (*(int *)(iVar3 + 0xdc) == 0) {
    piStack_14c = (int *)0x56f24f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_14c = (int *)0x56f25c;
    FUN_00403191();
    piStack_14c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_150 = (undefined1 *)0x56f270;
    puStack_150 = (undefined1 *)FUN_00449749();
    puStack_15c = (undefined1 *)&puStack_154;
    *(undefined1 ***)(unaff_EBP + -0x58) = &puStack_154;
    uStack_158 = 0xb5b;
    uStack_160 = 0x56f287;
    puStack_154 = extraout_ECX_00;
    FUN_00679e4e();
    uStack_158 = 99;
    puStack_15c = (undefined1 *)0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    uStack_160 = 0x56f297;
    FUN_004115d9();
    uStack_160 = 0x56f29e;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_14c = (int *)0x56f2ab;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f2b6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_14c = (int *)0x56f2c3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f2d2;
      FUN_00878dfb();
    }
  }
  else {
    iVar4 = *(int *)(iVar3 + 0xd0);
    iVar3 = *(int *)(*(int *)(iVar3 + 0xcc) + 0x168);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(int *)(unaff_EBP + -0x3c) = iVar4 * 0x10 + iVar3;
    piStack_14c = (int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_150 = (undefined1 *)0x56f30a;
    puVar7 = (undefined4 *)FUN_00679d86();
    piStack_14c = (int *)*puVar7;
    puStack_150 = (undefined1 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    puStack_154 = (undefined1 *)0x56f31c;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00402676();
    piStack_14c = (int *)0x56f334;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_14c = (int *)0x56f344;
    puStack_150 = (undefined1 *)FUN_00411641();
    *(int ***)(unaff_EBP + -0x10) = &piStack_14c;
    puStack_154 = (undefined1 *)0x56f350;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_150 = (undefined1 *)0x56f35c;
    FUN_0044974c();
    puStack_150 = (undefined1 *)0x56f363;
    iVar3 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_14c = (int *)0x56f372;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_14c = (int *)0x56f37d;
      FUN_00878dfb();
    }
    piStack_14c = (int *)0x56f386;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_14c = (int *)0x56f393;
    FUN_00403191();
    piStack_14c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    puStack_150 = (undefined1 *)0x56f3a7;
    puStack_150 = (undefined1 *)FUN_00449749();
    puStack_154 = (undefined1 *)0x56f3b0;
    uStack_158 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
    puStack_15c = (undefined1 *)0x56f3bc;
    FUN_004033a1();
    uStack_158 = 99;
    puStack_15c = (undefined1 *)(0x5a - iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    uStack_160 = 0x56f3d0;
    FUN_004115d9();
    uStack_160 = 0x56f3d7;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_14c = (int *)0x56f3e4;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f3ef;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_14c = (int *)0x56f3fc;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f407;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    piStack_14c = (int *)0x56f419;
    puStack_154 = (undefined1 *)FUN_0087a90a();
    piStack_14c = (int *)0xa;
    uStack_158 = 0x56f422;
    puStack_150 = (undefined1 *)&piStack_144;
    uVar6 = FUN_0087a25a();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    piStack_14c = (int *)0x56f431;
    FUN_00403191();
    *(int ***)(unaff_EBP + -0x10) = &piStack_14c;
    puStack_150 = *(undefined1 **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_154 = (undefined1 *)0x56f447;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_150 = (undefined1 *)0x56f453;
    FUN_0044974c();
    puStack_150 = (undefined1 *)0x56f45a;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_14c = (int *)0x56f46a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f475;
      FUN_00878dfb();
    }
    piStack_14c = (int *)0x56f484;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
    piStack_14c = (int *)(unaff_EBP + -0x9c);
    puStack_150 = (undefined1 *)0x56f491;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f49d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_14c = (int *)0x56f4aa;
    FUN_00403191();
    piStack_14c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_150 = (undefined1 *)0x56f4c1;
    puStack_150 = (undefined1 *)FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_154;
    uStack_158 = *(uint *)(unaff_EBP + -0x28);
    puStack_15c = (undefined1 *)0x56f4d0;
    FUN_004033a1();
    puStack_15c = (undefined1 *)(0xa5 - *(int *)(unaff_EBP + -0x18));
    uStack_158 = 99;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    uStack_160 = 0x56f4e7;
    FUN_004115d9();
    uStack_160 = 0x56f4ee;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_14c = (int *)0x56f4fb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f506;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_14c = (int *)0x56f516;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f521;
      FUN_00878dfb();
    }
    piStack_14c = (int *)(unaff_EBP + -0x18);
    puStack_150 = (undefined1 *)0x56f54e;
    puVar7 = (undefined4 *)FUN_00679d86();
    piStack_14c = (int *)*puVar7;
    puStack_150 = (undefined1 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    puStack_154 = (undefined1 *)0x56f55f;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00402676();
    piStack_14c = (int *)0x56f577;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
    piStack_14c = (int *)(unaff_EBP + -0xac);
    puStack_150 = (undefined1 *)0x56f584;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f592;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    piStack_14c = (int *)0x56f59f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x9c));
    piStack_14c = (int *)(unaff_EBP + -0x9c);
    puStack_150 = (undefined1 *)0x56f5ac;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f5b8;
      FUN_00878dfb();
    }
    piStack_14c = (int *)0x0;
    puStack_150 = (undefined1 *)(unaff_EBP + -0xac);
    puStack_154 = (undefined1 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_158 = 0x56f5d4;
    puStack_15c = (undefined1 *)FUN_00411641();
    *(uint **)(unaff_EBP + -0x10) = &uStack_158;
    uStack_160 = 0x56f5e0;
    FUN_004033a1();
    puStack_15c = (undefined1 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_160 = 0x56f5f0;
    FUN_00405a1d();
    uStack_160 = 0x56f5f7;
    FUN_00402660();
    uStack_160 = 0x56f5fe;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_150 = (undefined1 *)0x56f609;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x88) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    if (iVar3 != 0) {
      piStack_14c = (int *)0x56f625;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_14c = (int *)0x56f636;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    piStack_14c = (int *)0x56f646;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f651;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    piStack_14c = (int *)0x56f661;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f66c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    piStack_14c = (int *)0x56f67c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56f687;
      FUN_00878dfb();
    }
    piStack_14c = (int *)0xff;
    puStack_150 = (undefined1 *)0x56f696;
    FUN_004031b7();
    piStack_164 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (piStack_164 == (int *)0x0) {
      piStack_14c = (int *)0x56f6ab;
      FUN_00878dfb();
      piStack_164 = *(int **)(unaff_EBP + -0x14);
    }
    iVar3 = *piStack_164;
    uStack_158 = *(uint *)(unaff_EBP + -0x54);
    puStack_154 = *(undefined1 **)(unaff_EBP + -0x38);
    puStack_150 = *(undefined1 **)(unaff_EBP + -0x34);
    puStack_15c = (undefined1 *)
                  ((-(uint)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 4) != 0) & 0xfffffffc) + 0x69);
    piStack_14c = *(int **)(unaff_EBP + -0x30);
    uStack_160 = 0xaa;
    *(int **)(unaff_EBP + -0x18) = piStack_164;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_16c = *(undefined4 **)(unaff_EBP + -0x18);
      iStack_174 = 0x56f6f1;
      iStack_170 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_16c = (undefined4 *)0x56f6fe;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f709;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)(unaff_EBP + -0x18);
    iStack_170 = 0x56f71c;
    puStack_16c = (undefined4 *)FUN_00679d86();
    puStack_16c = (undefined4 *)*puStack_16c;
    iStack_170 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_174 = 0x56f732;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00402676();
    puStack_16c = (undefined4 *)0x56f74d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x6c);
    iStack_170 = 0x56f757;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f763;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    puStack_16c = (undefined4 *)0x56f773;
    iStack_170 = FUN_00411641();
    *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_16c;
    iStack_174 = 0x56f77f;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    iStack_170 = 0x56f78b;
    FUN_0044974c();
    iStack_170 = 0x56f792;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_16c = (undefined4 *)0x56f7a2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f7ad;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)0x56f7b3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x7c);
    iStack_170 = 0x56f7bd;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f7c9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_16c = (undefined4 *)0x56f7d3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x6c);
    iStack_170 = 0x56f7dd;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f7e9;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_170 = 0x56f7fd;
    iStack_170 = FUN_00449749();
    iStack_174 = 0x56f806;
    uStack_178 = FUN_00411641();
    *(int **)(unaff_EBP + -0x10) = &iStack_174;
    FUN_004033a1();
    uStack_178 = 0x87;
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_16c = (undefined4 *)0x56f83f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f84a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_16c = (undefined4 *)0x56f857;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f862;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    *(int ***)(unaff_EBP + -0x18) = &piStack_164;
    puStack_16c = (undefined4 *)0x56f878;
    iStack_174 = FUN_0087a90a();
    puStack_16c = (undefined4 *)0xa;
    iStack_170 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_178 = 0x56f883;
    uVar6 = FUN_0087a25a();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    puStack_16c = (undefined4 *)0x56f88f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x7c);
    iStack_170 = 0x56f899;
    puVar7 = &DAT_00980690;
    iVar3 = FUN_00402e32();
    puStack_16c = puVar7;
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f8a5;
      FUN_00878dfb();
      puStack_16c = extraout_ECX_01;
    }
    *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_16c;
    iStack_170 = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    iStack_174 = 0x56f8bb;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    iStack_170 = 0x56f8c7;
    FUN_0044974c();
    iStack_170 = 0x56f8ce;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_16c = (undefined4 *)0x56f8de;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f8e9;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)0x56f8ef;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x6c);
    iStack_170 = 0x56f8f9;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f905;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    puStack_16c = (undefined4 *)0x56f90f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x7c);
    iStack_170 = 0x56f919;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f925;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    iStack_170 = 0x56f939;
    iStack_170 = FUN_00449749();
    *(int **)(unaff_EBP + -0x10) = &iStack_174;
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x28);
    FUN_004033a1();
    uStack_178 = 0x87;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    puStack_16c = (undefined4 *)0x56f972;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f97d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_16c = (undefined4 *)0x56f98a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56f997;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)&DAT_009657e0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_170 = 0x56f9a9;
    FUN_004184ca();
    puStack_16c = (undefined4 *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    iStack_170 = 0x56f9c0;
    FUN_00679d86();
    puStack_16c = (undefined4 *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_170 = 0x56f9d3;
    FUN_0046fc68();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    puStack_16c = (undefined4 *)0x56f9e0;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00402676();
    puStack_16c = *(undefined4 **)(unaff_EBP + -0x58);
    iStack_170 = 0x56fa12;
    FUN_0045f084();
    puStack_16c = (undefined4 *)&DAT_009657d8;
    iStack_170 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_174 = unaff_EBP + -0x20;
    uStack_178 = 0x56fa3a;
    FUN_0041354c();
    puStack_16c = (undefined4 *)0x56fa43;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x6c);
    iStack_170 = 0x56fa4d;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56fa59;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    puStack_16c = (undefined4 *)0x56fa63;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    puStack_16c = (undefined4 *)(unaff_EBP + -0x7c);
    iStack_170 = 0x56fa6d;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56fa79;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)0x0;
    iStack_170 = unaff_EBP + -0x6c;
    iStack_174 = unaff_EBP + -0x7c;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    uStack_178 = 0x56fa8f;
    FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_178;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x4c;
    iStack_170 = 0x56fac4;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x58) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar3 != 0) {
      puStack_16c = (undefined4 *)0x56fada;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_16c = (undefined4 *)0x56faeb;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    puStack_16c = (undefined4 *)0x56fafb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56fb06;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    puStack_16c = (undefined4 *)0x56fb13;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56fb1e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    puStack_16c = (undefined4 *)0x56fb2b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)0x56fb36;
      FUN_00878dfb();
    }
    puStack_16c = (undefined4 *)0xff;
    iStack_170 = 0x56fb45;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      puStack_16c = (undefined4 *)0x56fb58;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_16c = (undefined4 *)0x56fb67;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x50) = piVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
    FUN_0040e48b();
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_174 = *(int *)(unaff_EBP + -0x38);
    iStack_170 = *(int *)(unaff_EBP + -0x34);
    puStack_16c = *(undefined4 **)(unaff_EBP + -0x30);
    iVar3 = (**(code **)(*piVar1 + 0x80))();
    if (iVar3 < 0) {
      iStack_18c = *(undefined4 *)(unaff_EBP + -0x50);
      iStack_194 = 0x56fbac;
      iStack_190 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    iStack_18c = 0x56fbb9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_18c = 0x56fbc6;
      FUN_00878dfb();
    }
    iStack_18c = unaff_EBP + -0x10;
    iStack_190 = 0x56fbf6;
    puVar7 = (undefined4 *)FUN_00679d86();
    iStack_18c = *puVar7;
    iStack_190 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0x52;
    iStack_194 = 0x56fc07;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    FUN_00402676();
    iStack_18c = 0x56fc22;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_18c = unaff_EBP + -0x38;
    iStack_190 = 0x56fc2c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_18c = 0x56fc38;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    iStack_18c = 0x56fc42;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iStack_18c = unaff_EBP + -0x4c;
    iStack_190 = 0x56fc4c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_18c = 0x56fc58;
      FUN_00878dfb();
    }
    iStack_18c = 0;
    iStack_190 = unaff_EBP + -0x38;
    iStack_194 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x54;
    uStack_198 = 0x56fc6e;
    uVar6 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x50) = &uStack_198;
    FUN_004033a1(uVar6);
    iVar3 = unaff_EBP + -0x10c;
    *(undefined1 *)(unaff_EBP + -4) = 0x54;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x56;
    iStack_190 = 0x56fca3;
    uVar6 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
    iStack_18c = 0x56fcb2;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_18c = 0x56fcc3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x54;
    iStack_18c = 0x56fcd3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_18c = 0x56fcde;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    iStack_18c = 0x56fceb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_18c = 0x56fcf6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    iStack_18c = 0x56fd03;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_18c = 0x56fd0e;
      FUN_00878dfb();
    }
    iStack_18c = 0xff;
    iStack_190 = 0x56fd1d;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iStack_18c = 0x56fd30;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    uStack_198 = *(undefined4 *)(unaff_EBP + -0x54);
    iStack_194 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_190 = *(int *)(unaff_EBP + -0x34);
    iStack_18c = *(undefined4 *)(unaff_EBP + -0x30);
    iVar3 = (**(code **)(*piVar1 + 0x80))
                      (piVar1,0xaa,
                       (-(uint)(*(int *)(*(int *)(unaff_EBP + -0x3c) + 0xc) != 0) & 0xfffffffc) +
                       0x8d);
    if (iVar3 < 0) {
      puStack_154 = (undefined1 *)0x56fd73;
      puStack_150 = (undefined1 *)iVar3;
      piStack_14c = piVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    piStack_14c = (int *)0x56fd80;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_14c = (int *)0x56fd8b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_14c = (int *)0x56fd9c;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
      piStack_14c = (int *)0x56fdad;
      (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_14c = (int *)0x56fdd6;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
    piStack_14c = (int *)0x56fdea;
    (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_14c = (int *)0x56fe07;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


