/* FUN_00728bce - 0x00728bce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00728bce(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  int *piStack_10c;
  int iStack_108;
  undefined1 *puStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 *puStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 *puStack_68;
  
  FUN_00879bb8();
  puStack_68 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_6c = 0x728be7;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_68 = (undefined4 *)0xa2e;
  iStack_6c = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_70 = 0x728c08;
  FUN_00679d22();
  puStack_68 = (undefined4 *)&DAT_0096b4f8;
  iStack_6c = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_70 = 0x728c1c;
  FUN_004653c5();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_68 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    iStack_6c = 0x728c30;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_68 = (undefined4 *)0xa2f;
  iStack_6c = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_70 = 0x728c48;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_6c = *puVar1;
  puStack_68 = (undefined4 *)0x1;
  iStack_70 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_74 = 0x728c5a;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_68 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    iStack_6c = 0x728c71;
    FUN_00434e38();
  }
  puStack_68 = &DAT_00980690;
  iStack_6c = 0x728c80;
  FUN_00403191();
  puStack_68 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_6c = 0x728c8d;
  FUN_00403191();
  puStack_68 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_6c = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_70 = 0x728ca1;
  puVar1 = (undefined4 *)FUN_0045e02d();
  uStack_74 = *puVar1;
  puStack_68 = (undefined4 *)0x0;
  iStack_6c = 0;
  iStack_70 = 0xffffffff;
  uStack_78 = 0;
  uStack_7c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_80 = 0x728cb4;
  (*DAT_0097b4c8)();
  iStack_80 = 0x728cc1;
  FUN_0087a1b0();
  iStack_80 = 0;
  uStack_84 = 0;
  iStack_88 = unaff_EBP + -0x54;
  iStack_8c = unaff_EBP + -0x44;
  iStack_90 = unaff_EBP + -0x10;
  puStack_94 = (undefined1 *)(unaff_EBP + -0x2c);
  uStack_98 = 0x728cdd;
  FUN_0045e02d();
  iStack_90 = -1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_98 = 0x728ceb;
  puStack_94 = (undefined1 *)&uStack_7c;
  uStack_98 = FUN_00449713();
  piStack_9c = (int *)0x728cf1;
  puStack_94 = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x34) = &iStack_90;
  uStack_98 = 0x728cfe;
  FUN_004033a1();
  puStack_94 = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_98 = 0x728d0b;
  FUN_00405a1d();
  uStack_98 = 0x728d12;
  FUN_00402660();
  uStack_98 = 0x728d19;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_88 = 0x728d24;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  iStack_80 = unaff_EBP + -0x20;
  uStack_84 = 0x728d33;
  iStack_80 = FUN_0041a581();
  if ((iStack_80 < 0) && (iStack_80 != -0x7fffbffe)) {
    uStack_84 = 0x728d44;
    FUN_00878dfb();
  }
  iStack_80 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_84 = 0x728d51;
  iStack_80 = FUN_00402bc3();
  if (iStack_80 < 0) {
    uStack_84 = 0x728d5c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    iStack_80 = *(int *)(unaff_EBP + -0x2c) + -0xc;
    uStack_84 = 0x728d70;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    iStack_80 = *(int *)(unaff_EBP + -0x30) + -0xc;
    uStack_84 = 0x728d85;
    FUN_00434e38();
  }
  iStack_80 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_84 = 0x728d93;
  iStack_80 = FUN_00402bc3();
  if (iStack_80 < 0) {
    uStack_84 = 0x728d9e;
    FUN_00878dfb();
  }
  iStack_80 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_84 = 0x728dab;
  iStack_80 = FUN_00402bc3();
  if (iStack_80 < 0) {
    uStack_84 = 0x728db6;
    FUN_00878dfb();
  }
  iStack_80 = 3;
  uStack_84 = 0xff;
  iStack_88 = 0x728dc5;
  FUN_004031b7();
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar4 == (int *)0x0) {
    iStack_80 = 0x80004003;
    uStack_84 = 0x728dda;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x18);
  }
  iVar3 = *piVar4;
  iStack_90 = *(int *)(unaff_EBP + -0x14);
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_94 = (undefined1 *)0x3f;
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_98 = 5;
  *(int **)(unaff_EBP + -0x30) = piVar4;
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x48);
  puStack_a0 = (undefined4 *)0x728dfc;
  piStack_9c = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_a0 = (undefined4 *)&DAT_00963cc8;
    iStack_a4 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_ac = 0x728e0e;
    iStack_a8 = iVar3;
    FUN_00878e09();
  }
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a4 = 0x728e1b;
  puStack_a0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a0 < 0) {
    iStack_a4 = 0x728e26;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined4 *)0xa31;
  iStack_a4 = unaff_EBP + -0x30;
  iStack_a8 = 0x728e39;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_a4 = *puVar1;
  puStack_a0 = (undefined4 *)0x1;
  iStack_a8 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_ac = 0x728e4b;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_a0 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_a4 = 0x728e62;
    FUN_00434e38();
  }
  puStack_a0 = &DAT_00980690;
  iStack_a4 = 0x728e71;
  FUN_00403191();
  puStack_a0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_a4 = 0x728e7e;
  FUN_00403191();
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_a4 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_a8 = 0x728e92;
  puVar1 = (undefined4 *)FUN_0045e02d();
  uStack_ac = *puVar1;
  puStack_a0 = (undefined4 *)0x0;
  iStack_a4 = 0;
  iStack_a8 = 0xffffffff;
  uStack_b0 = 0;
  uStack_b4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_b8 = 0x728ea5;
  (*DAT_0097b4c8)();
  iStack_b8 = 0x728eb2;
  FUN_0087a1b0();
  iStack_b8 = 0;
  uStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x44;
  iStack_c4 = unaff_EBP + -0x54;
  iStack_c8 = unaff_EBP + -0x10;
  puStack_cc = (undefined1 *)(unaff_EBP + -0x2c);
  uStack_d0 = 0x728ece;
  FUN_0045e02d();
  iStack_c8 = -1;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_d0 = 0x728edc;
  puStack_cc = (undefined1 *)&uStack_b4;
  uStack_d0 = FUN_00449713();
  piStack_d4 = (int *)0x728ee2;
  puStack_cc = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x34) = &iStack_c8;
  uStack_d0 = 0x728eef;
  FUN_004033a1();
  puStack_cc = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_d0 = 0x728efc;
  FUN_00405a1d();
  uStack_d0 = 0x728f03;
  FUN_00402660();
  uStack_d0 = 0x728f0a;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_c0 = 0x728f15;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
  iStack_b8 = unaff_EBP + -0x30;
  uStack_bc = 0x728f24;
  iStack_b8 = FUN_0041a581();
  if ((iStack_b8 < 0) && (iStack_b8 != -0x7fffbffe)) {
    uStack_bc = 0x728f35;
    FUN_00878dfb();
  }
  iStack_b8 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_bc = 0x728f42;
  iStack_b8 = FUN_00402bc3();
  if (iStack_b8 < 0) {
    uStack_bc = 0x728f4d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    iStack_b8 = *(int *)(unaff_EBP + -0x2c) + -0xc;
    uStack_bc = 0x728f61;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    iStack_b8 = *(int *)(unaff_EBP + -0x20) + -0xc;
    uStack_bc = 0x728f76;
    FUN_00434e38();
  }
  iStack_b8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_bc = 0x728f84;
  iStack_b8 = FUN_00402bc3();
  if (iStack_b8 < 0) {
    uStack_bc = 0x728f8f;
    FUN_00878dfb();
  }
  iStack_b8 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_bc = 0x728f9c;
  iStack_b8 = FUN_00402bc3();
  if (iStack_b8 < 0) {
    uStack_bc = 0x728fa7;
    FUN_00878dfb();
  }
  iStack_b8 = 3;
  uStack_bc = 0xff;
  iStack_c0 = 0x728fb6;
  FUN_004031b7();
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (piVar4 == (int *)0x0) {
    iStack_b8 = 0x80004003;
    uStack_bc = 0x728fcb;
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x18);
  }
  iVar3 = *piVar4;
  iStack_c8 = *(int *)(unaff_EBP + -0x14);
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x50);
  puStack_cc = (undefined1 *)0x3f;
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_d0 = 0x2c;
  *(int **)(unaff_EBP + -0x30) = piVar4;
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x48);
  puStack_d8 = (undefined4 *)0x728fed;
  piStack_d4 = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_d8 = (undefined4 *)&DAT_00963cc8;
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_e4 = 0x728fff;
    iStack_e0 = iVar3;
    FUN_00878e09();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_dc = 0x72900c;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    iStack_dc = 0x729017;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)0xa32;
  iStack_dc = unaff_EBP + -0x30;
  iStack_e0 = 0x72902a;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_dc = *puVar1;
  puStack_d8 = (undefined4 *)0x1;
  iStack_e0 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_e4 = 0x72903c;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_d8 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_dc = 0x729053;
    FUN_00434e38();
  }
  puStack_d8 = &DAT_00980690;
  iStack_dc = 0x729062;
  FUN_00403191();
  puStack_d8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_dc = 0x72906f;
  FUN_00403191();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_dc = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_e0 = 0x729083;
  puVar1 = (undefined4 *)FUN_0045e02d();
  uStack_e4 = *puVar1;
  puStack_d8 = (undefined4 *)0x0;
  iStack_dc = 0;
  iStack_e0 = 0xffffffff;
  uStack_e8 = 0;
  uStack_ec = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_f0 = (undefined4 *)0x729096;
  (*DAT_0097b4c8)();
  puStack_f0 = (undefined4 *)0x7290a3;
  FUN_0087a1b0();
  puStack_f0 = (undefined4 *)0x0;
  iStack_f4 = 0;
  iStack_f8 = unaff_EBP + -0x44;
  iStack_fc = unaff_EBP + -0x54;
  iStack_100 = unaff_EBP + -0x10;
  puStack_104 = (undefined1 *)(unaff_EBP + -0x2c);
  iStack_108 = 0x7290bf;
  FUN_0045e02d();
  iStack_100 = -1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_108 = 0x7290cd;
  puStack_104 = (undefined1 *)&uStack_ec;
  iStack_108 = FUN_00449713();
  piStack_10c = (int *)0x7290d3;
  puStack_104 = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x34) = &iStack_100;
  iStack_108 = 0x7290e0;
  FUN_004033a1();
  puStack_104 = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_108 = 0x7290ed;
  FUN_00405a1d();
  iStack_108 = 0x7290f4;
  FUN_00402660();
  iStack_108 = 0x7290fb;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_f8 = 0x729106;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
  puStack_f0 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_f4 = 0x729115;
  puStack_f0 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_f0 < 0) && (puStack_f0 != (undefined4 *)0x80004002)) {
    iStack_f4 = 0x729126;
    FUN_00878dfb();
  }
  puStack_f0 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_f4 = 0x729133;
  puStack_f0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f0 < 0) {
    iStack_f4 = 0x72913e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    puStack_f0 = (undefined4 *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
    iStack_f4 = 0x729152;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_f0 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    iStack_f4 = 0x729167;
    FUN_00434e38();
  }
  puStack_f0 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_f4 = 0x729175;
  puStack_f0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f0 < 0) {
    iStack_f4 = 0x729180;
    FUN_00878dfb();
  }
  puStack_f0 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_f4 = 0x72918d;
  puStack_f0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f0 < 0) {
    iStack_f4 = 0x729198;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 9;
  do {
    puStack_f0 = (undefined4 *)0x3;
    iStack_f4 = 0xff;
    iStack_f8 = 0x7291ae;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (piVar4 == (int *)0x0) {
      puStack_f0 = (undefined4 *)0x80004003;
      iStack_f4 = 0x7291c3;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x18);
    }
    iVar3 = *piVar4;
    iStack_100 = *(int *)(unaff_EBP + -0x14);
    iStack_fc = *(int *)(unaff_EBP + -0x54);
    iStack_f8 = *(int *)(unaff_EBP + -0x50);
    puStack_104 = (undefined1 *)0x3f;
    iStack_108 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_f4 = *(undefined4 *)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x30) = piVar4;
    puStack_f0 = *(undefined4 **)(unaff_EBP + -0x48);
    iStack_110 = 0x7291e6;
    piStack_10c = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_f0 = (undefined4 *)&DAT_00963cc8;
      iStack_f4 = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_fc = 0x7291f8;
      iStack_f8 = iVar3;
      FUN_00878e09();
    }
    puStack_f0 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_f4 = 0x729205;
    puStack_f0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_f0 < 0) {
      iStack_f4 = 0x729210;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
  } while (*(int *)(unaff_EBP + -0x20) < 0x2c);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_f0 = (undefined4 *)0xb3a;
  iStack_f4 = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_f8 = 0x729233;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_f4 = *puVar1;
  puStack_f0 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_f8 = unaff_EBP + -0x24;
  iStack_fc = 0x729246;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_f0 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_f4 = 0x72925d;
    FUN_00434e38();
  }
  puStack_f0 = &DAT_00980690;
  iStack_f4 = 0x72926c;
  FUN_00403191();
  puStack_f0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_f4 = 0x729279;
  FUN_00403191();
  puStack_f0 = (undefined4 *)0x0;
  iStack_f4 = 0;
  iStack_f8 = 0xffffffff;
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_100 = 0;
  puStack_104 = (undefined1 *)0x0;
  iStack_108 = 0x72928c;
  (*DAT_0097b4c8)();
  iStack_108 = 0x729299;
  FUN_0087a1b0();
  iStack_108 = 0;
  piStack_10c = (int *)0x0;
  iStack_110 = unaff_EBP + -0x44;
  iStack_114 = unaff_EBP + -0x54;
  uStack_118 = 0xffffffff;
  uVar2 = FUN_00449713(&puStack_104);
  uVar2 = FUN_00456ad5(uVar2);
  *(undefined4 **)(unaff_EBP + -0x34) = &uStack_118;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_110 = 0x7292e9;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_108 = unaff_EBP + 8;
  piStack_10c = (int *)0x7292f8;
  iStack_108 = FUN_0041a581();
  if ((iStack_108 < 0) && (iStack_108 != -0x7fffbffe)) {
    piStack_10c = (int *)0x729309;
    FUN_00878dfb();
  }
  iStack_108 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_10c = (int *)0x729316;
  iStack_108 = FUN_00402bc3();
  if (iStack_108 < 0) {
    piStack_10c = (int *)0x729321;
    FUN_00878dfb();
  }
  iStack_108 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  piStack_10c = (int *)0x72932e;
  iStack_108 = FUN_00402bc3();
  if (iStack_108 < 0) {
    piStack_10c = (int *)0x729339;
    FUN_00878dfb();
  }
  iStack_108 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  piStack_10c = (int *)0x729346;
  iStack_108 = FUN_00402bc3();
  if (iStack_108 < 0) {
    piStack_10c = (int *)0x729351;
    FUN_00878dfb();
  }
  iStack_108 = 3;
  piStack_10c = (int *)0xff;
  iStack_110 = 0x729360;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iStack_108 = 0x80004003;
    piStack_10c = (int *)0x729373;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    iStack_108 = 0x80004003;
    piStack_10c = (int *)0x729382;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(int **)(unaff_EBP + 8) = piVar4;
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_108 = 0x729393;
  uVar5 = FUN_0040e48b();
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_114 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_110 = *(undefined4 *)(unaff_EBP + -0x50);
  piStack_10c = *(int **)(unaff_EBP + -0x4c);
  iStack_108 = *(undefined4 *)(unaff_EBP + -0x48);
  iVar3 = (**(code **)(*piVar4 + 0x80))(*(undefined4 *)(unaff_EBP + 8),0x1a - (uVar5 >> 1),0x44);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


