/* FUN_005db4cd - 0x005db4cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005db4cd(void)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  short *psVar9;
  undefined4 *puVar10;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
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
  undefined1 *extraout_ECX_11;
  undefined1 *extraout_ECX_12;
  undefined1 *extraout_ECX_13;
  undefined *extraout_ECX_14;
  undefined *extraout_ECX_15;
  undefined *extraout_ECX_16;
  undefined1 *extraout_ECX_17;
  undefined1 *extraout_ECX_18;
  undefined1 *extraout_ECX_19;
  undefined1 *extraout_ECX_20;
  undefined *extraout_ECX_21;
  undefined *extraout_ECX_22;
  undefined *extraout_ECX_23;
  undefined *extraout_ECX_24;
  int unaff_EBP;
  undefined1 *puStack_d4;
  undefined *puStack_d0;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x7c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puStack_d0 = (undefined *)0x5db4fd;
  FUN_0040810c();
  puStack_d0 = (undefined *)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined **)(unaff_EBP + -0x24) = puStack_d0;
  puStack_d4 = (undefined1 *)0x5db512;
  FUN_004b8c9b();
  puStack_d0 = (undefined *)(unaff_EBP + -0x78);
  puStack_d4 = (undefined1 *)0x5db524;
  FUN_0040a0a2();
  puStack_d0 = (undefined *)0x0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004059fd(unaff_EBP + -0x40);
  iVar4 = unaff_EBP + -0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004118a0(iVar4);
  FUN_0040263d();
  FUN_004048a4(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_d4 = (undefined1 *)0x5db568;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x88) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar4 != 0) {
    puStack_d0 = (undefined *)0x5db589;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      puStack_d0 = (undefined *)0x5db597;
      FUN_00878dfb();
    }
  }
  puVar7 = (undefined1 *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_d0 = (undefined *)0x5db5a7;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_d0 = (undefined *)0x5db5b2;
    FUN_00878dfb();
    puVar7 = extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + -0x48) == 0) {
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
LAB_005db8ce:
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0041299b();
    FUN_00402fa6();
  }
  else {
    puStack_d0 = (undefined *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
    puStack_d4 = puVar7;
    FUN_00679e4e(&puStack_d4,0x3b4);
    iVar4 = unaff_EBP + -200;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_d4 = (undefined1 *)0x5db604;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x80) = iVar4;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    if (iVar4 != 0) {
      puStack_d0 = (undefined *)0x5db61a;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        puStack_d0 = (undefined *)0x5db628;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_d0 = (undefined *)0x5db638;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db643;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_005dd088();
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x5ed;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_d4 = (undefined1 *)0x5db687;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0xc) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d0 = (undefined *)0x5db6a3;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db6ae;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_01;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x668;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_d4 = (undefined1 *)0x5db6e3;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x10) = (uint)(iVar4 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d0 = (undefined *)0x5db705;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db710;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_02;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x669;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_d4 = (undefined1 *)0x5db745;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0x14) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d0 = (undefined *)0x5db761;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db76c;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_03;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x41d;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_d4 = (undefined1 *)0x5db7a1;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x1c) = (uint)(iVar4 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d0 = (undefined *)0x5db7c3;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db7ce;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_04;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x66b;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_d4 = (undefined1 *)0x5db803;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x24) = (uint)(iVar4 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d0 = (undefined *)0x5db825;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db830;
      FUN_00878dfb();
    }
    puStack_d4 = &stack0xffffff34;
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff34;
    puStack_d0 = (undefined *)0x660;
    FUN_00679e4e();
    puStack_d0 = (undefined *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d4 = (undefined1 *)0x5db856;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x5db85d;
    FUN_004048a4();
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar4 != 0) {
      puStack_d0 = *(undefined **)(unaff_EBP + -0x90);
      if (*(short *)(unaff_EBP + -0x98) != 8) {
        puStack_d0 = &DAT_0097812c;
      }
      puStack_d4 = (undefined1 *)0x5db88c;
      iVar4 = FUN_005dc828();
      if (iVar4 == 0) {
        iVar4 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined4 *)(unaff_EBP + -0x28) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_d0 = (undefined *)0x5db8af;
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          puStack_d0 = (undefined *)0x5db8ba;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_005dd0b0();
        FUN_004027eb();
        goto LAB_005db8ce;
      }
    }
    puStack_d0 = (undefined *)(*(int *)(unaff_EBP + -0x7c) + 0xb8);
    puStack_d4 = (undefined1 *)0x5db905;
    puVar1 = *(undefined **)(*(int *)(unaff_EBP + -0x7c) + 0xc0);
    FUN_00413367();
    puStack_d0 = puVar1;
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x658;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_d4 = (undefined1 *)0x5db93c;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0x18) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5db958;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db963;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_05;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0xabf;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_d4 = (undefined1 *)0x5db999;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0x68) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5db9b5;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5db9c0;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_06;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0xb06;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    puStack_d4 = (undefined1 *)0x5db9f5;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x6c) = (uint)(iVar4 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5dba17;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dba22;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_07;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0xb07;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_d4 = (undefined1 *)0x5dba57;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x70) = (uint)(iVar4 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5dba79;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dba84;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_08;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0xb0f;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_d4 = (undefined1 *)0x5dbab9;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x90) = (uint)(iVar4 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5dbade;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dbae9;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_09;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0xb15;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_d4 = (undefined1 *)0x5dbb1e;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0x94) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5dbb3d;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dbb48;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_10;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x7e3;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_d4 = (undefined1 *)0x5dbb7d;
    iVar4 = FUN_00412550();
    iVar6 = FUN_005dd044();
    *(uint *)(iVar6 + 0x98) = (uint)(iVar4 != 0);
    puVar7 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_d0 = (undefined *)0x5dbba2;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dbbad;
      FUN_00878dfb();
      puVar7 = extraout_ECX_11;
    }
    puStack_d0 = (undefined *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
    puStack_d4 = puVar7;
    FUN_00679e4e(&puStack_d4,0x66c);
    iVar4 = unaff_EBP + -0xb8;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_d4 = (undefined1 *)0x5dbbe7;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x84) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar4 != 0) {
      puStack_d0 = (undefined *)0x5dbc03;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        puStack_d0 = (undefined *)0x5dbc16;
        FUN_00878dfb();
      }
    }
    puVar7 = (undefined1 *)(unaff_EBP + -0xb8);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_d0 = (undefined *)0x5dbc2d;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dbc38;
      FUN_00878dfb();
      puVar7 = extraout_ECX_12;
    }
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0xc);
    puStack_d4 = puVar7;
    if (iVar4 == 0) {
      puStack_d0 = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
      FUN_00679e4e(&puStack_d4,0x3ba);
      iVar4 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      puStack_d4 = (undefined1 *)0x5dbc7d;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x70) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        puStack_d0 = (undefined *)0x5dbc93;
        iVar4 = FUN_0041a4e5();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          puStack_d0 = (undefined *)0x5dbca1;
          FUN_00878dfb();
        }
      }
      puVar7 = (undefined1 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puStack_d0 = (undefined *)0x5dbcae;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbcb9;
        FUN_00878dfb();
        puVar7 = extraout_ECX_13;
      }
      puStack_d0 = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
      puStack_d4 = puVar7;
      FUN_00679e4e(&puStack_d4,0x3bb);
      iVar4 = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      puStack_d4 = (undefined1 *)0x5dbcf0;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x4c) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar4 != 0) {
        puStack_d0 = (undefined *)0x5dbd06;
        iVar4 = FUN_0041a4e5();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          puStack_d0 = (undefined *)0x5dbd14;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      puStack_d0 = (undefined *)0x5dbd21;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbd2c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_d0 = (undefined *)0x5dbd3c;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puStack_d0 = (undefined *)0x5dbd47;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x18);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_d0 = (undefined *)0x5dbd58;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_d0 = (undefined *)0x5dbd68;
        FUN_00878dfb();
      }
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + -0x10);
      FUN_00404abb();
      puStack_d0 = (undefined *)0x5dbd82;
      puStack_d0 = (undefined *)FUN_00404a94();
      puStack_d4 = (undefined1 *)0x5dbd8b;
      puStack_d4 = (undefined1 *)FUN_00404abb();
      uVar5 = FUN_00404a94();
      FUN_004114f3(iVar4 + 0x28,uVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        puStack_d0 = (undefined *)0x5dbdb2;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
    }
    else if ((iVar4 == 3) || (iVar4 == 4)) {
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
      puStack_d4 = (undefined1 *)0x3d0;
      puStack_d0 = puVar7;
      FUN_00679e4e(&puStack_d0);
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d();
      puStack_d0 = (undefined *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      puStack_d4 = (undefined1 *)0x5dbf80;
      uVar5 = FUN_00412550();
      iVar4 = FUN_005dd044();
      *(undefined4 *)(iVar4 + 0x28) = uVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_d0 = (undefined *)0x5dbf9c;
      puVar1 = (undefined *)(unaff_EBP + -0x6c);
      iVar4 = FUN_00402bc3();
      puStack_d0 = puVar1;
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbfa7;
        FUN_00878dfb();
        puStack_d0 = extraout_ECX_15;
      }
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
      puStack_d4 = (undefined1 *)0xaee;
      FUN_00679e4e(&puStack_d0);
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d();
      puStack_d0 = (undefined *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      puStack_d4 = (undefined1 *)0x5dbfdc;
      iVar4 = FUN_00412550();
      if (0x1f < iVar4) {
        iVar4 = 0x20;
      }
      *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x2c) = iVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_d0 = (undefined *)0x5dbff9;
      puVar1 = (undefined *)(unaff_EBP + -0x6c);
      iVar4 = FUN_00402bc3();
      puStack_d0 = puVar1;
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dc004;
        FUN_00878dfb();
        puStack_d0 = extraout_ECX_16;
      }
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
      puStack_d4 = (undefined1 *)0x66e;
      FUN_00679e4e(&puStack_d0);
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d();
      puStack_d0 = (undefined *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_d4 = (undefined1 *)0x5dc039;
      uVar5 = FUN_00412550();
      iVar4 = FUN_005dd044();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
      puVar7 = (undefined1 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_d0 = (undefined *)0x5dc055;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dc060;
        FUN_00878dfb();
        puVar7 = extraout_ECX_17;
      }
      puStack_d0 = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
      puStack_d4 = puVar7;
      FUN_00679e4e(&puStack_d4,0x3ba);
      iVar4 = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      puStack_d4 = (undefined1 *)0x5dc097;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x54) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar4 != 0) {
        puStack_d0 = (undefined *)0x5dc0ad;
        iVar4 = FUN_0041a4e5();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          puStack_d0 = (undefined *)0x5dc0be;
          FUN_00878dfb();
        }
      }
      puVar7 = (undefined1 *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      puStack_d0 = (undefined *)0x5dc0cb;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dc0d6;
        FUN_00878dfb();
        puVar7 = extraout_ECX_18;
      }
      puStack_d0 = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
      puStack_d4 = puVar7;
      FUN_00679e4e(&puStack_d4,0x3bb);
      iVar4 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      puStack_d4 = (undefined1 *)0x5dc10d;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x50) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        puStack_d0 = (undefined *)0x5dc123;
        iVar4 = FUN_0041a4e5();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          puStack_d0 = (undefined *)0x5dc134;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      puStack_d0 = (undefined *)0x5dc141;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dc14c;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_d0 = (undefined *)0x5dc15c;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_d0 = (undefined *)0x5dc167;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_d0 = (undefined *)0x5dc178;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x18);
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_d0 = (undefined *)0x5dc188;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
      FUN_00404abb();
      puStack_d0 = (undefined *)0x5dc1a5;
      puStack_d0 = (undefined *)FUN_00404a94();
      puStack_d4 = (undefined1 *)0x5dc1ae;
      puStack_d4 = (undefined1 *)FUN_00404abb();
      uVar5 = FUN_00404a94();
      FUN_004114f3(*(int *)(unaff_EBP + -0x14) + 0x38,uVar5);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_d0 = (undefined *)0x5dc1d2;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_d0 = (undefined *)0x5dc1dd;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
      iVar4 = FUN_00404a94();
      iVar6 = FUN_00404a94();
      *(int *)(*(int *)(unaff_EBP + -0x14) + 0x34) = iVar4 - iVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        puStack_d0 = (undefined *)0x5dc20e;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      piVar8 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
    }
    else {
      puStack_d0 = (undefined *)0x0;
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
      FUN_00679e4e(&puStack_d4,0x672);
      iVar4 = unaff_EBP + -0x6c;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      puStack_d4 = (undefined1 *)0x5dbe07;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x54) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar4 != 0) {
        puStack_d0 = (undefined *)0x5dbe1d;
        iVar4 = FUN_0041a4e5();
        if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
          puStack_d0 = (undefined *)0x5dbe2b;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      puStack_d0 = (undefined *)0x5dbe38;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbe43;
        FUN_00878dfb();
      }
      puStack_d0 = (undefined *)0x5dbe4d;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      puStack_d0 = (undefined *)(unaff_EBP + -0x3c);
      puStack_d4 = (undefined1 *)0x5dbe5b;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbe67;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(unaff_EBP + -0x1c);
      piVar8 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      if (piVar8 == (int *)0x0) {
        puStack_d0 = (undefined *)0x5dbe85;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x18);
      }
      iVar4 = *piVar8;
      puStack_d4 = *(undefined1 **)(unaff_EBP + -0x38);
      puStack_d0 = *(undefined **)(unaff_EBP + -0x34);
      *(int **)(unaff_EBP + -0x4c) = piVar8;
      puVar7 = (undefined1 *)
               (**(code **)(iVar4 + 0x8c))
                         (piVar8,*(int *)(unaff_EBP + -0x5c) + 0x28,
                          *(int *)(unaff_EBP + -0x50) + 0x2c,0,0,0,0,0,0,
                          *(undefined4 *)(unaff_EBP + -0x3c));
      if ((int)puVar7 < 0) {
        puStack_d0 = *(undefined **)(unaff_EBP + -0x4c);
        puStack_d4 = puVar7;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      puStack_d0 = (undefined *)0x5dbed5;
      puVar1 = (undefined *)(unaff_EBP + -0x3c);
      iVar4 = FUN_00402bc3();
      puStack_d0 = puVar1;
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbee0;
        FUN_00878dfb();
        puStack_d0 = extraout_ECX_14;
      }
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
      puStack_d4 = (undefined1 *)0x673;
      FUN_00679e4e(&puStack_d0);
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      FUN_0040263d();
      puStack_d0 = (undefined *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      puStack_d4 = (undefined1 *)0x5dbf16;
      uVar5 = FUN_00412550();
      iVar4 = FUN_005dd044();
      *(undefined4 *)(iVar4 + 0x30) = uVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      puStack_d0 = (undefined *)0x5dbf32;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dbf3d;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
    }
    if (piVar8 != (int *)0x0) {
      puStack_d0 = (undefined *)0x5dc21f;
      (**(code **)(*piVar8 + 8))();
    }
    puVar1 = (undefined *)(*(int *)(unaff_EBP + -0x7c) + 0x18);
    puStack_d4 = (undefined1 *)0x5dc22e;
    puStack_d0 = puVar1;
    iVar4 = FUN_004b8c9b();
    puStack_d0 = puVar1;
    if (iVar4 == 0) {
      puStack_d0 = *(undefined **)(unaff_EBP + -0x24);
    }
    puStack_d4 = (undefined1 *)0x5dc245;
    uVar5 = FUN_004b8c9b();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    puStack_d4 = &stack0xffffff34;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff34;
    puStack_d0 = (undefined *)0x674;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_00679e4e();
    puStack_d0 = (undefined *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    puStack_d4 = (undefined1 *)0x5dc276;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x5dc27d;
    psVar9 = (short *)FUN_004048a4();
    sVar3 = *psVar9;
    puStack_d0 = (undefined *)0x5dc289;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc294;
      FUN_00878dfb();
    }
    if (sVar3 != 0) {
      puStack_d0 = (undefined *)(unaff_EBP + -0x24);
      puStack_d4 = (undefined1 *)0x5dc2b6;
      puVar10 = (undefined4 *)FUN_00679d86();
      puStack_d4 = (undefined1 *)*puVar10;
      puStack_d0 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      FUN_0041354c(unaff_EBP + -0x58);
      puStack_d0 = (undefined *)0x5dc2d7;
      FUN_00402e8e();
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      FUN_00408b49();
      FUN_00402fa6();
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_00402676();
    }
    puStack_d4 = &stack0xffffff34;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff34;
    puStack_d0 = (undefined *)0x3d8;
    FUN_00679e4e();
    puStack_d0 = (undefined *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    puStack_d4 = (undefined1 *)0x5dc32f;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x5dc336;
    psVar9 = (short *)FUN_004048a4();
    sVar3 = *psVar9;
    puStack_d0 = (undefined *)0x5dc342;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc34d;
      FUN_00878dfb();
    }
    if (sVar3 != 0) {
      puStack_d0 = (undefined *)(unaff_EBP + -0x24);
      puStack_d4 = (undefined1 *)0x5dc36f;
      puVar10 = (undefined4 *)FUN_00679d86();
      puStack_d4 = (undefined1 *)*puVar10;
      puStack_d0 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      FUN_0041354c(unaff_EBP + -0x58);
      puStack_d0 = (undefined *)0x5dc390;
      FUN_00402e8e();
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      FUN_00408b49();
      FUN_00402fa6();
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_00402676();
    }
    puStack_d4 = &stack0xffffff34;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff34;
    puStack_d0 = (undefined *)0x420;
    FUN_00679e4e();
    puStack_d0 = (undefined *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    puStack_d4 = (undefined1 *)0x5dc3e8;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x5dc3ef;
    psVar9 = (short *)FUN_004048a4();
    sVar3 = *psVar9;
    puStack_d0 = (undefined *)0x5dc3fb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc406;
      FUN_00878dfb();
    }
    if (sVar3 != 0) {
      puStack_d0 = (undefined *)(unaff_EBP + -0x24);
      puStack_d4 = (undefined1 *)0x5dc428;
      puVar10 = (undefined4 *)FUN_00679d86();
      puStack_d4 = (undefined1 *)*puVar10;
      puStack_d0 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      FUN_0041354c(unaff_EBP + -0x58);
      puStack_d0 = (undefined *)0x5dc449;
      FUN_00402e8e();
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      FUN_00408b49();
      FUN_00402fa6();
      *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_00402676();
    }
    puStack_d4 = &stack0xffffff34;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff34;
    puStack_d0 = (undefined *)0xaf1;
    FUN_00679e4e();
    puStack_d0 = (undefined *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    puStack_d4 = (undefined1 *)0x5dc4a1;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x5dc4a8;
    psVar9 = (short *)FUN_004048a4();
    sVar3 = *psVar9;
    puVar7 = (undefined1 *)(unaff_EBP + -0x6c);
    puStack_d0 = (undefined *)0x5dc4b4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc4bf;
      FUN_00878dfb();
      puVar7 = extraout_ECX_19;
    }
    if (sVar3 != 0) {
      puStack_d0 = (undefined *)(unaff_EBP + -0x24);
      puStack_d4 = (undefined1 *)0x5dc4e1;
      puVar10 = (undefined4 *)FUN_00679d86();
      puStack_d4 = (undefined1 *)*puVar10;
      puStack_d0 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      FUN_0041354c(unaff_EBP + -0x58);
      puStack_d0 = (undefined *)0x5dc502;
      FUN_00402e8e();
      iVar4 = *(int *)(unaff_EBP + -0x1c);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        puStack_d0 = (undefined *)0x5dc51c;
        InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 8));
      }
      FUN_00402fa6();
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(unaff_EBP + -0x10);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_00402676();
      puVar7 = extraout_ECX_20;
    }
    puStack_d0 = (undefined *)0x0;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_d4;
    puStack_d4 = puVar7;
    FUN_00679e4e(&puStack_d4,0x3d8);
    iVar4 = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x51;
    puStack_d4 = (undefined1 *)0x5dc57a;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    if (iVar4 != 0) {
      puStack_d0 = (undefined *)0x5dc590;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        puStack_d0 = (undefined *)0x5dc5a1;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    puStack_d0 = (undefined *)0x5dc5b1;
    puVar1 = (undefined *)(unaff_EBP + -0x6c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc5bc;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_21;
    }
    if (*(int *)(unaff_EBP + -0x44) == 0) {
      uVar5 = 0;
    }
    else {
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
      puStack_d4 = (undefined1 *)0x67a;
      FUN_00679e4e(&puStack_d0);
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      FUN_0040263d();
      puStack_d0 = (undefined *)FUN_004048a4();
      *(undefined4 *)(unaff_EBP + -0x28) = 2;
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      puStack_d4 = (undefined1 *)0x5dc601;
      uVar5 = FUN_00412550();
    }
    bVar2 = *(byte *)(unaff_EBP + -0x28);
    puStack_d0 = *(undefined **)(unaff_EBP + -0x1c);
    *(undefined4 *)(puStack_d0 + 0x84) = uVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0x53;
    if ((bVar2 & 2) != 0) {
      *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffd;
      puStack_d0 = (undefined *)0x5dc622;
      puVar1 = (undefined *)(unaff_EBP + -0x3c);
      iVar4 = FUN_00402bc3();
      puStack_d0 = puVar1;
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dc62d;
        FUN_00878dfb();
        puStack_d0 = extraout_ECX_22;
      }
    }
    if (*(int *)(unaff_EBP + -0x44) == 0) {
      uVar5 = 0;
    }
    else {
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
      puStack_d4 = (undefined1 *)0xe7d;
      FUN_00679e4e(&puStack_d0);
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      FUN_0040263d();
      puStack_d0 = (undefined *)FUN_004048a4();
      *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) | 4;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      puStack_d4 = (undefined1 *)0x5dc66f;
      uVar5 = FUN_00412550();
    }
    bVar2 = *(byte *)(unaff_EBP + -0x28);
    puStack_d0 = *(undefined **)(unaff_EBP + -0x1c);
    *(undefined4 *)(puStack_d0 + 0x9c) = uVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0x53;
    if ((bVar2 & 4) != 0) {
      *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) & 0xfffffffb;
      puStack_d0 = (undefined *)0x5dc690;
      puVar1 = (undefined *)(unaff_EBP + -0x3c);
      iVar4 = FUN_00402bc3();
      puStack_d0 = puVar1;
      if (iVar4 < 0) {
        puStack_d0 = (undefined *)0x5dc69b;
        FUN_00878dfb();
        puStack_d0 = extraout_ECX_23;
      }
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x67c;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    puStack_d4 = (undefined1 *)0x5dc6d0;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0x88) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    puStack_d0 = (undefined *)0x5dc6ef;
    puVar1 = (undefined *)(unaff_EBP + -0x3c);
    iVar4 = FUN_00402bc3();
    puStack_d0 = puVar1;
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc6fa;
      FUN_00878dfb();
      puStack_d0 = extraout_ECX_24;
    }
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_d0;
    puStack_d4 = (undefined1 *)0x67b;
    FUN_00679e4e(&puStack_d0);
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    FUN_0040263d();
    puStack_d0 = (undefined *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    puStack_d4 = (undefined1 *)0x5dc72f;
    uVar5 = FUN_00412550();
    iVar4 = FUN_005dd044();
    *(undefined4 *)(iVar4 + 0x8c) = uVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x53;
    puStack_d0 = (undefined *)0x5dc74e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_d0 = (undefined *)0x5dc759;
      FUN_00878dfb();
    }
    iVar6 = *(int *)(unaff_EBP + -0x1c);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar6;
    if (iVar6 != 0) {
      puStack_d0 = (undefined *)0x5dc770;
      InterlockedIncrement((LONG *)(iVar6 + 4));
    }
    *(uint *)(unaff_EBP + -0x28) = *(uint *)(unaff_EBP + -0x28) | 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      puStack_d0 = (undefined *)0x5dc785;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      puStack_d0 = (undefined *)0x5dc7a2;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_d0 = (undefined *)0x5dc7b2;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      puStack_d0 = (undefined *)0x5dc7bd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_d0 = (undefined *)0x5dc7cf;
      FUN_004f182a();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      puStack_d0 = (undefined *)0x5dc7e3;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
      puStack_d0 = (undefined *)0x5dc7f4;
      (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      puStack_d0 = (undefined *)0x5dc806;
      FUN_00412fcf();
      *(undefined4 *)(unaff_EBP + -0x74) = 0;
    }
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


