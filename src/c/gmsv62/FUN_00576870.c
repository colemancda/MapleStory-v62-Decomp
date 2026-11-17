/* FUN_00576870 - 0x00576870 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00576870(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 *puStack_b0;
  int *piStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int *piStack_74;
  undefined4 *puStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  if (iVar4 == -1) {
    iVar4 = 0;
  }
  puStack_58 = (undefined4 *)0x3;
  iStack_5c = 0;
  iStack_60 = 0x57689d;
  FUN_004031b7();
  iVar2 = *(int *)(extraout_ECX + 0x35b4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    puStack_58 = (undefined4 *)0x80004003;
    iStack_5c = 0x5768b2;
    FUN_00878dfb();
  }
  puStack_58 = (undefined4 *)(unaff_EBP + -0x34);
  iStack_5c = unaff_EBP + 8;
  iStack_60 = 0x5768c5;
  FUN_00425067();
  puStack_58 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_5c = 0x5768d2;
  puStack_58 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_58 < 0) {
    iStack_5c = 0x5768dd;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x35b4) == 0) {
    puStack_58 = (undefined4 *)0x80004003;
    iStack_5c = 0x5768ef;
    FUN_00878dfb();
  }
  puStack_58 = (undefined4 *)0x5768fa;
  uVar1 = FUN_0042fb0a();
  iVar2 = *(int *)(extraout_ECX + 0x35b4);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  if (iVar2 == 0) {
    puStack_58 = (undefined4 *)0x80004003;
    iStack_5c = 0x57690f;
    FUN_00878dfb();
  }
  puStack_58 = (undefined4 *)0x57691a;
  iVar2 = FUN_0042fb34();
  puStack_58 = &DAT_00980690;
  iStack_5c = 0x576929;
  FUN_00403191();
  puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_60 = iVar4 * 0xd3 + 0x174 + extraout_ECX;
  *(int **)(unaff_EBP + -0x24) = &iStack_5c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(int *)(unaff_EBP + -0x20) = iStack_60;
  uStack_64 = 0x57694d;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x57695c;
  FUN_0044974c();
  iStack_60 = 0x576963;
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x24) = uVar1;
  puStack_58 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_5c = 0x576973;
  puStack_58 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_58 < 0) {
    iStack_5c = 0x57697e;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    puStack_58 = (undefined4 *)0x80004003;
    iStack_5c = 0x57698e;
    FUN_00878dfb();
  }
  piVar3 = *(int **)(unaff_EBP + 8);
  puStack_58 = (undefined4 *)0xffffff;
  iVar4 = *(int *)(unaff_EBP + -0x14);
  uStack_64 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined4 *)0x5769a8;
  piStack_6c = piVar3;
  iStack_60 = iVar4;
  iStack_5c = iVar2;
  iVar2 = (**(code **)(*piVar3 + 0x8c))();
  if (iVar2 < 0) {
    puStack_70 = (undefined4 *)&DAT_00963cc8;
    uStack_7c = 0x5769b8;
    iStack_78 = iVar2;
    piStack_74 = piVar3;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 != 10 && -1 < iVar4 + -10) {
    do {
      puStack_70 = &DAT_00980690;
      piStack_74 = (int *)0x5769d4;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x36c0);
      piVar3 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piVar3 == (int *)0x0) {
        puStack_70 = (undefined4 *)0x80004003;
        piStack_74 = (int *)0x5769f2;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar4 = *piVar3;
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_78 = *(int *)(unaff_EBP + -0x40);
      uStack_84 = 0;
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x10);
      piStack_74 = *(int **)(unaff_EBP + -0x3c);
      *(int **)(unaff_EBP + -0x1c) = piVar3;
      puStack_70 = *(undefined4 **)(unaff_EBP + -0x38);
      puStack_90 = (undefined4 *)0x576a15;
      piStack_8c = piVar3;
      iVar4 = (**(code **)(iVar4 + 0x80))();
      if (iVar4 < 0) {
        puStack_70 = (undefined4 *)&DAT_00963cc8;
        piStack_74 = *(int **)(unaff_EBP + -0x1c);
        uStack_7c = 0x576a27;
        iStack_78 = iVar4;
        FUN_00878e09();
      }
      puStack_70 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_74 = (int *)0x576a34;
      puStack_70 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_70 < 0) {
        piStack_74 = (int *)0x576a3f;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 9;
    } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x14) + -10);
  }
  puStack_70 = &DAT_00980690;
  piStack_74 = (int *)0x576a5f;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x36bc);
  piVar3 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar3 == (int *)0x0) {
    puStack_70 = (undefined4 *)0x80004003;
    piStack_74 = (int *)0x576a7d;
    FUN_00878dfb();
    piVar3 = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piVar3;
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_78 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_84 = 0;
  piStack_74 = *(int **)(unaff_EBP + -0x3c);
  uStack_88 = 0;
  *(int **)(unaff_EBP + -0x18) = piVar3;
  puStack_70 = *(undefined4 **)(unaff_EBP + -0x38);
  puStack_90 = (undefined4 *)0x576a9f;
  piStack_8c = piVar3;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_90 = (undefined4 *)&DAT_00963cc8;
    uStack_94 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_9c = 0x576ab1;
    iStack_98 = iVar4;
    FUN_00878e09();
  }
  puStack_90 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_94 = 0x576abe;
  puStack_90 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_90 < 0) {
    uStack_94 = 0x576ac9;
    FUN_00878dfb();
  }
  puStack_90 = &DAT_00980690;
  uStack_94 = 0x576ad6;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x36c4);
  piStack_ac = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_ac == (int *)0x0) {
    puStack_90 = (undefined4 *)0x80004003;
    uStack_94 = 0x576af4;
    FUN_00878dfb();
    piStack_ac = *(int **)(unaff_EBP + 8);
  }
  iVar4 = *piStack_ac;
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_98 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_a4 = 0;
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_a8 = *(int *)(unaff_EBP + -0x14) + -10;
  *(int **)(unaff_EBP + -0x18) = piStack_ac;
  puStack_90 = *(undefined4 **)(unaff_EBP + -0x38);
  puStack_b0 = (undefined4 *)0x576b1b;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_b0 = (undefined4 *)&DAT_00963cc8;
    iStack_b4 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_bc = 0x576b2d;
    iStack_b8 = iVar4;
    FUN_00878e09();
  }
  puStack_b0 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_b4 = 0x576b3a;
  puStack_b0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b0 < 0) {
    iStack_b4 = 0x576b45;
    FUN_00878dfb();
  }
  puStack_b0 = &DAT_00980690;
  iStack_b4 = 0x576b53;
  FUN_00403191();
  puStack_b0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b4 = 0x576b60;
  FUN_00424aee();
  puStack_b0 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_b4 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b8 = 0x576b77;
  iStack_b8 = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_bc;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + -0x20));
  uVar1 = 2;
  iVar4 = (*(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x24)) / 2 + -1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004115d9(iVar4,2);
  FUN_00448e3a(iVar4,uVar1);
  puStack_b0 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b4 = 0x576bb5;
  puStack_b0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b0 < 0) {
    iStack_b4 = 0x576bc0;
    FUN_00878dfb();
  }
  puStack_b0 = (undefined4 *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_b4 = 0x576bcd;
  puStack_b0 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_b0 < 0) {
    iStack_b4 = 0x576bd8;
    FUN_00878dfb();
  }
  puStack_b0 = (undefined4 *)0x576be0;
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


