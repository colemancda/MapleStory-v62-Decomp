/* FUN_005763c8 - 0x005763c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005763c8(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  int unaff_EBP;
  undefined4 uStack_d4;
  int iStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 *puStack_70;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  puStack_70 = (undefined4 *)0x5763e2;
  iVar1 = FUN_00576edb();
  iVar4 = *(int *)(unaff_EBP + 8);
  iVar6 = iVar4 + iVar1 * -3;
  iStack_74 = 0x5763f4;
  puStack_70 = (undefined4 *)iVar4;
  iVar1 = FUN_00576395();
  if (iVar1 != 0) {
    puStack_70 = (undefined4 *)0x3;
    iStack_74 = 0;
    *(int *)(unaff_EBP + -0x3c) = (iVar6 % 3) * 0x75 + 0x4a;
    *(int *)(unaff_EBP + -0x38) = (iVar6 / 3) * 0x75 + 0x96;
    iStack_78 = 0x576428;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = *(int *)(extraout_ECX + 0x34c4 + iVar4 * 4);
    piVar3 = (int *)(extraout_ECX + 0x34c4 + iVar4 * 4);
    *(int **)(unaff_EBP + -0x34) = piVar3;
    if (iVar1 == 0) {
      puStack_70 = (undefined4 *)0x80004003;
      iStack_74 = 0x57644a;
      FUN_00878dfb();
    }
    puStack_70 = (undefined4 *)(unaff_EBP + -0x4c);
    iStack_74 = unaff_EBP + -0x10;
    iStack_78 = 0x576459;
    FUN_00425067();
    puStack_70 = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_74 = 0x576466;
    puStack_70 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_70 < 0) {
      iStack_74 = 0x576471;
      FUN_00878dfb();
    }
    if (*piVar3 == 0) {
      puStack_70 = (undefined4 *)0x80004003;
      iStack_74 = 0x576480;
      FUN_00878dfb();
    }
    puStack_70 = (undefined4 *)0x576487;
    uVar2 = FUN_0042fb0a();
    iVar1 = *piVar3;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    if (iVar1 == 0) {
      puStack_70 = (undefined4 *)0x80004003;
      iStack_74 = 0x576499;
      FUN_00878dfb();
    }
    puStack_70 = (undefined4 *)0x5764a0;
    uVar2 = FUN_0042fb34();
    puStack_70 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    iStack_74 = 0x5764b1;
    FUN_00403191();
    puStack_70 = (undefined4 *)(unaff_EBP + -0x5c);
    iStack_78 = iVar4 * 0xd3 + 0x174 + extraout_ECX;
    *(int **)(unaff_EBP + -0x30) = &iStack_74;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    *(int *)(unaff_EBP + -0x2c) = iStack_78;
    uStack_7c = 0x5764d5;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_78 = 0x5764e4;
    FUN_0044974c();
    iStack_78 = 0x5764eb;
    uVar2 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    puStack_70 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_74 = 0x5764fb;
    puStack_70 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_70 < 0) {
      iStack_74 = 0x576506;
      FUN_00878dfb();
    }
    piStack_84 = *(int **)(unaff_EBP + -0x10);
    if (piStack_84 == (int *)0x0) {
      puStack_70 = (undefined4 *)0x80004003;
      iStack_74 = 0x576517;
      FUN_00878dfb();
      piStack_84 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *(int *)(unaff_EBP + -0x18);
    iVar1 = *piStack_84;
    puStack_70 = (undefined4 *)0xffffff;
    iStack_74 = *(int *)(unaff_EBP + 8);
    *(int **)(unaff_EBP + -0x20) = piStack_84;
    uStack_7c = 0;
    uStack_80 = 0;
    puStack_88 = (undefined4 *)0x576536;
    iStack_78 = iVar4;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < 0) {
      puStack_88 = (undefined4 *)&DAT_00963cc8;
      uStack_8c = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_94 = 0x576548;
      iStack_90 = iVar1;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iVar1 = extraout_ECX;
    if (iVar4 != 10 && -1 < iVar4 + -10) {
      *(uint *)(unaff_EBP + -0x20) = extraout_ECX + ((*(int *)(unaff_EBP + 0xc) != 0) + 0x48f) * 0xc
      ;
      do {
        puStack_88 = &DAT_00980690;
        uStack_8c = 0x576576;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x24) = **(undefined4 **)(unaff_EBP + -0x20);
        piVar3 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar3 == (int *)0x0) {
          puStack_88 = (undefined4 *)0x80004003;
          uStack_8c = 0x576593;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + -0x10);
        }
        iVar4 = *piVar3;
        uStack_98 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_94 = *(undefined4 *)(unaff_EBP + -0x5c);
        iStack_90 = *(int *)(unaff_EBP + -0x58);
        uStack_9c = 0;
        uStack_a0 = *(undefined4 *)(unaff_EBP + 8);
        uStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
        *(int **)(unaff_EBP + -0x28) = piVar3;
        puStack_88 = *(undefined4 **)(unaff_EBP + -0x50);
        puStack_a8 = (undefined4 *)0x5765b6;
        piStack_a4 = piVar3;
        iVar4 = (**(code **)(iVar4 + 0x80))();
        if (iVar4 < 0) {
          puStack_88 = (undefined4 *)&DAT_00963cc8;
          uStack_8c = *(undefined4 *)(unaff_EBP + -0x28);
          uStack_94 = 0x5765c8;
          iStack_90 = iVar4;
          FUN_00878e09();
        }
        puStack_88 = (undefined4 *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uStack_8c = 0x5765d5;
        puStack_88 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_88 < 0) {
          uStack_8c = 0x5765e0;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 9;
      } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x18) + -10);
      iVar1 = *(int *)(unaff_EBP + -0x1c);
    }
    puStack_88 = &DAT_00980690;
    uStack_8c = 0x5765ff;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uVar5 = (uint)(*(int *)(unaff_EBP + 0xc) != 0);
    *(uint *)(unaff_EBP + -0x24) = uVar5;
    iVar1 = iVar1 + uVar5 * 0xc;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar1 + 14000);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + -0x28) = iVar1;
    if (piVar3 == (int *)0x0) {
      puStack_88 = (undefined4 *)0x80004003;
      uStack_8c = 0x576631;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar3;
    uStack_98 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_94 = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_90 = *(undefined4 *)(unaff_EBP + -0x58);
    uStack_9c = 0;
    uStack_8c = *(undefined4 *)(unaff_EBP + -0x54);
    uStack_a0 = 0;
    *(int **)(unaff_EBP + 8) = piVar3;
    puStack_88 = *(undefined4 **)(unaff_EBP + -0x50);
    puStack_a8 = (undefined4 *)0x576653;
    piStack_a4 = piVar3;
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < 0) {
      puStack_a8 = (undefined4 *)&DAT_00963cc8;
      uStack_ac = *(undefined4 *)(unaff_EBP + 8);
      uStack_b4 = 0x576665;
      iStack_b0 = iVar4;
      FUN_00878e09();
    }
    puStack_a8 = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_ac = 0x576672;
    puStack_a8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_a8 < 0) {
      uStack_ac = 0x57667d;
      FUN_00878dfb();
    }
    puStack_a8 = &DAT_00980690;
    uStack_ac = 0x576686;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x36b8);
    piStack_c4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piStack_c4 == (int *)0x0) {
      puStack_a8 = (undefined4 *)0x80004003;
      uStack_ac = 0x5766a7;
      FUN_00878dfb();
      piStack_c4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piStack_c4;
    uStack_b8 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_b4 = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x58);
    uStack_ac = *(undefined4 *)(unaff_EBP + -0x54);
    puStack_a8 = *(undefined4 **)(unaff_EBP + -0x50);
    uStack_bc = 0;
    iStack_c0 = *(int *)(unaff_EBP + -0x18) + -10;
    *(int **)(unaff_EBP + 8) = piStack_c4;
    piStack_c8 = (int *)0x5766cf;
    iVar4 = (**(code **)(iVar4 + 0x80))();
    if (iVar4 < 0) {
      piStack_c8 = (int *)&DAT_00963cc8;
      piStack_cc = *(int **)(unaff_EBP + 8);
      uStack_d4 = 0x5766e1;
      iStack_d0 = iVar4;
      FUN_00878e09();
    }
    piStack_c8 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_cc = (int *)0x5766ee;
    piStack_c8 = (int *)FUN_00402bc3();
    if ((int)piStack_c8 < 0) {
      piStack_cc = (int *)0x5766f9;
      FUN_00878dfb();
    }
    piStack_c8 = &DAT_00980690;
    piStack_cc = (int *)0x576702;
    FUN_00403191();
    piStack_c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_cc = (int *)0x57670f;
    FUN_00403191();
    piStack_c8 = (int *)(unaff_EBP + -0x6c);
    piStack_cc = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_d0 = 0x57672d;
    iStack_d0 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_d4;
    uStack_d4 = extraout_ECX_00;
    FUN_00448a17(*(undefined4 *)(unaff_EBP + -0x2c));
    uVar2 = 2;
    iVar4 = (*(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x30)) / 2 + -1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004115d9(iVar4,2);
    FUN_00448e3a(iVar4,uVar2);
    piStack_c8 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_cc = (int *)0x57676b;
    piStack_c8 = (int *)FUN_00402bc3();
    if ((int)piStack_c8 < 0) {
      piStack_cc = (int *)0x576776;
      FUN_00878dfb();
    }
    piStack_c8 = (int *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_cc = (int *)0x576783;
    piStack_c8 = (int *)FUN_00402bc3();
    if ((int)piStack_c8 < 0) {
      piStack_cc = (int *)0x57678e;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + -0x34);
    piStack_c8 = (int *)0x57679e;
    FUN_00424ed4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      piStack_c8 = &DAT_00980690;
      piStack_cc = (int *)0x5767b4;
      FUN_00403191();
      piStack_c8 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_cc = (int *)0x5767c1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        piStack_c8 = (int *)0x80004003;
        piStack_cc = (int *)0x5767d4;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + -0x14);
      uStack_d4 = *(undefined4 *)(unaff_EBP + -0x5c);
      iStack_d0 = *(int *)(unaff_EBP + -0x58);
      piStack_cc = *(int **)(unaff_EBP + -0x54);
      piStack_c8 = *(int **)(unaff_EBP + -0x50);
      iVar4 = (**(code **)(*piVar3 + 0x90))
                        (piVar3,*(int *)(unaff_EBP + -0x3c) + -0x1b,*(int *)(unaff_EBP + -0x38) + 9,
                         *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                         *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x60));
      if (iVar4 < 0) {
        piStack_c8 = (int *)&DAT_00963de8;
        uStack_d4 = 0x576816;
        iStack_d0 = iVar4;
        piStack_cc = piVar3;
        FUN_00878e09();
      }
      piStack_c8 = (int *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_cc = (int *)0x576823;
      piStack_c8 = (int *)FUN_00402bc3();
      if ((int)piStack_c8 < 0) {
        piStack_cc = (int *)0x57682e;
        FUN_00878dfb();
      }
      piStack_c8 = (int *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_cc = (int *)0x57683b;
      piStack_c8 = (int *)FUN_00402bc3();
      if ((int)piStack_c8 < 0) {
        piStack_cc = (int *)0x576846;
        FUN_00878dfb();
      }
    }
    piStack_c8 = (int *)0x57684e;
    FUN_00412600();
    piStack_c8 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_c8 != (int *)0x0) {
      piStack_cc = (int *)0x57685f;
      (**(code **)(*piStack_c8 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


