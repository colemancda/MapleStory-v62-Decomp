/* FUN_004df382 - 0x004df382 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004e04f3) */

void FUN_004df382(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  undefined1 *extraout_ECX_07;
  undefined1 *extraout_ECX_08;
  undefined1 *extraout_ECX_09;
  char *_Str1;
  undefined1 *extraout_ECX_10;
  undefined1 *extraout_ECX_11;
  int unaff_EBP;
  undefined4 uVar4;
  char *pcStack_3ac;
  undefined1 *puStack_3a8;
  int iStack_3a4;
  
  FUN_00879bb8();
  FUN_0081622a();
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar4 = *(undefined4 *)(extraout_ECX + 0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  switch(uVar4) {
  case 0:
    iStack_3a4 = 0x4df3e6;
    FUN_00679d22();
    iStack_3a4 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_3a8 = (undefined1 *)0x4df3fc;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x54) != 0) {
      FUN_00434e38();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_3a4 = 0x4df44d;
    iStack_3a4 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    pcStack_3ac = (char *)0x2ea;
    FUN_00679e4e(&puStack_3a8);
    pcStack_3ac = (char *)0x5;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004115d9(0x19);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_3a4 = 0x4df4e7;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4df4f0;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    puStack_3a8 = extraout_ECX_00;
    FUN_00448a17();
    pcStack_3ac = (char *)0x12;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004115d9(0x19);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 1:
    iStack_3a4 = 0x4df552;
    FUN_00679d22();
    iStack_3a4 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_3a8 = (undefined1 *)0x4df568;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x50) != 0) {
      FUN_00434e38();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_3a4 = 0x4df5b9;
    iStack_3a4 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    pcStack_3ac = (char *)0x2eb;
    FUN_00679e4e(&puStack_3a8);
    pcStack_3ac = (char *)0x5;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004115d9(0x19);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_3a4 = 0x4df653;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4df65c;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    puStack_3a8 = extraout_ECX_01;
    FUN_00448a17();
    pcStack_3ac = (char *)0x12;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_004115d9(0x19);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 2:
    iStack_3a4 = 0x4df6be;
    FUN_00679d22();
    iStack_3a4 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_3a8 = (undefined1 *)0x4df6d4;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x58) != 0) {
      FUN_00434e38();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_3a4 = 0x4df725;
    iStack_3a4 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    pcStack_3ac = (char *)0x2ec;
    FUN_00679e4e(&puStack_3a8);
    pcStack_3ac = (char *)0x5;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_004115d9(0x19);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_3a4 = 0x4df7bf;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4df7c8;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    puStack_3a8 = extraout_ECX_02;
    FUN_00448a17();
    pcStack_3ac = (char *)0x12;
    uVar4 = 0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_004115d9(0x19);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 3:
    goto switchD_004df3ca_caseD_3;
  case 4:
    iStack_3a4 = 0x4df82a;
    FUN_00679d22();
    iStack_3a4 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puStack_3a8 = (undefined1 *)0x4df840;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_3a4 = 0x4df888;
    iStack_3a4 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    pcStack_3ac = (char *)0x2ed;
    FUN_00679e4e(&puStack_3a8);
    pcStack_3ac = (char *)0x7;
    uVar4 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_3a4 = 0x4df922;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4df92b;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    puStack_3a8 = extraout_ECX_03;
    FUN_00448a17();
    pcStack_3ac = (char *)0x14;
    uVar4 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 5:
    iStack_3a4 = unaff_EBP + -0x10;
    puStack_3a8 = (undefined1 *)0x4dffbc;
    FUN_00434e21();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1d8));
    iStack_3a4 = 0x4dffdb;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x228));
    iStack_3a4 = 0x4e0001;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iStack_3a4 = 0x4e002a;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4e0033;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
    FUN_00448a17();
    pcStack_3ac = (char *)0x7;
    uVar4 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x198));
    iStack_3a4 = 0x4e00a2;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xf8));
    iStack_3a4 = 0x4e00c8;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    iStack_3a4 = 0x4e00f1;
    iStack_3a4 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
    pcStack_3ac = s_Guild_Alliance_Invitation__00964da8;
    puStack_3a8 = extraout_ECX_07;
    FUN_00448a17();
    pcStack_3ac = (char *)0x14;
    uVar4 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 6:
    if (*(short *)(extraout_ECX + 0xe0) == 0) {
      iStack_3a4 = 0x4df997;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      iStack_3a4 = 0x4df9c2;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_00414ebb();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_3a4 = 0x4dfa14;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4dfa1d;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_3a8;
    puStack_3a8 = extraout_ECX_04;
    FUN_00448a17();
    sVar1 = *(short *)(extraout_ECX + 0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    pcStack_3ac = (char *)((-(uint)(sVar1 != 0) & 0xfffffff9) + 0xe);
    uVar4 = 0x1b;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    if (*(short *)(extraout_ECX + 0xe0) != 0) {
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00403191();
      iStack_3a4 = unaff_EBP + -0x338;
      puStack_3a8 = (undefined1 *)(unaff_EBP + -0x318);
      *(char ***)(unaff_EBP + -0x14) = &pcStack_3ac;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00679e4e(&pcStack_3ac,0xc52);
      iVar3 = unaff_EBP + -0x378;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_3a4 = 0x4dfb03;
      iVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(int *)(unaff_EBP + -0x4c) = iVar3;
      if (((iVar3 != 0) && (iVar3 = FUN_00404b30(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_3a4 = 0x4dfb94;
      FUN_00679d22();
      iStack_3a4 = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      puStack_3a8 = (undefined1 *)0x4dfbac;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_00414ebb();
      iStack_3a4 = 0x4dfbc7;
      puStack_3a8 = (undefined1 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_3a4;
      pcStack_3ac = (char *)0x4dfbd3;
      FUN_00448a17();
      puStack_3a8 = (undefined1 *)(unaff_EBP + -0x388);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      pcStack_3ac = (char *)0x4dfbe6;
      FUN_0040263d();
      pcStack_3ac = (char *)0x4dfbed;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_3a4 = 0x4dfbf8;
      iVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(int *)(unaff_EBP + -0x30) = iVar3;
      if (((iVar3 != 0) && (iVar3 = FUN_00404b30(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_3a8 = &stack0xfffffc60;
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffc60;
        iStack_3a4 = 0x64b;
        pcStack_3ac = (char *)0x4dfc5d;
        FUN_00679e4e();
        iStack_3a4 = unaff_EBP + -0x398;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        puStack_3a8 = (undefined1 *)0x4dfc70;
        FUN_0040263d();
        puStack_3a8 = (undefined1 *)0x4dfc77;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        iStack_3a4 = 0x4dfc81;
        FUN_004343c5();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        iStack_3a4 = 0x4dfc92;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        iStack_3a4 = extraout_ECX + 0x108;
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffc60;
        puStack_3a8 = (undefined1 *)0x4dfcc1;
        FUN_0046fcc9();
        iStack_3a4 = unaff_EBP + -0x20;
        puStack_3a8 = (undefined1 *)0x4dfcca;
        FUN_007d3a22();
        VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
        iStack_3a4 = 0x4dfce9;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x178));
        iStack_3a4 = 0x4dfd0f;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        iStack_3a4 = 0x4dfd38;
        iStack_3a4 = FUN_00449749();
        puStack_3a8 = (undefined1 *)0x4dfd41;
        pcStack_3ac = (char *)FUN_00449713();
        *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
        puStack_3a8 = extraout_ECX_05;
        FUN_00448a17();
        pcStack_3ac = (char *)0x14;
        uVar4 = 0x1b;
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        FUN_004115d9(0x1b);
        FUN_00448e3a(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
    }
    goto switchD_004df3ca_default;
  case 7:
    iStack_3a4 = 0x4dfdf2;
    FUN_00679d22();
    iStack_3a4 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    puStack_3a8 = (undefined1 *)0x4dfe08;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
    iStack_3a4 = 0x4dfe31;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1e8));
    iStack_3a4 = 0x4dfe5b;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    iStack_3a4 = 0x4dfe84;
    iStack_3a4 = FUN_00449749();
    puStack_3a8 = (undefined1 *)0x4dfe8d;
    pcStack_3ac = (char *)FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
    FUN_00448a17();
    pcStack_3ac = (char *)0x7;
    uVar4 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -200));
    iStack_3a4 = 0x4dff00;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x208));
    iStack_3a4 = 0x4dff2a;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iStack_3a4 = 0x4dff53;
    iStack_3a4 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
    pcStack_3ac = (char *)0x2ee;
    puStack_3a8 = extraout_ECX_06;
    FUN_00679e4e(&puStack_3a8);
    pcStack_3ac = (char *)0x14;
    uVar4 = 0x1b;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004115d9(0x1b);
    FUN_00448e3a(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 8:
    if (*(int *)(extraout_ECX + 0xe4) == 0) {
      iStack_3a4 = 0x4e0166;
      FUN_00679d22();
      iStack_3a4 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      puStack_3a8 = (undefined1 *)0x4e017c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      VariantInit((VARIANTARG *)(unaff_EBP + -0x218));
      iStack_3a4 = 0x4e01a5;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x118));
      iStack_3a4 = 0x4e01cf;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      iStack_3a4 = 0x4e01f8;
      iStack_3a4 = FUN_00449749();
      puStack_3a8 = (undefined1 *)0x4e0201;
      pcStack_3ac = (char *)FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      FUN_00448a17();
      pcStack_3ac = (char *)0x7;
      uVar4 = 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_004115d9(0x19);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1b8));
      iStack_3a4 = 0x4e0274;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x138));
      iStack_3a4 = 0x4e029e;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      iStack_3a4 = 0x4e02c7;
      iStack_3a4 = FUN_00449749();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      pcStack_3ac = (char *)0x2d3;
      puStack_3a8 = extraout_ECX_08;
      FUN_00679e4e(&puStack_3a8);
      pcStack_3ac = (char *)0x14;
      uVar4 = 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      FUN_004115d9(0x19);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      if (*(int *)(extraout_ECX + 0xe4) != 1) goto switchD_004df3ca_default;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1f8));
      iStack_3a4 = 0x4e0341;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x158));
      iStack_3a4 = 0x4e0367;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      iStack_3a4 = 0x4e0390;
      iStack_3a4 = FUN_00449749();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      pcStack_3ac = (char *)0x2d4;
      FUN_00679e4e(&puStack_3a8);
      pcStack_3ac = (char *)0x7;
      uVar4 = 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      FUN_004115d9(0x19);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      iStack_3a4 = 0x4e0406;
      FUN_00679d22();
      iStack_3a4 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      puStack_3a8 = (undefined1 *)0x4e041c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      VariantInit((VARIANTARG *)(unaff_EBP + -0xd8));
      iStack_3a4 = 0x4e0445;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
      iStack_3a4 = 0x4e0469;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      iStack_3a4 = 0x4e048f;
      iStack_3a4 = FUN_00449749();
      puStack_3a8 = (undefined1 *)0x4e0498;
      pcStack_3ac = (char *)FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      puStack_3a8 = extraout_ECX_09;
      FUN_00448a17();
      pcStack_3ac = (char *)0x14;
      uVar4 = 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      FUN_004115d9(0x19);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    break;
  case 9:
    _Str1 = *(char **)(extraout_ECX + 0xec);
    if (*(char **)(extraout_ECX + 0xec) == (char *)0x0) {
      _Str1 = DAT_00980dfc;
    }
    iStack_3a4 = 0x4e0508;
    iVar3 = _strcmp(_Str1,&DAT_00978474);
    if (iVar3 == 0) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1c8));
      iStack_3a4 = 0x4e07c9;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x1a8));
      iStack_3a4 = 0x4e07ef;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      iStack_3a4 = 0x4e0818;
      iStack_3a4 = FUN_00449749();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      pcStack_3ac = (char *)0xedb;
      FUN_00679e4e(&puStack_3a8);
      pcStack_3ac = (char *)0x7;
      uVar4 = 0x1b;
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      FUN_004115d9(0x1b);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
      iStack_3a4 = 0x4e0898;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
      iStack_3a4 = 0x4e08bc;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      iStack_3a4 = 0x4e08e2;
      iStack_3a4 = FUN_00449749();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      pcStack_3ac = (char *)0xedc;
      puStack_3a8 = extraout_ECX_11;
      FUN_00679e4e(&puStack_3a8);
      pcStack_3ac = (char *)0x14;
      uVar4 = 0x1b;
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      FUN_004115d9(0x1b);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      if (*(int *)(extraout_ECX + 0xf0) == 0) {
        VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
        iStack_3a4 = 0x4e0600;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x128));
        iStack_3a4 = 0x4e0626;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        iStack_3a4 = 0x4e064f;
        iStack_3a4 = FUN_00449749();
        *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
        pcStack_3ac = (char *)0xedd;
        FUN_00679e4e(&puStack_3a8);
        pcStack_3ac = (char *)0x7;
        uVar4 = 0x1b;
        *(undefined1 *)(unaff_EBP + -4) = 0x57;
        FUN_004115d9(0x1b);
        FUN_00448e3a(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x56;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        VariantInit((VARIANTARG *)(unaff_EBP + -0x108));
        iStack_3a4 = 0x4e053b;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe8));
        iStack_3a4 = 0x4e0561;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        iStack_3a4 = 0x4e058a;
        iStack_3a4 = FUN_00449749();
        *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
        pcStack_3ac = (char *)0xede;
        FUN_00679e4e(&puStack_3a8);
        pcStack_3ac = (char *)0x7;
        uVar4 = 0x1b;
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        FUN_004115d9(0x1b);
        FUN_00448e3a(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      iStack_3a4 = 0x4e06c5;
      FUN_00679d22();
      iStack_3a4 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      puStack_3a8 = (undefined1 *)0x4e06db;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      VariantInit((VARIANTARG *)(unaff_EBP + -0x188));
      iStack_3a4 = 0x4e0704;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x168));
      iStack_3a4 = 0x4e072e;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      iStack_3a4 = 0x4e0757;
      iStack_3a4 = FUN_00449749();
      puStack_3a8 = (undefined1 *)0x4e0760;
      pcStack_3ac = (char *)FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_3a8;
      puStack_3a8 = extraout_ECX_10;
      FUN_00448a17();
      pcStack_3ac = (char *)0x14;
      uVar4 = 0x1b;
      *(undefined1 *)(unaff_EBP + -4) = 0x5b;
      FUN_004115d9(0x1b);
      FUN_00448e3a(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x5a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    break;
  default:
    goto switchD_004df3ca_default;
  }
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
switchD_004df3ca_default:
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_3a4 = 0x4e095a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  iVar3 = *(int *)(extraout_ECX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar3 = FUN_0040e53d();
  pcStack_3ac = *(char **)(unaff_EBP + -0x28);
  puStack_3a8 = *(undefined1 **)(unaff_EBP + -0xb8);
  iStack_3a4 = *(int *)(unaff_EBP + -0xb4);
  iVar3 = (**(code **)(*piVar2 + 0x80))(piVar2,6,0x25U - iVar3 >> 1);
  if (iVar3 < 0) {
    puStack_3a8 = (undefined1 *)0x4e09d7;
    iStack_3a4 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
switchD_004df3ca_caseD_3:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


