/* FUN_00549f78 - 0x00549f78 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00549f78(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined *puVar5;
  int unaff_EBP;
  int iStack_100;
  int iStack_fc;
  undefined *puStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int *piStack_d0;
  undefined4 *puStack_cc;
  int *piStack_c8;
  undefined *puStack_c4;
  int *piStack_c0;
  undefined *puStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 *puStack_90;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_90 = (undefined4 *)0x3af;
  iStack_94 = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_98 = 0x549fa8;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_98 = *puVar1;
  puStack_90 = (undefined4 *)0x0;
  iStack_94 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_9c = 0x549fb9;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_90 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    iStack_94 = 0x549fd0;
    FUN_00403384();
  }
  puStack_90 = &DAT_00980690;
  *(undefined4 *)(extraout_ECX + 0x1c) = 0x122;
  *(undefined4 *)(extraout_ECX + 0x20) = 0x12e;
  iStack_94 = 0x549fed;
  FUN_00403191();
  puStack_90 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_94 = 0x549ffa;
  FUN_00403191();
  piStack_b8 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_b8 == (int *)0x0) {
    puStack_90 = (undefined4 *)0x80004003;
    iStack_94 = 0x54a00f;
    FUN_00878dfb();
    piStack_b8 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_b0 = *(undefined4 *)(extraout_ECX + 0x20);
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x48);
  iVar2 = *piStack_b8;
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
  puStack_90 = *(undefined4 **)(unaff_EBP + -0x40);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_b4 = *(undefined4 *)(extraout_ECX + 0x1c);
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = piStack_b8;
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_bc = (undefined *)0x54a03a;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    puStack_bc = &DAT_00963cc8;
    piStack_c0 = *(int **)(unaff_EBP + -0x14);
    piStack_c8 = (int *)0x54a04d;
    puStack_c4 = (undefined *)iVar2;
    FUN_00878e09();
  }
  puStack_bc = (undefined *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_c0 = (int *)0x54a05a;
  puStack_bc = (undefined *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    piStack_c0 = (int *)0x54a065;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_bc = (undefined *)(unaff_EBP + -0x4c);
  piStack_c0 = (int *)0x54a072;
  puStack_bc = (undefined *)FUN_00402bc3();
  if ((int)puStack_bc < 0) {
    piStack_c0 = (int *)0x54a07d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_bc = (undefined *)0x80004003;
    piStack_c0 = (int *)0x54a08d;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  puStack_bc = (undefined *)0x0;
  puStack_c4 = (undefined *)0x54a098;
  piStack_c0 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x70))();
  if (iVar2 < 0) {
    puStack_c4 = &DAT_00963cc8;
    piStack_d0 = (int *)0x54a0a4;
    puStack_cc = (undefined4 *)iVar2;
    piStack_c8 = piVar3;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_c4 = (undefined *)0x80004003;
    piStack_c8 = (int *)0x54a0b4;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  puStack_c4 = (undefined *)0x0;
  puStack_cc = (undefined4 *)0x54a0bf;
  piStack_c8 = piVar3;
  iVar2 = (**(code **)(*piVar3 + 0x78))();
  if (iVar2 < 0) {
    puStack_cc = (undefined4 *)&DAT_00963cc8;
    iStack_d8 = 0x54a0cb;
    iStack_d4 = iVar2;
    piStack_d0 = piVar3;
    FUN_00878e09();
  }
  puStack_cc = &DAT_00980690;
  piStack_d0 = (int *)0x54a0d9;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_d0 = (int *)0x54a0e6;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_d0 = (int *)0x54a0f3;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_d0 = (int *)0x54a100;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_d0 = (int *)0x54a10d;
  FUN_00403191();
  puStack_cc = (undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_d0 = (int *)0x54a11c;
  piVar3 = (int *)FUN_004489f5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar2 == 0) {
    puStack_cc = (undefined4 *)0x80004003;
    piStack_d0 = (int *)0x54a131;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x7c);
  piStack_d0 = (int *)(unaff_EBP + -0x6c);
  iStack_d4 = unaff_EBP + -0x5c;
  iStack_d8 = unaff_EBP + -0x3c;
  iStack_dc = unaff_EBP + -0x4c;
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_e4 = unaff_EBP + -0x8c;
  uStack_e8 = 0x54a158;
  FUN_004250ac();
  puStack_cc = (undefined4 *)(unaff_EBP + -0x8c);
  piStack_d0 = (int *)0x54a164;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    piStack_d0 = (int *)0x54a16f;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)0x54a177;
  FUN_00412600();
  puStack_cc = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_d0 = (int *)0x54a184;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    piStack_d0 = (int *)0x54a18f;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_d0 = (int *)0x54a19c;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    piStack_d0 = (int *)0x54a1a7;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_d0 = (int *)0x54a1b4;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    piStack_d0 = (int *)0x54a1bf;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_d0 = (int *)0x54a1cc;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    piStack_d0 = (int *)0x54a1d7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_cc = (undefined4 *)(unaff_EBP + -0x7c);
  piStack_d0 = (int *)0x54a1e4;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    piStack_d0 = (int *)0x54a1ef;
    FUN_00878dfb();
  }
  puStack_cc = &DAT_00980690;
  piStack_d0 = (int *)0x54a1f8;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_d0 = (int *)0x54a205;
  FUN_00403191();
  puStack_cc = (undefined4 *)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_d0 = (int *)0x54a214;
  piVar3 = (int *)FUN_004489f5();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    puStack_cc = (undefined4 *)0x80004003;
    piStack_d0 = (int *)0x54a229;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x18);
  piStack_d0 = (int *)0x54a234;
  piVar3 = (int *)FUN_0042fb5e();
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar2 == 0) {
    puStack_cc = (undefined4 *)0x80004003;
    piStack_d0 = (int *)0x54a249;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar3;
  iVar2 = *(int *)(extraout_ECX + 0x20);
  *(int **)(unaff_EBP + -0x14) = piVar3;
  iStack_d8 = *(undefined4 *)(unaff_EBP + -0x6c);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x68);
  piStack_d0 = *(int **)(unaff_EBP + -100);
  puStack_cc = *(undefined4 **)(unaff_EBP + -0x60);
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x7c);
  iStack_e4 = *(undefined4 *)(unaff_EBP + -0x78);
  iStack_ec = (600 - iVar2) / 2;
  iStack_f0 = (800 - *(int *)(extraout_ECX + 0x1c)) / 2;
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x74);
  uStack_f4 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_dc = *(undefined4 *)(unaff_EBP + -0x70);
  puStack_f8 = (undefined *)0x54a28f;
  iVar2 = (**(code **)(*piVar3 + 0x90))();
  if (iVar2 < 0) {
    puStack_f8 = &DAT_00963de8;
    iStack_fc = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_100 = iVar2;
    FUN_00878e09();
  }
  puStack_f8 = (undefined *)0x54a2ab;
  FUN_004125d9();
  puStack_f8 = (undefined *)0x54a2b3;
  FUN_00412600();
  puStack_f8 = (undefined *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_fc = 0x54a2c0;
  puStack_f8 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f8 < 0) {
    iStack_fc = 0x54a2cb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_f8 = (undefined *)(unaff_EBP + -0x6c);
  iStack_fc = 0x54a2d8;
  iVar2 = FUN_00402bc3();
  puVar5 = puStack_f8;
  if (iVar2 < 0) {
    iStack_fc = 0x54a2e3;
    puStack_f8 = (undefined *)iVar2;
    FUN_00878dfb();
    puVar5 = (undefined *)extraout_ECX_00;
  }
  puStack_f8 = (undefined *)0x0;
  iStack_fc = 0;
  *(int **)(unaff_EBP + -0x1c) = &iStack_100;
  iStack_100 = (int)puVar5;
  FUN_00448a17(s_UI_ITC_img_Auction_backgrnd1_009655d0);
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puStack_f8 = (undefined *)0x4ed;
  iStack_fc = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_100 = 0x54a325;
  puStack_f8 = (undefined *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_fc = 0x54a332;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_f8 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    iStack_fc = 0x54a346;
    FUN_00403384();
  }
  puStack_f8 = (undefined *)0x578;
  iStack_fc = 0x54a358;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar2 == 0) {
    puStack_f8 = (undefined *)0x0;
  }
  else {
    puStack_f8 = (undefined *)0x54a36a;
    puStack_f8 = (undefined *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_fc = 0x54a37b;
  iVar2 = FUN_00450382();
  puStack_f8 = (undefined *)(unaff_EBP + -0x2c);
  iStack_fc = 0;
  iStack_100 = 0x9c;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,1,0xaa);
  uVar4 = FUN_00679d86(unaff_EBP + -0x1c,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x1c) + -0xc);
  }
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,2,0xdc,0x9c,0,unaff_EBP + -0x2c);
  uVar4 = FUN_00679d86(unaff_EBP + -0x1c,0xb29);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x3eb,0xec,0x61,0,unaff_EBP + -0x2c);
  uVar4 = FUN_00679d86(unaff_EBP + -0x1c,0xb2a);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_00450382(uVar4);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX,0x3ec,0xfa,0x61,0,unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


