/* FUN_00571ba9 - 0x00571ba9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00571ba9(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  
  FUN_00879bb8();
  puStack_5c = (undefined4 *)0x3;
  iStack_60 = 0;
  iStack_64 = 0x571bc8;
  FUN_004031b7();
  iVar3 = *(int *)(extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4);
  piVar5 = (int *)(extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    puStack_5c = (undefined4 *)0x80004003;
    iStack_60 = 0x571be8;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)(unaff_EBP + -0x38);
  iStack_60 = unaff_EBP + -0x10;
  iStack_64 = 0x571bf7;
  FUN_00425067();
  puStack_5c = (undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_60 = 0x571c04;
  puStack_5c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    iStack_60 = 0x571c0f;
    FUN_00878dfb();
  }
  if (*piVar5 == 0) {
    puStack_5c = (undefined4 *)0x80004003;
    iStack_60 = 0x571c1d;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)0x571c24;
  uVar2 = FUN_0042fb0a();
  iVar3 = *piVar5;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  if (iVar3 == 0) {
    puStack_5c = (undefined4 *)0x80004003;
    iStack_60 = 0x571c35;
    FUN_00878dfb();
  }
  puStack_5c = (undefined4 *)0x571c3c;
  iVar3 = FUN_0042fb34();
  puStack_5c = &DAT_00980690;
  iStack_60 = 0x571c4b;
  FUN_00403191();
  puStack_5c = (undefined4 *)(unaff_EBP + -0x48);
  iStack_60 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_64 = 0x571c5d;
  iVar4 = FUN_00571f60();
  iStack_64 = *(int *)(extraout_ECX + 0x68 + iVar4 * 4) + 4;
  *(int **)(unaff_EBP + -0x28) = &iStack_60;
  uStack_68 = 0x571c70;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_64 = 0x571c7f;
  FUN_0044974c();
  iStack_64 = 0x571c86;
  uVar2 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  puStack_5c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_60 = 0x571c96;
  puStack_5c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    iStack_60 = 0x571ca1;
    FUN_00878dfb();
  }
  piStack_70 = *(int **)(unaff_EBP + -0x10);
  if (piStack_70 == (int *)0x0) {
    puStack_5c = (undefined4 *)0x80004003;
    iStack_60 = 0x571cb2;
    FUN_00878dfb();
    piStack_70 = *(int **)(unaff_EBP + -0x10);
  }
  iVar4 = *piStack_70;
  puStack_5c = (undefined4 *)0xffffff;
  iVar1 = *(int *)(unaff_EBP + -0x18);
  uStack_68 = 0;
  uStack_6c = 0;
  *(int **)(unaff_EBP + -0x14) = piStack_70;
  puStack_74 = (undefined4 *)0x571ccd;
  iStack_64 = iVar1;
  iStack_60 = iVar3;
  iVar3 = (**(code **)(iVar4 + 0x8c))();
  if (iVar3 < 0) {
    puStack_74 = (undefined4 *)&DAT_00963cc8;
    uStack_78 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_80 = 0x571cdf;
    iStack_7c = iVar3;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < iVar1 + -10) {
    *(uint *)(unaff_EBP + -0x1c) =
         extraout_ECX + 0xe0 + (uint)(*(int *)(unaff_EBP + 0xc) != 0) * 0xc;
    do {
      puStack_74 = &DAT_00980690;
      uStack_78 = 0x571d13;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x20) = **(undefined4 **)(unaff_EBP + -0x1c);
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piVar5 == (int *)0x0) {
        puStack_74 = (undefined4 *)0x80004003;
        uStack_78 = 0x571d30;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x10);
      }
      iVar3 = *piVar5;
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_7c = *(int *)(unaff_EBP + -0x44);
      uStack_88 = 0;
      uStack_8c = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_78 = *(undefined4 *)(unaff_EBP + -0x40);
      *(int **)(unaff_EBP + -0x24) = piVar5;
      puStack_74 = *(undefined4 **)(unaff_EBP + -0x3c);
      puStack_94 = (undefined4 *)0x571d53;
      piStack_90 = piVar5;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_74 = (undefined4 *)&DAT_00963cc8;
        uStack_78 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_80 = 0x571d65;
        iStack_7c = iVar3;
        FUN_00878e09();
      }
      puStack_74 = (undefined4 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_78 = 0x571d72;
      puStack_74 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_74 < 0) {
        uStack_78 = 0x571d7d;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 9;
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x18) + -10);
  }
  puStack_74 = &DAT_00980690;
  uStack_78 = 0x571d9f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar6 = (uint)(*(int *)(unaff_EBP + 0xc) != 0);
  *(uint *)(unaff_EBP + 0xc) = uVar6;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0xdc + uVar6 * 0xc);
  piVar5 = *(int **)(unaff_EBP + -0x10);
  if (piVar5 == (int *)0x0) {
    puStack_74 = (undefined4 *)0x80004003;
    uStack_78 = 0x571dcc;
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piVar5;
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_7c = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_88 = 0;
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_8c = 0;
  *(int **)(unaff_EBP + -0x20) = piVar5;
  puStack_74 = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_94 = (undefined4 *)0x571dee;
  piStack_90 = piVar5;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_94 = (undefined4 *)&DAT_00963cc8;
    uStack_98 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_a0 = 0x571e00;
    iStack_9c = iVar3;
    FUN_00878e09();
  }
  puStack_94 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_98 = 0x571e0d;
  puStack_94 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_94 < 0) {
    uStack_98 = 0x571e18;
    FUN_00878dfb();
  }
  puStack_94 = &DAT_00980690;
  uStack_98 = 0x571e25;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x24) =
       *(undefined4 *)(extraout_ECX + (*(int *)(unaff_EBP + 0xc) * 3 + 0x39) * 4);
  piStack_b0 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_b0 == (int *)0x0) {
    puStack_94 = (undefined4 *)0x80004003;
    uStack_98 = 0x571e47;
    FUN_00878dfb();
    piStack_b0 = *(int **)(unaff_EBP + -0x10);
  }
  iVar3 = *piStack_b0;
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_9c = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_a8 = 0;
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_ac = *(int *)(unaff_EBP + -0x18) + -10;
  *(int **)(unaff_EBP + -0x20) = piStack_b0;
  puStack_94 = *(undefined4 **)(unaff_EBP + -0x3c);
  piStack_b4 = (int *)0x571e6e;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    piStack_b4 = (int *)&DAT_00963cc8;
    iStack_b8 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_c0 = 0x571e80;
    iStack_bc = iVar3;
    FUN_00878e09();
  }
  piStack_b4 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_b8 = 0x571e8d;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    iStack_b8 = 0x571e98;
    FUN_00878dfb();
  }
  piStack_b4 = &DAT_00980690;
  iStack_b8 = 0x571ea6;
  FUN_00403191();
  piStack_b4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b8 = 0x571eb3;
  FUN_00403191();
  piStack_b4 = (int *)(unaff_EBP + -0x58);
  iStack_b8 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_bc = 0x571ece;
  iStack_bc = FUN_00449749();
  uStack_c0 = *(undefined4 *)(unaff_EBP + 8);
  iVar3 = FUN_00571f60();
  iVar3 = *(int *)(extraout_ECX + 0x68 + iVar3 * 4);
  *(undefined4 **)(unaff_EBP + 8) = &uStack_c0;
  FUN_00448a17(iVar3 + 4);
  uVar2 = 2;
  iVar3 = (*(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x28)) / 2 + -1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004115d9(iVar3,2);
  FUN_00448e3a(iVar3,uVar2);
  piStack_b4 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b8 = 0x571f1b;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    iStack_b8 = 0x571f26;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_b8 = 0x571f33;
  piStack_b4 = (int *)FUN_00402bc3();
  if ((int)piStack_b4 < 0) {
    iStack_b8 = 0x571f3e;
    FUN_00878dfb();
  }
  piStack_b4 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_b4 != (int *)0x0) {
    iStack_b8 = 0x571f4f;
    (**(code **)(*piStack_b4 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


