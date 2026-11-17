/* FUN_0069d6f9 - 0x0069d6f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069d6f9(void)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  undefined4 uStack_174;
  int iStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  int iStack_150;
  int *piStack_14c;
  int *piStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 *puStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  undefined1 *puStack_108;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 *puStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 *puStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 *puStack_6c;
  
  FUN_00879bb8();
  puStack_6c = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_70 = 0x69d716;
  FUN_0081622a();
  puStack_6c = (undefined4 *)0x69d71c;
  DVar1 = timeGetTime();
  if (-1 < (int)(DVar1 - *(int *)(extraout_ECX + 0x90))) {
    *(undefined4 *)(extraout_ECX + 0x94) = 0;
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  puStack_6c = (undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_70 = 0x69d73e;
  FUN_00448dc6();
  puStack_6c = (undefined4 *)0xc0b;
  iStack_70 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_74 = 0x69d755;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_70 = *puVar2;
  iVar3 = *(int *)(extraout_ECX + 0x94);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_6c = (undefined4 *)(iVar3 / 600);
  iStack_74 = unaff_EBP + 8;
  uStack_78 = 0x69d778;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_6c = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_70 = 0x69d78f;
    FUN_00434e38();
  }
  puStack_6c = (undefined4 *)0x3;
  iStack_70 = 0xff;
  iStack_74 = 0x69d79f;
  FUN_004031b7();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_70 = 0x69d7b1;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_70 = 0x69d7be;
  FUN_00403191();
  puStack_6c = (undefined4 *)0x0;
  iStack_70 = 0;
  iStack_74 = 0xffffffff;
  uStack_78 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0;
  uStack_80 = 0;
  iStack_84 = 0x69d7d1;
  (*DAT_0097b4c8)();
  iStack_84 = 0x69d7de;
  FUN_0087a1b0();
  iStack_84 = 0;
  uStack_88 = 0;
  iStack_8c = unaff_EBP + -0x38;
  iStack_90 = unaff_EBP + -0x48;
  uStack_94 = 0xffffffff;
  uStack_9c = 0x69d7f5;
  puStack_98 = (undefined1 *)&uStack_80;
  uStack_9c = FUN_00449713();
  piStack_a0 = (int *)0x69d7fb;
  puStack_98 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_94;
  uStack_9c = 0x69d808;
  FUN_004033a1();
  puStack_98 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_9c = 0x69d815;
  FUN_00405a1d();
  uStack_9c = 0x69d81c;
  FUN_00402660();
  uStack_9c = 0x69d823;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_8c = 0x69d82e;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_84 = unaff_EBP + -0x20;
    uStack_88 = 0x69d844;
    iStack_84 = FUN_0041a581();
    if ((iStack_84 < 0) && (iStack_84 != -0x7fffbffe)) {
      uStack_88 = 0x69d855;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar4 == (int *)0x0) {
    iStack_84 = 0x80004003;
    uStack_88 = 0x69d870;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar4;
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
  puStack_98 = (undefined1 *)0x21;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_9c = 0x6f;
  *(int **)(unaff_EBP + -0x28) = piVar4;
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_a4 = (undefined4 *)0x69d892;
  piStack_a0 = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_a4 = (undefined4 *)&DAT_00963cc8;
    iStack_a8 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_b0 = 0x69d8a4;
    iStack_ac = iVar3;
    FUN_00878e09();
  }
  puStack_a4 = (undefined4 *)0x69d8ac;
  FUN_004125e6();
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a8 = 0x69d8b9;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x69d8c6;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_a8 = 0x69d8d3;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x69d8de;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a8 = 0x69d8eb;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x69d8f6;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a8 = 0x69d903;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x69d90e;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)0xc0b;
  iStack_a8 = unaff_EBP + -0x28;
  iStack_ac = 0x69d921;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_a8 = *puVar2;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_a4 = (undefined4 *)((iVar3 / 0x3c) % 10);
  iStack_ac = unaff_EBP + 8;
  uStack_b0 = 0x69d947;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_a4 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    iStack_a8 = 0x69d95e;
    FUN_00434e38();
  }
  puStack_a4 = (undefined4 *)0x3;
  iStack_a8 = 0xff;
  iStack_ac = 0x69d96e;
  FUN_004031b7();
  puStack_a4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_a8 = 0x69d97b;
  FUN_00403191();
  puStack_a4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_a8 = 0x69d988;
  FUN_00403191();
  puStack_a4 = (undefined4 *)0x0;
  iStack_a8 = 0;
  iStack_ac = 0xffffffff;
  uStack_b0 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_b4 = 0;
  uStack_b8 = 0;
  iStack_bc = 0x69d99b;
  (*DAT_0097b4c8)();
  iStack_bc = 0x69d9a8;
  FUN_0087a1b0();
  iStack_bc = 0;
  uStack_c0 = 0;
  iStack_c4 = unaff_EBP + -0x48;
  iStack_c8 = unaff_EBP + -0x58;
  uStack_cc = 0xffffffff;
  uStack_d4 = 0x69d9bf;
  puStack_d0 = (undefined1 *)&uStack_b8;
  uStack_d4 = FUN_00449713();
  piStack_d8 = (int *)0x69d9c5;
  puStack_d0 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_cc;
  uStack_d4 = 0x69d9d2;
  FUN_004033a1();
  puStack_d0 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_d4 = 0x69d9df;
  FUN_00405a1d();
  uStack_d4 = 0x69d9e6;
  FUN_00402660();
  uStack_d4 = 0x69d9ed;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_c4 = 0x69d9f8;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_bc = unaff_EBP + -0x28;
    uStack_c0 = 0x69da0e;
    iStack_bc = FUN_0041a581();
    if ((iStack_bc < 0) && (iStack_bc != -0x7fffbffe)) {
      uStack_c0 = 0x69da1f;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar4 == (int *)0x0) {
    iStack_bc = 0x80004003;
    uStack_c0 = 0x69da3a;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar4;
  uStack_cc = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_d0 = (undefined1 *)0x21;
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_d4 = 0x84;
  *(int **)(unaff_EBP + -0x20) = piVar4;
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_dc = (undefined4 *)0x69da5f;
  piStack_d8 = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_dc = (undefined4 *)&DAT_00963cc8;
    iStack_e0 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_e8 = 0x69da71;
    iStack_e4 = iVar3;
    FUN_00878e09();
  }
  puStack_dc = (undefined4 *)0x69da79;
  FUN_004125e6();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x69da86;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x69da93;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_e0 = 0x69daa0;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x69daab;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_e0 = 0x69dab8;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x69dac3;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_e0 = 0x69dad0;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x69dadb;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0xc0c;
  iStack_e0 = unaff_EBP + -0x28;
  iStack_e4 = 0x69daee;
  puStack_dc = (undefined4 *)FUN_00679d22();
  puStack_dc = (undefined4 *)*puStack_dc;
  iStack_e0 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_e4 = 0x69dafd;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    iStack_e0 = 0x69db13;
    FUN_00434e38();
  }
  puStack_dc = (undefined4 *)0x3;
  iStack_e0 = 0xff;
  iStack_e4 = 0x69db23;
  FUN_004031b7();
  puStack_dc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_e0 = 0x69db30;
  FUN_00403191();
  puStack_dc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e0 = 0x69db3d;
  FUN_00403191();
  puStack_dc = (undefined4 *)0x0;
  iStack_e0 = 0;
  iStack_e4 = 0xffffffff;
  uStack_e8 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_ec = 0;
  uStack_f0 = 0;
  iStack_f4 = 0x69db50;
  (*DAT_0097b4c8)();
  iStack_f4 = 0x69db5d;
  FUN_0087a1b0();
  iStack_f4 = 0;
  uStack_f8 = 0;
  iStack_fc = unaff_EBP + -0x48;
  iStack_100 = unaff_EBP + -0x58;
  uStack_104 = 0xffffffff;
  uStack_10c = 0x69db74;
  puStack_108 = (undefined1 *)&uStack_f0;
  uStack_10c = FUN_00449713();
  piStack_110 = (int *)0x69db7a;
  puStack_108 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_104;
  uStack_10c = 0x69db87;
  FUN_004033a1();
  puStack_108 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_10c = 0x69db94;
  FUN_00405a1d();
  uStack_10c = 0x69db9b;
  FUN_00402660();
  uStack_10c = 0x69dba2;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_fc = 0x69dbad;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_f4 = unaff_EBP + -0x28;
    uStack_f8 = 0x69dbc3;
    iStack_f4 = FUN_0041a581();
    if ((iStack_f4 < 0) && (iStack_f4 != -0x7fffbffe)) {
      uStack_f8 = 0x69dbd4;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar4 == (int *)0x0) {
    iStack_f4 = 0x80004003;
    uStack_f8 = 0x69dbef;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar4;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_100 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_108 = (undefined1 *)0x21;
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_10c = 0x9b;
  *(int **)(unaff_EBP + -0x20) = piVar4;
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_114 = (undefined4 *)0x69dc14;
  piStack_110 = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_114 = (undefined4 *)&DAT_00963cc8;
    iStack_118 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_120 = 0x69dc26;
    iStack_11c = iVar3;
    FUN_00878e09();
  }
  puStack_114 = (undefined4 *)0x69dc2e;
  FUN_004125e6();
  puStack_114 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_118 = 0x69dc3b;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x69dc48;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_118 = 0x69dc55;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x69dc60;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_118 = 0x69dc6d;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x69dc78;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_118 = 0x69dc85;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x69dc90;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)0xc0b;
  iStack_118 = unaff_EBP + -0x28;
  iStack_11c = 0x69dca3;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_118 = *puVar2;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_114 = (undefined4 *)((iVar3 % 0x3c) / 10);
  iStack_11c = unaff_EBP + 8;
  uStack_120 = 0x69dccb;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_114 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    iStack_118 = 0x69dce2;
    FUN_00434e38();
  }
  puStack_114 = (undefined4 *)0x3;
  iStack_118 = 0xff;
  iStack_11c = 0x69dcf2;
  FUN_004031b7();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_118 = 0x69dcff;
  FUN_00403191();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_118 = 0x69dd0c;
  FUN_00403191();
  puStack_114 = (undefined4 *)0x0;
  iStack_118 = 0;
  iStack_11c = 0xffffffff;
  uStack_120 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_124 = 0;
  uStack_128 = 0;
  iStack_12c = 0x69dd1f;
  (*DAT_0097b4c8)();
  iStack_12c = 0x69dd2c;
  FUN_0087a1b0();
  iStack_12c = 0;
  uStack_130 = 0;
  iStack_134 = unaff_EBP + -0x48;
  iStack_138 = unaff_EBP + -0x58;
  uStack_13c = 0xffffffff;
  uStack_144 = 0x69dd43;
  puStack_140 = (undefined1 *)&uStack_128;
  uStack_144 = FUN_00449713();
  piStack_148 = (int *)0x69dd49;
  puStack_140 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_13c;
  uStack_144 = 0x69dd56;
  FUN_004033a1();
  puStack_140 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_144 = 0x69dd63;
  FUN_00405a1d();
  uStack_144 = 0x69dd6a;
  FUN_00402660();
  uStack_144 = 0x69dd71;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_134 = 0x69dd7c;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_12c = unaff_EBP + -0x28;
    uStack_130 = 0x69dd92;
    iStack_12c = FUN_0041a581();
    if ((iStack_12c < 0) && (iStack_12c != -0x7fffbffe)) {
      uStack_130 = 0x69dda3;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (piVar4 == (int *)0x0) {
    iStack_12c = 0x80004003;
    uStack_130 = 0x69ddbe;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar4;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_134 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_140 = (undefined1 *)0x21;
  uStack_130 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_144 = 0xa8;
  *(int **)(unaff_EBP + -0x20) = piVar4;
  iStack_12c = *(undefined4 *)(unaff_EBP + -0x2c);
  piStack_14c = (int *)0x69dde3;
  piStack_148 = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    piStack_14c = (int *)&DAT_00963cc8;
    iStack_150 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_158 = 0x69ddf5;
    iStack_154 = iVar3;
    FUN_00878e09();
  }
  piStack_14c = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (piStack_14c != (int *)0x0) {
    iStack_150 = 0x69de08;
    (**(code **)(*piStack_14c + 8))();
  }
  piStack_14c = (int *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_150 = 0x69de15;
  piStack_14c = (int *)FUN_00402bc3();
  if ((int)piStack_14c < 0) {
    iStack_150 = 0x69de20;
    FUN_00878dfb();
  }
  piStack_14c = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_150 = 0x69de2d;
  piStack_14c = (int *)FUN_00402bc3();
  if ((int)piStack_14c < 0) {
    iStack_150 = 0x69de38;
    FUN_00878dfb();
  }
  piStack_14c = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_150 = 0x69de45;
  piStack_14c = (int *)FUN_00402bc3();
  if ((int)piStack_14c < 0) {
    iStack_150 = 0x69de50;
    FUN_00878dfb();
  }
  piStack_14c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_150 = 0x69de5d;
  piStack_14c = (int *)FUN_00402bc3();
  if ((int)piStack_14c < 0) {
    iStack_150 = 0x69de68;
    FUN_00878dfb();
  }
  piStack_14c = (int *)0xc0b;
  iStack_150 = unaff_EBP + -0x28;
  iStack_154 = 0x69de7b;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_150 = *puVar2;
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  piStack_14c = (int *)((iVar3 % 0x3c) % 10);
  iStack_154 = unaff_EBP + 8;
  uStack_158 = 0x69dea3;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_14c = (int *)0x69deb2;
  FUN_00414ebb();
  piStack_14c = (int *)0x3;
  iStack_150 = 0xff;
  iStack_154 = 0x69dec1;
  FUN_004031b7();
  piStack_14c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_150 = 0x69dece;
  FUN_00403191();
  piStack_14c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_150 = 0x69dedb;
  FUN_00403191();
  piStack_14c = (int *)0x0;
  iStack_150 = 0;
  iStack_154 = 0xffffffff;
  uStack_158 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_15c = 0;
  uStack_160 = 0;
  iStack_164 = 0x69deee;
  (*DAT_0097b4c8)();
  iStack_164 = 0x69defb;
  FUN_0087a1b0();
  iStack_164 = 0;
  uStack_168 = 0;
  iStack_16c = unaff_EBP + -0x48;
  iStack_170 = unaff_EBP + -0x58;
  uStack_174 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_174;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_16c = 0x69df4b;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_164 = unaff_EBP + -0x28;
    uStack_168 = 0x69df61;
    iStack_164 = FUN_0041a581();
    if ((iStack_164 < 0) && (iStack_164 != -0x7fffbffe)) {
      uStack_168 = 0x69df72;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar4 == (int *)0x0) {
    iStack_164 = 0x80004003;
    uStack_168 = 0x69df8d;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar4;
  uStack_174 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_170 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_16c = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_168 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x20) = piVar4;
  iStack_164 = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_188 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_190 = 0x69dfc4;
    iStack_18c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_188 = 0x69dfd5;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_188 = 0x69dfe2;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_188 = 0x69dfed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_188 = 0x69dffa;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_188 = 0x69e005;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_188 = 0x69e012;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_188 = 0x69e01d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_188 = 0x69e02a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_188 = 0x69e035;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_188 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_18c = 0x69e050;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_188 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_18c = unaff_EBP + -0x1c;
  iStack_190 = 0x69e070;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00414ebb();
  iStack_188 = 0x69e08b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_188 = unaff_EBP + -0x48;
  iStack_18c = 0x69e095;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_188 = 0x69e0a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_188 = 0x69e0ab;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_188 = unaff_EBP + -0x38;
  iStack_18c = 0x69e0b5;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_188 = 0x69e0c1;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x38;
  iStack_190 = unaff_EBP + -0x28;
  iStack_18c = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_18c = 0x69e0e5;
  iStack_18c = FUN_00449749();
  iStack_190 = 0x69e0ee;
  uVar5 = FUN_00449713();
  *(int **)(unaff_EBP + -0x24) = &iStack_190;
  FUN_00448a17(uVar5);
  uVar6 = 0xd6;
  uVar5 = 0x9a;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0x9a,0xd6);
  FUN_00448e3a(uVar5,uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_188 = 0x69e128;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_188 = 0x69e135;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_188 = 0x69e140;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_188 = 0x69e14d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_188 = 0x69e158;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_188 = 0x69e175;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


