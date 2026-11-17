/* FUN_0054001d - 0x0054001d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0054001d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined1 *puStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined1 *puStack_114;
  undefined4 *puStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x48) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x90) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 100;
  do {
    iStack_104 = unaff_EBP + -0x18;
    iStack_108 = 0x540067;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_104 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_108 = unaff_EBP + 8;
    iStack_10c = 0x54007a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_104 = 0x540090;
      FUN_00434e38();
    }
    iStack_104 = 0x54009a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_104 = 0x5400a7;
    FUN_00403191();
    iStack_104 = 0;
    iStack_108 = 0xffffffff;
    iStack_10c = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_110 = (undefined4 *)0x0;
    puStack_114 = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_104 = 0;
    iStack_108 = unaff_EBP + -0x44;
    iStack_10c = unaff_EBP + -0x34;
    puStack_110 = (undefined4 *)0xffffffff;
    puStack_114 = &stack0xffffff04;
    FUN_00449713();
    iStack_11c = 0x5400e4;
    puStack_114 = (undefined1 *)FUN_00456ad5();
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_110;
    FUN_004033a1();
    puStack_114 = (undefined1 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_108 = 0x540117;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    iStack_104 = 0x540126;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_104 = 0x540137;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_104 = 0x540144;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x54014f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_104 = 0x54015c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x540167;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_104 = 0x540173;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x54017e;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 5);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x78;
  do {
    iStack_104 = unaff_EBP + -0x1c;
    iStack_108 = 0x5401ab;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_104 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_108 = unaff_EBP + 8;
    iStack_10c = 0x5401be;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_104 = 0x5401d4;
      FUN_00434e38();
    }
    iStack_104 = 0x5401de;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_104 = 0x5401eb;
    FUN_00403191();
    iStack_104 = 0;
    iStack_108 = 0xffffffff;
    iStack_10c = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_110 = (undefined4 *)0x0;
    puStack_114 = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_104 = 0;
    iStack_108 = unaff_EBP + -0x44;
    iStack_10c = unaff_EBP + -0x34;
    puStack_110 = (undefined4 *)0xffffffff;
    puStack_114 = &stack0xffffff04;
    FUN_00449713();
    iStack_11c = 0x540228;
    puStack_114 = (undefined1 *)FUN_00456ad5();
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_110;
    FUN_004033a1();
    puStack_114 = (undefined1 *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_108 = 0x54025b;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    iStack_104 = 0x54026a;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_104 = 0x54027b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_104 = 0x540288;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x540293;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_104 = 0x5402a0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x5402ab;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_104 = 0x5402b7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x5402c2;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 4);
  *(undefined4 *)(extraout_ECX + 0x8c) = 0;
  *(undefined4 *)(extraout_ECX + 0xcc) = 1;
  *(undefined4 *)(extraout_ECX + 0xd0) = 1;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0xa0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    iStack_104 = unaff_EBP + -0x1c;
    iStack_108 = 0x54030d;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_104 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_108 = unaff_EBP + 8;
    iStack_10c = 0x540320;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iStack_104 = 0x540337;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_104 = 0x540347;
    FUN_00403191();
    iStack_104 = 0;
    iStack_108 = 0xffffffff;
    iStack_10c = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_110 = (undefined4 *)0x0;
    puStack_114 = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_11c = 0;
    iStack_120 = unaff_EBP + -0x6c;
    iStack_124 = unaff_EBP + -0xcc;
    uStack_128 = 0xffffffff;
    puStack_12c = (undefined1 *)&puStack_114;
    FUN_00449713();
    iStack_134 = 0x540387;
    puStack_12c = (undefined1 *)FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_128;
    FUN_004033a1();
    puStack_12c = (undefined1 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_120 = 0x5403bd;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    iStack_11c = 0x5403cf;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_11c = 0x5403e0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_11c = 0x5403f0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x5403fb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_11c = 0x54040b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x540416;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_11c = 0x540422;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_11c = 0x54042d;
      FUN_00878dfb();
    }
    iStack_11c = unaff_EBP + -0x54;
    iStack_120 = 0x540440;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_11c = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_120 = unaff_EBP + 8;
    iStack_124 = 0x540453;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iStack_11c = 0x54046a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xbc));
    iStack_11c = unaff_EBP + -0xbc;
    iStack_120 = 0x540477;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x540483;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_11c = 0x540490;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xac));
    iStack_11c = unaff_EBP + -0xac;
    iStack_120 = 0x54049d;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_11c = 0x5404a9;
      FUN_00878dfb();
    }
    iStack_11c = 0;
    iStack_120 = 0xffffffff;
    iStack_124 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_128 = 0;
    puStack_12c = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_134 = 0;
    iStack_138 = unaff_EBP + -0xbc;
    iStack_13c = unaff_EBP + -0xac;
    uStack_140 = 0xffffffff;
    puStack_144 = (undefined1 *)&puStack_12c;
    FUN_00449713();
    iStack_14c = 0x5404ec;
    puStack_144 = (undefined1 *)FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_140;
    FUN_004033a1();
    puStack_144 = (undefined1 *)(unaff_EBP + -0xfc);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_138 = 0x540522;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x4c) = uVar2;
    iStack_134 = 0x540531;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_134 = 0x540542;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_134 = 0x540552;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_134 = 0x54055d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_134 = 0x54056d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_134 = 0x540578;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_134 = 0x540587;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_134 = 0x540592;
      FUN_00878dfb();
    }
    iStack_134 = unaff_EBP + -0x50;
    iStack_138 = 0x5405a5;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_134 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_138 = unaff_EBP + 8;
    iStack_13c = 0x5405b8;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iStack_134 = 0x5405cf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x8c));
    iStack_134 = unaff_EBP + -0x8c;
    iStack_138 = 0x5405dc;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_134 = 0x5405e8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_134 = 0x5405f2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
    iStack_134 = unaff_EBP + -0x7c;
    iStack_138 = 0x5405fc;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_134 = 0x540608;
      FUN_00878dfb();
    }
    iStack_134 = 0;
    iStack_138 = 0xffffffff;
    iStack_13c = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    uStack_140 = 0;
    puStack_144 = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_14c = 0;
    iStack_150 = unaff_EBP + -0x8c;
    iStack_154 = unaff_EBP + -0x7c;
    uStack_158 = 0xffffffff;
    uVar2 = FUN_00449713(&puStack_144);
    uVar2 = FUN_00456ad5(uVar2);
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_158;
    FUN_004033a1(uVar2);
    iVar3 = unaff_EBP + -0xec;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_150 = 0x54067e;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x5c) = uVar2;
    iStack_14c = 0x540690;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_14c = 0x5406a1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_14c = 0x5406b1;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_14c = 0x5406bc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_14c = 0x5406c9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_14c = 0x5406d4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_14c = 0x5406e3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_14c = 0x5406ee;
      FUN_00878dfb();
    }
    iStack_14c = unaff_EBP + -0x58;
    iStack_150 = 0x540701;
    puVar1 = (undefined4 *)FUN_00679d22();
    iStack_14c = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_150 = unaff_EBP + 8;
    iStack_154 = 0x540714;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    iStack_14c = 0x540728;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_14c = unaff_EBP + -0x34;
    iStack_150 = 0x540732;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_14c = 0x54073e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_14c = 0x540748;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_14c = unaff_EBP + -0x44;
    iStack_150 = 0x540752;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_14c = 0x54075e;
      FUN_00878dfb();
    }
    iStack_14c = 0;
    iStack_150 = 0xffffffff;
    iStack_154 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_158 = 0;
    (*DAT_0097b4c8)(0);
    FUN_0087a1b0();
    iStack_104 = 0;
    iStack_108 = unaff_EBP + -0x34;
    iStack_10c = unaff_EBP + -0x44;
    puStack_110 = (undefined4 *)0xffffffff;
    puStack_114 = &stack0xffffff04;
    FUN_00449713();
    iStack_11c = 0x54079b;
    puStack_114 = (undefined1 *)FUN_00456ad5();
    *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_110;
    FUN_004033a1();
    puStack_114 = (undefined1 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_108 = 0x5407d1;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
    iStack_104 = 0x5407e3;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_104 = 0x5407f4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    iStack_104 = 0x540804;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x54080f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_104 = 0x54081c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x540827;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_104 = 0x540833;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_104 = 0x54083e;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x10;
  } while (*(int *)(unaff_EBP + -0x10) < 3);
  iStack_104 = 0x540855;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_104 = unaff_EBP + -0x44;
  iStack_108 = 0x54085f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_104 = 0x54086b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_104 = 0x540875;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_104 = unaff_EBP + -0x34;
  puVar1 = &DAT_00980690;
  iStack_108 = 0x54087f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_104 = 0x54088b;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  iStack_104 = 0;
  iStack_108 = unaff_EBP + -0x44;
  iStack_10c = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_110;
  puStack_114 = (undefined1 *)0x1162;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_11c = 0x5408af;
  puStack_110 = puVar1;
  FUN_00679e4e();
  puStack_114 = (undefined1 *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_108 = 0x5408d8;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  iStack_104 = 0x5408ed;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_104 = 0x5408fe;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_104 = 0x54090e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_104 = 0x540919;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_104 = 0x540926;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_104 = 0x540931;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_104 = 0x54093d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_104 = 0x540948;
    FUN_00878dfb();
  }
  FUN_00540d0a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


