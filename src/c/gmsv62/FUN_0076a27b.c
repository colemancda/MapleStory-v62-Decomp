/* FUN_0076a27b - 0x0076a27b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076a27b(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  code *pcVar8;
  int *piVar9;
  undefined *puStack_1d4;
  int *piStack_1d0;
  int *piStack_1cc;
  int iStack_19c;
  int iStack_198;
  int *piStack_194;
  undefined4 uStack_15c;
  int iStack_158;
  int *piStack_154;
  int *piStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  uVar4 = *(undefined4 *)(*(int *)(extraout_ECX + 0x3c) + 0x838);
  *(undefined4 *)(unaff_EBP + -0x60) = 1;
  *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
  puStack_110 = (undefined4 *)0x76a2b7;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(*(int *)(extraout_ECX + 0x3c) + 0x834);
  puStack_110 = (undefined4 *)0x76a2cc;
  FUN_0045e787();
  puStack_110 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_114 = 0x76a2de;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 4);
  piStack_12c = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_12c == (int *)0x0) {
    puStack_110 = (undefined4 *)0x80004003;
    uStack_114 = 0x76a2f9;
    FUN_00878dfb();
    piStack_12c = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piStack_12c;
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_11c = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_124 = 0;
  uStack_114 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_128 = 0;
  *(int **)(unaff_EBP + -0x30) = piStack_12c;
  puStack_110 = *(undefined4 **)(unaff_EBP + -0x34);
  puStack_130 = (undefined4 *)0x76a31b;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    puStack_130 = (undefined4 *)&DAT_00963cc8;
    iStack_134 = *(int *)(unaff_EBP + -0x30);
    iStack_13c = 0x76a32d;
    iStack_138 = iVar2;
    FUN_00878e09();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_134 = 0x76a33a;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  iVar2 = 0;
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x76a347;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  if (*(int *)(iVar5 + 0x40) == 0) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(iVar5 + 0x40) + -4);
  }
  if (*(int *)(iVar5 + 0x44) != 0) {
    iVar2 = *(int *)(*(int *)(iVar5 + 0x44) + -4);
  }
  puStack_130 = (undefined4 *)0x80e;
  iStack_134 = unaff_EBP + -0x30;
  iStack_138 = 0x76a379;
  puVar3 = (undefined4 *)FUN_00679d22();
  puStack_130 = *(undefined4 **)(*(int *)(iVar5 + 0x3c) + 0x77c);
  iStack_138 = *puVar3;
  iStack_134 = iVar2 + *(int *)(unaff_EBP + -0x20);
  iStack_13c = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_140 = 0x76a398;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_130 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_134 = 0x76a3af;
    FUN_00434e38();
  }
  puStack_130 = &DAT_00980690;
  iStack_134 = 0x76a3b9;
  FUN_00403191();
  puStack_130 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_134 = 0x76a3c9;
  iStack_138 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_134;
  iStack_13c = 0x76a3d5;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_138 = 0x76a3e1;
  FUN_0044974c();
  iStack_138 = 0x76a3e8;
  iVar2 = FUN_00448ebb();
  puStack_130 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_134 = 0x76a3f7;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x76a402;
    FUN_00878dfb();
  }
  puStack_130 = &DAT_00980690;
  iStack_134 = 0x76a40b;
  FUN_00403191();
  puStack_130 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_134 = 0x76a418;
  FUN_00403191();
  puStack_130 = (undefined4 *)(unaff_EBP + -0x5c);
  iStack_134 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_138 = 0x76a42c;
  iStack_138 = FUN_00449749();
  iStack_13c = 0x76a435;
  uStack_140 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_13c;
  iStack_144 = 0x76a441;
  FUN_00448a17();
  uStack_140 = 8;
  iStack_144 = -iVar2 + 0x105;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_148 = 0x76a457;
  FUN_004115d9();
  uStack_148 = 0x76a45e;
  FUN_00448e3a();
  puStack_130 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_134 = 0x76a46b;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x76a476;
    FUN_00878dfb();
  }
  puStack_130 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_134 = 0x76a483;
  puStack_130 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    iStack_134 = 0x76a48e;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x70) = -iVar2 + 0xf1;
  *(undefined4 *)(unaff_EBP + -0x68) = 0x119;
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar5 = *(int *)(iVar2 + 0x3c);
  *(undefined4 *)(unaff_EBP + -0x6c) = 3;
  *(undefined4 *)(unaff_EBP + -100) = 0x19;
  *(undefined4 *)(iVar5 + 0x788) = *(undefined4 *)(unaff_EBP + -0x70);
  *(undefined4 *)(iVar5 + 0x78c) = *(undefined4 *)(unaff_EBP + -0x6c);
  *(undefined4 *)(iVar5 + 0x790) = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined4 *)(iVar5 + 0x794) = *(undefined4 *)(unaff_EBP + -100);
  if (*(int *)(iVar2 + 4) == 0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x76a4cc;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  puStack_130 = (undefined4 *)0x76a4d7;
  uVar4 = FUN_0040e53d();
  puStack_130 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_134 = 0x76a4e3;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar2 + 8);
  piStack_14c = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piStack_14c == (int *)0x0) {
    puStack_130 = (undefined4 *)0x80004003;
    iStack_134 = 0x76a4fe;
    FUN_00878dfb();
    piStack_14c = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piStack_14c;
  uStack_140 = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_144 = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_13c = *(int *)(unaff_EBP + -0x40);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_134 = *(int *)(unaff_EBP + -0x38);
  uStack_148 = 0;
  *(int **)(unaff_EBP + -0x30) = piStack_14c;
  puStack_130 = *(undefined4 **)(unaff_EBP + -0x34);
  piStack_150 = (int *)0x76a521;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    piStack_150 = (int *)&DAT_00963cc8;
    piStack_154 = *(int **)(unaff_EBP + -0x30);
    uStack_15c = 0x76a533;
    iStack_158 = iVar2;
    FUN_00878e09();
  }
  piStack_150 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_154 = (int *)0x76a540;
  piStack_150 = (int *)FUN_00402bc3();
  if ((int)piStack_150 < 0) {
    piStack_154 = (int *)0x76a54b;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (*(int *)(iVar2 + 8) == 0) {
    piStack_150 = (int *)0x80004003;
    piStack_154 = (int *)0x76a55e;
    FUN_00878dfb();
  }
  piStack_150 = (int *)0x76a566;
  iVar5 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar5;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
  uVar6 = 0;
  if (*(int *)(iVar2 + 0x44) != 0) {
    uVar6 = *(uint *)(*(int *)(iVar2 + 0x44) + -4);
  }
  if ((*(int *)(iVar2 + 0x40) != 0) &&
     (uVar1 = *(uint *)(*(int *)(iVar2 + 0x40) + -4), uVar6 < uVar1)) {
    uVar6 = uVar1;
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  if (uVar6 != 0) {
    *(uint *)(unaff_EBP + -0x30) = uVar6;
  }
  if (0 < *(int *)(unaff_EBP + -0x30)) {
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
    do {
      piStack_150 = &DAT_00980690;
      piStack_154 = (int *)0x76a5b1;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xc);
      piVar9 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (piVar9 == (int *)0x0) {
        piStack_150 = (int *)0x80004003;
        piStack_154 = (int *)0x76a5cf;
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar9;
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x40);
      iStack_158 = *(int *)(unaff_EBP + -0x3c);
      piStack_154 = *(int **)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x18) = piVar9;
      piStack_150 = *(int **)(unaff_EBP + -0x34);
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        piStack_150 = (int *)&DAT_00963cc8;
        piStack_154 = *(int **)(unaff_EBP + -0x18);
        uStack_15c = 0x76a604;
        iStack_158 = iVar2;
        FUN_00878e09();
      }
      piStack_150 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_154 = (int *)0x76a611;
      piStack_150 = (int *)FUN_00402bc3();
      if ((int)piStack_150 < 0) {
        piStack_154 = (int *)0x76a61c;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
      piVar9 = (int *)(unaff_EBP + -0x2c);
      *piVar9 = *piVar9 + -1;
    } while (*piVar9 != 0);
  }
  iVar2 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(unaff_EBP + -0x18) = iVar2 + 4;
  while( true ) {
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    iVar7 = *(int *)(iVar5 + 0x40);
    if ((iVar7 == 0) || (*(uint *)(iVar7 + -4) <= *(uint *)(unaff_EBP + -0x28))) break;
    if (*(int *)(*(int *)(iVar5 + 0x3c) + 0x818) == *(int *)(*(int *)(unaff_EBP + -0x2c) + iVar7)) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_150 = (int *)0x80004003;
        piStack_154 = (int *)0x76a67b;
        FUN_00878dfb();
      }
      piVar9 = *(int **)(unaff_EBP + 8);
      piStack_150 = (int *)0xff244768;
      piStack_154 = (int *)0x12;
      iStack_158 = 0x8c;
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar9 + 0x8c))();
      if (iVar2 < 0) {
        piStack_150 = (int *)&DAT_00963cc8;
        uStack_15c = 0x76a6a8;
        iStack_158 = iVar2;
        piStack_154 = piVar9;
        FUN_00878e09();
      }
      piStack_150 = &DAT_00980690;
      piStack_154 = (int *)0x76a6b1;
      FUN_00403191();
      piStack_150 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_154 = (int *)0x76a6be;
      FUN_00403191();
      piStack_150 = (int *)(unaff_EBP + -0x5c);
      piStack_154 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_158 = 0x76a6d2;
      iStack_158 = FUN_00449749();
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
      FUN_00782969();
      uStack_15c = 0x76a6e7;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_15c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_004115d9();
      FUN_00448e3a();
      piStack_150 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      piStack_154 = (int *)0x76a718;
      piStack_150 = (int *)FUN_00402bc3();
      if ((int)piStack_150 < 0) {
        piStack_154 = (int *)0x76a723;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_150 = (int *)(unaff_EBP + -0x5c);
    }
    else {
      piStack_150 = &DAT_00980690;
      piStack_154 = (int *)0x76a73b;
      FUN_00403191();
      piStack_150 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_154 = (int *)0x76a74b;
      FUN_00403191();
      piStack_150 = (int *)(unaff_EBP + -0xa0);
      piStack_154 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_158 = 0x76a765;
      iStack_158 = FUN_00449749();
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
      FUN_00782969();
      uStack_15c = 0x76a77a;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_15c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_004115d9();
      FUN_00448e3a();
      piStack_150 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_154 = (int *)0x76a7ae;
      piStack_150 = (int *)FUN_00402bc3();
      if ((int)piStack_150 < 0) {
        piStack_154 = (int *)0x76a7b9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_150 = (int *)(unaff_EBP + -0xa0);
    }
    piStack_154 = (int *)0x76a7c9;
    piStack_150 = (int *)FUN_00402bc3();
    if ((int)piStack_150 < 0) {
      piStack_154 = (int *)0x76a7d4;
      FUN_00878dfb();
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0x54 + *(int *)(iVar5 + 0x40)) == 0) {
      puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x2c);
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x30);
    }
    *(undefined4 *)(unaff_EBP + -0x24) = *puVar3;
    piStack_150 = (int *)0x76a7f8;
    FUN_004125f3();
    piStack_150 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_154 = (int *)0x76a808;
    FUN_00403191();
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (piVar9 == (int *)0x0) {
      piStack_150 = (int *)0x80004003;
      piStack_154 = (int *)0x76a81d;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar9;
    uStack_15c = *(undefined4 *)(unaff_EBP + -0x90);
    iStack_158 = *(int *)(unaff_EBP + -0x8c);
    piStack_154 = *(int **)(unaff_EBP + -0x88);
    *(int **)(unaff_EBP + -0x14) = piVar9;
    piStack_150 = *(int **)(unaff_EBP + -0x84);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(*(int *)(unaff_EBP + -0x2c) + 0x50 + *(int *)(iVar2 + 0x40)) == 0) {
      puVar3 = (undefined4 *)(iVar2 + 0x24);
    }
    else {
      puVar3 = (undefined4 *)(iVar2 + 0x28);
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x24),
               (IBinding *)*puVar3);
    FUN_00403191();
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar9;
    *(int **)(unaff_EBP + -0x14) = piVar9;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      piStack_194 = *(int **)(unaff_EBP + -0x14);
      iStack_19c = 0x76a8e5;
      iStack_198 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_194 = (int *)0x76a8f2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_194 = (int *)0x76a8fd;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x2c);
    piStack_194 = (int *)0x8c;
    iStack_198 = *(int *)(unaff_EBP + -0x10);
    iStack_19c = 0;
    (*DAT_0097b504)();
    (*DAT_0097b504)();
    piStack_1cc = (int *)0x76a95a;
    (*DAT_0097b504)();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_150 = (int *)0x76a96e;
    FUN_004125e6();
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    iVar2 = *(int *)(unaff_EBP + -0x20);
    *(int *)(unaff_EBP + -0x2c) = iVar5 + 0x5c;
  }
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    piStack_150 = &DAT_00980690;
    piStack_154 = (int *)0x76a992;
    FUN_00403191();
    piStack_150 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_154 = (int *)0x76a99f;
    FUN_00403191();
    piStack_150 = (int *)(unaff_EBP + -0x5c);
    piStack_154 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_158 = 0x76a9b3;
    iStack_158 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_15c;
    uStack_15c = extraout_ECX_00;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_004115d9();
    FUN_00448e3a();
    piStack_150 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    piStack_154 = (int *)0x76a9f3;
    piStack_150 = (int *)FUN_00402bc3();
    if ((int)piStack_150 < 0) {
      piStack_154 = (int *)0x76a9fe;
      FUN_00878dfb();
    }
    piStack_150 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_154 = (int *)0x76aa0b;
    piStack_150 = (int *)FUN_00402bc3();
    if ((int)piStack_150 < 0) {
      piStack_154 = (int *)0x76aa16;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(unaff_EBP + -0x18) = iVar2 + 4;
  while( true ) {
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    iVar5 = *(int *)(iVar2 + 0x44);
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= *(uint *)(unaff_EBP + -0x28))) break;
    if (*(int *)(*(int *)(iVar2 + 0x3c) + 0x818) == *(int *)(*(int *)(unaff_EBP + -0x24) + iVar5)) {
      piVar9 = *(int **)(unaff_EBP + 8);
      if (piVar9 == (int *)0x0) {
        piStack_150 = (int *)0x80004003;
        piStack_154 = (int *)0x76aa6f;
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + 8);
      }
      iVar5 = *piVar9;
      piStack_150 = (int *)0xff244768;
      piStack_154 = (int *)0x12;
      iStack_158 = 0x8c;
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x10);
      *(int **)(unaff_EBP + -0x14) = piVar9;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        piStack_150 = (int *)&DAT_00963cc8;
        piStack_154 = *(int **)(unaff_EBP + -0x14);
        uStack_15c = 0x76aaa4;
        iStack_158 = iVar5;
        FUN_00878e09();
      }
      piStack_150 = &DAT_00980690;
      piStack_154 = (int *)0x76aaad;
      FUN_00403191();
      piStack_150 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_154 = (int *)0x76aaba;
      FUN_00403191();
      piStack_150 = (int *)(unaff_EBP + -0x5c);
      piStack_154 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_158 = 0x76aace;
      iStack_158 = FUN_00449749();
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
      FUN_00782969();
      uStack_15c = 0x76aae3;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_15c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_004115d9();
      FUN_00448e3a();
      piStack_150 = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_154 = (int *)0x76ab13;
      piStack_150 = (int *)FUN_00402bc3();
      if ((int)piStack_150 < 0) {
        piStack_154 = (int *)0x76ab1e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_150 = (int *)(unaff_EBP + -0x5c);
    }
    else {
      piStack_150 = &DAT_00980690;
      piStack_154 = (int *)0x76ab36;
      FUN_00403191();
      piStack_150 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_154 = (int *)0x76ab46;
      FUN_00403191();
      piStack_150 = (int *)(unaff_EBP + -0xa0);
      piStack_154 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iStack_158 = 0x76ab60;
      iStack_158 = FUN_00449749();
      uStack_15c = *(undefined4 *)(unaff_EBP + -0x28);
      FUN_00782969();
      uStack_15c = 0x76ab75;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_15c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_004115d9();
      FUN_00448e3a();
      piStack_150 = (int *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_154 = (int *)0x76aba8;
      piStack_150 = (int *)FUN_00402bc3();
      if ((int)piStack_150 < 0) {
        piStack_154 = (int *)0x76abb3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_150 = (int *)(unaff_EBP + -0xa0);
    }
    piStack_154 = (int *)0x76abc3;
    piStack_150 = (int *)FUN_00402bc3();
    if ((int)piStack_150 < 0) {
      piStack_154 = (int *)0x76abce;
      FUN_00878dfb();
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x24) + 0x54 + *(int *)(iVar2 + 0x44)) == 0) {
      puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x2c);
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x30);
    }
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar3;
    piStack_150 = (int *)0x76abf2;
    FUN_004125f3();
    piStack_150 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_154 = (int *)0x76ac02;
    FUN_00403191();
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (piVar9 == (int *)0x0) {
      piStack_150 = (int *)0x80004003;
      piStack_154 = (int *)0x76ac17;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar9;
    uStack_15c = *(undefined4 *)(unaff_EBP + -0x90);
    iStack_158 = *(int *)(unaff_EBP + -0x8c);
    piStack_154 = *(int **)(unaff_EBP + -0x88);
    *(int **)(unaff_EBP + -0x14) = piVar9;
    piStack_150 = *(int **)(unaff_EBP + -0x84);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(*(int *)(unaff_EBP + -0x24) + 0x50 + *(int *)(iVar2 + 0x44)) == 0) {
      puVar3 = (undefined4 *)(iVar2 + 0x24);
    }
    else {
      puVar3 = (undefined4 *)(iVar2 + 0x28);
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x2c),
               (IBinding *)*puVar3);
    FUN_00403191();
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar9;
    *(int **)(unaff_EBP + -0x14) = piVar9;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      piStack_194 = *(int **)(unaff_EBP + -0x14);
      iStack_19c = 0x76ace5;
      iStack_198 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_194 = (int *)0x76acf2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_194 = (int *)0x76acfd;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x24);
    piStack_194 = (int *)0x118;
    iStack_198 = *(int *)(unaff_EBP + -0x10);
    iStack_19c = 0x8c;
    (*DAT_0097b504)();
    (*DAT_0097b504)();
    piStack_1cc = (int *)0x76ad69;
    (*DAT_0097b504)();
    piStack_150 = *(int **)(unaff_EBP + -0x2c);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piStack_150 != (int *)0x0) {
      piStack_154 = (int *)0x76ad82;
      (**(code **)(*piStack_150 + 8))();
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    *(int *)(unaff_EBP + -0x24) = iVar2 + 0x5c;
  }
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    piStack_150 = &DAT_00980690;
    piStack_154 = (int *)0x76ada3;
    FUN_00403191();
    piStack_150 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_154 = (int *)0x76adb0;
    FUN_00403191();
    piStack_150 = (int *)(unaff_EBP + -0x5c);
    piStack_154 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_158 = 0x76adc4;
    iStack_158 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_15c;
    uStack_15c = extraout_ECX_01;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    FUN_004115d9();
    FUN_00448e3a();
    piStack_150 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_154 = (int *)0x76ae03;
    piStack_150 = (int *)FUN_00402bc3();
    if ((int)piStack_150 < 0) {
      piStack_154 = (int *)0x76ae0e;
      FUN_00878dfb();
    }
    piStack_150 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_154 = (int *)0x76ae1b;
    piStack_150 = (int *)FUN_00402bc3();
    if ((int)piStack_150 < 0) {
      piStack_154 = (int *)0x76ae26;
      FUN_00878dfb();
    }
  }
  piStack_150 = &DAT_00980690;
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x30) * 0x12;
  piStack_154 = (int *)0x76ae3e;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x10);
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (piVar9 == (int *)0x0) {
    piStack_150 = (int *)0x80004003;
    piStack_154 = (int *)0x76ae5c;
    FUN_00878dfb();
    piVar9 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar9;
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_158 = *(undefined4 *)(unaff_EBP + -0x3c);
  piStack_154 = *(int **)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + -0x20) = piVar9;
  piStack_150 = *(int **)(unaff_EBP + -0x34);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (*(int *)(iVar2 + 0x10) == 0) {
    FUN_00878dfb();
  }
  iVar5 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10 + iVar5;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 0x14);
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (piVar9 == (int *)0x0) {
    FUN_00878dfb();
    piVar9 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar9;
  *(int **)(unaff_EBP + -0x20) = piVar9;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    piStack_194 = *(int **)(unaff_EBP + -0x20);
    iStack_19c = 0x76af27;
    iStack_198 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_194 = (int *)0x76af34;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_194 = (int *)0x76af3f;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x48);
  if (iVar2 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(iVar2 + -4);
  }
  piStack_194 = (int *)(unaff_EBP + -0x14);
  iStack_198 = 0x76af63;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_198 = *puVar3;
  iStack_19c = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  piStack_194 = piVar9;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  piStack_194 = (int *)0x76af95;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  piStack_194 = (int *)0x76afa5;
  iStack_198 = FUN_00449713();
  *(int ***)(unaff_EBP + -0x14) = &piStack_194;
  iStack_19c = 0x76afb1;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_198 = 0x76afbd;
  FUN_0044974c();
  iStack_198 = 0x76afc4;
  uVar4 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_194 = (int *)0x76afd4;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_194 = (int *)0x76afdf;
    FUN_00878dfb();
  }
  piStack_194 = (int *)0x76afeb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  piStack_194 = (int *)(unaff_EBP + -0x80);
  iStack_198 = 0x76aff5;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_194 = (int *)0x76b001;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  piStack_194 = (int *)0x76b00b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  piStack_194 = (int *)(unaff_EBP + -0x70);
  iStack_198 = 0x76b015;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_194 = (int *)0x76b021;
    FUN_00878dfb();
  }
  piStack_194 = (int *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_198 = 0x76b035;
  iStack_198 = FUN_00449749();
  iStack_19c = 0x76b03e;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_19c;
  iStack_19c = extraout_ECX_02;
  FUN_00448a17();
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar5 = *(int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  piStack_194 = (int *)0x76b07a;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    piStack_194 = (int *)0x76b085;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_194 = (int *)0x76b092;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    piStack_194 = (int *)0x76b09d;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x70) = -iVar5 + 0xf1;
  *(int *)(unaff_EBP + -0x6c) = iVar2 + 3;
  *(int *)(unaff_EBP + -0x68) = -iVar5 + 0x119 + *(int *)(unaff_EBP + -0x20);
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  iVar7 = *(int *)(iVar5 + 0x3c);
  *(int *)(unaff_EBP + -100) = iVar2 + 0x19;
  *(undefined4 *)(iVar7 + 0x798) = *(undefined4 *)(unaff_EBP + -0x70);
  *(undefined4 *)(iVar7 + 0x79c) = *(undefined4 *)(unaff_EBP + -0x6c);
  *(undefined4 *)(iVar7 + 0x7a0) = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined4 *)(iVar7 + 0x7a4) = *(undefined4 *)(unaff_EBP + -100);
  if (*(int *)(iVar5 + 0x14) == 0) {
    piStack_194 = (int *)0x76b0dc;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  iVar5 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar5;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 4;
  do {
    if ((*(int *)(iVar2 + 0x48) == 0) ||
       (*(uint *)(*(int *)(iVar2 + 0x48) + -4) <= *(uint *)(unaff_EBP + -0x28))) {
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        piStack_194 = (int *)0x76b5e3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        piStack_194 = (int *)(unaff_EBP + -0x40);
        iStack_198 = 0x76b5ed;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          piStack_194 = (int *)0x76b5f9;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 0xc);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (piVar9 == (int *)0x0) {
          piStack_194 = (int *)0x76b614;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar9;
        iStack_19c = *(int *)(unaff_EBP + -0x40);
        iStack_198 = *(int *)(unaff_EBP + -0x3c);
        piStack_194 = *(int **)(unaff_EBP + -0x38);
        *(int **)(unaff_EBP + -0x20) = piVar9;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          piStack_194 = *(int **)(unaff_EBP + -0x20);
          iStack_19c = 0x76b649;
          iStack_198 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_194 = (int *)0x76b656;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_194 = (int *)0x76b661;
          FUN_00878dfb();
        }
        piStack_194 = (int *)0x76b66d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
        piStack_194 = (int *)(unaff_EBP + -0x5c);
        iStack_198 = 0x76b677;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_194 = (int *)0x76b683;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        piStack_194 = (int *)0x76b68d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
        piStack_194 = (int *)(unaff_EBP + -0x40);
        iStack_198 = 0x76b697;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          piStack_194 = (int *)0x76b6a3;
          FUN_00878dfb();
        }
        piStack_194 = (int *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        iStack_198 = 0x76b6b7;
        iStack_198 = FUN_00449749();
        *(int **)(unaff_EBP + -0x14) = &iStack_19c;
        iStack_19c = extraout_ECX_03;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        piStack_194 = (int *)0x76b6f7;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_194 = (int *)0x76b702;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_194 = (int *)0x76b70f;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_194 = (int *)0x76b71a;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
        iVar2 = *(int *)(unaff_EBP + -0x1c);
      }
      piStack_194 = (int *)0x76b72b;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_194 = (int *)(unaff_EBP + -0x40);
      iStack_198 = 0x76b735;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_194 = (int *)0x76b741;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 0x10);
      piVar9 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      if (piVar9 == (int *)0x0) {
        piStack_194 = (int *)0x76b75c;
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar9;
      iStack_19c = *(int *)(unaff_EBP + -0x40);
      iStack_198 = *(undefined4 *)(unaff_EBP + -0x3c);
      piStack_194 = *(int **)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x20) = piVar9;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      if (*(int *)(iVar2 + 0x10) == 0) {
        FUN_00878dfb();
      }
      FUN_0040e53d();
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        FUN_00878dfb();
      }
      piVar9 = *(int **)(unaff_EBP + 0xc);
      piStack_1d0 = (int *)(**(code **)(*piVar9 + 0x8c))();
      if ((int)piStack_1d0 < 0) {
        puStack_1d4 = (undefined *)0x76b800;
        piStack_1cc = piVar9;
        FUN_00878e09();
      }
      if (*(int *)(iVar2 + 0x40) == 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(iVar2 + 0x40) + -4);
      }
      if (*(int *)(iVar2 + 0x44) == 0) {
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + -4);
      }
      if (*(int *)(iVar2 + 0x48) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 0x48) + -4);
      }
      piStack_1cc = (int *)(unaff_EBP + -0x14);
      piStack_1d0 = (int *)0x76b845;
      puVar3 = (undefined4 *)FUN_00679d22();
      piStack_1d0 = (int *)*puVar3;
      piStack_1cc = (int *)(*(int *)(unaff_EBP + -0x20) + iVar2 + *(int *)(unaff_EBP + -0x30));
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      puStack_1d4 = (undefined *)(unaff_EBP + -0x48);
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      piStack_1cc = (int *)0x76b87c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_1cc = (int *)(unaff_EBP + -0x40);
      piStack_1d0 = (int *)0x76b886;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_1cc = (int *)0x76b892;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      piStack_1cc = (int *)0x76b8a2;
      piStack_1d0 = (int *)FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_1cc;
      puStack_1d4 = (undefined *)0x76b8ae;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      piStack_1d0 = (int *)0x76b8ba;
      FUN_0044974c();
      piStack_1d0 = (int *)0x76b8c1;
      iVar2 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_1cc = (int *)0x76b8d0;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_1cc = (int *)0x76b8db;
        FUN_00878dfb();
      }
      piStack_1cc = (int *)0x76b8e1;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_1cc = (int *)(unaff_EBP + -0x5c);
      piStack_1d0 = (int *)0x76b8eb;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_1cc = (int *)0x76b8f7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      piStack_1cc = (int *)0x76b901;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      piStack_1cc = (int *)(unaff_EBP + -0x40);
      piStack_1d0 = (int *)0x76b90b;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_1cc = (int *)0x76b917;
        FUN_00878dfb();
      }
      piStack_1cc = (int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      piStack_1d0 = (int *)0x76b92b;
      piStack_1d0 = (int *)FUN_00449749();
      puStack_1d4 = (undefined *)0x76b934;
      uVar4 = FUN_00449713();
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_1d4;
      FUN_00448a17(uVar4);
      uVar4 = 4;
      iVar5 = 0x114 - iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      FUN_004115d9(iVar5,4);
      FUN_00448e3a(iVar5,uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      piStack_1cc = (int *)0x76b96a;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_1cc = (int *)0x76b975;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_1cc = (int *)0x76b982;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_1cc = (int *)0x76b98d;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      iVar7 = *(int *)(iVar5 + 0x3c);
      *(int *)(unaff_EBP + -0x70) = 0xfa - iVar2;
      *(undefined4 *)(unaff_EBP + -0x6c) = 0x105;
      *(undefined4 *)(unaff_EBP + -0x68) = 0x122;
      *(undefined4 *)(unaff_EBP + -100) = 0x11b;
      *(undefined4 *)(iVar7 + 0x7a8) = *(undefined4 *)(unaff_EBP + -0x70);
      *(undefined4 *)(iVar7 + 0x7ac) = *(undefined4 *)(unaff_EBP + -0x6c);
      *(undefined4 *)(iVar7 + 0x7b0) = *(undefined4 *)(unaff_EBP + -0x68);
      *(undefined4 *)(iVar7 + 0x7b4) = *(undefined4 *)(unaff_EBP + -100);
      piVar9 = (int *)0x0;
      *(undefined4 *)(unaff_EBP + -0x108) = 0;
      piStack_1cc = *(int **)(*(int *)(iVar5 + 0x3c) + 0x818);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      piStack_1d0 = (int *)0x76b9e5;
      iVar2 = FUN_0076c53a();
      if (iVar2 < 0) {
        *(undefined4 *)(*(int *)(iVar5 + 0x3c) + 0x818) = 0;
        iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x3c) + 0x598) + 4);
      }
      else {
        iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x3c) + 0x598) + 4);
      }
      piStack_1cc = (int *)0x76ba15;
      (**(code **)(iVar7 + 0x1c))();
      if ((*(int *)(unaff_EBP + -0x10c) != 0) && ((iVar2 == 0 || (iVar2 == 1)))) {
        piVar9 = (int *)0x1;
      }
      iVar2 = 2;
      do {
        if (iVar2 == 5) {
          if (((piVar9 == (int *)0x0) || (*(int *)(DAT_00978368 + 0x2b40) == 0)) ||
             (*(int *)(DAT_00978368 + 0x2bf2) != *(int *)(DAT_00978368 + 0x2088))) {
            piStack_1cc = (int *)0x0;
          }
          else {
            piStack_1cc = (int *)0x1;
          }
          iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x3c) + 0x5b8) + 4);
        }
        else {
          iVar7 = *(int *)(*(int *)(*(int *)(iVar5 + 0x3c) + 0x590 + iVar2 * 8) + 4);
          piStack_1cc = piVar9;
        }
        piStack_1d0 = (int *)0x76ba7c;
        (**(code **)(iVar7 + 0x1c))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 6);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_1cc = (int *)0x76ba91;
      FUN_00414ebb();
      piStack_1cc = *(int **)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piStack_1cc != (int *)0x0) {
        piStack_1d0 = (int *)0x76baa2;
        (**(code **)(*piStack_1cc + 8))();
      }
      piStack_1cc = *(int **)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_1cc != (int *)0x0) {
        piStack_1d0 = (int *)0x76bab3;
        (**(code **)(*piStack_1cc + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_1cc = (int *)0x76babf;
      FUN_00414ebb();
      piStack_1cc = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_1cc != (int *)0x0) {
        piStack_1d0 = (int *)0x76bad0;
        (**(code **)(*piStack_1cc + 8))();
      }
      piStack_1cc = *(int **)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_1cc != (int *)0x0) {
        piStack_1d0 = (int *)0x76bae1;
        (**(code **)(*piStack_1cc + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    *(uint *)(unaff_EBP + -0x2c) = (-(uint)(*(int *)(unaff_EBP + -0x60) != 0) & 0xffffff74) + 0x8c;
    if (*(int *)(unaff_EBP + -0x60) != 0) {
      piStack_194 = (int *)0x76b13a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      piStack_194 = (int *)(unaff_EBP + -0x80);
      iStack_198 = 0x76b144;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b150;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xc);
      piVar9 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      if (piVar9 == (int *)0x0) {
        piStack_194 = (int *)0x76b16e;
        FUN_00878dfb();
        piVar9 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar9;
      iStack_19c = *(int *)(unaff_EBP + -0x80);
      iStack_198 = *(int *)(unaff_EBP + -0x7c);
      piStack_194 = *(int **)(unaff_EBP + -0x78);
      *(int **)(unaff_EBP + -0x20) = piVar9;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        piStack_194 = *(int **)(unaff_EBP + -0x20);
        iStack_19c = 0x76b1a3;
        iStack_198 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_194 = (int *)0x76b1b0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b1bb;
        FUN_00878dfb();
      }
    }
    pcVar8 = VariantInit_exref;
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x3c) + 0x818) ==
        *(int *)(*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x48) + *(int *)(unaff_EBP + -0x24))) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_194 = (int *)0x76b1e6;
        FUN_00878dfb();
      }
      piVar9 = *(int **)(unaff_EBP + 8);
      piStack_194 = (int *)0x12;
      iStack_198 = 0x8c;
      iStack_19c = *(int *)(unaff_EBP + -0x10);
      iVar2 = (**(code **)(*piVar9 + 0x8c))();
      if (iVar2 < 0) {
        iStack_19c = 0x76b218;
        iStack_198 = iVar2;
        piStack_194 = piVar9;
        FUN_00878e09();
      }
      pcVar8 = VariantInit_exref;
      piStack_194 = (int *)0x76b227;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      piStack_194 = (int *)(unaff_EBP + -0x90);
      iStack_198 = 0x76b234;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b240;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      piStack_194 = (int *)0x76b24a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
      piStack_194 = (int *)(unaff_EBP + -0x70);
      iStack_198 = 0x76b254;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b260;
        FUN_00878dfb();
      }
      piStack_194 = (int *)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_198 = 0x76b277;
      iStack_198 = FUN_00449749();
      iStack_19c = *(int *)(unaff_EBP + -0x28);
      FUN_00782969();
      iStack_19c = 0x76b290;
      FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_19c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      piStack_194 = (int *)0x76b2c3;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b2ce;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    else {
      piStack_194 = (int *)0x76b2ec;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
      piStack_194 = (int *)(unaff_EBP + -0xb0);
      iStack_198 = 0x76b2f9;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b305;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      piStack_194 = (int *)0x76b312;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
      piStack_194 = (int *)(unaff_EBP + -0xa0);
      iStack_198 = 0x76b31f;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b32b;
        FUN_00878dfb();
      }
      piStack_194 = (int *)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_198 = 0x76b345;
      iStack_198 = FUN_00449749();
      iStack_19c = *(int *)(unaff_EBP + -0x28);
      FUN_00782969();
      iStack_19c = 0x76b35e;
      FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_19c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      piStack_194 = (int *)0x76b397;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_194 = (int *)0x76b3a2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    piStack_194 = (int *)0x76b3b2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_194 = (int *)0x76b3bd;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(*(int *)(iVar2 + 0x48) + 0x54 + *(int *)(unaff_EBP + -0x24)) == 0) {
      piVar9 = (int *)(iVar2 + 0x2c);
    }
    else {
      piVar9 = (int *)(iVar2 + 0x30);
    }
    piVar9 = (int *)*piVar9;
    *(int **)(unaff_EBP + -0x30) = piVar9;
    if (piVar9 != (int *)0x0) {
      piStack_194 = (int *)0x76b3e4;
      (**(code **)(*piVar9 + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_194 = (int *)0x76b3ee;
    (*pcVar8)();
    iStack_198 = unaff_EBP + -0x5c;
    piStack_194 = &DAT_00980690;
    iStack_19c = 0x76b3f8;
    piStack_194 = (int *)FUN_00402e32();
    if ((int)piStack_194 < 0) {
      iStack_198 = 0x76b404;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (piVar9 == (int *)0x0) {
      piStack_194 = (int *)0x80004003;
      iStack_198 = 0x76b419;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar9;
    iStack_19c = *(int *)(unaff_EBP + -0x58);
    iStack_198 = *(int *)(unaff_EBP + -0x54);
    *(int **)(unaff_EBP + -0x14) = piVar9;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x2c) + 3;
    piStack_194 = *(int **)(unaff_EBP + -0x50);
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(*(int *)(iVar2 + 0x48) + 0x50 + *(int *)(unaff_EBP + -0x24)) == 0) {
      puVar3 = (undefined4 *)(iVar2 + 0x24);
    }
    else {
      puVar3 = (undefined4 *)(iVar2 + 0x28);
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x30),
               (IBinding *)*puVar3);
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (piVar9 == (int *)0x0) {
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar9;
    piStack_1cc = (int *)(*(int *)(unaff_EBP + -0x2c) + 0xe);
    *(int **)(unaff_EBP + -0x14) = piVar9;
    puStack_1d4 = (undefined *)0x76b4ed;
    piStack_1d0 = piVar9;
    iVar2 = (**(code **)(iVar2 + 0x80))();
    if (iVar2 < 0) {
      puStack_1d4 = &DAT_00963cc8;
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14));
    }
    puStack_1d4 = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_1d4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_1d4 < 0) {
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x2c);
    puStack_1d4 = (undefined *)(*(int *)(unaff_EBP + -0x18) + 0xe);
    piVar9 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x48);
    (*DAT_0097b504)(*piVar9 + 0x10 + *(int *)(unaff_EBP + -0x24),iVar2,
                    *(undefined4 *)(unaff_EBP + -0x10),iVar2 + 0x8c);
    (*DAT_0097b504)(*piVar9 + 0x20 + *(int *)(unaff_EBP + -0x24),iVar2 + 0xe,
                    *(undefined4 *)(unaff_EBP + -0x10),iVar2 + 0x18,
                    *(int *)(unaff_EBP + -0x18) + 0xe);
    (*DAT_0097b504)(*piVar9 + 0x30 + *(int *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                    *(undefined4 *)(unaff_EBP + -0x10),iVar2 + 0xd,*(int *)(unaff_EBP + -0x18) + 0xe
                   );
    if (*(int *)(unaff_EBP + -0x60) == 0) {
LAB_0076b59c:
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    }
    else {
      iVar2 = 0;
      if (*piVar9 != 0) {
        iVar2 = *(int *)(*piVar9 + -4);
      }
      if (*(int *)(unaff_EBP + -0x28) + 1 == iVar2) goto LAB_0076b59c;
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    *(uint *)(unaff_EBP + -0x60) = (uint)(*(int *)(unaff_EBP + -0x60) == 0);
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      piStack_194 = (int *)0x76b5c0;
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x5c;
    iVar2 = *(int *)(unaff_EBP + -0x1c);
  } while( true );
}


