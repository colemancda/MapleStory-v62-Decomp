/* FUN_0064f6a6 - 0x0064f6a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0064f6a6(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *extraout_ECX_07;
  undefined *extraout_ECX_08;
  undefined *extraout_ECX_09;
  undefined *extraout_ECX_10;
  undefined *extraout_ECX_11;
  undefined *extraout_ECX_12;
  undefined *extraout_ECX_13;
  undefined *extraout_ECX_14;
  undefined *extraout_ECX_15;
  undefined *extraout_ECX_16;
  undefined *extraout_ECX_17;
  undefined *extraout_ECX_18;
  undefined *extraout_ECX_19;
  undefined *extraout_ECX_20;
  undefined *extraout_ECX_21;
  undefined *extraout_ECX_22;
  undefined *extraout_ECX_23;
  undefined *extraout_ECX_24;
  undefined *extraout_ECX_25;
  undefined1 *extraout_ECX_26;
  undefined *extraout_ECX_27;
  undefined *extraout_ECX_28;
  undefined *extraout_ECX_29;
  undefined *extraout_ECX_30;
  undefined *extraout_ECX_31;
  undefined1 *extraout_ECX_32;
  undefined1 *extraout_ECX_33;
  undefined1 *extraout_ECX_34;
  undefined1 *extraout_ECX_35;
  undefined1 *puVar7;
  int *piVar8;
  int unaff_EBP;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined *puStack_ac;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x3c);
  puStack_ac = &DAT_00968958;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_b4 = (undefined1 *)0x64f6db;
  FUN_00434e21();
  *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + 8) / 10000;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    puStack_ac = (undefined *)0x64f707;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_ac = (undefined *)0x64f718;
    FUN_00403191();
    puStack_ac = (undefined *)0x0;
    puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
    puStack_b4 = (undefined1 *)(unaff_EBP + -100);
    *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_b8;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00679e4e(&puStack_b8,0x8a3);
    iVar3 = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_b0 = (undefined1 *)0x64f762;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
    puStack_ac = (undefined *)0x64f771;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ac = (undefined *)0x64f782;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_ac = (undefined *)0x64f792;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ac = (undefined *)0x64f79d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_ac = (undefined *)0x64f7aa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ac = (undefined *)0x64f7b5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_ac = (undefined *)0x64f7c2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ac = (undefined *)0x64f7cd;
      FUN_00878dfb();
    }
  }
  puStack_b0 = &stack0xffffff58;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff58;
  puStack_ac = (undefined *)0x942;
  puStack_b4 = (undefined1 *)0x64f7e0;
  FUN_00679e4e();
  puStack_ac = (undefined *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_b0 = (undefined1 *)0x64f7f3;
  FUN_0040263d();
  puStack_b0 = (undefined1 *)0x64f7fa;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_ac = (undefined *)0x64f81a;
  FUN_00499fda();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_ac = (undefined *)0x64f82a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64f835;
    FUN_00878dfb();
  }
  puStack_ac = (undefined *)(unaff_EBP + -0xa4);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff58;
  puStack_b0 = (undefined1 *)0x64f847;
  FUN_0040675b();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x3c);
  *(undefined ***)(unaff_EBP + -0x44) = &puStack_ac;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_b4 = (undefined1 *)0x64f85a;
  FUN_00450368();
  puStack_b4 = (undefined1 *)(unaff_EBP + 0x14);
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_b0;
  puStack_b8 = (undefined1 *)0x64f869;
  FUN_00424dbc();
  puStack_b4 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_b8 = (undefined1 *)0x64f876;
  FUN_007d6dc4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_ac = (undefined *)0x64f88a;
  FUN_00650973();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00414ebb();
  puStack_ac = (undefined *)(unaff_EBP + -0x24);
  puStack_b0 = (undefined1 *)0x64f8a6;
  FUN_00405a23();
  puStack_ac = (undefined *)0x64f8b0;
  FUN_00402f41();
  FUN_00402fa6();
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x43e;
  puStack_b8 = (undefined1 *)0x64f8d0;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64f8e0;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64f8e7;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_b0 = (undefined1 *)0x64f8f1;
  puStack_ac = (undefined *)FUN_004343c5();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff58;
  puStack_b0 = (undefined1 *)0x64f8ff;
  FUN_00402e8e();
  puStack_ac = (undefined *)0x64f904;
  FUN_0048342d();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x168) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64f925;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64f930;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_00;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x794;
  puStack_b8 = (undefined1 *)0x64f944;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64f954;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64f95b;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  puStack_b0 = (undefined1 *)0x64f965;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xc) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64f981;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64f98c;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_01;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x795;
  puStack_b8 = (undefined1 *)0x64f9a0;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64f9b0;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64f9b7;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_b0 = (undefined1 *)0x64f9c1;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x18) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64f9dd;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64f9e8;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_02;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x796;
  puStack_b8 = (undefined1 *)0x64f9fc;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fa0c;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fa13;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_b0 = (undefined1 *)0x64fa1d;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x24) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fa39;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fa44;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_03;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x797;
  puStack_b8 = (undefined1 *)0x64fa58;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fa68;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fa6f;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_b0 = (undefined1 *)0x64fa79;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x30) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fa95;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64faa0;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_04;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x798;
  puStack_b8 = (undefined1 *)0x64fab4;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fac4;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64facb;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_b0 = (undefined1 *)0x64fad5;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x3c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64faf1;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fafc;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_05;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x799;
  puStack_b8 = (undefined1 *)0x64fb10;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fb20;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fb27;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_b0 = (undefined1 *)0x64fb31;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x48) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fb4d;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fb58;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_06;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x65c;
  puStack_b8 = (undefined1 *)0x64fb6c;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fb7c;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fb83;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_b0 = (undefined1 *)0x64fb8d;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x54) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fba9;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fbb4;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_07;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x65d;
  puStack_b8 = (undefined1 *)0x64fbc8;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fbd8;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fbdf;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puStack_b0 = (undefined1 *)0x64fbe9;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x60) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fc05;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fc10;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_08;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x79a;
  puStack_b8 = (undefined1 *)0x64fc24;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fc34;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fc3b;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  puStack_b0 = (undefined1 *)0x64fc45;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x6c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fc61;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fc6c;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_09;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x655;
  puStack_b8 = (undefined1 *)0x64fc80;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fc90;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fc97;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  puStack_b0 = (undefined1 *)0x64fca1;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x78) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fcbd;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fcc8;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_10;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x411;
  puStack_b8 = (undefined1 *)0x64fcdc;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fcec;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fcf3;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  puStack_b0 = (undefined1 *)0x64fcfd;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x84) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fd1c;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fd27;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_11;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0xfeb;
  puStack_b8 = (undefined1 *)0x64fd3b;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fd4b;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fd52;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  puStack_b0 = (undefined1 *)0x64fd5c;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x90) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fd7e;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fd89;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_12;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x79c;
  puStack_b8 = (undefined1 *)0x64fd9d;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fdad;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fdb4;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  puStack_b0 = (undefined1 *)0x64fdbe;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x9c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fde0;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fdeb;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_13;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x79d;
  puStack_b8 = (undefined1 *)0x64fdff;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fe0f;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fe16;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  puStack_b0 = (undefined1 *)0x64fe20;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xa8) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fe42;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64fe4d;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_14;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x79e;
  puStack_b8 = (undefined1 *)0x64fe61;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fe71;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64fe78;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  puStack_b0 = (undefined1 *)0x64fe82;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xb4) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64fea4;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64feaf;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_15;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x79f;
  puStack_b8 = (undefined1 *)0x64fec3;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fed3;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64feda;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  puStack_b0 = (undefined1 *)0x64fee4;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xc0) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64ff06;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64ff11;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_16;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x7a0;
  puStack_b8 = (undefined1 *)0x64ff25;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64ff35;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64ff3c;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  puStack_b0 = (undefined1 *)0x64ff46;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xcc) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64ff68;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64ff73;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_17;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x5e1;
  puStack_b8 = (undefined1 *)0x64ff87;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64ff97;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x64ff9e;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  puStack_b0 = (undefined1 *)0x64ffa8;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xd8) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x64ffca;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x64ffd5;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_18;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0xdc4;
  puStack_b8 = (undefined1 *)0x64ffe9;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x64fff9;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x650000;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  puStack_b0 = (undefined1 *)0x65000a;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xe4) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x65002c;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650037;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_19;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x91e;
  puStack_b8 = (undefined1 *)0x65004b;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x65005b;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x650062;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  puStack_b0 = (undefined1 *)0x65006c;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xf0) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x65008e;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650099;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_20;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x91f;
  puStack_b8 = (undefined1 *)0x6500ad;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x6500bd;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x6500c4;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  puStack_b0 = (undefined1 *)0x6500ce;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0xfc) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x6500f0;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6500fb;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_21;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x66c;
  puStack_b8 = (undefined1 *)0x65010f;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x65011f;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x650126;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  puStack_b0 = (undefined1 *)0x650130;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1a4) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x650152;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x65015d;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_22;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x66d;
  puStack_b8 = (undefined1 *)0x650171;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x650181;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x650188;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  puStack_b0 = (undefined1 *)0x650192;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x138) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x6501b4;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6501bf;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_23;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x66e;
  puStack_b8 = (undefined1 *)0x6501d3;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x6501e3;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x6501ea;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  puStack_b0 = (undefined1 *)0x6501f4;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x108) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x650216;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650221;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_24;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x66f;
  puStack_b8 = (undefined1 *)0x650235;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x650245;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x65024c;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  puStack_b0 = (undefined1 *)0x650256;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x114) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x650278;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650283;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_25;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x670;
  puStack_b8 = (undefined1 *)0x650297;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x6502a7;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x6502ae;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  puStack_b0 = (undefined1 *)0x6502b8;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x120) = uVar2;
  puVar7 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x6502da;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6502e5;
    FUN_00878dfb();
    puVar7 = extraout_ECX_26;
  }
  puStack_ac = (undefined *)0x0;
  puStack_b8 = (undefined1 *)&puStack_b0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_b0;
  puStack_b4 = (undefined1 *)0x671;
  puStack_b0 = puVar7;
  FUN_00679e4e();
  puStack_b4 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b8 = (undefined1 *)0x65030a;
  FUN_0040263d();
  puStack_b8 = (undefined1 *)0x650311;
  puStack_b0 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  puStack_b4 = (undefined1 *)0x65031b;
  puStack_ac = (undefined *)FUN_00412550();
  puStack_b0 = (undefined1 *)0x650323;
  FUN_005dd3a5();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 300) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x65034d;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650358;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_27;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x3ca;
  puStack_b8 = (undefined1 *)0x65036c;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x65037c;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x650383;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x49;
  puStack_b0 = (undefined1 *)0x65038d;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x144) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x6503af;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6503ba;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_28;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x3cb;
  puStack_b8 = (undefined1 *)0x6503ce;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x6503de;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x6503e5;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  puStack_b0 = (undefined1 *)0x6503ef;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x150) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x650411;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x65041c;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_29;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0x3cc;
  puStack_b8 = (undefined1 *)0x650430;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x650440;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x650447;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  puStack_b0 = (undefined1 *)0x650451;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x15c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x650473;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x65047e;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_30;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0xe1e;
  puStack_b8 = (undefined1 *)0x650492;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x6504a2;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x6504a9;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  puStack_b0 = (undefined1 *)0x6504b3;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1b8) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x6504d5;
  puVar1 = (undefined *)(unaff_EBP + -0x20);
  iVar3 = FUN_00402bc3();
  puStack_ac = puVar1;
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6504e0;
    FUN_00878dfb();
    puStack_ac = extraout_ECX_31;
  }
  puStack_b4 = (undefined1 *)&puStack_ac;
  *(undefined ***)(unaff_EBP + -0x10) = &puStack_ac;
  puStack_b0 = (undefined1 *)0xdc5;
  puStack_b8 = (undefined1 *)0x6504f4;
  FUN_00679e4e();
  puStack_b0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b4 = (undefined1 *)0x650504;
  FUN_0040263d();
  puStack_b4 = (undefined1 *)0x65050b;
  puStack_ac = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  puStack_b0 = (undefined1 *)0x650515;
  FUN_00412550();
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1c4) = uVar2;
  puVar7 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_ac = (undefined *)0x650537;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650542;
    FUN_00878dfb();
    puVar7 = extraout_ECX_32;
  }
  puStack_ac = (undefined *)0x0;
  puStack_b8 = (undefined1 *)&puStack_b0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_b0;
  puStack_b4 = (undefined1 *)0x3ba;
  puStack_b0 = puVar7;
  FUN_00679e4e();
  puStack_b4 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b8 = (undefined1 *)0x650567;
  FUN_0040263d();
  puStack_b8 = (undefined1 *)0x65056e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  puStack_b0 = (undefined1 *)0x650579;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x50) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar3 != 0) {
    puStack_ac = (undefined *)0x65058f;
    iVar3 = FUN_0041a4e5();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ac = (undefined *)0x6505a0;
      FUN_00878dfb();
    }
  }
  puVar7 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  puStack_ac = (undefined *)0x6505ad;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6505b8;
    FUN_00878dfb();
    puVar7 = extraout_ECX_33;
  }
  puStack_ac = (undefined *)0x0;
  puStack_b8 = (undefined1 *)&puStack_b0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_b0;
  puStack_b4 = (undefined1 *)0x3bb;
  puStack_b0 = puVar7;
  FUN_00679e4e();
  puStack_b4 = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  puStack_b8 = (undefined1 *)0x6505dd;
  FUN_0040263d();
  puStack_b8 = (undefined1 *)0x6505e4;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  puStack_b0 = (undefined1 *)0x6505ef;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x54) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar3 != 0) {
    puStack_ac = (undefined *)0x650605;
    iVar3 = FUN_0041a4e5();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ac = (undefined *)0x650616;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  puStack_ac = (undefined *)0x650623;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x65062e;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    if (*(int *)(unaff_EBP + -0x2c) == 0) {
      puStack_ac = (undefined *)0x0;
      puStack_b0 = (undefined1 *)0x0;
      puStack_b4 = (undefined1 *)0x0;
      goto LAB_006506af;
    }
  }
  else if (*(int *)(unaff_EBP + -0x2c) == 0) {
    puStack_ac = (undefined *)0x65064d;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x2c) == 0) {
      puStack_ac = (undefined *)0x65065c;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x2c);
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    puStack_ac = (undefined *)0x650671;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x34);
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    puStack_ac = (undefined *)0x650685;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x34);
  FUN_00404abb();
  puStack_ac = (undefined *)0x65069c;
  puStack_ac = (undefined *)FUN_00404a94();
  puStack_b0 = (undefined1 *)0x6506a5;
  puStack_b0 = (undefined1 *)FUN_00404abb();
  puStack_b4 = (undefined1 *)0x6506ae;
  puStack_b4 = (undefined1 *)FUN_00404a94();
LAB_006506af:
  puStack_b8 = (undefined1 *)(extraout_ECX + 0x16c);
  FUN_004114f3();
  puStack_b0 = &stack0xffffff58;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff58;
  puStack_ac = (undefined *)0x420;
  puStack_b4 = (undefined1 *)0x6506d1;
  FUN_00679e4e();
  puStack_ac = (undefined *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  puStack_b0 = (undefined1 *)0x6506e1;
  FUN_0040263d();
  puStack_b0 = (undefined1 *)0x6506e8;
  puVar4 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x24) = *puVar4;
  puVar7 = (undefined1 *)(unaff_EBP + -0x74);
  puStack_ac = (undefined *)0x6506f8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650703;
    FUN_00878dfb();
    puVar7 = extraout_ECX_34;
  }
  if (*(short *)(unaff_EBP + -0x24) != 0) {
    puStack_ac = (undefined *)(unaff_EBP + -0x24);
    puStack_b0 = (undefined1 *)0x650719;
    puVar5 = (undefined4 *)FUN_00679d86();
    puStack_b4 = (undefined1 *)*puVar5;
    puStack_ac = *(undefined **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    puStack_b0 = *(undefined1 **)(unaff_EBP + -0x48);
    puStack_b8 = (undefined1 *)(unaff_EBP + -0x40);
    FUN_0041354c();
    puStack_ac = (undefined *)0x65073f;
    FUN_00402e8e();
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_ac = (undefined *)0x650750;
      InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x28) + 8));
    }
    FUN_00402fa6();
    iVar3 = *(int *)(unaff_EBP + -0x28);
    *(int *)(extraout_ECX + 0x1a8) = iVar3;
    if (iVar3 != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    FUN_00402676();
    puVar7 = extraout_ECX_35;
  }
  puStack_ac = (undefined *)0x0;
  puStack_b8 = (undefined1 *)&puStack_b0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_b0;
  puStack_b4 = (undefined1 *)0x3d8;
  puStack_b0 = puVar7;
  FUN_00679e4e();
  puStack_b4 = (undefined1 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  puStack_b8 = (undefined1 *)0x6507a1;
  FUN_0040263d();
  puStack_b8 = (undefined1 *)0x6507a8;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x5d;
  puStack_b0 = (undefined1 *)0x6507b3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar3 != 0) {
    puStack_ac = (undefined *)0x6507c9;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ac = (undefined *)0x6507da;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x5f;
  puStack_ac = (undefined *)0x6507e7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x6507f2;
    FUN_00878dfb();
  }
  piVar8 = (int *)0x0;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    iVar3 = FUN_0040cf4d();
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          puStack_ac = (undefined *)0x65081c;
          FUN_00878dfb();
        }
        uVar6 = FUN_0040cf4d();
        if (uVar6 <= *(uint *)(unaff_EBP + -0x28)) break;
        puStack_ac = (undefined *)(unaff_EBP + -0x10);
        puStack_b0 = (undefined1 *)0x65083d;
        puVar5 = (undefined4 *)FUN_00679d86();
        puStack_b8 = (undefined1 *)*puVar5;
        puStack_ac = *(undefined **)(unaff_EBP + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x60;
        puStack_b0 = *(undefined1 **)(unaff_EBP + 8);
        puStack_b4 = *(undefined1 **)(unaff_EBP + -0x48);
        FUN_0041354c(unaff_EBP + -0x40);
        puStack_ac = (undefined *)0x650866;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x61;
        puStack_ac = (undefined *)0x650877;
        uVar2 = FUN_004d6cfb();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
        FUN_00408b49();
        FUN_00402fa6();
        **(undefined4 **)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5f;
        FUN_00402676();
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      }
    }
    piVar8 = *(int **)(unaff_EBP + -0x38);
  }
  *(undefined4 *)(extraout_ECX + 0x1c8) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (piVar8 != (int *)0x0) {
    puStack_ac = (undefined *)0x6508cf;
    (**(code **)(*piVar8 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    puStack_ac = (undefined *)0x6508e0;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    puStack_ac = (undefined *)0x6508f1;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_ac = (undefined *)0x650901;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x65090c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_ac = (undefined *)0x65091c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ac = (undefined *)0x650927;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    puStack_ac = (undefined *)0x65094f;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
    puStack_ac = (undefined *)0x650960;
    (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


