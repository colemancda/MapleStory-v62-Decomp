/* FUN_007d6f5c - 0x007d6f5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d6f5c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *puVar5;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int unaff_EBP;
  int iStack_104;
  int *piStack_100;
  int iStack_e4;
  int *piStack_e0;
  undefined4 *puStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *piStack_c0;
  undefined4 *puStack_bc;
  int *piStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  int iStack_a8;
  int iStack_a4;
  int *piStack_a0;
  undefined4 *puStack_9c;
  int *piStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  undefined1 *puStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  
  FUN_00879bb8();
  puStack_7c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_80 = 0x7d6f7f;
  FUN_00403191();
  puStack_7c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_80 = 0x7d6f8c;
  FUN_00403191();
  puStack_7c = (undefined4 *)0x0;
  uStack_80 = 0;
  iStack_84 = unaff_EBP + -0x68;
  iStack_88 = unaff_EBP + -0x58;
  puStack_94 = (undefined1 *)&puStack_8c;
  *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_8c;
  iStack_90 = 0xc25;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_98 = (int *)0x7d6fb2;
  FUN_00679e4e();
  iStack_90 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_94 = (undefined1 *)0x7d6fbf;
  FUN_00405a1d();
  puStack_94 = (undefined1 *)0x7d6fc6;
  FUN_00402660();
  puStack_94 = (undefined1 *)0x7d6fcd;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_84 = 0x7d6fd8;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    puStack_7c = (undefined4 *)(unaff_EBP + -0x20);
    uStack_80 = 0x7d6fee;
    puStack_7c = (undefined4 *)FUN_00404b30();
    if (((int)puStack_7c < 0) && (puStack_7c != (undefined4 *)0x80004002)) {
      uStack_80 = 0x7d6fff;
      FUN_00878dfb();
    }
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_80 = 0x7d700c;
  puStack_7c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x7d7017;
    FUN_00878dfb();
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_80 = 0x7d7024;
  puStack_7c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x7d702f;
    FUN_00878dfb();
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_80 = 0x7d703c;
  iVar2 = FUN_00402bc3();
  puVar5 = puStack_7c;
  if (iVar2 < 0) {
    uStack_80 = 0x7d7047;
    puStack_7c = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar5 = (undefined4 *)extraout_ECX;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_7c = (undefined4 *)0x0;
  uStack_80 = 0;
  puStack_8c = (undefined1 *)&iStack_84;
  *(int **)(unaff_EBP + -0x28) = &iStack_84;
  iStack_88 = 0x574;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_90 = 0x7d7066;
  iStack_84 = (int)puVar5;
  FUN_00679e4e();
  iStack_88 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_8c = (undefined1 *)0x7d7076;
  FUN_0040263d();
  puStack_8c = (undefined1 *)0x7d707d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_84 = 0x7d7088;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_7c = (undefined4 *)(unaff_EBP + -0x18);
  uStack_80 = 0x7d7097;
  puStack_7c = (undefined4 *)FUN_0041a581();
  if (((int)puStack_7c < 0) && (puStack_7c != (undefined4 *)0x80004002)) {
    uStack_80 = 0x7d70a8;
    FUN_00878dfb();
  }
  puStack_7c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_80 = 0x7d70b5;
  puStack_7c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x7d70c0;
    FUN_00878dfb();
  }
  puStack_7c = &DAT_00980690;
  uStack_80 = 0x7d70c9;
  FUN_00403191();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (piVar1 == (int *)0x0) {
    puStack_7c = (undefined4 *)0x80004003;
    uStack_80 = 0x7d70de;
    FUN_00878dfb();
  }
  puStack_8c = *(undefined1 **)(unaff_EBP + -0x10);
  iStack_90 = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x48);
  puStack_94 = *(undefined1 **)(unaff_EBP + 0xc);
  iStack_84 = *(int *)(unaff_EBP + -0x44);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_7c = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_9c = (undefined4 *)0x7d70fc;
  piStack_98 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x80))();
  if (iVar2 < 0) {
    puStack_9c = (undefined4 *)&DAT_00963cc8;
    iStack_a8 = 0x7d710c;
    iStack_a4 = iVar2;
    piStack_a0 = piVar1;
    FUN_00878e09();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_a0 = (int *)0x7d7119;
  iVar2 = FUN_00402bc3();
  puVar5 = puStack_9c;
  if (iVar2 < 0) {
    piStack_a0 = (int *)0x7d7124;
    puStack_9c = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar5 = (undefined4 *)extraout_ECX_00;
  }
  puStack_9c = (undefined4 *)0x0;
  piStack_a0 = (int *)0x0;
  puStack_ac = (undefined1 *)&iStack_a4;
  *(int **)(unaff_EBP + -0x28) = &iStack_a4;
  iStack_a8 = 0x576;
  uStack_b0 = 0x7d713e;
  iStack_a4 = (int)puVar5;
  FUN_00679e4e();
  iStack_a8 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_ac = (undefined1 *)0x7d714e;
  FUN_0040263d();
  puStack_ac = (undefined1 *)0x7d7155;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_a4 = 0x7d7160;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  puStack_9c = (undefined4 *)(unaff_EBP + -0x18);
  piStack_a0 = (int *)0x7d716f;
  puStack_9c = (undefined4 *)FUN_0041a581();
  if (((int)puStack_9c < 0) && (puStack_9c != (undefined4 *)0x80004002)) {
    piStack_a0 = (int *)0x7d7180;
    FUN_00878dfb();
  }
  puStack_9c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_a0 = (int *)0x7d718d;
  puStack_9c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_9c < 0) {
    piStack_a0 = (int *)0x7d7198;
    FUN_00878dfb();
  }
  puStack_9c = &DAT_00980690;
  piStack_a0 = (int *)0x7d71a5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piVar1 == (int *)0x0) {
    puStack_9c = (undefined4 *)0x80004003;
    piStack_a0 = (int *)0x7d71b7;
    FUN_00878dfb();
  }
  puStack_ac = *(undefined1 **)(unaff_EBP + -0x10);
  uStack_b0 = *(undefined4 *)(unaff_EBP + 0x10);
  iStack_a8 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_a4 = *(int *)(unaff_EBP + -0x44);
  iStack_b4 = *(int *)(unaff_EBP + 0xc) + -9 + *(int *)(unaff_EBP + 0x14);
  iVar2 = *piVar1;
  piStack_a0 = *(int **)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x18) = iStack_b4;
  puStack_9c = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_bc = (undefined4 *)0x7d71e0;
  piStack_b8 = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    puStack_bc = (undefined4 *)&DAT_00963cc8;
    iStack_c8 = 0x7d71f0;
    iStack_c4 = iVar2;
    piStack_c0 = piVar1;
    FUN_00878e09();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7d71fd;
  iVar2 = FUN_00402bc3();
  puVar5 = puStack_bc;
  if (iVar2 < 0) {
    piStack_c0 = (int *)0x7d7208;
    puStack_bc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar5 = (undefined4 *)extraout_ECX_01;
  }
  puStack_bc = (undefined4 *)0x0;
  piStack_c0 = (int *)0x0;
  puStack_cc = (undefined1 *)&iStack_c4;
  *(int **)(unaff_EBP + -0x28) = &iStack_c4;
  iStack_c8 = 0x57a;
  iStack_d0 = 0x7d7222;
  iStack_c4 = (int)puVar5;
  FUN_00679e4e();
  iStack_c8 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_cc = (undefined1 *)0x7d7232;
  FUN_0040263d();
  puStack_cc = (undefined1 *)0x7d7239;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_c4 = 0x7d7244;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  puStack_bc = (undefined4 *)(unaff_EBP + 0x14);
  piStack_c0 = (int *)0x7d7253;
  puStack_bc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_bc < 0) && (puStack_bc != (undefined4 *)0x80004002)) {
    piStack_c0 = (int *)0x7d7264;
    FUN_00878dfb();
  }
  puStack_bc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_c0 = (int *)0x7d7271;
  puStack_bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    piStack_c0 = (int *)0x7d727c;
    FUN_00878dfb();
  }
  puStack_bc = &DAT_00980690;
  piStack_c0 = (int *)0x7d7289;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar1 == (int *)0x0) {
    puStack_bc = (undefined4 *)0x80004003;
    piStack_c0 = (int *)0x7d729b;
    FUN_00878dfb();
  }
  puStack_cc = *(undefined1 **)(unaff_EBP + -0x10);
  iStack_c8 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_c4 = *(int *)(unaff_EBP + -0x44);
  iStack_d0 = *(int *)(unaff_EBP + 0x10) + -9 + *(int *)(unaff_EBP + 0x18);
  iVar2 = *piVar1;
  uStack_d4 = *(undefined4 *)(unaff_EBP + 0xc);
  piStack_c0 = *(int **)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + 0x18) = iStack_d0;
  puStack_bc = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_dc = (undefined4 *)0x7d72c4;
  piStack_d8 = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    puStack_dc = (undefined4 *)&DAT_00963cc8;
    iStack_e4 = iVar2;
    piStack_e0 = piVar1;
    FUN_00878e09();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_e0 = (int *)0x7d72e1;
  iVar2 = FUN_00402bc3();
  puVar5 = puStack_dc;
  if (iVar2 < 0) {
    piStack_e0 = (int *)0x7d72ec;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar5 = (undefined4 *)extraout_ECX_02;
  }
  puStack_dc = (undefined4 *)0x0;
  piStack_e0 = (int *)0x0;
  *(int **)(unaff_EBP + -0x28) = &iStack_e4;
  iStack_e4 = (int)puVar5;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_e4 = 0x7d7328;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  puStack_dc = (undefined4 *)(unaff_EBP + 0x14);
  piStack_e0 = (int *)0x7d7337;
  puStack_dc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
    piStack_e0 = (int *)0x7d7348;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_e0 = (int *)0x7d7355;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    piStack_e0 = (int *)0x7d7360;
    FUN_00878dfb();
  }
  puStack_dc = &DAT_00980690;
  piStack_e0 = (int *)0x7d736d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (piVar1 == (int *)0x0) {
    puStack_dc = (undefined4 *)0x80004003;
    piStack_e0 = (int *)0x7d737f;
    FUN_00878dfb();
  }
  iStack_e4 = *(int *)(unaff_EBP + -0x44);
  piStack_e0 = *(int **)(unaff_EBP + -0x40);
  puStack_dc = *(undefined4 **)(unaff_EBP + -0x3c);
  iVar2 = (**(code **)(*piVar1 + 0x80))();
  if (iVar2 < 0) {
    iStack_104 = iVar2;
    piStack_100 = piVar1;
    FUN_00878e09();
  }
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_100 = (int *)0x7d73ba;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_100 = (int *)0x7d73c7;
    FUN_00878dfb();
    iVar2 = extraout_ECX_03;
  }
  piStack_100 = (int *)0x0;
  *(int **)(unaff_EBP + -0x28) = &iStack_104;
  iStack_104 = iVar2;
  FUN_00679e4e(&iStack_104,0x575);
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_104 = 0x7d7403;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  piStack_100 = (int *)0x7d7412;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    piStack_100 = (int *)0x7d7423;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_100 = (int *)0x7d7430;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_100 = (int *)0x7d743b;
    FUN_00878dfb();
    iVar2 = extraout_ECX_04;
  }
  piStack_100 = (int *)0x0;
  *(int **)(unaff_EBP + -0x28) = &iStack_104;
  iStack_104 = iVar2;
  FUN_00679e4e(&iStack_104,0x57b);
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_104 = 0x7d7472;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  piStack_100 = (int *)0x7d7481;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    piStack_100 = (int *)0x7d7492;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_100 = (int *)0x7d749f;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_100 = (int *)0x7d74aa;
    FUN_00878dfb();
    iVar2 = extraout_ECX_05;
  }
  iVar4 = *(int *)(unaff_EBP + 0xc) + 9;
  *(int *)(unaff_EBP + -0x24) = iVar4;
  *(int *)(unaff_EBP + 0x14) = iVar4;
  if (iVar4 < *(int *)(unaff_EBP + -0x18)) {
    do {
      piStack_100 = (int *)0x7d74c9;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      piStack_100 = (int *)(unaff_EBP + -0x38);
      iStack_104 = 0x7d74d7;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_100 = (int *)0x7d74e3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (piVar1 == (int *)0x0) {
        piStack_100 = (int *)0x7d74f5;
        FUN_00878dfb();
      }
      iStack_104 = *(int *)(unaff_EBP + -0x34);
      piStack_100 = *(int **)(unaff_EBP + -0x30);
      iVar2 = (**(code **)(*piVar1 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x10),
                         *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x38));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      iVar2 = FUN_00402e32(unaff_EBP + -0x48,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = (**(code **)(*piVar1 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x48),
                         *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c));
      if (iVar2 < 0) {
        iStack_104 = iVar2;
        piStack_100 = piVar1;
        FUN_00878e09();
      }
      iVar2 = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_100 = (int *)0x7d75ac;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_100 = (int *)0x7d75b7;
        FUN_00878dfb();
        iVar2 = extraout_ECX_06;
      }
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
    } while (*(int *)(unaff_EBP + 0x14) < *(int *)(unaff_EBP + -0x18));
  }
  piStack_100 = (int *)0x0;
  *(int **)(unaff_EBP + -0x28) = &iStack_104;
  iStack_104 = iVar2;
  FUN_00679e4e(&iStack_104,0x578);
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_104 = 0x7d7604;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  piStack_100 = (int *)0x7d7613;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    piStack_100 = (int *)0x7d7624;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_100 = (int *)0x7d7631;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_100 = (int *)0x7d763c;
    FUN_00878dfb();
    iVar2 = extraout_ECX_07;
  }
  piStack_100 = (int *)0x0;
  *(int **)(unaff_EBP + -0x28) = &iStack_104;
  iStack_104 = iVar2;
  FUN_00679e4e(&iStack_104,0x577);
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_104 = 0x7d7673;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar3;
  piStack_100 = (int *)0x7d7682;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    piStack_100 = (int *)0x7d7693;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_100 = (int *)0x7d76a0;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_100 = (int *)0x7d76ab;
    FUN_00878dfb();
    iVar2 = extraout_ECX_08;
  }
  iVar4 = *(int *)(unaff_EBP + 0x10) + 9;
  *(int *)(unaff_EBP + -0x28) = iVar4;
  *(int *)(unaff_EBP + 0x14) = iVar4;
  if (iVar4 < *(int *)(unaff_EBP + 0x18)) {
    do {
      piStack_100 = (int *)0x7d76ca;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_100 = (int *)(unaff_EBP + -0x48);
      iStack_104 = 0x7d76d8;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_100 = (int *)0x7d76e4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (piVar1 == (int *)0x0) {
        piStack_100 = (int *)0x7d76f6;
        FUN_00878dfb();
      }
      iStack_104 = *(int *)(unaff_EBP + -0x44);
      piStack_100 = *(int **)(unaff_EBP + -0x40);
      iVar2 = (**(code **)(*piVar1 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x14),
                         *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x48));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iVar2 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      if (piVar1 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = (**(code **)(*piVar1 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 0x14)
                         ,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar2 < 0) {
        iStack_104 = iVar2;
        piStack_100 = piVar1;
        FUN_00878e09();
      }
      iVar2 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_100 = (int *)0x7d77ad;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_100 = (int *)0x7d77b8;
        FUN_00878dfb();
        iVar2 = extraout_ECX_09;
      }
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
    } while (*(int *)(unaff_EBP + 0x14) < *(int *)(unaff_EBP + 0x18));
  }
  piStack_100 = (int *)0x0;
  *(int **)(unaff_EBP + 0xc) = &iStack_104;
  iStack_104 = iVar2;
  FUN_00679e4e(&iStack_104,0x579);
  iVar2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_104 = 0x7d7805;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
  piStack_100 = (int *)0x7d7814;
  iVar2 = FUN_0041a581();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    piStack_100 = (int *)0x7d7825;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_100 = (int *)0x7d7832;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_100 = (int *)0x7d783d;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x24);
  *(int *)(unaff_EBP + 0x14) = iVar2;
  while (iVar2 < *(int *)(unaff_EBP + -0x18)) {
    iVar2 = *(int *)(unaff_EBP + -0x28);
    *(int *)(unaff_EBP + 0x10) = iVar2;
    while (iVar2 < *(int *)(unaff_EBP + 0x18)) {
      piStack_100 = (int *)0x7d7865;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_100 = (int *)(unaff_EBP + -0x48);
      iStack_104 = 0x7d7873;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_100 = (int *)0x7d787f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      if (piVar1 == (int *)0x0) {
        piStack_100 = (int *)0x7d7891;
        FUN_00878dfb();
      }
      iStack_104 = *(int *)(unaff_EBP + -0x44);
      piStack_100 = *(int **)(unaff_EBP + -0x40);
      iVar2 = (**(code **)(*piVar1 + 0x80))
                        (piVar1,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x10),
                         *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x48));
      if (iVar2 < 0) {
        iStack_104 = iVar2;
        piStack_100 = piVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_100 = (int *)0x7d78cc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_100 = (int *)0x7d78d7;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
      iVar2 = *(int *)(unaff_EBP + 0x10);
    }
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
    iVar2 = *(int *)(unaff_EBP + 0x14);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_100 = (int *)0x7d78fe;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_100 = (int *)0x7d790f;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_100 = (int *)0x7d7920;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    piStack_100 = (int *)0x7d792e;
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


