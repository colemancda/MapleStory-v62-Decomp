/* FUN_0081e45c - 0x0081e45c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081e45c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_104;
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 *puStack_f4;
  int *piStack_f0;
  undefined1 *puStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  int *piStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined *puStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined *puStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  undefined4 *puStack_58;
  
  FUN_00879bb8();
  puStack_58 = (undefined4 *)0x3af;
  piStack_5c = (int *)(unaff_EBP + -0x18);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  uStack_60 = 0x81e484;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_60 = *puVar2;
  puStack_58 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x81e496;
  piStack_5c = (int *)(extraout_ECX + 0x60);
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_58 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    piStack_5c = (int *)0x81e4ad;
    FUN_00403384();
  }
  puStack_58 = &DAT_00980690;
  piStack_5c = (int *)0x81e4bc;
  FUN_00403191();
  puStack_58 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_5c = (int *)0x81e4cc;
  FUN_00403191();
  iVar3 = *(int *)(extraout_ECX + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    puStack_58 = (undefined4 *)0x80004003;
    piStack_5c = (int *)0x81e4de;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x10);
  piStack_80 = *(int **)(iVar3 + 0x60);
  uStack_78 = *(undefined4 *)(iVar3 + 0x20);
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_5c = *(int **)(unaff_EBP + -0x2c);
  puStack_58 = *(undefined4 **)(unaff_EBP + -0x28);
  uStack_74 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 0x1c);
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x18);
  iVar3 = *piStack_80;
  uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piStack_80;
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_84 = (undefined *)0x81e512;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_84 = &DAT_00963cc8;
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_90 = 0x81e524;
    iStack_8c = iVar3;
    FUN_00878e09();
  }
  puStack_84 = (undefined *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_88 = 0x81e531;
  puStack_84 = (undefined *)FUN_00402bc3();
  if ((int)puStack_84 < 0) {
    uStack_88 = 0x81e53c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_84 = (undefined *)(unaff_EBP + -0x34);
  uStack_88 = 0x81e549;
  puStack_84 = (undefined *)FUN_00402bc3();
  if ((int)puStack_84 < 0) {
    uStack_88 = 0x81e554;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x10);
  piVar1 = (int *)(iVar3 + 0x60);
  if (*(int *)(iVar3 + 0x60) == 0) {
    puStack_84 = (undefined *)0x80004003;
    uStack_88 = 0x81e56a;
    FUN_00878dfb();
  }
  piStack_98 = (int *)*piVar1;
  iVar4 = *piStack_98;
  puStack_84 = (undefined *)0xffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar3 + 0x20);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_8c = *(undefined4 *)(iVar3 + 0x1c);
  uStack_90 = 0;
  uStack_94 = 0;
  *(int **)(unaff_EBP + -0x18) = piStack_98;
  puStack_9c = (undefined *)0x81e58e;
  iVar4 = (**(code **)(iVar4 + 0x8c))();
  if (iVar4 < 0) {
    puStack_9c = &DAT_00963cc8;
    iStack_a0 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_a8 = 0x81e5a0;
    iStack_a4 = iVar4;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar4 == 0) {
    puStack_9c = (undefined *)0x80004003;
    iStack_a0 = 0x81e5c1;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  puStack_9c = (undefined *)0xffffffff;
  iStack_a0 = *(int *)(iVar3 + 0x20) + -4;
  iStack_a4 = *(int *)(iVar3 + 0x1c) + -4;
  uStack_a8 = 2;
  uStack_ac = 2;
  puStack_b4 = (undefined4 *)0x81e5e0;
  piStack_b0 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar4 < 0) {
    puStack_b4 = (undefined4 *)&DAT_00963cc8;
    iStack_c0 = 0x81e5f0;
    iStack_bc = iVar4;
    piStack_b8 = piVar1;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b8 = (int *)0x81e602;
  FUN_00403191();
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_b8 = (int *)0x81e60f;
  FUN_00403191();
  puStack_b4 = (undefined4 *)0x0;
  piStack_b8 = (int *)0x0;
  iStack_bc = unaff_EBP + -0x34;
  iStack_c0 = unaff_EBP + -0x44;
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
  iStack_c8 = 0x8d4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_d0 = (int *)0x81e635;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_cc = (undefined1 *)0x81e642;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x81e649;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x81e650;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_bc = 0x81e65b;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x20);
  piStack_b8 = (int *)0x81e66a;
  puStack_b4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_b4 < 0) && (puStack_b4 != (undefined4 *)0x80004002)) {
    piStack_b8 = (int *)0x81e67b;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_b8 = (int *)0x81e688;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e693;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_b8 = (int *)0x81e6a0;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e6ab;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b8 = (int *)0x81e6b8;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e6c3;
    FUN_00878dfb();
  }
  puStack_b4 = &DAT_00980690;
  piStack_b8 = (int *)0x81e6cc;
  FUN_00403191();
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_b8 = (int *)0x81e6d9;
  FUN_00403191();
  puStack_b4 = (undefined4 *)0x0;
  piStack_b8 = (int *)0x0;
  iStack_bc = unaff_EBP + -0x34;
  iStack_c0 = unaff_EBP + -0x44;
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
  iStack_c8 = 0x8cf;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_d0 = (int *)0x81e6fc;
  uStack_c4 = extraout_ECX_00;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_cc = (undefined1 *)0x81e709;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x81e710;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x81e717;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_bc = 0x81e722;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x20);
  piStack_b8 = (int *)0x81e731;
  puStack_b4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_b4 < 0) && (puStack_b4 != (undefined4 *)0x80004002)) {
    piStack_b8 = (int *)0x81e742;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_b8 = (int *)0x81e74f;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e75a;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_b8 = (int *)0x81e767;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e772;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b8 = (int *)0x81e77f;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e78a;
    FUN_00878dfb();
  }
  iVar4 = *(int *)(iVar3 + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x18) = 7;
  if (7 < iVar4 + -7) {
    while( true ) {
      puStack_b4 = (undefined4 *)0x3;
      piStack_b8 = (int *)0xff;
      iStack_bc = 0x81e7b1;
      FUN_004031b7();
      iVar3 = *(int *)(iVar3 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (iVar3 == 0) {
        puStack_b4 = (undefined4 *)0x80004003;
        piStack_b8 = (int *)0x81e7c7;
        FUN_00878dfb();
      }
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c0 = *(int *)(unaff_EBP + -0x44);
      iStack_bc = *(int *)(unaff_EBP + -0x40);
      iStack_c8 = 0;
      puStack_cc = *(undefined1 **)(unaff_EBP + -0x18);
      piStack_d0 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piStack_d0;
      piStack_b8 = *(int **)(unaff_EBP + -0x3c);
      *(int **)(unaff_EBP + -0x20) = piStack_d0;
      puStack_b4 = *(undefined4 **)(unaff_EBP + -0x38);
      puStack_d4 = (undefined4 *)0x81e7ef;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_d4 = (undefined4 *)&DAT_00963cc8;
        uStack_d8 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_e0 = 0x81e801;
        iStack_dc = iVar3;
        FUN_00878e09();
      }
      puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_d8 = 0x81e80e;
      puStack_d4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_d4 < 0) {
        uStack_d8 = 0x81e819;
        FUN_00878dfb();
      }
      puStack_d4 = (undefined4 *)0x3;
      uStack_d8 = 0xff;
      iStack_dc = 0x81e828;
      FUN_004031b7();
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar3 == 0) {
        puStack_d4 = (undefined4 *)0x80004003;
        uStack_d8 = 0x81e841;
        FUN_00878dfb();
      }
      piStack_f0 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piStack_f0;
      uStack_e4 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_dc = *(int *)(unaff_EBP + -0x30);
      iStack_e8 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x20) + -0x12;
      puStack_ec = *(undefined1 **)(unaff_EBP + -0x18);
      uStack_d8 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x20) = piStack_f0;
      puStack_d4 = *(undefined4 **)(unaff_EBP + -0x28);
      puStack_f4 = (undefined4 *)0x81e86c;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_b4 = (undefined4 *)&DAT_00963cc8;
        piStack_b8 = *(int **)(unaff_EBP + -0x20);
        iStack_c0 = 0x81e87e;
        iStack_bc = iVar3;
        FUN_00878e09();
      }
      puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_b8 = (int *)0x81e88b;
      puStack_b4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_b4 < 0) {
        piStack_b8 = (int *)0x81e896;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      if (iVar3 + -7 <= *(int *)(unaff_EBP + -0x18)) break;
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  puStack_b4 = &DAT_00980690;
  piStack_b8 = (int *)0x81e8bc;
  FUN_00403191();
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_b8 = (int *)0x81e8c9;
  FUN_00403191();
  puStack_b4 = (undefined4 *)0x0;
  piStack_b8 = (int *)0x0;
  iStack_bc = unaff_EBP + -0x34;
  iStack_c0 = unaff_EBP + -0x44;
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
  iStack_c8 = 0x8d2;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_d0 = (int *)0x81e8ec;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_cc = (undefined1 *)0x81e8f9;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x81e900;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x81e907;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_bc = 0x81e912;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x20);
  piStack_b8 = (int *)0x81e921;
  puStack_b4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_b4 < 0) && (puStack_b4 != (undefined4 *)0x80004002)) {
    piStack_b8 = (int *)0x81e932;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_b8 = (int *)0x81e93f;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e94a;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_b8 = (int *)0x81e957;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e962;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b8 = (int *)0x81e96f;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81e97a;
    FUN_00878dfb();
  }
  puStack_b4 = &DAT_00980690;
  piStack_b8 = (int *)0x81e983;
  FUN_00403191();
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_b8 = (int *)0x81e990;
  FUN_00403191();
  puStack_b4 = (undefined4 *)0x0;
  piStack_b8 = (int *)0x0;
  iStack_bc = unaff_EBP + -0x34;
  iStack_c0 = unaff_EBP + -0x44;
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
  iStack_c8 = 0x8d1;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_d0 = (int *)0x81e9b3;
  uStack_c4 = extraout_ECX_01;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_cc = (undefined1 *)0x81e9c0;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x81e9c7;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x81e9ce;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_bc = 0x81e9d9;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x20);
  piStack_b8 = (int *)0x81e9e8;
  puStack_b4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_b4 < 0) && (puStack_b4 != (undefined4 *)0x80004002)) {
    piStack_b8 = (int *)0x81e9f9;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_b8 = (int *)0x81ea06;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81ea11;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_b8 = (int *)0x81ea1e;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81ea29;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b8 = (int *)0x81ea36;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81ea41;
    FUN_00878dfb();
  }
  iVar4 = *(int *)(iVar3 + 0x20);
  *(undefined4 *)(unaff_EBP + -0x18) = 0x20;
  if (0x20 < iVar4 + -0x12) {
    while( true ) {
      puStack_b4 = (undefined4 *)0x3;
      piStack_b8 = (int *)0xff;
      iStack_bc = 0x81ea69;
      FUN_004031b7();
      iVar3 = *(int *)(iVar3 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (iVar3 == 0) {
        puStack_b4 = (undefined4 *)0x80004003;
        piStack_b8 = (int *)0x81ea7f;
        FUN_00878dfb();
      }
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_c8 = *(int *)(unaff_EBP + -0x18);
      iStack_c0 = *(int *)(unaff_EBP + -0x44);
      iStack_bc = *(int *)(unaff_EBP + -0x40);
      piStack_d0 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piStack_d0;
      piStack_b8 = *(int **)(unaff_EBP + -0x3c);
      puStack_cc = (undefined1 *)0x0;
      *(int **)(unaff_EBP + -0x20) = piStack_d0;
      puStack_b4 = *(undefined4 **)(unaff_EBP + -0x38);
      puStack_d4 = (undefined4 *)0x81eaa7;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_d4 = (undefined4 *)&DAT_00963cc8;
        uStack_d8 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_e0 = 0x81eab9;
        iStack_dc = iVar3;
        FUN_00878e09();
      }
      puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_d8 = 0x81eac6;
      puStack_d4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_d4 < 0) {
        uStack_d8 = 0x81ead1;
        FUN_00878dfb();
      }
      puStack_d4 = (undefined4 *)0x3;
      uStack_d8 = 0xff;
      iStack_dc = 0x81eae0;
      FUN_004031b7();
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (iVar3 == 0) {
        puStack_d4 = (undefined4 *)0x80004003;
        uStack_d8 = 0x81eaf9;
        FUN_00878dfb();
      }
      piStack_f0 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
      iVar3 = *piStack_f0;
      uStack_e4 = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_e8 = *(int *)(unaff_EBP + -0x18);
      iStack_e0 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_dc = *(int *)(unaff_EBP + -0x30);
      puStack_ec = (undefined1 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c) + -7);
      uStack_d8 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x20) = piStack_f0;
      puStack_d4 = *(undefined4 **)(unaff_EBP + -0x28);
      puStack_f4 = (undefined4 *)0x81eb24;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_b4 = (undefined4 *)&DAT_00963cc8;
        piStack_b8 = *(int **)(unaff_EBP + -0x20);
        iStack_c0 = 0x81eb36;
        iStack_bc = iVar3;
        FUN_00878e09();
      }
      puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_b8 = (int *)0x81eb43;
      puStack_b4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_b4 < 0) {
        piStack_b8 = (int *)0x81eb4e;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x20);
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      if (iVar3 + -0x12 <= *(int *)(unaff_EBP + -0x18)) break;
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
    iVar3 = *(int *)(unaff_EBP + -0x10);
  }
  puStack_b4 = &DAT_00980690;
  piStack_b8 = (int *)0x81eb74;
  FUN_00403191();
  puStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_b8 = (int *)0x81eb81;
  FUN_00403191();
  puStack_b4 = (undefined4 *)0x0;
  piStack_b8 = (int *)0x0;
  iStack_bc = unaff_EBP + -0x34;
  iStack_c0 = unaff_EBP + -0x44;
  puStack_cc = (undefined1 *)&uStack_c4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_c4;
  iStack_c8 = 0x8d5;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_d0 = (int *)0x81eba4;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_cc = (undefined1 *)0x81ebb1;
  FUN_00405a1d();
  puStack_cc = (undefined1 *)0x81ebb8;
  FUN_00402660();
  puStack_cc = (undefined1 *)0x81ebbf;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_bc = 0x81ebca;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x20);
  piStack_b8 = (int *)0x81ebd9;
  puStack_b4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_b4 < 0) && (puStack_b4 != (undefined4 *)0x80004002)) {
    piStack_b8 = (int *)0x81ebea;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_b8 = (int *)0x81ebf7;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81ec02;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_b8 = (int *)0x81ec0f;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81ec1a;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b8 = (int *)0x81ec27;
  puStack_b4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b4 < 0) {
    piStack_b8 = (int *)0x81ec32;
    FUN_00878dfb();
  }
  puStack_b4 = (undefined4 *)0x3;
  piStack_b8 = (int *)0xff;
  iStack_bc = 0x81ec41;
  FUN_004031b7();
  iVar3 = *(int *)(iVar3 + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar3 == 0) {
    puStack_b4 = (undefined4 *)0x80004003;
    piStack_b8 = (int *)0x81ec57;
    FUN_00878dfb();
  }
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_c8 = 0;
  piStack_d0 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piStack_d0;
  piStack_b8 = *(int **)(unaff_EBP + -0x3c);
  puStack_cc = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x20) = piStack_d0;
  puStack_b4 = *(undefined4 **)(unaff_EBP + -0x38);
  puStack_d4 = (undefined4 *)0x81ec7e;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_d4 = (undefined4 *)&DAT_00963cc8;
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_e0 = 0x81ec90;
    iStack_dc = iVar3;
    FUN_00878e09();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_d8 = 0x81ec9d;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x81ecaa;
    FUN_00878dfb();
  }
  puStack_d4 = &DAT_00980690;
  uStack_d8 = 0x81ecb3;
  FUN_00403191();
  puStack_d4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_d8 = 0x81ecc0;
  FUN_00403191();
  puStack_d4 = (undefined4 *)0x0;
  uStack_d8 = 0;
  iStack_dc = unaff_EBP + -0x34;
  iStack_e0 = unaff_EBP + -0x44;
  puStack_ec = (undefined1 *)&uStack_e4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_e4;
  iStack_e8 = 0x8d3;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  piStack_f0 = (int *)0x81ece4;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_ec = (undefined1 *)0x81ecf1;
  FUN_00405a1d();
  puStack_ec = (undefined1 *)0x81ecf8;
  FUN_00402660();
  puStack_ec = (undefined1 *)0x81ecff;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_dc = 0x81ed0a;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x20);
  uStack_d8 = 0x81ed19;
  puStack_d4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_d4 < 0) && (puStack_d4 != (undefined4 *)0x80004002)) {
    uStack_d8 = 0x81ed2a;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_d8 = 0x81ed37;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x81ed42;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uStack_d8 = 0x81ed4f;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x81ed5a;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_d8 = 0x81ed67;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    uStack_d8 = 0x81ed72;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)0x3;
  uStack_d8 = 0xff;
  iStack_dc = 0x81ed81;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  if (iVar3 == 0) {
    puStack_d4 = (undefined4 *)0x80004003;
    uStack_d8 = 0x81ed99;
    FUN_00878dfb();
  }
  piStack_f0 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piStack_f0;
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_e0 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_dc = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_e8 = 0;
  puStack_ec = (undefined1 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c) + -7);
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piStack_f0;
  puStack_d4 = *(undefined4 **)(unaff_EBP + -0x38);
  puStack_f4 = (undefined4 *)0x81edc3;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_f4 = (undefined4 *)&DAT_00963cc8;
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_100 = 0x81edd5;
    iStack_fc = iVar3;
    FUN_00878e09();
  }
  puStack_f4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_f8 = 0x81ede2;
  puStack_f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    uStack_f8 = 0x81edef;
    FUN_00878dfb();
  }
  puStack_f4 = &DAT_00980690;
  uStack_f8 = 0x81edf8;
  FUN_00403191();
  puStack_f4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_f8 = 0x81ee05;
  FUN_00403191();
  puStack_f4 = (undefined4 *)0x0;
  uStack_f8 = 0;
  iStack_fc = unaff_EBP + -0x34;
  iStack_100 = unaff_EBP + -0x44;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_104;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_fc = 0x81ee4f;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  puStack_f4 = (undefined4 *)(unaff_EBP + -0x20);
  uStack_f8 = 0x81ee5e;
  puStack_f4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_f4 < 0) && (puStack_f4 != (undefined4 *)0x80004002)) {
    uStack_f8 = 0x81ee6f;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  uStack_f8 = 0x81ee7c;
  puStack_f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    uStack_f8 = 0x81ee87;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  uStack_f8 = 0x81ee94;
  puStack_f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    uStack_f8 = 0x81ee9f;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_f8 = 0x81eeac;
  puStack_f4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f4 < 0) {
    uStack_f8 = 0x81eeb7;
    FUN_00878dfb();
  }
  puStack_f4 = (undefined4 *)0x3;
  uStack_f8 = 0xff;
  iStack_fc = 0x81eec6;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar3 == 0) {
    puStack_f4 = (undefined4 *)0x80004003;
    uStack_f8 = 0x81eede;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x60);
  iVar3 = *piVar1;
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_100 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  puStack_f4 = *(undefined4 **)(unaff_EBP + -0x38);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_118 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_120 = 0x81ef1a;
    iStack_11c = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_118 = 0x81ef27;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_118 = 0x81ef34;
    FUN_00878dfb();
  }
  iStack_118 = 0x81ef40;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_118 = unaff_EBP + -0x44;
  iStack_11c = 0x81ef4a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_118 = 0x81ef56;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_118 = 0x81ef60;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_118 = unaff_EBP + -0x34;
  puStack_124 = &DAT_00980690;
  iStack_11c = 0x81ef6a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_118 = 0x81ef76;
    FUN_00878dfb();
    puStack_124 = extraout_ECX_02;
  }
  iStack_118 = 0;
  iStack_11c = unaff_EBP + -0x44;
  iStack_120 = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_124;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00679e4e(&puStack_124,0x8ce);
  iVar3 = unaff_EBP + -0x54;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_11c = 0x81efc0;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  iStack_118 = 0x81efcf;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_118 = 0x81efe0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_118 = 0x81efed;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_118 = 0x81eff8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_118 = 0x81f005;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_118 = 0x81f010;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_118 = 0x81f01d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_118 = 0x81f028;
    FUN_00878dfb();
  }
  iStack_118 = 0xff;
  iStack_11c = 0x81f037;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar3 == 0) {
    iStack_118 = 0x81f04f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x10);
  piVar1 = *(int **)(iVar3 + 0x60);
  puStack_124 = *(undefined4 **)(unaff_EBP + -0x14);
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_118 = *(undefined4 *)(unaff_EBP + -0x4c);
  iVar3 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,*(int *)(iVar3 + 0x1c) + -7,*(int *)(iVar3 + 0x20) + -0x12);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


