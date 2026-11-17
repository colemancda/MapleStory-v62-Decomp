/* FUN_0074faaf - 0x0074faaf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0074faaf(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *puVar8;
  int extraout_ECX_02;
  int unaff_EBP;
  int iStack_e4;
  int iStack_e0;
  int *piStack_dc;
  undefined4 *puStack_d8;
  int *piStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int *piStack_bc;
  undefined4 *puStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 *puStack_8c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  puStack_8c = (undefined4 *)0xc78;
  iStack_90 = unaff_EBP + -0x3c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_94 = 0x74fae3;
  piVar1 = (int *)FUN_00679d22();
  iStack_90 = *piVar1;
  puStack_8c = *(undefined4 **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_94 = unaff_EBP + -0x34;
  puStack_98 = (undefined1 *)0x74faf6;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    puStack_8c = (undefined4 *)(*(int *)(unaff_EBP + -0x3c) + -0xc);
    iStack_90 = 0x74fb0d;
    FUN_00434e38();
  }
  puStack_8c = &DAT_00980690;
  iStack_90 = 0x74fb1c;
  FUN_00403191();
  puStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_90 = 0x74fb29;
  FUN_00403191();
  puStack_8c = (undefined4 *)0x0;
  iStack_90 = 0;
  iStack_94 = unaff_EBP + -0x68;
  puStack_98 = (undefined1 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_9c = (undefined1 *)0x74fb3f;
  puStack_a0 = (undefined1 *)FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_9c;
  uStack_a4 = 0x74fb4b;
  FUN_00448a17();
  puStack_a0 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_a4 = 0x74fb58;
  FUN_00405a1d();
  uStack_a4 = 0x74fb5f;
  FUN_00402660();
  uStack_a4 = 0x74fb66;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_94 = 0x74fb71;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    puStack_8c = (undefined4 *)(unaff_EBP + 0x10);
    iStack_90 = 0x74fb87;
    puStack_8c = (undefined4 *)FUN_00404b30();
    if (((int)puStack_8c < 0) && (puStack_8c != (undefined4 *)0x80004002)) {
      iStack_90 = 0x74fb98;
      FUN_00878dfb();
    }
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_90 = 0x74fba5;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    iStack_90 = 0x74fbb0;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_90 = 0x74fbbd;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    iStack_90 = 0x74fbc8;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_90 = 0x74fbd5;
  iVar2 = FUN_00402bc3();
  puVar8 = puStack_8c;
  if (iVar2 < 0) {
    iStack_90 = 0x74fbe0;
    puStack_8c = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar8 = (undefined4 *)extraout_ECX;
  }
  puStack_8c = (undefined4 *)0x0;
  iStack_90 = 0;
  puStack_9c = (undefined1 *)&iStack_94;
  *(int **)(unaff_EBP + -0x44) = &iStack_94;
  puStack_98 = (undefined1 *)0x578;
  puStack_a0 = (undefined1 *)0x74fbf5;
  iStack_94 = (int)puVar8;
  FUN_00679e4e();
  puStack_98 = (undefined1 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_9c = (undefined1 *)0x74fc08;
  FUN_0040263d();
  puStack_9c = (undefined1 *)0x74fc0f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_94 = 0x74fc1a;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    puStack_8c = (undefined4 *)(unaff_EBP + -0x3c);
    iStack_90 = 0x74fc30;
    puStack_8c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_8c < 0) && (puStack_8c != (undefined4 *)0x80004002)) {
      iStack_90 = 0x74fc41;
      FUN_00878dfb();
    }
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_90 = 0x74fc51;
  iVar2 = FUN_00402bc3();
  puVar8 = puStack_8c;
  if (iVar2 < 0) {
    iStack_90 = 0x74fc5c;
    puStack_8c = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar8 = (undefined4 *)extraout_ECX_00;
  }
  puStack_8c = (undefined4 *)0x0;
  iStack_90 = 0;
  puStack_9c = (undefined1 *)&iStack_94;
  *(int **)(unaff_EBP + -0x44) = &iStack_94;
  puStack_98 = (undefined1 *)0x579;
  puStack_a0 = (undefined1 *)0x74fc71;
  iStack_94 = (int)puVar8;
  FUN_00679e4e();
  puStack_98 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_9c = (undefined1 *)0x74fc81;
  FUN_0040263d();
  puStack_9c = (undefined1 *)0x74fc88;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_94 = 0x74fc93;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    puStack_8c = (undefined4 *)(unaff_EBP + 0x10);
    iStack_90 = 0x74fca9;
    puStack_8c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_8c < 0) && (puStack_8c != (undefined4 *)0x80004002)) {
      iStack_90 = 0x74fcba;
      FUN_00878dfb();
    }
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_90 = 0x74fcc7;
  iVar2 = FUN_00402bc3();
  puVar8 = puStack_8c;
  if (iVar2 < 0) {
    iStack_90 = 0x74fcd2;
    puStack_8c = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar8 = (undefined4 *)extraout_ECX_01;
  }
  puStack_8c = (undefined4 *)0x0;
  iStack_90 = 0;
  puStack_9c = (undefined1 *)&iStack_94;
  *(int **)(unaff_EBP + -0x44) = &iStack_94;
  puStack_98 = (undefined1 *)0x577;
  puStack_a0 = (undefined1 *)0x74fce7;
  iStack_94 = (int)puVar8;
  FUN_00679e4e();
  puStack_98 = (undefined1 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_9c = (undefined1 *)0x74fcfa;
  FUN_0040263d();
  puStack_9c = (undefined1 *)0x74fd01;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_94 = 0x74fd0c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    puStack_8c = (undefined4 *)(unaff_EBP + -0x3c);
    iStack_90 = 0x74fd22;
    puStack_8c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_8c < 0) && (puStack_8c != (undefined4 *)0x80004002)) {
      iStack_90 = 0x74fd33;
      FUN_00878dfb();
    }
  }
  puStack_8c = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_90 = 0x74fd43;
  iVar2 = FUN_00402bc3();
  iStack_90 = (int)puStack_8c;
  if (iVar2 < 0) {
    iStack_90 = 0x74fd4e;
    puStack_8c = (undefined4 *)iVar2;
    FUN_00878dfb();
    iStack_90 = extraout_ECX_02;
  }
  puStack_8c = (undefined4 *)0xffffffff;
  puStack_98 = (undefined1 *)&iStack_90;
  *(int **)(unaff_EBP + 0x10) = &iStack_90;
  iStack_94 = 0x583;
  puStack_9c = (undefined1 *)0x74fd63;
  FUN_00679e4e();
  iStack_94 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_98 = (undefined1 *)0x74fd73;
  FUN_0040263d();
  puStack_98 = (undefined1 *)0x74fd7a;
  iStack_90 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_94 = 0x74fd84;
  uVar3 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
  iStack_94 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_98 = (undefined1 *)0x74fd94;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    iStack_90 = 0x74fda1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puStack_8c = (undefined4 *)0x584;
  iStack_90 = unaff_EBP + 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_94 = 0x74fdb8;
  piVar1 = (int *)FUN_00679d86();
  iStack_94 = *piVar1;
  puStack_8c = (undefined4 *)0x0;
  iStack_90 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_98 = (undefined1 *)0x74fdc9;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    puStack_8c = (undefined4 *)(*(int *)(unaff_EBP + 0x10) + -0xc);
    iStack_90 = 0x74fde0;
    FUN_00403384();
  }
  puStack_8c = &DAT_00980690;
  iStack_90 = 0x74fdea;
  FUN_00403191();
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  iStack_90 = *(int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_94 = 0xc;
  puStack_a0 = (undefined1 *)&puStack_98;
  *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_98;
  puStack_9c = (undefined1 *)0xa;
  uStack_a4 = 0x74fe07;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_9c = (undefined1 *)0x74fe13;
  FUN_0044974c();
  puStack_9c = (undefined1 *)0x74fe1a;
  FUN_004503f9();
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_90 = 0x74fe27;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    iStack_90 = 0x74fe32;
    FUN_00878dfb();
  }
  puStack_8c = &DAT_00980690;
  iStack_90 = 0x74fe3b;
  FUN_00403191();
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  *(int **)(unaff_EBP + 0x10) = &iStack_90;
  iStack_94 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_98 = (undefined1 *)0x74fe51;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_94 = 0x74fe5d;
  FUN_0044974c();
  iStack_94 = 0x74fe64;
  uVar3 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar3;
  puStack_8c = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_90 = 0x74fe74;
  puStack_8c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_8c < 0) {
    iStack_90 = 0x74fe7f;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74fe8f;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)0x74fe97;
  iVar2 = FUN_0040e48b();
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74fea4;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)0x74feac;
  uVar3 = FUN_0040eea9();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  *(int *)(unaff_EBP + -0x24) = ((iVar2 + -1 + *(int *)(unaff_EBP + -0x3c)) / iVar2) * iVar2;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74feca;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_8c = (undefined4 *)0x80004003;
      iStack_90 = 0x74fed5;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_8c = (undefined4 *)0x74fee0;
  iVar2 = FUN_0040e48b();
  puStack_8c = (undefined4 *)0x74feea;
  iVar4 = FUN_0040eea9();
  *(int *)(unaff_EBP + -0x38) = iVar2 - iVar4;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74fefa;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ff05;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x18);
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ff16;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)0x74ff1e;
  iVar2 = FUN_0040eed0();
  puStack_8c = (undefined4 *)0x74ff28;
  iVar4 = FUN_0040eed0();
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  puStack_8c = (undefined4 *)0x74ff36;
  iVar4 = FUN_0040eed0();
  *(int *)(unaff_EBP + 0x10) = iVar2;
  if (iVar2 <= iVar4) {
    *(int *)(unaff_EBP + 0x10) = iVar4;
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ff4b;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)0x74ff53;
  iVar2 = FUN_0040eea9();
  *(int *)(unaff_EBP + -0x38) = iVar2 + *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x24);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ff67;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_8c = (undefined4 *)0x80004003;
      iStack_90 = 0x74ff72;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ff83;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x18);
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ff93;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x18);
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ffa4;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x74ffb1;
    FUN_00878dfb();
  }
  puStack_8c = (undefined4 *)0x74ffb9;
  iVar2 = FUN_0040eed0();
  puStack_8c = (undefined4 *)0x74ffc2;
  iVar4 = FUN_0040e53d();
  puStack_8c = (undefined4 *)0x74ffce;
  iVar5 = FUN_0040eed0();
  puStack_8c = (undefined4 *)0x74ffd8;
  iVar6 = FUN_0040e53d();
  uVar7 = iVar4 - iVar2;
  if ((uint)(iVar4 - iVar2) <= (uint)(iVar6 - iVar5)) {
    uVar7 = iVar6 - iVar5;
  }
  puStack_8c = (undefined4 *)0x74ffe8;
  iVar2 = FUN_0040e53d();
  puStack_8c = (undefined4 *)0x74fff2;
  iVar4 = FUN_0040eed0();
  if (uVar7 <= (uint)(iVar2 - iVar4)) {
    uVar7 = iVar2 - iVar4;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(uint *)(unaff_EBP + -0x40) = uVar7 + *(int *)(unaff_EBP + 0x10);
  puStack_8c = (undefined4 *)0x3af;
  iStack_90 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_94 = 0x75001f;
  piVar1 = (int *)FUN_00679d86();
  iStack_94 = *piVar1;
  puStack_8c = (undefined4 *)0x0;
  iStack_90 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_98 = (undefined1 *)0x750031;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    puStack_8c = (undefined4 *)(*(int *)(unaff_EBP + -0x44) + -0xc);
    iStack_90 = 0x750048;
    FUN_00403384();
  }
  puStack_8c = &DAT_00980690;
  iStack_90 = 0x750057;
  FUN_00403191();
  puStack_8c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_90 = 0x750064;
  FUN_00403191();
  piStack_b4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (piStack_b4 == (int *)0x0) {
    puStack_8c = (undefined4 *)0x80004003;
    iStack_90 = 0x750075;
    FUN_00878dfb();
    piStack_b4 = *(int **)(unaff_EBP + -0x10);
  }
  puStack_98 = *(undefined1 **)(unaff_EBP + -0x58);
  iStack_94 = *(int *)(unaff_EBP + -0x54);
  iVar2 = *piStack_b4;
  iStack_90 = *(int *)(unaff_EBP + -0x50);
  puStack_8c = *(undefined4 **)(unaff_EBP + -0x4c);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x68);
  uStack_a4 = *(undefined4 *)(unaff_EBP + -100);
  puStack_a0 = *(undefined1 **)(unaff_EBP + -0x60);
  *(int **)(unaff_EBP + -0x44) = piStack_b4;
  puStack_9c = *(undefined1 **)(unaff_EBP + -0x5c);
  puStack_b8 = (undefined4 *)0x75009f;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    puStack_b8 = (undefined4 *)&DAT_00963cc8;
    piStack_bc = *(int **)(unaff_EBP + -0x44);
    uStack_c4 = 0x7500b1;
    iStack_c0 = iVar2;
    FUN_00878e09();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_bc = (int *)0x7500be;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    piStack_bc = (int *)0x7500c9;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_bc = (int *)0x7500d6;
  puStack_b8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b8 < 0) {
    piStack_bc = (int *)0x7500e1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (0 < *(int *)(unaff_EBP + -0x24)) {
    do {
      puStack_b8 = &DAT_00980690;
      piStack_bc = (int *)0x7500fc;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_b8 = (undefined4 *)0x80004003;
        piStack_bc = (int *)0x75010c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_b8 = (undefined4 *)0x80004003;
        piStack_bc = (int *)0x750118;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x18);
      puStack_b8 = (undefined4 *)0x750126;
      iStack_cc = FUN_0040eed0();
      uStack_c8 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x68);
      iStack_cc = *(int *)(unaff_EBP + 0x10) - iStack_cc;
      iStack_c0 = *(int *)(unaff_EBP + -100);
      piStack_bc = *(int **)(unaff_EBP + -0x60);
      iStack_d0 = *(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x30);
      puStack_b8 = *(undefined4 **)(unaff_EBP + -0x5c);
      puStack_d8 = (undefined4 *)0x75014d;
      piStack_d4 = piVar1;
      iVar2 = (**(code **)(*piVar1 + 0x80))();
      if (iVar2 < 0) {
        puStack_b8 = (undefined4 *)&DAT_00963cc8;
        uStack_c4 = 0x75015d;
        iStack_c0 = iVar2;
        piStack_bc = piVar1;
        FUN_00878e09();
      }
      puStack_b8 = (undefined4 *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_bc = (int *)0x75016a;
      puStack_b8 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_b8 < 0) {
        piStack_bc = (int *)0x750175;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_b8 = (undefined4 *)0x80004003;
        piStack_bc = (int *)0x750185;
        FUN_00878dfb();
      }
      puStack_b8 = (undefined4 *)0x75018d;
      iVar2 = FUN_0040e48b();
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + iVar2;
    } while (*(int *)(unaff_EBP + -0x2c) < *(int *)(unaff_EBP + -0x24));
  }
  puStack_b8 = &DAT_00980690;
  piStack_bc = (int *)0x7501ae;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_b8 = (undefined4 *)0x80004003;
    piStack_bc = (int *)0x7501be;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_b8 = (undefined4 *)0x80004003;
    piStack_bc = (int *)0x7501ca;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_b8 = (undefined4 *)0x7501d8;
  iStack_cc = FUN_0040eed0();
  uStack_c8 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_c4 = *(undefined4 *)(unaff_EBP + -0x68);
  iStack_c0 = *(undefined4 *)(unaff_EBP + -100);
  iStack_cc = *(int *)(unaff_EBP + 0x10) - iStack_cc;
  piStack_bc = *(int **)(unaff_EBP + -0x60);
  iStack_d0 = 0;
  puStack_b8 = *(undefined4 **)(unaff_EBP + -0x5c);
  puStack_d8 = (undefined4 *)0x7501f8;
  piStack_d4 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x80))();
  if (iVar2 < 0) {
    puStack_d8 = (undefined4 *)&DAT_00963cc8;
    iStack_e4 = 0x750208;
    iStack_e0 = iVar2;
    piStack_dc = piVar1;
    FUN_00878e09();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_dc = (int *)0x750215;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x750220;
    FUN_00878dfb();
  }
  puStack_d8 = &DAT_00980690;
  piStack_dc = (int *)0x75022e;
  FUN_00424aee();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x68);
  piStack_dc = *(int **)(unaff_EBP + -0x14);
  iStack_e0 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_e4 = 0x750243;
  FUN_004115d9();
  iStack_e4 = 0x75024a;
  iStack_e4 = FUN_0040e48b();
  iStack_e4 = *(int *)(unaff_EBP + -0x38) - iStack_e4;
  FUN_004115d9();
  FUN_00470739();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_dc = (int *)0x75026c;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x750277;
    FUN_00878dfb();
  }
  puStack_d8 = &DAT_00980690;
  piStack_dc = (int *)0x750280;
  FUN_00424aee();
  puStack_d8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_dc = (int *)0x75028d;
  FUN_00424aee();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x58);
  piStack_dc = (int *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_e0 = 0x7502a1;
  iStack_e0 = FUN_00449749();
  *(int **)(unaff_EBP + -0x44) = &iStack_e4;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 0xc));
  iVar2 = *(int *)(unaff_EBP + 0x10) + -2;
  iVar4 = (*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x3c)) / 2 +
          *(int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_004115d9(iVar4,iVar2);
  FUN_00448e3a(iVar4,iVar2);
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_dc = (int *)0x7502e6;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x7502f1;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_dc = (int *)0x7502fe;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x750309;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) / 2 + *(int *)(unaff_EBP + -0x30));
  piStack_dc = (int *)0x75031d;
  FUN_004115d9();
  piStack_dc = (int *)0x750324;
  FUN_006e3d24();
  puStack_d8 = (undefined4 *)0xfffffffe;
  piStack_dc = (int *)0x75032e;
  FUN_004115d9();
  piStack_dc = (int *)0x750335;
  FUN_006e3d45();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x10);
  piStack_dc = (int *)0x750341;
  FUN_0046fc23();
  *(undefined4 *)(unaff_EBP + -0x48) = 1;
  puStack_d8 = (undefined4 *)0x750350;
  FUN_004125e6();
  puStack_d8 = (undefined4 *)0x750358;
  FUN_004497b5();
  puStack_d8 = (undefined4 *)0x750360;
  FUN_004125e6();
  puStack_d8 = (undefined4 *)0x750368;
  FUN_004125e6();
  puStack_d8 = (undefined4 *)0x750370;
  FUN_004125e6();
  puStack_d8 = (undefined4 *)0x750378;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_d8 = (undefined4 *)0x750384;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


