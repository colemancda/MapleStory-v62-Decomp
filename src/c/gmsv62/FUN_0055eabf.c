/* FUN_0055eabf - 0x0055eabf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0055eabf(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_11c;
  undefined4 *puStack_118;
  int *piStack_114;
  undefined *puStack_110;
  int *piStack_10c;
  undefined *puStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 *puStack_dc;
  int *piStack_d8;
  undefined *puStack_d4;
  int *piStack_d0;
  undefined *puStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x84) = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_a0 = (undefined4 *)(unaff_EBP + -100);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_a4 = 0x55eaf8;
  FUN_00455c59();
  puStack_a0 = (undefined4 *)0x55eb03;
  FUN_0045e4a2();
  puStack_a0 = *(undefined4 **)(extraout_ECX + 0x84);
  iStack_a8 = unaff_EBP + -100;
  iStack_a4 = *(undefined4 *)(extraout_ECX + 0x80);
  iStack_ac = 0x55eb1a;
  iVar1 = FUN_00458c4f();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_a0 = (undefined4 *)0x55eb2d;
  FUN_0052e11f();
  puStack_a0 = (undefined4 *)0x55eb34;
  FUN_0046575e();
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x8c) = uVar2;
  puStack_a0 = (undefined4 *)0x55eb46;
  FUN_0046575e();
  puStack_a0 = (undefined4 *)0x3;
  iStack_a4 = 0xfffffffe;
  iStack_a8 = 0x55eb52;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0x5a0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    puStack_a0 = (undefined4 *)0x80004003;
    iStack_a4 = 0x55eb6d;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x6c);
  iStack_a4 = unaff_EBP + -0x18;
  iStack_a8 = 0x55eb80;
  FUN_0041141a();
  puStack_a0 = (undefined4 *)0x55eb88;
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x6c);
  iStack_a4 = 0x55eb95;
  puStack_a0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a0 < 0) {
    iStack_a4 = 0x55eba0;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined4 *)0x3;
  iStack_a4 = 0xfffffffe;
  iStack_a8 = 0x55ebac;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0x5a4);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  *(int *)(unaff_EBP + -0x60) = extraout_ECX + 0x5a4;
  if (iVar1 == 0) {
    puStack_a0 = (undefined4 *)0x80004003;
    iStack_a4 = 0x55ebce;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_a4 = unaff_EBP + -0x18;
  iStack_a8 = 0x55ebdd;
  FUN_0041141a();
  puStack_a0 = (undefined4 *)0x55ebe5;
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_a0 = (undefined4 *)(unaff_EBP + -0x4c);
  iStack_a4 = 0x55ebf2;
  puStack_a0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a0 < 0) {
    iStack_a4 = 0x55ebfd;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x8c) != 0) {
    puStack_a0 = (undefined4 *)0x55ec13;
    uVar2 = FUN_0045e2eb();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    puStack_a0 = (undefined4 *)0x3af;
    iStack_a4 = unaff_EBP + -0x14;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_a8 = 0x55ec33;
    puVar3 = (undefined4 *)FUN_00679d86();
    iStack_a8 = *puVar3;
    puStack_a0 = (undefined4 *)0x0;
    iStack_a4 = unaff_EBP + 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_ac = 0x55ec44;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_a0 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
      iStack_a4 = 0x55ec5b;
      FUN_00403384();
    }
    puStack_a0 = &DAT_00980690;
    iStack_a4 = 0x55ec6a;
    FUN_00403191();
    puStack_a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_a4 = 0x55ec77;
    FUN_00403191();
    piStack_c8 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_c8 == (int *)0x0) {
      puStack_a0 = (undefined4 *)0x80004003;
      iStack_a4 = 0x55ec8c;
      FUN_00878dfb();
      piStack_c8 = *(int **)(unaff_EBP + 0xc);
    }
    iStack_ac = *(int *)(unaff_EBP + -0x5c);
    iStack_a8 = *(undefined4 *)(unaff_EBP + -0x58);
    iVar1 = *piStack_c8;
    iStack_a4 = *(undefined4 *)(unaff_EBP + -0x54);
    puStack_a0 = *(undefined4 **)(unaff_EBP + -0x50);
    uStack_bc = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_c0 = 0x20;
    uStack_b4 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_c4 = 0x20;
    *(int **)(unaff_EBP + -0x14) = piStack_c8;
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x40);
    puStack_cc = (undefined *)0x55ecb4;
    iVar1 = (**(code **)(iVar1 + 0x2c))();
    if (iVar1 < 0) {
      puStack_cc = &DAT_00963cc8;
      piStack_d0 = *(int **)(unaff_EBP + -0x14);
      piStack_d8 = (int *)0x55ecc9;
      puStack_d4 = (undefined *)iVar1;
      FUN_00878e09();
    }
    puStack_cc = (undefined *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_d0 = (int *)0x55ecd6;
    puStack_cc = (undefined *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      piStack_d0 = (int *)0x55ece1;
      FUN_00878dfb();
    }
    puStack_cc = (undefined *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_d0 = (int *)0x55ecee;
    puStack_cc = (undefined *)FUN_00402bc3();
    if ((int)puStack_cc < 0) {
      piStack_d0 = (int *)0x55ecf9;
      FUN_00878dfb();
    }
    piStack_d0 = *(int **)(unaff_EBP + 0xc);
    if (piStack_d0 == (int *)0x0) {
      puStack_cc = (undefined *)0x80004003;
      piStack_d0 = (int *)0x55ed0a;
      FUN_00878dfb();
      piStack_d0 = *(int **)(unaff_EBP + 0xc);
    }
    iVar1 = *piStack_d0;
    puStack_cc = (undefined *)0x0;
    *(int **)(unaff_EBP + -0x14) = piStack_d0;
    puStack_d4 = (undefined *)0x55ed17;
    iVar1 = (**(code **)(iVar1 + 0x70))();
    if (iVar1 < 0) {
      puStack_d4 = &DAT_00963cc8;
      piStack_d8 = *(int **)(unaff_EBP + -0x14);
      iStack_e0 = 0x55ed25;
      puStack_dc = (undefined4 *)iVar1;
      FUN_00878e09();
    }
    piStack_d8 = *(int **)(unaff_EBP + 0xc);
    if (piStack_d8 == (int *)0x0) {
      puStack_d4 = (undefined *)0x80004003;
      piStack_d8 = (int *)0x55ed36;
      FUN_00878dfb();
      piStack_d8 = *(int **)(unaff_EBP + 0xc);
    }
    iVar1 = *piStack_d8;
    puStack_d4 = (undefined *)0x0;
    *(int **)(unaff_EBP + -0x14) = piStack_d8;
    puStack_dc = (undefined4 *)0x55ed43;
    iStack_e4 = (**(code **)(iVar1 + 0x78))();
    if (iStack_e4 < 0) {
      puStack_dc = (undefined4 *)&DAT_00963cc8;
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_e8 = 0x55ed51;
      FUN_00878e09();
    }
    puStack_dc = (undefined4 *)0x0;
    iStack_e0 = 0;
    iStack_e4 = 0;
    iStack_e8 = 0;
    iStack_ec = 0;
    uStack_f0 = 0;
    iStack_f4 = 0x20;
    uStack_f8 = 0;
    uStack_fc = *(undefined4 *)(unaff_EBP + -0x18);
    piStack_104 = (int *)(unaff_EBP + 0xc);
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_100;
    puStack_108 = (undefined *)0x55ed6c;
    FUN_0046fc23();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_104 = (int *)0x55ed75;
    FUN_0048b97b();
    piStack_104 = (int *)0x55ed7c;
    FUN_005558b0();
    puStack_dc = &DAT_00980690;
    iStack_e0 = 0x55ed85;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_e0 = 0x55ed92;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_e0 = 0x55ed9f;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_e0 = 0x55edac;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_e0 = 0x55edb9;
    FUN_00403191();
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x5a0);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar1 == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      iStack_e0 = 0x55edd2;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_e0 = unaff_EBP + -0x3c;
    iStack_e4 = unaff_EBP + -0x7c;
    iStack_e8 = unaff_EBP + -0x4c;
    iStack_ec = unaff_EBP + -0x5c;
    uStack_f0 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_f4 = unaff_EBP + -0x8c;
    uStack_f8 = 0x55edfb;
    FUN_004250ac();
    puStack_dc = (undefined4 *)(unaff_EBP + -0x8c);
    iStack_e0 = 0x55ee07;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x55ee12;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_e0 = 0x55ee1f;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x55ee2a;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_e0 = 0x55ee37;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x55ee42;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_e0 = 0x55ee4f;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x55ee5a;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_e0 = 0x55ee67;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x55ee72;
      FUN_00878dfb();
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_e0 = 0x55ee7f;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      iStack_e0 = 0x55ee8a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    puStack_dc = (undefined4 *)0x3af;
    iStack_e0 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_e4 = 0x55eea4;
    puVar3 = (undefined4 *)FUN_00679d86();
    iStack_e4 = *puVar3;
    puStack_dc = (undefined4 *)0x0;
    iStack_e0 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_e8 = 0x55eeb5;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      iStack_e0 = 0x55eecc;
      FUN_00403384();
    }
    puStack_dc = &DAT_00980690;
    iStack_e0 = 0x55eed6;
    FUN_00403191();
    puStack_dc = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_e0 = 0x55eee3;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piVar4 == (int *)0x0) {
      puStack_dc = (undefined4 *)0x80004003;
      iStack_e0 = 0x55eef8;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 8);
    }
    iStack_e8 = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_e4 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_e0 = *(undefined4 *)(unaff_EBP + -0x34);
    iVar1 = *piVar4;
    puStack_dc = *(undefined4 **)(unaff_EBP + -0x30);
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_f4 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x24);
    iStack_ec = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_fc = 0xf;
    uStack_100 = 0x9f;
    *(int **)(unaff_EBP + -0x10) = piVar4;
    puStack_108 = (undefined *)0x55ef24;
    piStack_104 = piVar4;
    iVar1 = (**(code **)(iVar1 + 0x2c))();
    if (iVar1 < 0) {
      puStack_108 = &DAT_00963cc8;
      piStack_10c = *(int **)(unaff_EBP + -0x10);
      piStack_114 = (int *)0x55ef37;
      puStack_110 = (undefined *)iVar1;
      FUN_00878e09();
    }
    puStack_108 = (undefined *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_10c = (int *)0x55ef44;
    puStack_108 = (undefined *)FUN_00402bc3();
    if ((int)puStack_108 < 0) {
      piStack_10c = (int *)0x55ef4f;
      FUN_00878dfb();
    }
    puStack_108 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_10c = (int *)0x55ef5c;
    puStack_108 = (undefined *)FUN_00402bc3();
    if ((int)puStack_108 < 0) {
      piStack_10c = (int *)0x55ef67;
      FUN_00878dfb();
    }
    piStack_10c = *(int **)(unaff_EBP + 8);
    if (piStack_10c == (int *)0x0) {
      puStack_108 = (undefined *)0x80004003;
      piStack_10c = (int *)0x55ef78;
      FUN_00878dfb();
      piStack_10c = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_10c;
    puStack_108 = (undefined *)0x0;
    *(int **)(unaff_EBP + -0x10) = piStack_10c;
    puStack_110 = (undefined *)0x55ef86;
    iVar1 = (**(code **)(iVar1 + 0x70))();
    if (iVar1 < 0) {
      puStack_110 = &DAT_00963cc8;
      piStack_114 = *(int **)(unaff_EBP + -0x10);
      iStack_11c = 0x55ef94;
      puStack_118 = (undefined4 *)iVar1;
      FUN_00878e09();
    }
    piStack_114 = *(int **)(unaff_EBP + 8);
    if (piStack_114 == (int *)0x0) {
      puStack_110 = (undefined *)0x80004003;
      piStack_114 = (int *)0x55efa5;
      FUN_00878dfb();
      piStack_114 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_114;
    puStack_110 = (undefined *)0x0;
    *(int **)(unaff_EBP + -0x10) = piStack_114;
    puStack_118 = (undefined4 *)0x55efb3;
    iVar1 = (**(code **)(iVar1 + 0x78))();
    if (iVar1 < 0) {
      puStack_118 = (undefined4 *)&DAT_00963cc8;
      iStack_11c = *(int *)(unaff_EBP + -0x10);
      FUN_00878e09(iVar1);
    }
    puStack_118 = *(undefined4 **)(unaff_EBP + -0x18);
    iStack_11c = unaff_EBP + -0x1c;
    FUN_0045a1d8();
    puStack_118 = (undefined4 *)0x9f;
    *(int **)(unaff_EBP + -0x10) = &iStack_11c;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_007d4a9a(&iStack_11c,1);
    FUN_007d3a22(unaff_EBP + -0x1c);
    puStack_118 = &DAT_00980690;
    iStack_11c = 0x55effd;
    FUN_00403191();
    puStack_118 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_11c = 0x55f00a;
    FUN_00403191();
    puStack_118 = (undefined4 *)(unaff_EBP + -0x3c);
    iStack_11c = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_007d4a9a(unaff_EBP + -0x10,0);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_a8 = 0x55f02e;
    iStack_a8 = FUN_00449749();
    iStack_ac = 0x55f037;
    iStack_b0 = FUN_00449713();
    *(int **)(unaff_EBP + -0x14) = &iStack_ac;
    uStack_b4 = 0x55f043;
    FUN_00448a17();
    iStack_b0 = 2;
    uStack_b4 = 2;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_b8 = 0x55f053;
    FUN_004115d9();
    iStack_b8 = 0x55f05a;
    FUN_00448e3a();
    puStack_a0 = (undefined4 *)0x55f062;
    FUN_004497b5();
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_a4 = 0x55f06f;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f07a;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_a4 = 0x55f087;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f092;
      FUN_00878dfb();
    }
    puStack_a0 = &DAT_00980690;
    iStack_a4 = 0x55f09e;
    FUN_00403191();
    puStack_a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_a4 = 0x55f0ab;
    FUN_00403191();
    puStack_a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_a4 = 0x55f0b8;
    FUN_00403191();
    puStack_a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_a4 = 0x55f0c5;
    FUN_00403191();
    puStack_a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_a4 = 0x55f0d2;
    FUN_00403191();
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x8c);
    iStack_a4 = unaff_EBP + -0x5c;
    iStack_a8 = unaff_EBP + -0x7c;
    iStack_ac = unaff_EBP + -0x3c;
    iStack_b0 = unaff_EBP + -0x2c;
    uStack_b4 = *(undefined4 *)(unaff_EBP + 8);
    iStack_b8 = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_bc = 0x55f0ff;
    FUN_00424e27();
    uStack_bc = 0x55f106;
    FUN_004250ac();
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x9c);
    iStack_a4 = 0x55f112;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f11d;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_a4 = 0x55f12a;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f135;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_a4 = 0x55f142;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f14d;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_a4 = 0x55f15a;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f165;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_a4 = 0x55f172;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f17d;
      FUN_00878dfb();
    }
    puStack_a0 = (undefined4 *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_a4 = 0x55f18d;
    puStack_a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a0 < 0) {
      iStack_a4 = 0x55f198;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_a0 = (undefined4 *)0x55f1a4;
    FUN_00414ebb();
    puStack_a0 = (undefined4 *)0x55f1ac;
    FUN_004125e6();
    puStack_a0 = (undefined4 *)0x55f1b4;
    FUN_004125e6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


