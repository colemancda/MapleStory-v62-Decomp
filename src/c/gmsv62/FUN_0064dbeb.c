/* FUN_0064dbeb - 0x0064dbeb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0064dbeb(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  undefined1 *extraout_ECX_07;
  undefined1 *extraout_ECX_08;
  undefined1 *extraout_ECX_09;
  undefined1 *extraout_ECX_10;
  undefined1 *extraout_ECX_11;
  undefined1 *extraout_ECX_12;
  undefined1 *extraout_ECX_13;
  undefined1 *extraout_ECX_14;
  undefined1 *extraout_ECX_15;
  undefined1 *extraout_ECX_16;
  undefined1 *extraout_ECX_17;
  undefined1 *extraout_ECX_18;
  undefined1 *extraout_ECX_19;
  undefined1 *extraout_ECX_20;
  undefined1 *extraout_ECX_21;
  undefined1 *puVar9;
  int unaff_EBP;
  undefined1 *puStack_f0;
  undefined *puStack_ec;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x7c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_ec = (undefined *)0x64dc1d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  FUN_00654498();
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x50);
  puStack_ec = &DAT_00968958;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00434e21();
  puStack_f0 = &stack0xffffff18;
  **(undefined4 **)(unaff_EBP + -0x1c) = uVar2;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x64b;
  FUN_00679e4e();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x50);
  *(undefined ***)(unaff_EBP + -0x44) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00450368();
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  FUN_00424dbc(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007d6dc4(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_ec = (undefined *)0x64dca9;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_ec = (undefined *)0x64dcbd;
    FUN_00434e38();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x5ac;
  FUN_00679e4e();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x50);
  *(undefined ***)(unaff_EBP + -0x44) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00450368();
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  FUN_00424dbc(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007d6dc4(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_ec = (undefined *)0x64dd13;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_ec = extraout_ECX_00;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_ec = (undefined *)0x64dd27;
    puVar1 = (undefined *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    FUN_00434e38();
    puStack_ec = puVar1;
  }
  *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
  puStack_f0 = (undefined1 *)0x927;
  FUN_00679e4e(&puStack_ec);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d();
  puStack_ec = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_f0 = (undefined1 *)0x64dd60;
  uVar2 = FUN_00412550();
  iVar3 = FUN_00654401();
  *(undefined4 *)(iVar3 + 0xc) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_ec = (undefined *)0x64dd7f;
  puVar1 = (undefined *)(unaff_EBP + -0x8c);
  iVar3 = FUN_00402bc3();
  puStack_ec = puVar1;
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64dd8a;
    FUN_00878dfb();
    puStack_ec = extraout_ECX_01;
  }
  *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
  puStack_f0 = (undefined1 *)0x928;
  FUN_00679e4e(&puStack_ec);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d();
  puStack_ec = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_f0 = (undefined1 *)0x64ddc2;
  uVar2 = FUN_00412550();
  iVar3 = FUN_00654401();
  *(undefined4 *)(iVar3 + 0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_ec = (undefined *)0x64dde1;
  puVar1 = (undefined *)(unaff_EBP + -0x8c);
  iVar3 = FUN_00402bc3();
  puStack_ec = puVar1;
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64ddec;
    FUN_00878dfb();
    puStack_ec = extraout_ECX_02;
  }
  *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
  puStack_f0 = (undefined1 *)0xe37;
  FUN_00679e4e(&puStack_ec);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d();
  puStack_ec = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_f0 = (undefined1 *)0x64de24;
  iVar3 = FUN_00412550();
  iVar4 = FUN_00654401();
  *(uint *)(iVar4 + 0x28) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_ec = (undefined *)0x64de49;
  puVar1 = (undefined *)(unaff_EBP + -0x8c);
  iVar3 = FUN_00402bc3();
  puStack_ec = puVar1;
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64de54;
    FUN_00878dfb();
    puStack_ec = extraout_ECX_03;
  }
  *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
  puStack_f0 = (undefined1 *)0xec3;
  FUN_00679e4e(&puStack_ec);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d();
  puStack_ec = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_f0 = (undefined1 *)0x64de8c;
  uVar2 = FUN_00412550();
  iVar3 = FUN_00654401();
  *(undefined4 *)(iVar3 + 0x2c) = uVar2;
  puVar9 = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_ec = (undefined *)0x64deab;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64deb6;
    FUN_00878dfb();
    puVar9 = extraout_ECX_04;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x43e);
  iVar3 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_f0 = (undefined1 *)0x64def0;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x94) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar3 != 0) {
    puStack_ec = (undefined *)0x64df0c;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ec = (undefined *)0x64df1d;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_ec = (undefined *)0x64df2d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64df38;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        puStack_ec = (undefined *)0x64df53;
        FUN_00878dfb();
      }
      uVar5 = FUN_0040cf4d();
      if (uVar5 <= *(uint *)(unaff_EBP + -0x10)) break;
      FUN_0087a1b0();
      puStack_ec = *(undefined **)(unaff_EBP + -0x10);
      puStack_f0 = (undefined1 *)0x64df77;
      puStack_ec = (undefined *)FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
      puStack_f0 = (undefined1 *)0x64df83;
      FUN_004033a1();
      puStack_ec = (undefined *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_f0 = (undefined1 *)0x64df93;
      FUN_0040263d();
      puStack_f0 = (undefined1 *)0x64df9a;
      puStack_ec = (undefined *)FUN_004048a4();
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_f0 = (undefined1 *)0x64dfaa;
      FUN_0040675b();
      puStack_ec = (undefined *)0x64dfaf;
      iVar3 = FUN_0048342d();
      puStack_ec = (undefined *)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_f0 = (undefined1 *)0x64dfbe;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_ec = (undefined *)0x64dfca;
        FUN_00878dfb();
      }
      if (-1 < iVar3) {
        puStack_ec = (undefined *)0x64dfdb;
        piVar6 = (int *)FUN_0045f1e3();
        *piVar6 = iVar3;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x660;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_f0 = (undefined1 *)0x64e008;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64e00f;
  FUN_004048a4();
  puStack_ec = (undefined *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_f0 = (undefined1 *)0x64e020;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e02c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_ec = (undefined *)0x64e039;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e044;
    FUN_00878dfb();
  }
  puStack_ec = *(undefined **)(unaff_EBP + -0xac);
  if (*(short *)(unaff_EBP + -0xb4) != 8) {
    puStack_ec = &DAT_0097812c;
  }
  puStack_f0 = (undefined1 *)0x64e066;
  puVar1 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + 0x10);
  iVar3 = FUN_0064f1b2();
  puStack_ec = puVar1;
  if (iVar3 == 0) {
    puStack_ec = (undefined *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
                    /* WARNING: Subroutine does not return */
    puStack_f0 = (undefined1 *)0x64e081;
    __CxxThrowException_8();
  }
  *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
  puStack_f0 = (undefined1 *)0x92a;
  FUN_00679e4e(&puStack_ec);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0040263d();
  puStack_ec = (undefined *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_f0 = (undefined1 *)0x64e0b6;
  iVar3 = FUN_00412550();
  iVar4 = FUN_00654401();
  *(uint *)(iVar4 + 0x50) = (uint)(iVar3 != 0);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_ec = (undefined *)0x64e0d8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e0e3;
    FUN_00878dfb();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x674;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_f0 = (undefined1 *)0x64e106;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64e10d;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x18) = *puVar7;
  puStack_ec = (undefined *)0x64e11d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e128;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x18) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x2c);
    puStack_f0 = (undefined1 *)0x64e143;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x10);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e16f;
    FUN_00402e8e();
    puStack_ec = (undefined *)0x64e17e;
    FUN_00402f41();
    FUN_00402fa6();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00402676();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x929;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_f0 = (undefined1 *)0x64e1b5;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64e1bc;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x2c) = *puVar7;
  puVar9 = (undefined1 *)(unaff_EBP + -0x78);
  puStack_ec = (undefined *)0x64e1cc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e1d7;
    FUN_00878dfb();
    puVar9 = extraout_ECX_05;
  }
  if (*(short *)(unaff_EBP + -0x2c) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x68);
    puStack_f0 = (undefined1 *)0x64e1ed;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x2c);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e219;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x58;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    FUN_00402fa6();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00402676();
    puVar9 = extraout_ECX_06;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x997);
  iVar3 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_f0 = (undefined1 *)0x64e285;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x68) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar3 != 0) {
    puStack_ec = (undefined *)0x64e29b;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ec = (undefined *)0x64e2ac;
      FUN_00878dfb();
    }
  }
  puVar9 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  puStack_ec = (undefined *)0x64e2b9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e2c4;
    FUN_00878dfb();
    puVar9 = extraout_ECX_07;
  }
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x2c);
    puStack_f0 = (undefined1 *)0x64e2dd;
    puVar8 = (undefined4 *)FUN_00679d86();
    puStack_f0 = (undefined1 *)*puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e302;
    FUN_00402e8e();
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    FUN_00408b49();
    FUN_00402fa6();
    *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_00402676();
    puStack_f0 = &stack0xffffff18;
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
    puStack_ec = (undefined *)0x43e;
    FUN_00679e4e();
    puStack_ec = (undefined *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puStack_f0 = (undefined1 *)0x64e35d;
    FUN_0040263d();
    puStack_f0 = (undefined1 *)0x64e364;
    puStack_ec = (undefined *)FUN_004048a4();
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_f0 = (undefined1 *)0x64e374;
    FUN_0040675b();
    puStack_ec = (undefined *)0x64e379;
    uVar2 = FUN_0048342d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x1c) = uVar2;
    puStack_ec = (undefined *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puStack_f0 = (undefined1 *)0x64e38f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ec = (undefined *)0x64e39b;
      FUN_00878dfb();
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
    puStack_f0 = (undefined1 *)0x91e;
    FUN_00679e4e(&puStack_ec);
    puStack_f0 = (undefined1 *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_0040263d();
    puStack_ec = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_f0 = (undefined1 *)0x64e3d3;
    uVar2 = FUN_00412550();
    iVar3 = FUN_00654401();
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
    puVar9 = (undefined1 *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    puStack_ec = (undefined *)0x64e3f2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ec = (undefined *)0x64e3fd;
      FUN_00878dfb();
      puVar9 = extraout_ECX_08;
    }
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0xe20);
  iVar3 = unaff_EBP + -0xa4;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  puStack_f0 = (undefined1 *)0x64e43c;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  if (iVar3 != 0) {
    puStack_ec = (undefined *)0x64e452;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ec = (undefined *)0x64e463;
      FUN_00878dfb();
    }
  }
  puVar9 = (undefined1 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  puStack_ec = (undefined *)0x64e473;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e47e;
    FUN_00878dfb();
    puVar9 = extraout_ECX_09;
  }
  if (*(int *)(unaff_EBP + -0x5c) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x58);
    puStack_f0 = (undefined1 *)0x64e493;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x18);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e4bf;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x78;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00402676();
    puVar9 = extraout_ECX_10;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0xe89);
  iVar3 = unaff_EBP + -0xe4;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_f0 = (undefined1 *)0x64e535;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  if (iVar3 != 0) {
    puStack_ec = (undefined *)0x64e54b;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ec = (undefined *)0x64e55c;
      FUN_00878dfb();
    }
  }
  puVar9 = (undefined1 *)(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  puStack_ec = (undefined *)0x64e56c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e577;
    FUN_00878dfb();
    puVar9 = extraout_ECX_11;
  }
  if (*(int *)(unaff_EBP + -0x60) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -100);
    puStack_f0 = (undefined1 *)0x64e58c;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x18);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e5b8;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x7c;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_00402676();
    puVar9 = extraout_ECX_12;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x3d8);
  iVar3 = unaff_EBP + -0xd4;
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  puStack_f0 = (undefined1 *)0x64e62e;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -100) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  if (iVar3 != 0) {
    puStack_ec = (undefined *)0x64e644;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ec = (undefined *)0x64e655;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  puStack_ec = (undefined *)0x64e665;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e670;
    FUN_00878dfb();
  }
  puVar9 = (undefined1 *)0x0;
  if ((*(int *)(unaff_EBP + -0x4c) != 0) &&
     (iVar3 = FUN_0040cf4d(), puVar9 = extraout_ECX_13, iVar3 != 0)) {
    puStack_ec = (undefined *)(unaff_EBP + -0x24);
    puStack_f0 = (undefined1 *)0x64e698;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x18);
    *(undefined **)(unaff_EBP + -0x44) = puStack_ec;
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e6c9;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x5c;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x4c) == 0) {
        puStack_ec = (undefined *)0x64e717;
        FUN_00878dfb();
      }
      uVar5 = FUN_0040cf4d();
      puVar9 = extraout_ECX_14;
      if (uVar5 <= *(uint *)(unaff_EBP + -0x10)) break;
      puStack_ec = (undefined *)(unaff_EBP + -0x24);
      puStack_f0 = (undefined1 *)0x64e734;
      puVar8 = (undefined4 *)FUN_00679d86();
      uVar2 = *puVar8;
      puStack_ec = *(undefined **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0x44);
      FUN_0041354c(unaff_EBP + -0x28,uVar2);
      puStack_ec = (undefined *)0x64e75a;
      FUN_00402e8e();
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      puStack_ec = (undefined *)0x64e76b;
      FUN_004d6cfb();
      puStack_ec = (undefined *)0x64e776;
      FUN_00402f41();
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      FUN_00402676();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x420);
  iVar3 = unaff_EBP + -0xc4;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  puStack_f0 = (undefined1 *)0x64e7d3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  if (iVar3 != 0) {
    puStack_ec = (undefined *)0x64e7e9;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      puStack_ec = (undefined *)0x64e7fa;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_ec = (undefined *)0x64e80a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e815;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x24);
    puStack_f0 = (undefined1 *)0x64e82e;
    puVar8 = (undefined4 *)FUN_00679d86();
    puStack_f0 = (undefined1 *)*puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e853;
    FUN_00402e8e();
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    FUN_00408b49();
    FUN_00402fa6();
    *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_ec;
    puStack_f0 = (undefined1 *)0x474;
    FUN_00679e4e(&puStack_ec);
    puStack_f0 = (undefined1 *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_0040263d();
    puStack_ec = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    puStack_f0 = (undefined1 *)0x64e8bd;
    uVar2 = FUN_00412550();
    iVar3 = FUN_00654401();
    *(undefined4 *)(iVar3 + 0x24) = uVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_ec = (undefined *)0x64e8d9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ec = (undefined *)0x64e8e4;
      FUN_00878dfb();
    }
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x63f;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_f0 = (undefined1 *)0x64e90c;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64e913;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x24) = *puVar7;
  puStack_ec = (undefined *)0x64e923;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e92e;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x24) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x14);
    puStack_f0 = (undefined1 *)0x64e944;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x24) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x24);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64e970;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x68;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x5d1;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_f0 = (undefined1 *)0x64e9cf;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64e9d6;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x14) = *puVar7;
  puStack_ec = (undefined *)0x64e9e6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64e9f1;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x14) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x24);
    puStack_f0 = (undefined1 *)0x64ea07;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x14);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64ea33;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x6c;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x93d;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_f0 = (undefined1 *)0x64ea92;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64ea99;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x14) = *puVar7;
  puStack_ec = (undefined *)0x64eaa9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64eab4;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x14) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x24);
    puStack_f0 = (undefined1 *)0x64eaca;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x14);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64eaf6;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x70;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x999;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_f0 = (undefined1 *)0x64eb55;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64eb5c;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x14) = *puVar7;
  puStack_ec = (undefined *)0x64eb6c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64eb77;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x14) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x24);
    puStack_f0 = (undefined1 *)0x64eb8d;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x14);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64ebb9;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x80;
    FUN_00408b49();
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0x440;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_f0 = (undefined1 *)0x64ec1a;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64ec21;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x14) = *puVar7;
  puStack_ec = (undefined *)0x64ec31;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64ec3c;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x14) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x24);
    puStack_f0 = (undefined1 *)0x64ec56;
    puVar8 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x14);
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64ec82;
    FUN_00402e8e();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + 0x84;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_ec = (undefined *)0x64ec9e;
      InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 8));
    }
    FUN_00402fa6();
    **(undefined4 **)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
  }
  puStack_f0 = &stack0xffffff18;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
  puStack_ec = (undefined *)0xfef;
  FUN_00679e4e();
  puStack_ec = (undefined *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_f0 = (undefined1 *)0x64ecec;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x64ecf3;
  puVar7 = (undefined2 *)FUN_004048a4();
  *(undefined2 *)(unaff_EBP + -0x14) = *puVar7;
  puVar9 = (undefined1 *)(unaff_EBP + -0x40);
  puStack_ec = (undefined *)0x64ed03;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64ed0e;
    FUN_00878dfb();
    puVar9 = extraout_ECX_15;
  }
  if (*(short *)(unaff_EBP + -0x14) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x14);
    puStack_f0 = (undefined1 *)0x64ed24;
    puVar8 = (undefined4 *)FUN_00679d86();
    puStack_f0 = (undefined1 *)*puVar8;
    puStack_ec = (undefined *)(*(int *)(unaff_EBP + 0xc) / 10000);
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    FUN_0041354c(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x64ed49;
    FUN_00402e8e();
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_ec = (undefined *)0x64ed63;
      InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 8));
    }
    FUN_00402fa6();
    *(undefined4 *)(iVar3 + 0x88) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_00402676();
    puVar9 = extraout_ECX_16;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x93f);
  iVar3 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x4f;
  puStack_f0 = (undefined1 *)0x64edc1;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  puStack_ec = (undefined *)0x64edd6;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    puStack_ec = (undefined *)0x64ede9;
    FUN_00878dfb();
  }
  puVar9 = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_ec = (undefined *)0x64edf6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64ee01;
    FUN_00878dfb();
    puVar9 = extraout_ECX_17;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x916);
  iVar3 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  puStack_f0 = (undefined1 *)0x64ee38;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  puStack_ec = (undefined *)0x64ee4d;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    puStack_ec = (undefined *)0x64ee5b;
    FUN_00878dfb();
  }
  puVar9 = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_ec = (undefined *)0x64ee68;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64ee73;
    FUN_00878dfb();
    puVar9 = extraout_ECX_18;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x940);
  iVar3 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  puStack_f0 = (undefined1 *)0x64eeaa;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  puStack_ec = (undefined *)0x64eebf;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    puStack_ec = (undefined *)0x64eecd;
    FUN_00878dfb();
  }
  puVar9 = (undefined1 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_ec = (undefined *)0x64eeda;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64eee5;
    FUN_00878dfb();
    puVar9 = extraout_ECX_19;
  }
  puStack_ec = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_f0;
  puStack_f0 = puVar9;
  FUN_00679e4e(&puStack_f0,0x941);
  iVar3 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  puStack_f0 = (undefined1 *)0x64ef1c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff18;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_ec = (undefined *)(unaff_EBP + -0x18);
    puStack_f0 = (undefined1 *)0x64ef35;
    puStack_ec = (undefined *)FUN_00404b30();
    if (((int)puStack_ec < 0) && (puStack_ec != (undefined *)0x80004002)) {
      puStack_f0 = (undefined1 *)0x64ef43;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  puStack_ec = (undefined *)0x64ef4f;
  iVar3 = FUN_00654401();
  puStack_ec = (undefined *)(iVar3 + 0x30);
  puStack_f0 = (undefined1 *)0x64ef5b;
  iVar3 = FUN_0064f275();
  puVar9 = (undefined1 *)(unaff_EBP + -0x40);
  *(bool *)(unaff_EBP + 0xf) = iVar3 == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  puStack_ec = (undefined *)0x64ef6e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_ec = (undefined *)0x64ef79;
    FUN_00878dfb();
    puVar9 = extraout_ECX_20;
  }
  if (*(char *)(unaff_EBP + 0xf) == '\0') {
    puStack_ec = (undefined *)0x0;
    *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_f0;
    puStack_f0 = puVar9;
    FUN_00679e4e(&puStack_f0,0x772);
    iVar3 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_0040263d(iVar3);
    FUN_004048a4(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x58;
    puStack_f0 = (undefined1 *)0x64efca;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff18;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_ec = (undefined *)(unaff_EBP + -0x18);
      puStack_f0 = (undefined1 *)0x64efe3;
      puStack_ec = (undefined *)FUN_00404b30();
      if (((int)puStack_ec < 0) && (puStack_ec != (undefined *)0x80004002)) {
        puStack_f0 = (undefined1 *)0x64eff1;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x58;
    puStack_ec = (undefined *)0x64effd;
    iVar3 = FUN_00654401();
    puStack_ec = (undefined *)(iVar3 + 0x34);
    puStack_f0 = (undefined1 *)0x64f009;
    iVar3 = FUN_0064f50e();
    puVar9 = (undefined1 *)(unaff_EBP + -0x40);
    *(bool *)(unaff_EBP + 0xf) = iVar3 == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    puStack_ec = (undefined *)0x64f01c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_ec = (undefined *)0x64f027;
      FUN_00878dfb();
      puVar9 = extraout_ECX_21;
    }
    if (*(char *)(unaff_EBP + 0xf) == '\0') {
      puStack_ec = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_f0;
      puStack_f0 = puVar9;
      FUN_00679e4e(&puStack_f0,0x652);
      iVar3 = unaff_EBP + -0x40;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      FUN_0040263d(iVar3);
      FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      puStack_f0 = (undefined1 *)0x64f078;
      uVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
      puStack_ec = (undefined *)0x64f08a;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_ec = (undefined *)0x64f098;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      puStack_ec = (undefined *)0x64f0a5;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        puStack_ec = (undefined *)0x64f0b0;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x1c);
      FUN_006544cb();
      *(undefined4 *)(unaff_EBP + -0x90) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f0db;
        (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f0ec;
        (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (*(int **)(unaff_EBP + -0x60) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f0fd;
        (**(code **)(**(int **)(unaff_EBP + -0x60) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (*(int **)(unaff_EBP + -0x5c) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f10e;
        (**(code **)(**(int **)(unaff_EBP + -0x5c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f11f;
        (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f130;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        puStack_ec = (undefined *)0x64f14e;
        FUN_00654632();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_ec = (undefined *)0x64f16d;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_ec = (undefined *)0x64f178;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f189;
        (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
        puStack_ec = (undefined *)0x64f199;
        (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar3;
    }
    puStack_ec = (undefined *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
                    /* WARNING: Subroutine does not return */
    puStack_f0 = (undefined1 *)0x64f041;
    __CxxThrowException_8();
  }
  puStack_ec = (undefined *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
                    /* WARNING: Subroutine does not return */
  puStack_f0 = (undefined1 *)0x64ef93;
  __CxxThrowException_8();
}


