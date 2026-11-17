/* FUN_006a04c4 - 0x006a04c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a04c4(void)

{
  char *pcVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar9;
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
  undefined4 *puStack_14c;
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
  iStack_70 = 0x6a04e1;
  FUN_0081622a();
  puStack_6c = (undefined4 *)(unaff_EBP + 8);
  iStack_70 = 0x6a04ec;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_6c = (undefined4 *)0x6a04f7;
  DVar2 = timeGetTime();
  if (-1 < (int)(DVar2 - *(int *)(extraout_ECX + 0xa4))) {
    *(undefined4 *)(extraout_ECX + 0xa8) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_6c = (undefined4 *)0xf05;
  iStack_70 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_74 = 0x6a051f;
  piVar3 = (int *)FUN_00679e4e();
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    iStack_70 = 0;
  }
  else {
    puStack_6c = (undefined4 *)0x6a052e;
    iStack_70 = FUN_00409205();
  }
  puStack_6c = (undefined4 *)(*(int *)(extraout_ECX + 0xa8) / 600);
  iStack_74 = unaff_EBP + -0x10;
  uStack_78 = 0x6a0551;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_6c = (undefined4 *)0x6a0560;
  FUN_00402fa6();
  puStack_6c = (undefined4 *)0x3;
  iStack_70 = 0xff;
  iStack_74 = 0x6a056f;
  FUN_004031b7();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_70 = 0x6a0581;
  FUN_00403191();
  puStack_6c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_70 = 0x6a058e;
  FUN_00403191();
  puStack_6c = (undefined4 *)0x0;
  iStack_70 = 0;
  iStack_74 = 0xffffffff;
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0;
  uStack_80 = 0;
  iStack_84 = 0x6a05a1;
  (*DAT_0097b4c8)();
  iStack_84 = 0x6a05ae;
  FUN_0087a1b0();
  iStack_84 = 0;
  uStack_88 = 0;
  iStack_8c = unaff_EBP + -0x38;
  iStack_90 = unaff_EBP + -0x48;
  uStack_94 = 0xffffffff;
  uStack_9c = 0x6a05c5;
  puStack_98 = (undefined1 *)&uStack_80;
  uStack_9c = FUN_00449713();
  piStack_a0 = (int *)0x6a05cb;
  puStack_98 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x28) = &uStack_94;
  uStack_9c = 0x6a05d8;
  FUN_004033a1();
  puStack_98 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_9c = 0x6a05e5;
  FUN_00405a1d();
  uStack_9c = 0x6a05ec;
  FUN_00402660();
  uStack_9c = 0x6a05f3;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_8c = 0x6a05fe;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) {
    iStack_84 = unaff_EBP + -0x20;
    uStack_88 = 0x6a0614;
    iStack_84 = FUN_0041a581();
    if ((iStack_84 < 0) && (iStack_84 != -0x7fffbffe)) {
      uStack_88 = 0x6a0625;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar3 == (int *)0x0) {
    iStack_84 = 0x80004003;
    uStack_88 = 0x6a0640;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar3;
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
  iStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
  puStack_98 = (undefined1 *)0x21;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_9c = 0x6f;
  *(int **)(unaff_EBP + -0x28) = piVar3;
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_a4 = (undefined4 *)0x6a0662;
  piStack_a0 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_a4 = (undefined4 *)&DAT_00963cc8;
    iStack_a8 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_b0 = 0x6a0674;
    iStack_ac = iVar4;
    FUN_00878e09();
  }
  puStack_a4 = (undefined4 *)0x6a067c;
  FUN_004125e6();
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_a8 = 0x6a0689;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x6a0696;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_a8 = 0x6a06a3;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x6a06ae;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_a8 = 0x6a06bb;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x6a06c6;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_a8 = 0x6a06d3;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    iStack_a8 = 0x6a06de;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)0xf05;
  iStack_a8 = unaff_EBP + -0x28;
  iStack_ac = 0x6a06f1;
  piVar3 = (int *)FUN_00679e4e();
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar4 == 0) {
    iStack_a8 = 0;
  }
  else {
    puStack_a4 = (undefined4 *)0x6a0700;
    iStack_a8 = FUN_00409205();
  }
  puStack_a4 = (undefined4 *)((*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) / 0x3c) % 10);
  iStack_ac = unaff_EBP + -0x10;
  uStack_b0 = 0x6a0726;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_a4 = (undefined4 *)0x6a0735;
  FUN_00402fa6();
  puStack_a4 = (undefined4 *)0x3;
  iStack_a8 = 0xff;
  iStack_ac = 0x6a0744;
  FUN_004031b7();
  puStack_a4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_a8 = 0x6a0751;
  FUN_00403191();
  puStack_a4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_a8 = 0x6a075e;
  FUN_00403191();
  puStack_a4 = (undefined4 *)0x0;
  iStack_a8 = 0;
  iStack_ac = 0xffffffff;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_b4 = 0;
  uStack_b8 = 0;
  iStack_bc = 0x6a0771;
  (*DAT_0097b4c8)();
  iStack_bc = 0x6a077e;
  FUN_0087a1b0();
  iStack_bc = 0;
  uStack_c0 = 0;
  iStack_c4 = unaff_EBP + -0x48;
  iStack_c8 = unaff_EBP + -0x58;
  uStack_cc = 0xffffffff;
  uStack_d4 = 0x6a0795;
  puStack_d0 = (undefined1 *)&uStack_b8;
  uStack_d4 = FUN_00449713();
  piStack_d8 = (int *)0x6a079b;
  puStack_d0 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_cc;
  uStack_d4 = 0x6a07a8;
  FUN_004033a1();
  puStack_d0 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_d4 = 0x6a07b5;
  FUN_00405a1d();
  uStack_d4 = 0x6a07bc;
  FUN_00402660();
  uStack_d4 = 0x6a07c3;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_c4 = 0x6a07ce;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) {
    iStack_bc = unaff_EBP + -0x28;
    uStack_c0 = 0x6a07e4;
    iStack_bc = FUN_0041a581();
    if ((iStack_bc < 0) && (iStack_bc != -0x7fffbffe)) {
      uStack_c0 = 0x6a07f5;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (piVar3 == (int *)0x0) {
    iStack_bc = 0x80004003;
    uStack_c0 = 0x6a0810;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar3;
  uStack_cc = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_c4 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_d0 = (undefined1 *)0x21;
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_d4 = 0x84;
  *(int **)(unaff_EBP + -0x20) = piVar3;
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_dc = (undefined4 *)0x6a0835;
  piStack_d8 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_dc = (undefined4 *)&DAT_00963cc8;
    iStack_e0 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_e8 = 0x6a0847;
    iStack_e4 = iVar4;
    FUN_00878e09();
  }
  puStack_dc = (undefined4 *)0x6a084f;
  FUN_004125e6();
  puStack_dc = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x6a085c;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6a0869;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_e0 = 0x6a0876;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6a0881;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_e0 = 0x6a088e;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6a0899;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_e0 = 0x6a08a6;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    iStack_e0 = 0x6a08b1;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0xf06;
  iStack_e0 = unaff_EBP + -0x28;
  iStack_e4 = 0x6a08c4;
  piVar3 = (int *)FUN_00679e4e();
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar4 == 0) {
    puStack_dc = (undefined4 *)0x0;
  }
  else {
    puStack_dc = (undefined4 *)0x6a08d3;
    puStack_dc = (undefined4 *)FUN_00409205();
  }
  iStack_e0 = unaff_EBP + -0x10;
  iStack_e4 = 0x6a08e1;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_dc = (undefined4 *)0x6a08ef;
  FUN_00402fa6();
  puStack_dc = (undefined4 *)0x3;
  iStack_e0 = 0xff;
  iStack_e4 = 0x6a08fe;
  FUN_004031b7();
  puStack_dc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_e0 = 0x6a090b;
  FUN_00403191();
  puStack_dc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e0 = 0x6a0918;
  FUN_00403191();
  puStack_dc = (undefined4 *)0x0;
  iStack_e0 = 0;
  iStack_e4 = 0xffffffff;
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_ec = 0;
  uStack_f0 = 0;
  iStack_f4 = 0x6a092b;
  (*DAT_0097b4c8)();
  iStack_f4 = 0x6a0938;
  FUN_0087a1b0();
  iStack_f4 = 0;
  uStack_f8 = 0;
  iStack_fc = unaff_EBP + -0x48;
  iStack_100 = unaff_EBP + -0x58;
  uStack_104 = 0xffffffff;
  uStack_10c = 0x6a094f;
  puStack_108 = (undefined1 *)&uStack_f0;
  uStack_10c = FUN_00449713();
  piStack_110 = (int *)0x6a0955;
  puStack_108 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_104;
  uStack_10c = 0x6a0962;
  FUN_004033a1();
  puStack_108 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_10c = 0x6a096f;
  FUN_00405a1d();
  uStack_10c = 0x6a0976;
  FUN_00402660();
  uStack_10c = 0x6a097d;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_fc = 0x6a0988;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) {
    iStack_f4 = unaff_EBP + -0x28;
    uStack_f8 = 0x6a099e;
    iStack_f4 = FUN_0041a581();
    if ((iStack_f4 < 0) && (iStack_f4 != -0x7fffbffe)) {
      uStack_f8 = 0x6a09af;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar3 == (int *)0x0) {
    iStack_f4 = 0x80004003;
    uStack_f8 = 0x6a09ca;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar3;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_100 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_108 = (undefined1 *)0x21;
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_10c = 0x9b;
  *(int **)(unaff_EBP + -0x20) = piVar3;
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_114 = (undefined4 *)0x6a09ef;
  piStack_110 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_114 = (undefined4 *)&DAT_00963cc8;
    iStack_118 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_120 = 0x6a0a01;
    iStack_11c = iVar4;
    FUN_00878e09();
  }
  puStack_114 = (undefined4 *)0x6a0a09;
  FUN_004125e6();
  puStack_114 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_118 = 0x6a0a16;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x6a0a23;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_118 = 0x6a0a30;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x6a0a3b;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_118 = 0x6a0a48;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x6a0a53;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_118 = 0x6a0a60;
  puStack_114 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_114 < 0) {
    iStack_118 = 0x6a0a6b;
    FUN_00878dfb();
  }
  puStack_114 = (undefined4 *)0xf05;
  iStack_118 = unaff_EBP + -0x28;
  iStack_11c = 0x6a0a7e;
  piVar3 = (int *)FUN_00679e4e();
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar4 == 0) {
    iStack_118 = 0;
  }
  else {
    puStack_114 = (undefined4 *)0x6a0a8d;
    iStack_118 = FUN_00409205();
  }
  puStack_114 = (undefined4 *)((*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) % 0x3c) / 10);
  iStack_11c = unaff_EBP + -0x10;
  uStack_120 = 0x6a0ab5;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_114 = (undefined4 *)0x6a0ac4;
  FUN_00402fa6();
  puStack_114 = (undefined4 *)0x3;
  iStack_118 = 0xff;
  iStack_11c = 0x6a0ad3;
  FUN_004031b7();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_118 = 0x6a0ae0;
  FUN_00403191();
  puStack_114 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_118 = 0x6a0aed;
  FUN_00403191();
  puStack_114 = (undefined4 *)0x0;
  iStack_118 = 0;
  iStack_11c = 0xffffffff;
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_124 = 0;
  uStack_128 = 0;
  iStack_12c = 0x6a0b00;
  (*DAT_0097b4c8)();
  iStack_12c = 0x6a0b0d;
  FUN_0087a1b0();
  iStack_12c = 0;
  uStack_130 = 0;
  iStack_134 = unaff_EBP + -0x48;
  iStack_138 = unaff_EBP + -0x58;
  uStack_13c = 0xffffffff;
  uStack_144 = 0x6a0b24;
  puStack_140 = (undefined1 *)&uStack_128;
  uStack_144 = FUN_00449713();
  piStack_148 = (int *)0x6a0b2a;
  puStack_140 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_13c;
  uStack_144 = 0x6a0b37;
  FUN_004033a1();
  puStack_140 = (undefined1 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_144 = 0x6a0b44;
  FUN_00405a1d();
  uStack_144 = 0x6a0b4b;
  FUN_00402660();
  uStack_144 = 0x6a0b52;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_134 = 0x6a0b5d;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) {
    iStack_12c = unaff_EBP + -0x28;
    uStack_130 = 0x6a0b73;
    iStack_12c = FUN_0041a581();
    if ((iStack_12c < 0) && (iStack_12c != -0x7fffbffe)) {
      uStack_130 = 0x6a0b84;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (piVar3 == (int *)0x0) {
    iStack_12c = 0x80004003;
    uStack_130 = 0x6a0b9f;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar3;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_134 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_140 = (undefined1 *)0x21;
  uStack_130 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_144 = 0xa8;
  *(int **)(unaff_EBP + -0x20) = piVar3;
  iStack_12c = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_14c = (undefined4 *)0x6a0bc4;
  piStack_148 = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_14c = (undefined4 *)&DAT_00963cc8;
    iStack_150 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_158 = 0x6a0bd6;
    iStack_154 = iVar4;
    FUN_00878e09();
  }
  puStack_14c = (undefined4 *)0x6a0bde;
  FUN_004125e6();
  puStack_14c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_150 = 0x6a0beb;
  puStack_14c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_14c < 0) {
    iStack_150 = 0x6a0bf8;
    FUN_00878dfb();
  }
  puStack_14c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_150 = 0x6a0c05;
  puStack_14c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_14c < 0) {
    iStack_150 = 0x6a0c10;
    FUN_00878dfb();
  }
  puStack_14c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_150 = 0x6a0c1d;
  puStack_14c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_14c < 0) {
    iStack_150 = 0x6a0c28;
    FUN_00878dfb();
  }
  puStack_14c = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_150 = 0x6a0c35;
  puStack_14c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_14c < 0) {
    iStack_150 = 0x6a0c40;
    FUN_00878dfb();
  }
  puStack_14c = (undefined4 *)0xf05;
  iStack_150 = unaff_EBP + -0x28;
  iStack_154 = 0x6a0c53;
  piVar3 = (int *)FUN_00679e4e();
  iVar4 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar4 == 0) {
    iStack_150 = 0;
  }
  else {
    puStack_14c = (undefined4 *)0x6a0c62;
    iStack_150 = FUN_00409205();
  }
  puStack_14c = (undefined4 *)((*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) % 0x3c) % 10);
  iStack_154 = unaff_EBP + -0x10;
  uStack_158 = 0x6a0c8a;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_14c = (undefined4 *)0x6a0c99;
  FUN_00402fa6();
  puStack_14c = (undefined4 *)0x3;
  iStack_150 = 0xff;
  iStack_154 = 0x6a0ca8;
  FUN_004031b7();
  puStack_14c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_150 = 0x6a0cb5;
  FUN_00403191();
  puStack_14c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_150 = 0x6a0cc2;
  FUN_00403191();
  puStack_14c = (undefined4 *)0x0;
  iStack_150 = 0;
  iStack_154 = 0xffffffff;
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_15c = 0;
  uStack_160 = 0;
  iStack_164 = 0x6a0cd5;
  (*DAT_0097b4c8)();
  iStack_164 = 0x6a0ce2;
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
  iStack_16c = 0x6a0d32;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar4 != 0) {
    iStack_164 = unaff_EBP + -0x28;
    uStack_168 = 0x6a0d48;
    iStack_164 = FUN_0041a581();
    if ((iStack_164 < 0) && (iStack_164 != -0x7fffbffe)) {
      uStack_168 = 0x6a0d59;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (piVar3 == (int *)0x0) {
    iStack_164 = 0x80004003;
    uStack_168 = 0x6a0d74;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar3;
  uStack_174 = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_170 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_16c = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_168 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x20) = piVar3;
  iStack_164 = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    iStack_188 = *(int *)(unaff_EBP + -0x20);
    iStack_190 = 0x6a0dab;
    iStack_18c = iVar4;
    FUN_00878e09();
  }
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_188 = 0x6a0dc0;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a0dcb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_188 = 0x6a0dd8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a0de3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_188 = 0x6a0df0;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a0dfb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_188 = 0x6a0e08;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a0e13;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x1c;
  iStack_18c = 0x6a0e1e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_188 = 0x6a0e2d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_188 = 0x6a0e45;
  iStack_18c = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_188;
  iStack_190 = 0x6a0e51;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_18c = 0x6a0e5d;
  FUN_0044974c();
  iStack_18c = 0x6a0e64;
  iVar4 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_188 = 0x6a0e73;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_188 = 0x6a0e7e;
    FUN_00878dfb();
  }
  iStack_188 = 0x6a0e87;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_188 = 0x6a0e94;
  FUN_00403191();
  iStack_188 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_18c = 0x6a0ea8;
  iStack_18c = FUN_00449749();
  iStack_190 = 0x6a0eb0;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_190;
  FUN_00448a17(uVar6);
  iVar5 = *(int *)(unaff_EBP + -0x14);
  uVar6 = 0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0x50);
  iVar7 = FUN_0040e48b();
  uVar8 = (uint)(iVar7 - iVar4) >> 1;
  FUN_004115d9(uVar8);
  FUN_00448e3a(uVar8,uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_188 = 0x6a0ef5;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a0f00;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_188 = 0x6a0f0d;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a0f18;
    FUN_00878dfb();
  }
  pcVar1 = *(char **)(iVar5 + 0x94);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_188 = 0x6a0f41;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_188 = unaff_EBP + -0x48;
    iStack_18c = 0x6a0f4b;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a0f57;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_188 = 0x6a0f61;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_188 = unaff_EBP + -0x38;
    iStack_18c = 0x6a0f6b;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a0f77;
      FUN_00878dfb();
    }
    iStack_188 = unaff_EBP + -0x38;
    iStack_190 = unaff_EBP + -0x24;
    iStack_18c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iStack_18c = 0x6a0f9b;
    iStack_18c = FUN_00449749();
    iStack_190 = 0xf07;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_190 = 0x6a0fba;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_190;
    FUN_00448a17(uVar6);
    uVar9 = 0x6e;
    uVar6 = 0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_004115d9(0x34,0x6e);
    FUN_00448e3a(uVar6,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_188 = 0x6a0ffa;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iStack_188 = 0x6a1007;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1012;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_188 = 0x6a101f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a102a;
      FUN_00878dfb();
    }
    iStack_188 = 0x6a1030;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_188 = unaff_EBP + -0x38;
    iStack_18c = 0x6a103a;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1046;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_188 = 0x6a1050;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_188 = unaff_EBP + -0x48;
    iStack_18c = 0x6a105a;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1066;
      FUN_00878dfb();
    }
    iStack_188 = unaff_EBP + -0x48;
    iStack_190 = unaff_EBP + -0x28;
    iStack_18c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_18c = 0x6a108a;
    iStack_18c = FUN_00449749();
    iStack_190 = 0x6a1092;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_190;
    FUN_00448a17(uVar6);
    uVar9 = 0x6e;
    uVar6 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_004115d9(0x5c,0x6e);
    FUN_00448e3a(uVar6,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_188 = 0x6a10c6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_188 = 0x6a10d3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a10de;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_188 = 0x6a10eb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a10f6;
      FUN_00878dfb();
    }
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x14) + 0x98);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iStack_188 = 0x6a1117;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_188 = unaff_EBP + -0x38;
    iStack_18c = 0x6a1121;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a112d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_188 = 0x6a1137;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_188 = unaff_EBP + -0x48;
    iStack_18c = 0x6a1141;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a114d;
      FUN_00878dfb();
    }
    iStack_188 = unaff_EBP + -0x48;
    iStack_190 = unaff_EBP + -0x24;
    iStack_18c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_18c = 0x6a1171;
    iStack_18c = FUN_00449749();
    iStack_190 = 0xf08;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iStack_190 = 0x6a1190;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_190;
    FUN_00448a17(uVar6);
    uVar9 = 0x82;
    uVar6 = 0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_004115d9(0x34,0x82);
    FUN_00448e3a(uVar6,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_188 = 0x6a11d4;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_188 = 0x6a11e1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a11ec;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_188 = 0x6a11f9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1204;
      FUN_00878dfb();
    }
    iStack_188 = 0x6a120a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_188 = unaff_EBP + -0x38;
    iStack_18c = 0x6a1214;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1220;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_188 = 0x6a122a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_188 = unaff_EBP + -0x48;
    iStack_18c = 0x6a1234;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1240;
      FUN_00878dfb();
    }
    iStack_188 = unaff_EBP + -0x48;
    iStack_190 = unaff_EBP + -0x28;
    iStack_18c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_18c = 0x6a1264;
    iStack_18c = FUN_00449749();
    iStack_190 = 0x6a1273;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_190;
    FUN_00448a17(uVar6);
    uVar9 = 0x82;
    uVar6 = 0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_004115d9(0x5c,0x82);
    FUN_00448e3a(uVar6,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_188 = 0x6a12a6;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iStack_188 = 0x6a12b3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a12be;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_188 = 0x6a12cb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a12d6;
      FUN_00878dfb();
    }
  }
  iStack_188 = 0x6a12dc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_188 = unaff_EBP + -0x38;
  iStack_18c = 0x6a12e6;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_188 = 0x6a12f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_188 = 0x6a12fc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_188 = unaff_EBP + -0x48;
  iStack_18c = 0x6a1306;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_188 = 0x6a1312;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x48;
  iStack_190 = unaff_EBP + -0x24;
  iStack_18c = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iStack_18c = 0x6a1336;
  iStack_18c = FUN_00449749();
  iStack_190 = 0xf09;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_190 = 0x6a1357;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_190;
  FUN_00448a17(uVar6);
  uVar9 = 0x9d;
  uVar6 = 0x2d;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_004115d9(0x2d,0x9d);
  FUN_00448e3a(uVar6,uVar9);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_188 = 0x6a139a;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_188 = 0x6a13a7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a13b2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_188 = 0x6a13bf;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a13ca;
    FUN_00878dfb();
  }
  iStack_188 = 0x6a13d0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_188 = unaff_EBP + -0x38;
  iStack_18c = 0x6a13da;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_188 = 0x6a13e6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_188 = 0x6a13f0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_188 = unaff_EBP + -0x48;
  iStack_18c = 0x6a13fa;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_188 = 0x6a1406;
    FUN_00878dfb();
  }
  iStack_188 = unaff_EBP + -0x48;
  iStack_190 = unaff_EBP + -0x24;
  iStack_18c = 6;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  iStack_18c = 0x6a142a;
  iStack_18c = FUN_00449749();
  iStack_190 = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_190 = 0x6a1446;
  uVar6 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_190;
  FUN_00448a17(uVar6);
  uVar9 = 0xca;
  uVar6 = 0x26;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_004115d9(0x26,0xca);
  FUN_00448e3a(uVar6,uVar9);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_188 = 0x6a1489;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_188 = 0x6a1496;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a14a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_188 = 0x6a14ae;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_188 = 0x6a14b9;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) < 1) {
    iStack_188 = 0x6a14cf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_188 = unaff_EBP + -0x38;
    iStack_18c = 0x6a14d9;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a14e5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_188 = 0x6a14ef;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_188 = unaff_EBP + -0x48;
    iStack_18c = 0x6a14f9;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_188 = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_188 = unaff_EBP + -0x48;
    iStack_190 = unaff_EBP + -0x24;
    iStack_18c = 6;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iStack_18c = 0x6a1529;
    iStack_18c = FUN_00449749();
    iStack_190 = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_190 = 0x6a1545;
    uVar6 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_190;
    FUN_00448a17(uVar6);
    uVar9 = 0x9e;
    uVar6 = 0x77;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9(0x77,0x9e);
    FUN_00448e3a(uVar6,uVar9);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_188 = 0x6a1588;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_188 = 0x6a1595;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a15a0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_188 = 0x6a15ad;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_188 = 0x6a15b8;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_188 = 0x6a15c9;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_188 = 0x6a15e6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


