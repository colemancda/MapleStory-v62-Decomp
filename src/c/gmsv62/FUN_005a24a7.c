/* FUN_005a24a7 - 0x005a24a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a24a7(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  short *psVar7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar8;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar9;
  int *extraout_ECX_03;
  int unaff_EBP;
  bool bVar10;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  int *piStack_164;
  int *piStack_160;
  int *piStack_15c;
  int *piStack_158;
  int iStack_154;
  int iStack_150;
  int *piStack_14c;
  undefined *puStack_148;
  int *piStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int *piStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  int *piStack_120;
  int *piStack_11c;
  int *piStack_118;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  int *piStack_f0;
  undefined1 *puStack_ec;
  undefined4 *puStack_e8;
  int *piStack_e4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x54) = extraout_ECX;
  puStack_e8 = (undefined4 *)&stack0xffffff20;
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
  piStack_e4 = (int *)0x5e5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_ec = (undefined1 *)0x5a24da;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_e4 = (int *)(unaff_EBP + -0xdc);
  puStack_e8 = (undefined4 *)0x5a24ed;
  FUN_0040263d();
  puStack_e8 = (undefined4 *)0x5a24f4;
  FUN_004048a4();
  piStack_e4 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_e8 = (undefined4 *)0x5a2502;
  FUN_00405a23();
  puStack_e8 = (undefined4 *)(unaff_EBP + -0xdc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_ec = (undefined1 *)0x5a2512;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_e4 = (int *)0x5a251f;
    FUN_00878dfb();
  }
  if ((*(int **)(unaff_EBP + -0x38) == (int *)0x0) ||
     (iVar1 = **(int **)(unaff_EBP + -0x38), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + -4) >> 1;
  }
  if (uVar2 != 0) {
    piStack_e4 = (int *)(unaff_EBP + -0x48);
    puStack_e8 = (undefined4 *)0x5a254d;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(undefined4 **)(unaff_EBP + -0x38) == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)**(undefined4 **)(unaff_EBP + -0x38);
    }
    piStack_e4 = (int *)0x5a2564;
    FUN_0087a007();
    puStack_e8 = (undefined4 *)0x5a256f;
    piStack_e4 = piVar6;
    FUN_0046febf();
    piStack_e4 = (int *)0x5a2580;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_e4 = (int *)0x5a2590;
    FUN_00403191();
    piStack_e4 = (int *)0x0;
    puStack_e8 = (undefined4 *)(unaff_EBP + -0xbc);
    puStack_ec = (undefined1 *)(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_f0 = (int *)0x5a25ac;
    iStack_f4 = FUN_00411641();
    *(int ***)(unaff_EBP + -0x1c) = &piStack_f0;
    uStack_f8 = 0x5a25b8;
    FUN_004033a1();
    iStack_f4 = unaff_EBP + -0xcc;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_f8 = 0x5a25c8;
    FUN_00405a1d();
    uStack_f8 = 0x5a25cf;
    FUN_00402660();
    uStack_f8 = 0x5a25d6;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_e8 = (undefined4 *)0x5a25e1;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x8c) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    if (iVar1 != 0) {
      piStack_e4 = (int *)0x5a25fd;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        piStack_e4 = (int *)0x5a260e;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_e4 = (int *)0x5a261e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2629;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_e4 = (int *)0x5a2639;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2644;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a2654;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a265f;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x3ca;
    puStack_ec = (undefined1 *)0x5a2672;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a2682;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a2689;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x7c) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a26a4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a26af;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x3cb;
    puStack_ec = (undefined1 *)0x5a26c2;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a26d2;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a26d9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a26f4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a26ff;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x5e7;
    puStack_ec = (undefined1 *)0x5a2712;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a2722;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a2729;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a2744;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a274f;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x5e8;
    puStack_ec = (undefined1 *)0x5a2762;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a2772;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a2779;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x80) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a2794;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a279f;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x5ed;
    puStack_ec = (undefined1 *)0x5a27b2;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a27c2;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a27c9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x68) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a27e4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a27ef;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x5e9;
    puStack_ec = (undefined1 *)0x5a2802;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a2812;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a2819;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x84) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a2837;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2842;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffff20;
    piStack_e4 = (int *)0x5ea;
    puStack_ec = (undefined1 *)0x5a2855;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_e8 = (undefined4 *)0x5a2865;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a286c;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    uVar3 = FUN_00403213();
    *(undefined4 *)(unaff_EBP + -0x88) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_e4 = (int *)0x5a288a;
    piVar6 = (int *)(unaff_EBP + -0x2c);
    iVar1 = FUN_00402bc3();
    piStack_e4 = piVar6;
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2895;
      FUN_00878dfb();
      piStack_e4 = extraout_ECX_00;
    }
    puStack_ec = (undefined1 *)&piStack_e4;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_e4;
    puStack_e8 = (undefined4 *)0x5ec;
    piStack_f0 = (int *)0x5a28ad;
    FUN_00679e4e();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a28bd;
    FUN_0040263d();
    puStack_ec = (undefined1 *)0x5a28c4;
    piStack_e4 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    puStack_e8 = (undefined4 *)0x5a28ce;
    uVar3 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x6c) = uVar3;
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a28de;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a28eb;
      FUN_00878dfb();
    }
    puStack_ec = (undefined1 *)&piStack_e4;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_e4;
    puStack_e8 = (undefined4 *)0x5eb;
    piStack_f0 = (int *)0x5a28ff;
    FUN_00679e4e();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a290f;
    FUN_0040263d();
    puStack_ec = (undefined1 *)0x5a2916;
    piStack_e4 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_e8 = (undefined4 *)0x5a2920;
    iVar1 = FUN_00412550();
    *(uint *)(unaff_EBP + -0x78) = (uint)(iVar1 != 0);
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a2936;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2943;
      FUN_00878dfb();
    }
    puStack_ec = (undefined1 *)&piStack_e4;
    *(int ***)(unaff_EBP + -0x1c) = &piStack_e4;
    puStack_e8 = (undefined4 *)0x5bd;
    piStack_f0 = (int *)0x5a2957;
    FUN_00679e4e();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a2967;
    FUN_0040263d();
    puStack_ec = (undefined1 *)0x5a296e;
    piStack_e4 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_e8 = (undefined4 *)0x5a2978;
    iVar1 = FUN_00412550();
    *(uint *)(unaff_EBP + -0x1c) = (uint)(iVar1 != 0);
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a298e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a299b;
      FUN_00878dfb();
    }
    puStack_ec = (undefined1 *)&piStack_e4;
    *(int ***)(unaff_EBP + -0x34) = &piStack_e4;
    puStack_e8 = (undefined4 *)0x5ee;
    piStack_f0 = (int *)0x5a29af;
    FUN_00679e4e();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a29bf;
    FUN_0040263d();
    puStack_ec = (undefined1 *)0x5a29c6;
    piStack_e4 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_e8 = (undefined4 *)0x5a29d0;
    iVar1 = FUN_00412550();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_ec = (undefined1 *)0x5a29e5;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_e4 = (int *)0x5a29f2;
      FUN_00878dfb();
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(unaff_EBP + 8) * 1000 + -0x4001f400;
    }
    else {
      iVar1 = *(int *)(unaff_EBP + 8) * 1000 + -0x3ffbdca0;
    }
    *(int *)(unaff_EBP + -0x30) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    FUN_005aa030();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 8);
    piStack_e4 = (int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    puStack_e8 = (undefined4 *)0x5a2a49;
    FUN_005aa5f8();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    piStack_e4 = (int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_e8 = (undefined4 *)0x5a2a60;
    puStack_e8 = (undefined4 *)FUN_00679d86();
    puStack_e8 = (undefined4 *)*puStack_e8;
    piStack_e4 = (int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_ec = (undefined1 *)0x5a2a71;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_e4 = (int *)0x5a2a88;
      FUN_00403384();
    }
    if (DAT_0097c1ac == 0) {
      piStack_e4 = (int *)0x5a2a9c;
      FUN_00878dfb();
    }
    piStack_e4 = (int *)0x5a2aab;
    puVar5 = (undefined4 *)FUN_00429328();
    piStack_e4 = (int *)*puVar5;
    puStack_e8 = (undefined4 *)0x5a2ab8;
    FUN_0040ee87();
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    if (piVar6 == (int *)0x0) {
      piStack_e4 = (int *)0x5a2ac9;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + -0x14);
    }
    iVar1 = *piVar6;
    puStack_ec = *(undefined1 **)(unaff_EBP + -100);
    puStack_e8 = *(undefined4 **)(unaff_EBP + -0x60);
    piStack_e4 = *(int **)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + 8) = piVar6;
    iStack_f4 = 0x5a2ae1;
    piStack_f0 = piVar6;
    puVar5 = (undefined4 *)(**(code **)(iVar1 + 100))();
    if ((int)puVar5 < 0) {
      piStack_e4 = *(int **)(unaff_EBP + 8);
      puStack_ec = (undefined1 *)0x5a2af3;
      puStack_e8 = puVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_e4 = (int *)0x5a2b00;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2b0d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_004125d9();
    puStack_e8 = (undefined4 *)&stack0xffffff20;
    if (*(int *)(unaff_EBP + -0x78) == 0) {
      *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff20;
      piStack_e4 = (int *)0x5d6;
      puStack_ec = (undefined1 *)0x5a2b35;
      puStack_e8 = (undefined4 *)&stack0xffffff20;
      FUN_00679e4e();
      piStack_e4 = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      puStack_e8 = (undefined4 *)0x5a2b45;
      FUN_0040263d();
      puStack_e8 = (undefined4 *)0x5a2b4c;
      uVar3 = FUN_004048a4();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      piStack_e4 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      puStack_e8 = (undefined4 *)0x5a2b63;
      puVar5 = (undefined4 *)FUN_00679d86();
      piVar6 = (int *)*puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00403213();
      puStack_e8 = (undefined4 *)(unaff_EBP + -0x3c);
      puStack_ec = (undefined1 *)0x5a2b7c;
      piStack_e4 = piVar6;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        piStack_e4 = (int *)0x5a2b93;
        FUN_00403384();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_e4 = (int *)0x5a2ba1;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e4 = (int *)0x5a2bac;
        FUN_00878dfb();
      }
      piStack_e4 = (int *)0x0;
      puStack_e8 = (undefined4 *)0x5a2bb6;
      puStack_ec = (undefined1 *)FUN_00411641();
      *(undefined4 ***)(unaff_EBP + -0x34) = &puStack_e8;
      piStack_f0 = (int *)0x5a2bc2;
      FUN_004033a1();
      puStack_ec = (undefined1 *)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_f0 = (int *)0x5a2bd5;
      FUN_0040263d();
      piStack_f0 = (int *)0x5a2bdc;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      puStack_e8 = (undefined4 *)0x5a2be7;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x44) = iVar1;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (iVar1 != 0) {
        piStack_e4 = (int *)0x5a2bfd;
        iVar1 = FUN_0041a581();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          piStack_e4 = (int *)0x5a2c0e;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      piStack_e4 = (int *)0x5a2c1e;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e4 = (int *)0x5a2c29;
        FUN_00878dfb();
      }
      if (0 < *(int *)(*(int *)(unaff_EBP + -0x54) + 0xcc)) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_e4 = (int *)0x5a2c49;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + 8);
        puStack_e8 = (undefined4 *)0x5a2c55;
        piStack_e4 = piVar6;
        puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x5c))();
        if ((int)puVar5 < 0) {
          puStack_ec = (undefined1 *)0x5a2c65;
          puStack_e8 = puVar5;
          piStack_e4 = piVar6;
          FUN_00878e09();
        }
      }
      piStack_e4 = (int *)0x5a2c73;
      FUN_00403191();
      piStack_e4 = *(int **)(unaff_EBP + 8);
      puStack_e8 = (undefined4 *)0x5a2c80;
      FUN_0040ee87();
      bVar10 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      if (bVar10) {
        piStack_e4 = (int *)0x5a2c96;
        FUN_00878dfb();
      }
      piStack_e4 = (int *)(unaff_EBP + -100);
      puStack_e8 = *(undefined4 **)(unaff_EBP + -0x30);
      iStack_fc = unaff_EBP + -0x18;
      puStack_ec = (undefined1 *)0x0;
      piStack_f0 = (int *)0x0;
      iStack_f4 = 0;
      uStack_f8 = 0;
      uStack_100 = 0x5a2cb4;
      puVar5 = (undefined4 *)FUN_0042a39f();
      piStack_e4 = (int *)0x5a2cbe;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar5);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      piStack_e4 = (int *)0x5a2cd3;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e4 = (int *)0x5a2cde;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      piStack_e4 = (int *)0x5a2ceb;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_e4 = (int *)0x5a2cf6;
        FUN_00878dfb();
      }
      *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff20;
      piStack_e4 = (int *)0x5a2d06;
      FUN_00434bee();
      puStack_e8 = (undefined4 *)(unaff_EBP + -0x10);
      *(int ***)(unaff_EBP + -0x34) = &piStack_e4;
      puStack_ec = (undefined1 *)0x5a2d15;
      FUN_0041160e();
      puStack_e8 = (undefined4 *)0x5a2d1d;
      FUN_005a46cf();
      piStack_e4 = *(int **)(unaff_EBP + -0x10);
      if (piStack_e4 == (int *)0x0) {
        piStack_e4 = (int *)0x5a2d2e;
        FUN_00878dfb();
        piStack_e4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar1 = *piStack_e4;
      *(int **)(unaff_EBP + -0x30) = piStack_e4;
      puStack_e8 = (undefined4 *)0x5a2d3f;
      piVar6 = (int *)(**(code **)(iVar1 + 0xe0))();
      if ((int)piVar6 < 0) {
        puStack_e8 = (undefined4 *)&DAT_00963df8;
        puStack_ec = *(undefined1 **)(unaff_EBP + -0x30);
        iStack_f4 = 0x5a2d51;
        piStack_f0 = piVar6;
        FUN_00878e09();
      }
      puStack_e8 = &DAT_00980690;
      puStack_ec = (undefined1 *)0x5a2d5a;
      FUN_00403191();
      puStack_e8 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      puStack_ec = (undefined1 *)0x5a2d67;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_e8 = (undefined4 *)0x80004003;
        puStack_ec = (undefined1 *)0x5a2d7a;
        FUN_00878dfb();
      }
      puStack_e8 = (undefined4 *)(unaff_EBP + -0x18);
      puStack_ec = (undefined1 *)0x5a2d86;
      piVar6 = (int *)FUN_004113e5();
      iVar1 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (iVar1 == 0) {
        puStack_e8 = (undefined4 *)0x80004003;
        puStack_ec = (undefined1 *)0x5a2d9a;
        FUN_00878dfb();
      }
      iStack_f4 = *(undefined4 *)(unaff_EBP + -100);
      piStack_f0 = *(int **)(unaff_EBP + -0x60);
      iVar1 = *(int *)*piVar6;
      puStack_ec = *(undefined1 **)(unaff_EBP + -0x5c);
      puStack_e8 = *(undefined4 **)(unaff_EBP + -0x58);
      uStack_100 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_fc = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x30) = (int *)*piVar6;
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0x20);
      iVar1 = (**(code **)(iVar1 + 0x90))();
      if (iVar1 < 0) {
        piStack_118 = *(int **)(unaff_EBP + -0x30);
        piStack_120 = (int *)0x5a2dda;
        piStack_11c = (int *)iVar1;
        FUN_00878e09();
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      piStack_118 = (int *)0x5a2def;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_118 = (int *)0x5a2dfa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      piStack_118 = (int *)0x5a2e07;
      piVar6 = (int *)(unaff_EBP + -100);
      iVar1 = FUN_00402bc3();
      piStack_118 = piVar6;
      if (iVar1 < 0) {
        piStack_118 = (int *)0x5a2e12;
        FUN_00878dfb();
        piStack_118 = extraout_ECX_01;
      }
      piStack_120 = (int *)&piStack_118;
      *(int ***)(unaff_EBP + -0x34) = &piStack_118;
      piStack_11c = (int *)0x5de;
      iStack_124 = 0x5a2e27;
      FUN_00679e4e();
      piStack_11c = (int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      piStack_120 = (int *)0x5a2e37;
      FUN_004115d9();
      piStack_120 = (int *)0x5a2e3e;
      FUN_00404e7f();
      piStack_11c = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      piStack_120 = (int *)0x5a2e4d;
      FUN_0040263d();
      piStack_120 = (int *)0x5a2e54;
      piStack_118 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      piStack_11c = (int *)0x5a2e5e;
      iVar1 = FUN_00412550();
      piStack_11c = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      piStack_120 = (int *)0x5a2e74;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_118 = (int *)0x5a2e81;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_004027eb();
      if (iVar1 == 1) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_118 = (int *)0x5a2ea1;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x10);
        piStack_11c = (int *)0x5a2eaf;
        piStack_118 = piVar6;
        iVar1 = (**(code **)(*piVar6 + 0xf4))();
        if (iVar1 < 0) {
          piStack_120 = (int *)0x5a2ebf;
          piStack_11c = (int *)iVar1;
          piStack_118 = piVar6;
          FUN_00878e09();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_004125e6();
LAB_005a32d0:
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_0048bb7f();
      piStack_118 = (int *)0x5a32e2;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,*(IBinding **)(unaff_EBP + -0x10));
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_118 = (int *)0x5a32f2;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x10);
      piStack_11c = (int *)0x5a3307;
      piStack_118 = piVar6;
      iStack_124 = (**(code **)(*piVar6 + 0xd8))();
      if (iStack_124 < 0) {
        piStack_11c = (int *)&DAT_00963df8;
        uStack_128 = 0x5a3317;
        piStack_120 = piVar6;
        FUN_00878e09();
      }
      piStack_11c = (int *)0x3;
      piStack_120 = (int *)0x0;
      iStack_124 = 0x5a3322;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_11c = (int *)0x80004003;
        piStack_120 = (int *)0x5a3331;
        FUN_00878dfb();
      }
      piStack_11c = (int *)(unaff_EBP + -0x2c);
      piStack_120 = (int *)(unaff_EBP + 8);
      iStack_124 = 0x5a3341;
      piVar6 = (int *)FUN_00425067();
      iVar1 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      if (iVar1 == 0) {
        piStack_11c = (int *)0x80004003;
        piStack_120 = (int *)0x5a3351;
        FUN_00878dfb();
      }
      piStack_11c = (int *)0x5a3358;
      FUN_0040eea9();
      piStack_11c = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      if (piStack_11c != (int *)0x0) {
        piStack_120 = (int *)0x5a3369;
        (**(code **)(*piStack_11c + 8))();
      }
      piStack_11c = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_120 = (int *)0x5a3376;
      piStack_11c = (int *)FUN_00402bc3();
      if ((int)piStack_11c < 0) {
        piStack_120 = (int *)0x5a3381;
        FUN_00878dfb();
      }
      piStack_11c = (int *)0x3;
      piStack_120 = (int *)0x0;
      iStack_124 = 0x5a338c;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_11c = (int *)0x80004003;
        piStack_120 = (int *)0x5a339b;
        FUN_00878dfb();
      }
      piStack_11c = (int *)(unaff_EBP + -0x2c);
      piStack_120 = (int *)(unaff_EBP + 8);
      iStack_124 = 0x5a33ab;
      piVar6 = (int *)FUN_00425067();
      iVar1 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (iVar1 == 0) {
        piStack_11c = (int *)0x80004003;
        piStack_120 = (int *)0x5a33bb;
        FUN_00878dfb();
      }
      piStack_11c = (int *)0x5a33c2;
      FUN_0040eed0();
      piStack_11c = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      if (piStack_11c != (int *)0x0) {
        piStack_120 = (int *)0x5a33d3;
        (**(code **)(*piStack_11c + 8))();
      }
      piStack_11c = (int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_120 = (int *)0x5a33e0;
      piStack_11c = (int *)FUN_00402bc3();
      if ((int)piStack_11c < 0) {
        piStack_120 = (int *)0x5a33eb;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(unaff_EBP + -0x68);
      if ((iVar1 == 4) || (*(undefined4 *)(unaff_EBP + 8) = 0, iVar1 == 6)) {
        *(undefined4 *)(unaff_EBP + 8) = 1;
      }
      if ((iVar1 == 5) || (*(undefined4 *)(unaff_EBP + -0x30) = 0, iVar1 == 7)) {
        *(undefined4 *)(unaff_EBP + -0x30) = 1;
      }
      if ((*(int *)(unaff_EBP + 8) == 0) && (*(int *)(unaff_EBP + -0x30) == 0)) {
        piStack_11c = &DAT_00980690;
        piStack_120 = (int *)0x5a3436;
        FUN_00403191();
        piStack_11c = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x52;
        piStack_120 = (int *)0x5a3443;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x53;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_11c = (int *)0x80004003;
          piStack_120 = (int *)0x5a3452;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        uStack_128 = *(undefined4 *)(unaff_EBP + -100);
        iStack_124 = *(undefined4 *)(unaff_EBP + -0x60);
        piStack_120 = *(int **)(unaff_EBP + -0x5c);
        piStack_11c = *(int **)(unaff_EBP + -0x58);
        uStack_13c = *(undefined4 *)(unaff_EBP + -0x74);
        uStack_140 = *(undefined4 *)(unaff_EBP + -0x7c);
        iStack_138 = *(undefined4 *)(unaff_EBP + -0x2c);
        piStack_134 = *(int **)(unaff_EBP + -0x28);
        puStack_130 = *(undefined4 **)(unaff_EBP + -0x24);
        piStack_12c = *(int **)(unaff_EBP + -0x20);
        puStack_148 = (undefined *)0x5a347c;
        piStack_144 = piVar6;
        iVar1 = (**(code **)(*piVar6 + 0x90))();
        if (iVar1 < 0) {
          puStack_148 = &DAT_00963de8;
          iStack_154 = 0x5a348c;
          iStack_150 = iVar1;
          piStack_14c = piVar6;
          FUN_00878e09();
        }
        puStack_148 = (undefined *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x52;
        piStack_14c = (int *)0x5a3499;
        puStack_148 = (undefined *)FUN_00402bc3();
        if ((int)puStack_148 < 0) {
          piStack_14c = (int *)0x5a34a4;
          FUN_00878dfb();
        }
        puStack_148 = (undefined *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        piStack_14c = (int *)0x5a34b1;
        puStack_148 = (undefined *)FUN_00402bc3();
        if ((int)puStack_148 < 0) {
          piStack_14c = (int *)0x5a34bc;
          FUN_00878dfb();
        }
        if (DAT_0097c1ac == 0) {
          puStack_148 = (undefined *)0x80004003;
          piStack_14c = (int *)0x5a34d0;
          FUN_00878dfb();
        }
        puStack_148 = (undefined *)(unaff_EBP + 8);
        piStack_14c = (int *)0x5a34df;
        piStack_158 = (int *)FUN_00429328();
        piStack_158 = (int *)*piStack_158;
        *(undefined1 *)(unaff_EBP + -4) = 0x54;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_148 = (undefined *)0x80004003;
          piStack_14c = (int *)0x5a34f1;
          FUN_00878dfb();
        }
        puStack_148 = *(undefined **)(unaff_EBP + -0x80);
        piVar6 = *(int **)(unaff_EBP + -0x14);
        piStack_14c = *(int **)(unaff_EBP + -0x70);
        iStack_150 = 100;
        iStack_154 = 100;
        piStack_160 = (int *)0x5a3508;
        piStack_15c = piVar6;
        iVar1 = (**(code **)(*piVar6 + 0x98))();
        if (iVar1 < 0) {
          piStack_160 = (int *)&DAT_00963de8;
          uStack_16c = 0x5a351a;
          iStack_168 = iVar1;
          piStack_164 = piVar6;
          FUN_00878e09();
        }
        piStack_160 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a352b;
          (**(code **)(*piStack_160 + 8))();
        }
        if (*(int *)(unaff_EBP + -0x68) != 0) {
          piStack_160 = *(int **)(unaff_EBP + -0x4c);
          *(int ***)(unaff_EBP + 8) = &piStack_164;
          iStack_168 = 0x5a3546;
          FUN_005aa063();
          iStack_168 = 0;
          uStack_16c = *(undefined4 *)(unaff_EBP + -0x78);
          uStack_170 = *(undefined4 *)(unaff_EBP + -0x6c);
          uStack_174 = *(undefined4 *)(unaff_EBP + -0x88);
          uStack_178 = *(undefined4 *)(unaff_EBP + -0x84);
          uStack_17c = *(undefined4 *)(unaff_EBP + -0x68);
          *(undefined4 **)(unaff_EBP + 8) = &uStack_180;
          FUN_0041160e(unaff_EBP + -0x10);
          FUN_005a3a5d();
          piStack_160 = (int *)0x3;
          piStack_164 = (int *)0xfffffffe;
          iStack_168 = 0x5a357f;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x55;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_160 = (int *)0x80004003;
            piStack_164 = (int *)0x5a358e;
            FUN_00878dfb();
          }
          piStack_160 = (int *)(unaff_EBP + -0x2c);
          piStack_164 = (int *)(unaff_EBP + 8);
          iStack_168 = 0x5a359e;
          FUN_0041141a();
          piStack_160 = *(int **)(unaff_EBP + 8);
          if (piStack_160 != (int *)0x0) {
            piStack_164 = (int *)0x5a35ab;
            (**(code **)(*piStack_160 + 8))();
          }
          piStack_160 = (int *)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          piStack_164 = (int *)0x5a35b8;
          piStack_160 = (int *)FUN_00402bc3();
          if ((int)piStack_160 < 0) {
            piStack_164 = (int *)0x5a35c3;
            FUN_00878dfb();
          }
        }
        piStack_160 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a35d4;
          (**(code **)(*piStack_160 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          piStack_160 = (int *)0x0;
          piStack_164 = (int *)0x5a35e6;
          FUN_005aa156();
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        }
        piStack_160 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a35fa;
          (**(code **)(*piStack_160 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_160 = (int *)0x5a3606;
        FUN_00402676();
        piStack_160 = *(int **)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a3617;
          (**(code **)(*piStack_160 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_160 = (int *)0x5a3623;
        FUN_00402676();
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          piStack_160 = (int *)0x5a362f;
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
        }
        piStack_160 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_11c = (int *)0x80004003;
          piStack_120 = (int *)0x5a364b;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -0x9c) = DAT_0097bb30;
        *(undefined4 *)(unaff_EBP + -0x98) = DAT_0097bb34;
        iVar1 = *piVar6;
        *(undefined4 *)(unaff_EBP + -0x94) = DAT_0097bb38;
        *(undefined4 *)(unaff_EBP + -0x90) = DAT_0097bb3c;
        uStack_128 = *(undefined4 *)(unaff_EBP + -0x9c);
        iStack_124 = *(undefined4 *)(unaff_EBP + -0x98);
        piStack_120 = *(int **)(unaff_EBP + -0x94);
        piStack_11c = *(int **)(unaff_EBP + -0x90);
        puStack_130 = (undefined4 *)0x5a3672;
        piStack_12c = piVar6;
        iVar1 = (**(code **)(iVar1 + 100))();
        if (iVar1 < 0) {
          puStack_130 = (undefined4 *)&DAT_00963de8;
          uStack_13c = 0x5a3682;
          iStack_138 = iVar1;
          piStack_134 = piVar6;
          FUN_00878e09();
        }
        iVar1 = *(int *)(unaff_EBP + -0x70);
        if (*(int *)(unaff_EBP + 8) == 0) {
          iVar1 = *(int *)(unaff_EBP + -0x80);
        }
        uVar2 = -(uint)(*(int *)(unaff_EBP + 8) != 0) & 100;
        *(uint *)(unaff_EBP + -0x18) = -(uint)(*(int *)(unaff_EBP + -0x30) != 0) & 100;
        iVar4 = iVar1;
        if (iVar1 < 1) {
          iVar4 = -iVar1;
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_130 = (undefined4 *)0x80004003;
          piStack_134 = (int *)0x5a36bd;
          FUN_00878dfb();
        }
        puStack_130 = (undefined4 *)0x5a36c5;
        iVar8 = FUN_0042a378();
        *(int *)(unaff_EBP + -0x34) = iVar8 + (int)(20000 / (longlong)iVar4);
        if (iVar1 < 1) {
          if (iVar1 == 0) {
            uVar2 = 0;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
        }
        else {
          uVar2 = -uVar2;
          *(int *)(unaff_EBP + -0x18) = -*(int *)(unaff_EBP + -0x18);
        }
        puStack_130 = &DAT_00980690;
        piStack_134 = (int *)0x5a36f9;
        FUN_00403191();
        puStack_130 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        piStack_134 = (int *)0x5a3706;
        FUN_00403191();
        piStack_158 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        if (piStack_158 == (int *)0x0) {
          puStack_130 = (undefined4 *)0x80004003;
          piStack_134 = (int *)0x5a371b;
          FUN_00878dfb();
          piStack_158 = *(int **)(unaff_EBP + -0x14);
        }
        uStack_13c = *(undefined4 *)(unaff_EBP + -100);
        iStack_138 = *(undefined4 *)(unaff_EBP + -0x60);
        piStack_134 = *(int **)(unaff_EBP + -0x5c);
        puStack_130 = *(undefined4 **)(unaff_EBP + -0x58);
        iVar1 = *piStack_158;
        piStack_14c = *(int **)(unaff_EBP + -0x2c);
        puStack_148 = *(undefined **)(unaff_EBP + -0x28);
        piStack_144 = *(int **)(unaff_EBP + -0x24);
        uStack_140 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_150 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x74);
        iStack_154 = uVar2 + *(int *)(unaff_EBP + -0x7c);
        *(int **)(unaff_EBP + -0x1c) = piStack_158;
        piStack_15c = (int *)0x5a3751;
        piVar6 = (int *)(**(code **)(iVar1 + 0x90))();
        if ((int)piVar6 < 0) {
          piStack_15c = (int *)&DAT_00963de8;
          piStack_160 = *(int **)(unaff_EBP + -0x1c);
          iStack_168 = 0x5a3763;
          piStack_164 = piVar6;
          FUN_00878e09();
        }
        piStack_15c = (int *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        piStack_160 = (int *)0x5a3770;
        piStack_15c = (int *)FUN_00402bc3();
        if ((int)piStack_15c < 0) {
          piStack_160 = (int *)0x5a377b;
          FUN_00878dfb();
        }
        piStack_15c = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        piStack_160 = (int *)0x5a3788;
        piStack_15c = (int *)FUN_00402bc3();
        if ((int)piStack_15c < 0) {
          piStack_160 = (int *)0x5a3793;
          FUN_00878dfb();
        }
        piStack_15c = (int *)0x3;
        piStack_160 = (int *)0x10000000;
        piStack_164 = (int *)0x5a37a2;
        FUN_004031b7();
        piStack_15c = (int *)0x3;
        piStack_160 = *(int **)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        piStack_164 = (int *)0x5a37b3;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          piStack_15c = (int *)0x80004003;
          piStack_160 = (int *)0x5a37c7;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        iStack_168 = *(int *)(unaff_EBP + -100);
        piStack_164 = *(int **)(unaff_EBP + -0x60);
        piStack_160 = *(int **)(unaff_EBP + -0x5c);
        piStack_15c = *(int **)(unaff_EBP + -0x58);
        uStack_17c = *(undefined4 *)(unaff_EBP + -0x74);
        uStack_180 = *(undefined4 *)(unaff_EBP + -0x7c);
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x2c);
        uStack_174 = *(undefined4 *)(unaff_EBP + -0x28);
        uStack_170 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_16c = *(undefined4 *)(unaff_EBP + -0x20);
        iVar1 = (**(code **)(*piVar6 + 0x90))(piVar6);
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,piVar6,&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        iVar1 = FUN_00402bc3(unaff_EBP + -100);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          if (DAT_0097c1ac == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar5 = (undefined4 *)FUN_00429328(unaff_EBP + 8);
          uVar3 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x50;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          iVar1 = (**(code **)(*piVar6 + 0x98))
                            (piVar6,uVar3,100,100,*(int *)(unaff_EBP + -0x70) + 100,0);
          if (iVar1 < 0) {
            piStack_160 = (int *)&DAT_00963de8;
            uStack_16c = 0x5a3901;
            iStack_168 = iVar1;
            piStack_164 = piVar6;
            FUN_00878e09();
          }
          piStack_160 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
        }
        else {
          if (DAT_0097c1ac == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar5 = (undefined4 *)FUN_00429328(unaff_EBP + 8);
          uVar3 = *puVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          iVar1 = (**(code **)(*piVar6 + 0x98))
                            (piVar6,uVar3,100,100,0,*(int *)(unaff_EBP + -0x80) + 100);
          if (iVar1 < 0) {
            piStack_160 = (int *)&DAT_00963de8;
            uStack_16c = 0x5a3898;
            iStack_168 = iVar1;
            piStack_164 = piVar6;
            FUN_00878e09();
          }
          piStack_160 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
        }
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a3912;
          (**(code **)(*piStack_160 + 8))();
        }
        iVar1 = *(int *)(unaff_EBP + -0x68);
        if (iVar1 == 4) {
          piStack_160 = (int *)0x1;
          piVar6 = piStack_160;
        }
        else if (iVar1 == 5) {
          piStack_160 = (int *)0x2;
          piVar6 = piStack_160;
        }
        else {
          piVar6 = (int *)0;
          if ((5 < iVar1) && (iVar1 < 8)) {
            piStack_160 = (int *)0x3;
            piVar6 = piStack_160;
          }
        }
        piStack_160 = *(int **)(unaff_EBP + -0x4c);
        *(int ***)(unaff_EBP + 8) = &piStack_164;
        iStack_168 = 0x5a3947;
        FUN_005aa063();
        iStack_168 = 0;
        uStack_16c = *(undefined4 *)(unaff_EBP + -0x78);
        uStack_170 = *(undefined4 *)(unaff_EBP + -0x6c);
        uStack_174 = *(undefined4 *)(unaff_EBP + -0x88);
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x84);
        *(undefined4 **)(unaff_EBP + 8) = &uStack_180;
        uStack_17c = piVar6;
        FUN_0041160e(unaff_EBP + -0x10);
        FUN_005a3a5d();
        piStack_160 = (int *)0x3;
        piStack_164 = (int *)0xfffffffe;
        iStack_168 = 0x5a397e;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_160 = (int *)0x80004003;
          piStack_164 = (int *)0x5a3991;
          FUN_00878dfb();
        }
        piStack_160 = (int *)(unaff_EBP + -0x2c);
        piStack_164 = (int *)(unaff_EBP + 8);
        iStack_168 = 0x5a39a1;
        FUN_0041141a();
        piStack_160 = *(int **)(unaff_EBP + 8);
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a39ae;
          (**(code **)(*piStack_160 + 8))();
        }
        piStack_160 = (int *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        piStack_164 = (int *)0x5a39bb;
        piStack_160 = (int *)FUN_00402bc3();
        if ((int)piStack_160 < 0) {
          piStack_164 = (int *)0x5a39c6;
          FUN_00878dfb();
        }
        piStack_160 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a39d7;
          (**(code **)(*piStack_160 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (*(int *)(unaff_EBP + -0x4c) != 0) {
          piStack_160 = (int *)0x0;
          piStack_164 = (int *)0x5a39e9;
          FUN_005aa156();
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        }
        piStack_160 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a39fd;
          (**(code **)(*piStack_160 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_160 = (int *)0x5a3a09;
        FUN_00402676();
        piStack_160 = *(int **)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piStack_160 != (int *)0x0) {
          piStack_164 = (int *)0x5a3a1a;
          (**(code **)(*piStack_160 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_160 = (int *)0x5a3a26;
        FUN_00402676();
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          piStack_160 = (int *)0x5a3a32;
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x38) = 0;
        }
        piStack_160 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      if (piStack_160 != (int *)0x0) {
        piStack_164 = (int *)0x5a3a46;
        (**(code **)(*piStack_160 + 8))();
      }
      goto LAB_005a3a46;
    }
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff20;
    piStack_e4 = (int *)0x5d6;
    puStack_ec = (undefined1 *)0x5a2ee2;
    FUN_00679e4e();
    piStack_e4 = (int *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_e8 = (undefined4 *)0x5a2ef5;
    FUN_0040263d();
    puStack_e8 = (undefined4 *)0x5a2efc;
    uVar3 = FUN_004048a4();
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    piStack_e4 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    puStack_e8 = (undefined4 *)0x5a2f13;
    puVar5 = (undefined4 *)FUN_00679d86();
    piVar6 = (int *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_00403213();
    puStack_e8 = (undefined4 *)(unaff_EBP + -0x3c);
    puStack_ec = (undefined1 *)0x5a2f2c;
    piStack_e4 = piVar6;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      piStack_e4 = (int *)0x5a2f43;
      FUN_00403384();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_e4 = (int *)0x5a2f54;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2f5f;
      FUN_00878dfb();
    }
    piStack_e4 = (int *)0x0;
    puStack_e8 = (undefined4 *)0x5a2f69;
    puStack_ec = (undefined1 *)FUN_00411641();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_e8;
    piStack_f0 = (int *)0x5a2f75;
    FUN_004033a1();
    puStack_ec = (undefined1 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_f0 = (int *)0x5a2f88;
    FUN_0040263d();
    piStack_f0 = (int *)0x5a2f8f;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    puStack_e8 = (undefined4 *)0x5a2f9a;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x44) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar1 != 0) {
      piStack_e4 = (int *)0x5a2fb0;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        piStack_e4 = (int *)0x5a2fc1;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    piStack_e4 = (int *)0x5a2fd1;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_e4 = (int *)0x5a2fdc;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_004027eb();
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_005aa080();
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        piStack_e4 = (int *)0x5a301b;
        FUN_00403384();
      }
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        piStack_e4 = (int *)0x5a303c;
        FUN_00403384();
      }
    }
    else {
      iVar1 = FUN_0040cf4d();
      piVar6 = (int *)0x0;
      *(int *)(unaff_EBP + -0x34) = iVar1;
      if (0 < iVar1) {
        do {
          FUN_0087a1b0();
          puStack_e8 = (undefined4 *)0x5a3061;
          piStack_e4 = piVar6;
          piStack_e4 = (int *)FUN_00412335();
          *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff20;
          puStack_e8 = (undefined4 *)0x5a306f;
          FUN_00402e8e();
          piStack_e4 = (int *)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          puStack_e8 = (undefined4 *)0x5a307f;
          FUN_0040263d();
          puStack_e8 = (undefined4 *)0x5a3086;
          psVar7 = (short *)FUN_004048a4();
          puVar9 = (undefined1 *)(unaff_EBP + -0x2c);
          *(bool *)(unaff_EBP + 0xb) = *psVar7 == 0;
          piStack_e4 = (int *)0x5a3096;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_e4 = (int *)0x5a30a1;
            FUN_00878dfb();
            puVar9 = extraout_ECX_02;
          }
        } while ((*(char *)(unaff_EBP + 0xb) == '\0') &&
                (piVar6 = (int *)((int)piVar6 + 1), (int)piVar6 < *(int *)(unaff_EBP + -0x34)));
        if (piVar6 != (int *)0x0) {
          piStack_e4 = *(int **)(unaff_EBP + -0x6c);
          puStack_e8 = *(undefined4 **)(unaff_EBP + -0x30);
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_ec;
          piStack_f0 = (int *)0x0;
          iStack_f4 = 0x5a312e;
          puStack_ec = puVar9;
          FUN_00424e0a();
          piStack_f0 = (int *)0x0;
          iStack_f4 = 0;
          iStack_fc = unaff_EBP + -0x14;
          *(undefined4 **)(unaff_EBP + -0x34) = &uStack_f8;
          uStack_100 = 0x5a313f;
          FUN_00433bdf();
          iStack_fc = 0;
          *(undefined4 **)(unaff_EBP + -0x34) = &uStack_100;
          FUN_00424dbc();
          puVar5 = (undefined4 *)FUN_0042e5bf();
          piStack_e4 = (int *)0x5a3165;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar5);
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            piStack_e4 = (int *)0x5a3172;
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          puStack_ec = (undefined1 *)&piStack_e4;
          *(int ***)(unaff_EBP + 8) = &piStack_e4;
          puStack_e8 = (undefined4 *)0x5de;
          piStack_f0 = (int *)0x5a3186;
          FUN_00679e4e();
          puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          puStack_ec = (undefined1 *)0x5a3196;
          FUN_0040263d();
          puStack_ec = (undefined1 *)0x5a319d;
          piStack_e4 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          puStack_e8 = (undefined4 *)0x5a31a7;
          iVar1 = FUN_00412550();
          puStack_e8 = (undefined4 *)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          puStack_ec = (undefined1 *)0x5a31bd;
          iVar4 = FUN_00402bc3();
          if (iVar4 < 0) {
            piStack_e4 = (int *)0x5a31ca;
            FUN_00878dfb();
          }
          if (iVar1 == 1) {
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              piStack_e4 = (int *)0x5a31dd;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x10);
            puStack_e8 = (undefined4 *)0x5a31eb;
            piStack_e4 = piVar6;
            puStack_e8 = (undefined4 *)(**(code **)(*piVar6 + 0xf4))();
            if ((int)puStack_e8 < 0) {
              puStack_ec = (undefined1 *)0x5a31fb;
              piStack_e4 = piVar6;
              FUN_00878e09();
            }
          }
          piVar6 = *(int **)(unaff_EBP + -0x14);
          piStack_e4 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff20;
          if (piStack_e4 != (int *)0x0) {
            puStack_e8 = (undefined4 *)0x5a3213;
            (**(code **)(*piStack_e4 + 4))();
            piVar6 = extraout_ECX_03;
          }
          puStack_e8 = (undefined4 *)(unaff_EBP + -0x10);
          *(int ***)(unaff_EBP + 8) = &piStack_e4;
          puStack_ec = (undefined1 *)0x5a3222;
          piStack_e4 = piVar6;
          FUN_0041160e();
          puStack_e8 = (undefined4 *)0x5a3229;
          FUN_005a46cf();
          piStack_e4 = (int *)0x5a3237;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          piStack_e4 = (int *)0x5a3244;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x46;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_e4 = (int *)0x5a3257;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x10);
          puStack_ec = *(undefined1 **)(unaff_EBP + -100);
          puStack_e8 = *(undefined4 **)(unaff_EBP + -0x60);
          piStack_e4 = *(int **)(unaff_EBP + -0x5c);
          iStack_fc = *(undefined4 *)(unaff_EBP + -0x2c);
          uStack_f8 = *(undefined4 *)(unaff_EBP + -0x28);
          iStack_f4 = *(undefined4 *)(unaff_EBP + -0x24);
          uStack_100 = 0x20;
          piStack_f0 = *(int **)(unaff_EBP + -0x20);
          iVar1 = (**(code **)(*piVar6 + 0x110))();
          if (iVar1 < 0) {
            piStack_120 = (int *)0x5a328f;
            piStack_11c = (int *)iVar1;
            piStack_118 = piVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x45;
          piStack_118 = (int *)0x5a329c;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_118 = (int *)0x5a32a7;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          piStack_118 = (int *)0x5a32b4;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            piStack_118 = (int *)0x5a32bf;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            piStack_118 = (int *)0x5a32d0;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          goto LAB_005a32d0;
        }
      }
      FUN_004027eb();
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_005aa080();
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        piStack_e4 = (int *)0x5a30e9;
        FUN_00403384();
      }
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00402676();
    }
  }
  FUN_00402fa6();
  FUN_004027eb();
LAB_005a3a46:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


