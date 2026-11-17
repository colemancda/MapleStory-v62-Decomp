/* ptr_00780000 - 0x00780000 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00780000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar6;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined *puStack_4;
  
  while( true ) {
    puStack_4 = (undefined *)0x780006;
    iVar1 = (**(code **)(param_1 + 0x80))();
    if (iVar1 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    *(bool *)(unaff_EBP + 0xb) = *(int *)(unaff_EBX + 0x580) != 0;
    iVar1 = FUN_0040e48b();
    if (iVar1 - (uint)*(byte *)(unaff_EBP + 0xb) <= *(uint *)(unaff_EBP + -0x18)) break;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBX + 0x57c);
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    param_1 = *piVar5;
    *(int **)(unaff_EBP + -0x14) = piVar5;
  }
  FUN_004031b7();
  uVar4 = *(undefined4 *)(unaff_EBX + 0x580);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBX + 0x580) == 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBX + 0x580);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x10);
  *(int **)(unaff_EBP + 8) = piVar5;
  iVar2 = FUN_0040e48b();
  iVar3 = FUN_0040e48b();
  iVar1 = *piVar5;
  *(int *)(unaff_EBP + -0x14) = iVar2 - iVar3;
  puStack_4 = (undefined *)0x7800bc;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    puStack_4 = &DAT_00963cc8;
    uStack_8 = *(undefined4 *)(unaff_EBP + 8);
    uStack_10 = 0x7800ce;
    iStack_c = iVar1;
    FUN_00878e09();
  }
  puStack_4 = (undefined *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_8 = 0x7800db;
  puStack_4 = (undefined *)FUN_00402bc3();
  if ((int)puStack_4 < 0) {
    uStack_8 = 0x7800e6;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBX + 0x578) == 0) {
    puStack_4 = (undefined *)0x80004003;
    uStack_8 = 0x7800fa;
    FUN_00878dfb();
  }
  puStack_4 = (undefined *)0x780105;
  uVar4 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x780114;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBX + 0x590) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x780123;
      FUN_00878dfb();
    }
    puStack_4 = (undefined *)0x780131;
    uVar4 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    puStack_4 = (undefined *)0x78013d;
    iVar1 = FUN_0040e53d();
    if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + 8)) break;
    puStack_4 = (undefined *)0x3;
    uStack_8 = 0xffffffff;
    iStack_c = 0x780157;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBX + 0x584);
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar5 == (int *)0x0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x780171;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar5;
    uStack_14 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_18 = *(undefined4 *)(unaff_EBP + 8);
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_c = *(int *)(unaff_EBP + -0x30);
    uStack_8 = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_1c = 0;
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    puStack_4 = *(undefined **)(unaff_EBP + -0x28);
    puStack_24 = (undefined4 *)0x780194;
    piStack_20 = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_4 = &DAT_00963cc8;
      uStack_8 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_10 = 0x7801a6;
      iStack_c = iVar1;
      FUN_00878e09();
    }
    puStack_4 = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_8 = 0x7801b3;
    puStack_4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_4 < 0) {
      uStack_8 = 0x7801be;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  }
  if (*(int *)(unaff_EBX + 0x57c) == 0) {
    puStack_4 = (undefined *)0x80004003;
    uStack_8 = 0x7801e0;
    FUN_00878dfb();
  }
  puStack_4 = (undefined *)0x7801e7;
  uVar4 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x7801f6;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBX + 0x594) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x78020b;
      FUN_00878dfb();
    }
    puStack_4 = (undefined *)0x780215;
    uVar4 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    puStack_4 = (undefined *)0x780221;
    iVar1 = FUN_0040e53d();
    if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + 8)) break;
    if (*(int *)(unaff_EBX + 0x584) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x780244;
      FUN_00878dfb();
    }
    puStack_4 = (undefined *)0x78024b;
    uVar4 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_4 = (undefined *)0x80004003;
        uStack_8 = 0x78025a;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBX + 0x58c) == 0) {
        puStack_4 = (undefined *)0x80004003;
        uStack_8 = 0x780269;
        FUN_00878dfb();
      }
      puStack_4 = (undefined *)0x780277;
      uVar4 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      puStack_4 = (undefined *)0x780283;
      iVar1 = FUN_0040e48b();
      if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + -0x18)) break;
      puStack_4 = (undefined *)0x3;
      uStack_8 = 0xffffffff;
      iStack_c = 0x78029d;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBX + 0x588);
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (piVar5 == (int *)0x0) {
        puStack_4 = (undefined *)0x80004003;
        uStack_8 = 0x7802b7;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x10);
      }
      iVar1 = *piVar5;
      uStack_14 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_18 = *(undefined4 *)(unaff_EBP + 8);
      uStack_10 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_1c = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_c = *(int *)(unaff_EBP + -0x30);
      uStack_8 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      puStack_4 = *(undefined **)(unaff_EBP + -0x28);
      puStack_24 = (undefined4 *)0x7802db;
      piStack_20 = piVar5;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_4 = &DAT_00963cc8;
        uStack_8 = *(undefined4 *)(unaff_EBP + -0x1c);
        uStack_10 = 0x7802ed;
        iStack_c = iVar1;
        FUN_00878e09();
      }
      puStack_4 = (undefined *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_8 = 0x7802fa;
      puStack_4 = (undefined *)FUN_00402bc3();
      if ((int)puStack_4 < 0) {
        uStack_8 = 0x780305;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  }
  if (*(int *)(unaff_EBX + 0x580) == 0) {
    puStack_4 = (undefined *)0x80004003;
    uStack_8 = 0x780329;
    FUN_00878dfb();
  }
  puStack_4 = (undefined *)0x780334;
  uVar4 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x780343;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBX + 0x598) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x780358;
      FUN_00878dfb();
    }
    puStack_4 = (undefined *)0x780362;
    uVar4 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    puStack_4 = (undefined *)0x78036e;
    iVar1 = FUN_0040e53d();
    puStack_4 = (undefined *)0x3;
    uStack_8 = 0xffffffff;
    if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + 8)) break;
    iStack_c = 0x780388;
    FUN_004031b7();
    uVar4 = *(undefined4 *)(unaff_EBX + 0x58c);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x7803a2;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBX + 0x58c) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x7803b0;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBX + 0x58c);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_4 = (undefined *)0x80004003;
      uStack_8 = 0x7803c4;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    puStack_4 = (undefined *)0x7803d1;
    iVar2 = FUN_0040e48b();
    puStack_4 = (undefined *)0x7803db;
    iVar3 = FUN_0040e48b();
    iVar1 = *piVar5;
    *(int *)(unaff_EBP + -0x14) = iVar2 - iVar3;
    uStack_14 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_18 = *(undefined4 *)(unaff_EBP + 8);
    uStack_10 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_1c = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_c = *(int *)(unaff_EBP + -0x30);
    piStack_20 = *(int **)(unaff_EBP + -0x1c);
    uStack_8 = *(undefined4 *)(unaff_EBP + -0x2c);
    puStack_4 = *(undefined **)(unaff_EBP + -0x28);
    puStack_24 = (undefined4 *)0x780400;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_4 = &DAT_00963cc8;
      uStack_8 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_10 = 0x780412;
      iStack_c = iVar1;
      FUN_00878e09();
    }
    puStack_4 = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_8 = 0x78041f;
    puStack_4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_4 < 0) {
      uStack_8 = 0x78042a;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  }
  iStack_c = 0x78043f;
  FUN_004031b7();
  uVar4 = *(undefined4 *)(unaff_EBX + 0x590);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_4 = (undefined *)0x80004003;
    uStack_8 = 0x780459;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBX + 0x590) == 0) {
    puStack_4 = (undefined *)0x80004003;
    uStack_8 = 0x780467;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBX + 0x590);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_4 = (undefined *)0x80004003;
    uStack_8 = 0x78047b;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x10);
  *(int **)(unaff_EBP + 8) = piVar5;
  puStack_4 = (undefined *)0x780488;
  iVar2 = FUN_0040e53d();
  puStack_4 = (undefined *)0x780492;
  iVar3 = FUN_0040e53d();
  iVar1 = *piVar5;
  *(int *)(unaff_EBP + -0x14) = iVar2 - iVar3;
  uStack_14 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_10 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_c = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_8 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_1c = 0;
  piStack_20 = *(int **)(unaff_EBP + 8);
  puStack_4 = *(undefined **)(unaff_EBP + -0x28);
  puStack_24 = (undefined4 *)0x7804b6;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    puStack_24 = (undefined4 *)&DAT_00963cc8;
    iStack_28 = *(undefined4 *)(unaff_EBP + 8);
    uStack_30 = 0x7804c8;
    iStack_2c = iVar1;
    FUN_00878e09();
  }
  puStack_24 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_28 = 0x7804d5;
  puStack_24 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_24 < 0) {
    iStack_28 = 0x7804e0;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBX + 0x590) == 0) {
    puStack_24 = (undefined4 *)0x80004003;
    iStack_28 = 0x7804f3;
    FUN_00878dfb();
  }
  puStack_24 = (undefined4 *)0x7804fe;
  uVar4 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_24 = (undefined4 *)0x80004003;
      iStack_28 = 0x780511;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBX + 0x598) == 0) {
      puStack_24 = (undefined4 *)0x80004003;
      iStack_28 = 0x78052a;
      FUN_00878dfb();
    }
    puStack_24 = (undefined4 *)0x780534;
    uVar4 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_24 = (undefined4 *)0x780540;
    iVar1 = FUN_0040e48b();
    puStack_24 = (undefined4 *)0x3;
    iStack_28 = 0xffffffff;
    if ((uint)(*(int *)(unaff_EBP + 8) - iVar1) <= *(uint *)(unaff_EBP + -0x18)) break;
    iStack_2c = 0x780556;
    FUN_004031b7();
    uVar4 = *(undefined4 *)(unaff_EBX + 0x594);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_24 = (undefined4 *)0x80004003;
      iStack_28 = 0x780576;
      FUN_00878dfb();
    }
    puStack_24 = (undefined4 *)(unaff_EBP + -0x34);
    iStack_2c = 0x780582;
    iStack_28 = uVar4;
    FUN_004115d9();
    iStack_2c = 0x780589;
    iVar1 = FUN_0040e53d();
    iStack_2c = 0x780593;
    iStack_2c = FUN_0040e53d();
    iStack_2c = iStack_2c - iVar1;
    uStack_30 = *(uint *)(unaff_EBP + -0x18);
    FUN_004115d9();
    FUN_00470739();
    puStack_24 = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_28 = 0x7805b5;
    puStack_24 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_24 < 0) {
      iStack_28 = 0x7805c0;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  }
  iStack_2c = 0x7805d0;
  FUN_004295f1();
  iStack_28 = *(undefined4 *)(unaff_EBX + 0x598);
  puStack_24 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_2c = 0x7805e2;
  FUN_004115d9();
  iStack_2c = 0x7805e9;
  iVar1 = FUN_0040e53d();
  iStack_2c = 0x7805f3;
  FUN_004115d9();
  iStack_2c = 0x7805fa;
  iStack_2c = FUN_0040e53d();
  iStack_2c = iStack_2c - iVar1;
  uStack_30 = 0x780604;
  FUN_004115d9();
  uStack_30 = 0x78060b;
  iVar1 = FUN_0040e48b();
  uStack_30 = 0x780615;
  FUN_004115d9();
  uStack_30 = 0x78061c;
  iVar2 = FUN_0040e48b();
  uStack_30 = iVar2 - iVar1;
  FUN_004115d9();
  FUN_00470739();
  puStack_24 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_28 = 0x78063b;
  puStack_24 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_24 < 0) {
    iStack_28 = 0x780646;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x3c) + 0x2b44;
  do {
    if (**(int **)(unaff_EBP + -0x1c) != 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_24 = (undefined4 *)(unaff_EBP + -0x50);
      iStack_28 = unaff_EBP + -0x4c;
      iStack_2c = unaff_EBP + -0x58;
      uStack_30 = unaff_EBP - 0x14;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_0085c53b(*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x44,unaff_EBP + 8,
                   unaff_EBP + -0x54);
      puStack_24 = *(undefined4 **)(unaff_EBP + -0x44);
      iStack_28 = 0x7806ac;
      iVar1 = FUN_007c00e8();
      *(int *)(unaff_EBP + -0x20) = iVar1;
      puStack_24 = &DAT_00980690;
      if (iVar1 == 0) {
        iStack_28 = 0x7807e4;
        FUN_00424aee();
        puStack_24 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_28 = 0x7807f4;
        FUN_00424aee();
        puStack_24 = (undefined4 *)(unaff_EBP + -0x78);
        iStack_28 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_2c = 0x78080b;
        iStack_2c = FUN_004458be();
        uStack_30 = 0x780814;
        uVar4 = FUN_00449713();
        *(uint **)(unaff_EBP + -0x48) = &uStack_30;
        uStack_30 = extraout_ECX_00;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_0044974c();
        iVar1 = FUN_004a2734();
        iVar1 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
        uVar4 = 5;
        FUN_0044974c(5,iVar1);
        FUN_005c1d2c(uVar4,iVar1);
        puStack_24 = (undefined4 *)(unaff_EBP + -0x98);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_28 = 0x78085f;
        puStack_24 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_24 < 0) {
          iStack_28 = 0x78086a;
          FUN_00878dfb();
        }
        puStack_24 = (undefined4 *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_28 = 0x780877;
        puStack_24 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_24 < 0) {
          iStack_28 = 0x780882;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      else {
        iStack_28 = 0x7806c0;
        FUN_00424aee();
        puStack_24 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_28 = 0x7806d0;
        FUN_00424aee();
        puStack_24 = (undefined4 *)(unaff_EBP + -0x68);
        iStack_28 = unaff_EBP + -0xb8;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        iStack_2c = 0x7806e7;
        iStack_2c = FUN_004458be();
        uStack_30 = 0x7806f0;
        uVar4 = FUN_00449713();
        *(uint **)(unaff_EBP + -0x48) = &uStack_30;
        uStack_30 = extraout_ECX;
        FUN_00448a17(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_0044974c();
        iVar1 = FUN_004a2734();
        iVar1 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
        uVar4 = 5;
        FUN_0044974c(5,iVar1);
        FUN_005c1d2c(uVar4,iVar1);
        puStack_24 = (undefined4 *)(unaff_EBP + -0xb8);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_28 = 0x78073b;
        puStack_24 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_24 < 0) {
          iStack_28 = 0x780746;
          FUN_00878dfb();
        }
        puStack_24 = (undefined4 *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_28 = 0x780753;
        puStack_24 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_24 < 0) {
          iStack_28 = 0x78075e;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x20);
        puStack_24 = (undefined4 *)0x780768;
        iVar1 = (**(code **)(*piVar5 + 8))();
        if (iVar1 == 0) {
          *(int *)(unaff_EBP + -0x20) = (piVar5[0x35c] << 6) / 100;
        }
        else {
          iVar1 = *(int *)(unaff_EBP + -0x3c);
          puStack_24 = (undefined4 *)(unaff_EBP + -0x2c);
          iStack_28 = 0x78077a;
          iVar2 = FUN_00455c59();
          puStack_24 = *(undefined4 **)(*(int *)(iVar2 + 4) + 0x65);
          iStack_28 = *(int *)(iVar2 + 4) + 0x61;
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_2c = 0x78078d;
          uVar4 = FUN_0045f084();
          iStack_2c = *(undefined4 *)(iVar1 + 0x2104);
          uStack_30 = iVar1 + 0x20fc;
          *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
          iVar1 = FUN_00413367();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          *(int *)(unaff_EBP + -0x20) = ((int)*(short *)(unaff_EBP + -0x20) << 6) / iVar1;
          puStack_24 = (undefined4 *)0x7807c0;
          FUN_0045e4a2();
        }
      }
      puStack_24 = (undefined4 *)0x3;
      iStack_28 = 0xff;
      iStack_2c = 0x780894;
      FUN_004295f1();
      iStack_28 = *(undefined4 *)(unaff_EBX + 0x5a0);
      puStack_24 = (undefined4 *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_2c = 0x7808ae;
      FUN_0044974c();
      iStack_2c = 0x7808b5;
      iVar1 = FUN_004a2734();
      iStack_2c = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 8;
      uStack_30 = 0x7808c8;
      FUN_004115d9();
      uStack_30 = 0x7808cf;
      iVar1 = FUN_0040e48b();
      uStack_30 = iVar1 - 0x48;
      FUN_004115d9();
      FUN_00470739();
      puStack_24 = (undefined4 *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_28 = 0x7808f2;
      puStack_24 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_24 < 0) {
        iStack_28 = 0x7808fd;
        FUN_00878dfb();
      }
      puStack_24 = (undefined4 *)0x780905;
      FUN_004115d9();
      puStack_24 = (undefined4 *)0x78090c;
      iVar1 = FUN_0040e48b();
      uVar6 = iVar1 - 0x48;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + -0x48;
      while( true ) {
        puStack_24 = (undefined4 *)0x780922;
        FUN_004115d9();
        puStack_24 = (undefined4 *)0x780929;
        iVar1 = FUN_0040e48b();
        puStack_24 = (undefined4 *)0x3;
        iStack_28 = 0xff;
        if ((uint)(iVar1 + *(int *)(unaff_EBP + -0x20)) <= uVar6) break;
        iStack_2c = 0x78093e;
        FUN_004295f1();
        iStack_28 = *(undefined4 *)(unaff_EBX + 0x5a4);
        puStack_24 = (undefined4 *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_2c = 0x780958;
        FUN_0044974c();
        iStack_2c = 0x78095f;
        iVar1 = FUN_004a2734();
        iStack_2c = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 8;
        uStack_30 = uVar6;
        FUN_004115d9();
        FUN_00470739();
        puStack_24 = (undefined4 *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_28 = 0x78098a;
        puStack_24 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_24 < 0) {
          iStack_28 = 0x780995;
          FUN_00878dfb();
        }
        uVar6 = uVar6 + 1;
      }
      iStack_2c = 0x7809a3;
      FUN_004295f1();
      iStack_28 = *(undefined4 *)(unaff_EBX + 0x59c);
      puStack_24 = (undefined4 *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_2c = 0x7809bd;
      FUN_0044974c();
      iStack_2c = 0x7809c4;
      iVar1 = FUN_004a2734();
      iStack_2c = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
      uStack_30 = 0x7809d7;
      FUN_004115d9();
      uStack_30 = 0x7809de;
      iVar1 = FUN_0040e48b();
      uStack_30 = iVar1 - 0x4b;
      FUN_004115d9();
      FUN_00470739();
      puStack_24 = (undefined4 *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_28 = 0x780a01;
      puStack_24 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_24 < 0) {
        iStack_28 = 0x780a0c;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_24 = (undefined4 *)0x780a1b;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_24 = (undefined4 *)0x780a27;
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
  } while (*(int *)(unaff_EBP + -0x18) < 6);
  puStack_24 = (undefined4 *)0x780a45;
  FUN_004125e6();
  puStack_24 = (undefined4 *)0x780a4d;
  FUN_004497b5();
  puStack_24 = (undefined4 *)0x780a55;
  FUN_004497b5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


