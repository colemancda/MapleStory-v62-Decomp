/* FUN_0077fe95 - 0x0077fe95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077fe95(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int unaff_EBP;
  uint uVar6;
  uint uStack_138;
  int iStack_134;
  int iStack_130;
  undefined4 *puStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  
  FUN_00879bb8();
  iStack_cc = *(undefined4 *)(unaff_EBP + 8);
  iStack_d0 = 0x77feb2;
  FUN_0081622a();
  iVar1 = DAT_00978368;
  *(int *)(unaff_EBP + -0x3c) = DAT_00978368;
  if (*(int *)(iVar1 + 0x2b40) != 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    iStack_d0 = unaff_EBP + -0x38;
    iStack_cc = 1;
    uStack_d4 = 0x77fed7;
    FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_d8 = unaff_EBP + -0x40;
    uStack_d4 = 2;
    uStack_dc = 0x77fee6;
    FUN_007d4a9a();
    iStack_cc = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_d0 = 0x77fef8;
    FUN_00448dc6();
    iStack_cc = 3;
    iStack_d0 = 0xffffffff;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_d4 = 0x77ff08;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(extraout_ECX + 0x578);
    piStack_e8 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_e8 == (int *)0x0) {
      iStack_cc = 0x80004003;
      iStack_d0 = 0x77ff26;
      FUN_00878dfb();
      piStack_e8 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piStack_e8;
    uStack_dc = *(undefined4 *)(unaff_EBP + 8);
    iStack_d8 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_e0 = 0;
    iStack_d0 = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_e4 = 0;
    *(int **)(unaff_EBP + -0x14) = piStack_e8;
    iStack_cc = *(undefined4 *)(unaff_EBP + -0x28);
    puStack_ec = (undefined *)0x77ff48;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_ec = &DAT_00963cc8;
      uStack_f0 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_f8 = 0x77ff5a;
      iStack_f4 = iVar1;
      FUN_00878e09();
    }
    puStack_ec = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_f0 = 0x77ff67;
    puStack_ec = (undefined *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      uStack_f0 = 0x77ff74;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x578) == 0) {
      puStack_ec = (undefined *)0x80004003;
      uStack_f0 = 0x77ff87;
      FUN_00878dfb();
    }
    puStack_ec = (undefined *)0x77ff92;
    uVar2 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_ec = (undefined *)0x80004003;
        uStack_f0 = 0x77ffa0;
        FUN_00878dfb();
      }
      *(bool *)(unaff_EBP + 0xb) = *(int *)(extraout_ECX + 0x580) != 0;
      puStack_ec = (undefined *)0x77ffb2;
      iVar1 = FUN_0040e48b();
      puStack_ec = (undefined *)0x3;
      uStack_f0 = 0xffffffff;
      if (iVar1 - (uint)*(byte *)(unaff_EBP + 0xb) <= *(uint *)(unaff_EBP + -0x18)) break;
      iStack_f4 = 0x77ffc9;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(extraout_ECX + 0x57c);
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar5 == (int *)0x0) {
        puStack_ec = (undefined *)0x80004003;
        uStack_f0 = 0x77ffe3;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x10);
      }
      iVar1 = *piVar5;
      uStack_fc = *(undefined4 *)(unaff_EBP + 8);
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_f4 = *(int *)(unaff_EBP + -0x30);
      uStack_100 = 0;
      uStack_104 = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_f0 = *(undefined4 *)(unaff_EBP + -0x2c);
      *(int **)(unaff_EBP + -0x14) = piVar5;
      puStack_ec = *(undefined **)(unaff_EBP + -0x28);
      puStack_10c = (undefined *)0x780006;
      piStack_108 = piVar5;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_ec = &DAT_00963cc8;
        uStack_f0 = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_f8 = 0x780018;
        iStack_f4 = iVar1;
        FUN_00878e09();
      }
      puStack_ec = (undefined *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_f0 = 0x780025;
      puStack_ec = (undefined *)FUN_00402bc3();
      if ((int)puStack_ec < 0) {
        uStack_f0 = 0x780030;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    }
    iStack_f4 = 0x780047;
    FUN_004031b7();
    uVar2 = *(undefined4 *)(extraout_ECX + 0x580);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_ec = (undefined *)0x80004003;
      uStack_f0 = 0x78005f;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x580) == 0) {
      puStack_ec = (undefined *)0x80004003;
      uStack_f0 = 0x78006d;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x580);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_ec = (undefined *)0x80004003;
      uStack_f0 = 0x780081;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 8) = piVar5;
    puStack_ec = (undefined *)0x78008e;
    iVar3 = FUN_0040e48b();
    puStack_ec = (undefined *)0x780098;
    iVar4 = FUN_0040e48b();
    iVar1 = *piVar5;
    *(int *)(unaff_EBP + -0x14) = iVar3 - iVar4;
    uStack_fc = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_f4 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_100 = 0;
    uStack_104 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x2c);
    piStack_108 = *(int **)(unaff_EBP + 8);
    puStack_ec = *(undefined **)(unaff_EBP + -0x28);
    puStack_10c = (undefined *)0x7800bc;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_10c = &DAT_00963cc8;
      uStack_110 = *(undefined4 *)(unaff_EBP + 8);
      uStack_118 = 0x7800ce;
      iStack_114 = iVar1;
      FUN_00878e09();
    }
    puStack_10c = (undefined *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_110 = 0x7800db;
    puStack_10c = (undefined *)FUN_00402bc3();
    if ((int)puStack_10c < 0) {
      uStack_110 = 0x7800e6;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x578) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x7800fa;
      FUN_00878dfb();
    }
    puStack_10c = (undefined *)0x780105;
    uVar2 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x780114;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x590) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x780123;
        FUN_00878dfb();
      }
      puStack_10c = (undefined *)0x780131;
      uVar2 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      puStack_10c = (undefined *)0x78013d;
      iVar1 = FUN_0040e53d();
      if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + 8)) break;
      puStack_10c = (undefined *)0x3;
      uStack_110 = 0xffffffff;
      iStack_114 = 0x780157;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x584);
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piVar5 == (int *)0x0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x780171;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x10);
      }
      iVar1 = *piVar5;
      uStack_11c = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_120 = *(undefined4 *)(unaff_EBP + 8);
      uStack_118 = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_114 = *(int *)(unaff_EBP + -0x30);
      uStack_110 = *(undefined4 *)(unaff_EBP + -0x2c);
      uStack_124 = 0;
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      puStack_10c = *(undefined **)(unaff_EBP + -0x28);
      puStack_12c = (undefined4 *)0x780194;
      piStack_128 = piVar5;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_10c = &DAT_00963cc8;
        uStack_110 = *(undefined4 *)(unaff_EBP + -0x1c);
        uStack_118 = 0x7801a6;
        iStack_114 = iVar1;
        FUN_00878e09();
      }
      puStack_10c = (undefined *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_110 = 0x7801b3;
      puStack_10c = (undefined *)FUN_00402bc3();
      if ((int)puStack_10c < 0) {
        uStack_110 = 0x7801be;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    }
    if (*(int *)(extraout_ECX + 0x57c) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x7801e0;
      FUN_00878dfb();
    }
    puStack_10c = (undefined *)0x7801e7;
    uVar2 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x7801f6;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x594) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x78020b;
        FUN_00878dfb();
      }
      puStack_10c = (undefined *)0x780215;
      uVar2 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      puStack_10c = (undefined *)0x780221;
      iVar1 = FUN_0040e53d();
      if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + 8)) break;
      if (*(int *)(extraout_ECX + 0x584) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x780244;
        FUN_00878dfb();
      }
      puStack_10c = (undefined *)0x78024b;
      uVar2 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          puStack_10c = (undefined *)0x80004003;
          uStack_110 = 0x78025a;
          FUN_00878dfb();
        }
        if (*(int *)(extraout_ECX + 0x58c) == 0) {
          puStack_10c = (undefined *)0x80004003;
          uStack_110 = 0x780269;
          FUN_00878dfb();
        }
        puStack_10c = (undefined *)0x780277;
        uVar2 = FUN_0040e48b();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
        puStack_10c = (undefined *)0x780283;
        iVar1 = FUN_0040e48b();
        if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + -0x18)) break;
        puStack_10c = (undefined *)0x3;
        uStack_110 = 0xffffffff;
        iStack_114 = 0x78029d;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x588);
        piVar5 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (piVar5 == (int *)0x0) {
          puStack_10c = (undefined *)0x80004003;
          uStack_110 = 0x7802b7;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x10);
        }
        iVar1 = *piVar5;
        uStack_11c = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_120 = *(undefined4 *)(unaff_EBP + 8);
        uStack_118 = *(undefined4 *)(unaff_EBP + -0x34);
        uStack_124 = *(undefined4 *)(unaff_EBP + -0x18);
        iStack_114 = *(int *)(unaff_EBP + -0x30);
        uStack_110 = *(undefined4 *)(unaff_EBP + -0x2c);
        *(int **)(unaff_EBP + -0x1c) = piVar5;
        puStack_10c = *(undefined **)(unaff_EBP + -0x28);
        puStack_12c = (undefined4 *)0x7802db;
        piStack_128 = piVar5;
        iVar1 = (**(code **)(iVar1 + 0x80))();
        if (iVar1 < 0) {
          puStack_10c = &DAT_00963cc8;
          uStack_110 = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_118 = 0x7802ed;
          iStack_114 = iVar1;
          FUN_00878e09();
        }
        puStack_10c = (undefined *)(unaff_EBP + -0x34);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uStack_110 = 0x7802fa;
        puStack_10c = (undefined *)FUN_00402bc3();
        if ((int)puStack_10c < 0) {
          uStack_110 = 0x780305;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    }
    if (*(int *)(extraout_ECX + 0x580) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x780329;
      FUN_00878dfb();
    }
    puStack_10c = (undefined *)0x780334;
    uVar2 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x780343;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x598) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x780358;
        FUN_00878dfb();
      }
      puStack_10c = (undefined *)0x780362;
      uVar2 = FUN_0040e53d();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      puStack_10c = (undefined *)0x78036e;
      iVar1 = FUN_0040e53d();
      puStack_10c = (undefined *)0x3;
      uStack_110 = 0xffffffff;
      if ((uint)(*(int *)(unaff_EBP + -0x14) - iVar1) <= *(uint *)(unaff_EBP + 8)) break;
      iStack_114 = 0x780388;
      FUN_004031b7();
      uVar2 = *(undefined4 *)(extraout_ECX + 0x58c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x7803a2;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x58c) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x7803b0;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x58c);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_10c = (undefined *)0x80004003;
        uStack_110 = 0x7803c4;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + -0x10);
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      puStack_10c = (undefined *)0x7803d1;
      iVar3 = FUN_0040e48b();
      puStack_10c = (undefined *)0x7803db;
      iVar4 = FUN_0040e48b();
      iVar1 = *piVar5;
      *(int *)(unaff_EBP + -0x14) = iVar3 - iVar4;
      uStack_11c = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_120 = *(undefined4 *)(unaff_EBP + 8);
      uStack_118 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_124 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_114 = *(int *)(unaff_EBP + -0x30);
      piStack_128 = *(int **)(unaff_EBP + -0x1c);
      uStack_110 = *(undefined4 *)(unaff_EBP + -0x2c);
      puStack_10c = *(undefined **)(unaff_EBP + -0x28);
      puStack_12c = (undefined4 *)0x780400;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_10c = &DAT_00963cc8;
        uStack_110 = *(undefined4 *)(unaff_EBP + -0x1c);
        uStack_118 = 0x780412;
        iStack_114 = iVar1;
        FUN_00878e09();
      }
      puStack_10c = (undefined *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_110 = 0x78041f;
      puStack_10c = (undefined *)FUN_00402bc3();
      if ((int)puStack_10c < 0) {
        uStack_110 = 0x78042a;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    }
    iStack_114 = 0x78043f;
    FUN_004031b7();
    uVar2 = *(undefined4 *)(extraout_ECX + 0x590);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x780459;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x590) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x780467;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x590);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_10c = (undefined *)0x80004003;
      uStack_110 = 0x78047b;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 8) = piVar5;
    puStack_10c = (undefined *)0x780488;
    iVar3 = FUN_0040e53d();
    puStack_10c = (undefined *)0x780492;
    iVar4 = FUN_0040e53d();
    iVar1 = *piVar5;
    *(int *)(unaff_EBP + -0x14) = iVar3 - iVar4;
    uStack_11c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_120 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_118 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_114 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_110 = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_124 = 0;
    piStack_128 = *(int **)(unaff_EBP + 8);
    puStack_10c = *(undefined **)(unaff_EBP + -0x28);
    puStack_12c = (undefined4 *)0x7804b6;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_12c = (undefined4 *)&DAT_00963cc8;
      iStack_130 = *(undefined4 *)(unaff_EBP + 8);
      uStack_138 = 0x7804c8;
      iStack_134 = iVar1;
      FUN_00878e09();
    }
    puStack_12c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_130 = 0x7804d5;
    puStack_12c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_12c < 0) {
      iStack_130 = 0x7804e0;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x590) == 0) {
      puStack_12c = (undefined4 *)0x80004003;
      iStack_130 = 0x7804f3;
      FUN_00878dfb();
    }
    puStack_12c = (undefined4 *)0x7804fe;
    uVar2 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_12c = (undefined4 *)0x80004003;
        iStack_130 = 0x780511;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x598) == 0) {
        puStack_12c = (undefined4 *)0x80004003;
        iStack_130 = 0x78052a;
        FUN_00878dfb();
      }
      puStack_12c = (undefined4 *)0x780534;
      uVar2 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + 8) = uVar2;
      puStack_12c = (undefined4 *)0x780540;
      iVar1 = FUN_0040e48b();
      puStack_12c = (undefined4 *)0x3;
      iStack_130 = 0xffffffff;
      if ((uint)(*(int *)(unaff_EBP + 8) - iVar1) <= *(uint *)(unaff_EBP + -0x18)) break;
      iStack_134 = 0x780556;
      FUN_004031b7();
      uVar2 = *(undefined4 *)(extraout_ECX + 0x594);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_12c = (undefined4 *)0x80004003;
        iStack_130 = 0x780576;
        FUN_00878dfb();
      }
      puStack_12c = (undefined4 *)(unaff_EBP + -0x34);
      iStack_134 = 0x780582;
      iStack_130 = uVar2;
      FUN_004115d9();
      iStack_134 = 0x780589;
      iVar1 = FUN_0040e53d();
      iStack_134 = 0x780593;
      iStack_134 = FUN_0040e53d();
      iStack_134 = iStack_134 - iVar1;
      uStack_138 = *(uint *)(unaff_EBP + -0x18);
      FUN_004115d9();
      FUN_00470739();
      puStack_12c = (undefined4 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_130 = 0x7805b5;
      puStack_12c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_12c < 0) {
        iStack_130 = 0x7805c0;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    }
    iStack_134 = 0x7805d0;
    FUN_004295f1();
    iStack_130 = *(undefined4 *)(extraout_ECX + 0x598);
    puStack_12c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_134 = 0x7805e2;
    FUN_004115d9();
    iStack_134 = 0x7805e9;
    iVar1 = FUN_0040e53d();
    iStack_134 = 0x7805f3;
    FUN_004115d9();
    iStack_134 = 0x7805fa;
    iStack_134 = FUN_0040e53d();
    iStack_134 = iStack_134 - iVar1;
    uStack_138 = 0x780604;
    FUN_004115d9();
    uStack_138 = 0x78060b;
    iVar1 = FUN_0040e48b();
    uStack_138 = 0x780615;
    FUN_004115d9();
    uStack_138 = 0x78061c;
    iVar3 = FUN_0040e48b();
    uStack_138 = iVar3 - iVar1;
    FUN_004115d9();
    FUN_00470739();
    puStack_12c = (undefined4 *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_130 = 0x78063b;
    puStack_12c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_12c < 0) {
      iStack_130 = 0x780646;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x3c) + 0x2b44;
    do {
      if (**(int **)(unaff_EBP + -0x1c) != 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        puStack_12c = (undefined4 *)(unaff_EBP + -0x50);
        iStack_130 = unaff_EBP + -0x4c;
        iStack_134 = unaff_EBP + -0x58;
        uStack_138 = unaff_EBP - 0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_0085c53b(*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x44,unaff_EBP + 8,
                     unaff_EBP + -0x54);
        puStack_12c = *(undefined4 **)(unaff_EBP + -0x44);
        iStack_130 = 0x7806ac;
        iVar1 = FUN_007c00e8();
        *(int *)(unaff_EBP + -0x20) = iVar1;
        puStack_12c = &DAT_00980690;
        if (iVar1 == 0) {
          iStack_130 = 0x7807e4;
          FUN_00424aee();
          puStack_12c = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_130 = 0x7807f4;
          FUN_00424aee();
          puStack_12c = (undefined4 *)(unaff_EBP + -0x78);
          iStack_130 = unaff_EBP + -0x98;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iStack_134 = 0x78080b;
          iStack_134 = FUN_004458be();
          uStack_138 = 0x780814;
          uVar2 = FUN_00449713();
          *(uint **)(unaff_EBP + -0x48) = &uStack_138;
          uStack_138 = extraout_ECX_01;
          FUN_00448a17(uVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_0044974c();
          iVar1 = FUN_004a2734();
          iVar1 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
          uVar2 = 5;
          FUN_0044974c(5,iVar1);
          FUN_005c1d2c(uVar2,iVar1);
          puStack_12c = (undefined4 *)(unaff_EBP + -0x98);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_130 = 0x78085f;
          puStack_12c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_12c < 0) {
            iStack_130 = 0x78086a;
            FUN_00878dfb();
          }
          puStack_12c = (undefined4 *)(unaff_EBP + -0x78);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_130 = 0x780877;
          puStack_12c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_12c < 0) {
            iStack_130 = 0x780882;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        else {
          iStack_130 = 0x7806c0;
          FUN_00424aee();
          puStack_12c = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_130 = 0x7806d0;
          FUN_00424aee();
          puStack_12c = (undefined4 *)(unaff_EBP + -0x68);
          iStack_130 = unaff_EBP + -0xb8;
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_134 = 0x7806e7;
          iStack_134 = FUN_004458be();
          uStack_138 = 0x7806f0;
          uVar2 = FUN_00449713();
          *(uint **)(unaff_EBP + -0x48) = &uStack_138;
          uStack_138 = extraout_ECX_00;
          FUN_00448a17(uVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_0044974c();
          iVar1 = FUN_004a2734();
          iVar1 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
          uVar2 = 5;
          FUN_0044974c(5,iVar1);
          FUN_005c1d2c(uVar2,iVar1);
          puStack_12c = (undefined4 *)(unaff_EBP + -0xb8);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_130 = 0x78073b;
          puStack_12c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_12c < 0) {
            iStack_130 = 0x780746;
            FUN_00878dfb();
          }
          puStack_12c = (undefined4 *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_130 = 0x780753;
          puStack_12c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_12c < 0) {
            iStack_130 = 0x78075e;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x20);
          puStack_12c = (undefined4 *)0x780768;
          iVar1 = (**(code **)(*piVar5 + 8))();
          if (iVar1 == 0) {
            *(int *)(unaff_EBP + -0x20) = (piVar5[0x35c] << 6) / 100;
          }
          else {
            iVar1 = *(int *)(unaff_EBP + -0x3c);
            puStack_12c = (undefined4 *)(unaff_EBP + -0x2c);
            iStack_130 = 0x78077a;
            iVar3 = FUN_00455c59();
            puStack_12c = *(undefined4 **)(*(int *)(iVar3 + 4) + 0x65);
            iStack_130 = *(int *)(iVar3 + 4) + 0x61;
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            iStack_134 = 0x78078d;
            uVar2 = FUN_0045f084();
            iStack_134 = *(undefined4 *)(iVar1 + 0x2104);
            uStack_138 = iVar1 + 0x20fc;
            *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
            iVar1 = FUN_00413367();
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            *(int *)(unaff_EBP + -0x20) = ((int)*(short *)(unaff_EBP + -0x20) << 6) / iVar1;
            puStack_12c = (undefined4 *)0x7807c0;
            FUN_0045e4a2();
          }
        }
        puStack_12c = (undefined4 *)0x3;
        iStack_130 = 0xff;
        iStack_134 = 0x780894;
        FUN_004295f1();
        iStack_130 = *(undefined4 *)(extraout_ECX + 0x5a0);
        puStack_12c = (undefined4 *)(unaff_EBP + -0x88);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_134 = 0x7808ae;
        FUN_0044974c();
        iStack_134 = 0x7808b5;
        iVar1 = FUN_004a2734();
        iStack_134 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 8;
        uStack_138 = 0x7808c8;
        FUN_004115d9();
        uStack_138 = 0x7808cf;
        iVar1 = FUN_0040e48b();
        uStack_138 = iVar1 - 0x48;
        FUN_004115d9();
        FUN_00470739();
        puStack_12c = (undefined4 *)(unaff_EBP + -0x88);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_130 = 0x7808f2;
        puStack_12c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_12c < 0) {
          iStack_130 = 0x7808fd;
          FUN_00878dfb();
        }
        puStack_12c = (undefined4 *)0x780905;
        FUN_004115d9();
        puStack_12c = (undefined4 *)0x78090c;
        iVar1 = FUN_0040e48b();
        uVar6 = iVar1 - 0x48;
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + -0x48;
        while( true ) {
          puStack_12c = (undefined4 *)0x780922;
          FUN_004115d9();
          puStack_12c = (undefined4 *)0x780929;
          iVar1 = FUN_0040e48b();
          puStack_12c = (undefined4 *)0x3;
          iStack_130 = 0xff;
          if ((uint)(iVar1 + *(int *)(unaff_EBP + -0x20)) <= uVar6) break;
          iStack_134 = 0x78093e;
          FUN_004295f1();
          iStack_130 = *(undefined4 *)(extraout_ECX + 0x5a4);
          puStack_12c = (undefined4 *)(unaff_EBP + -0xa8);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          iStack_134 = 0x780958;
          FUN_0044974c();
          iStack_134 = 0x78095f;
          iVar1 = FUN_004a2734();
          iStack_134 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 8;
          uStack_138 = uVar6;
          FUN_004115d9();
          FUN_00470739();
          puStack_12c = (undefined4 *)(unaff_EBP + -0xa8);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_130 = 0x78098a;
          puStack_12c = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_12c < 0) {
            iStack_130 = 0x780995;
            FUN_00878dfb();
          }
          uVar6 = uVar6 + 1;
        }
        iStack_134 = 0x7809a3;
        FUN_004295f1();
        iStack_130 = *(undefined4 *)(extraout_ECX + 0x59c);
        puStack_12c = (undefined4 *)(unaff_EBP + -200);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iStack_134 = 0x7809bd;
        FUN_0044974c();
        iStack_134 = 0x7809c4;
        iVar1 = FUN_004a2734();
        iStack_134 = (iVar1 + 5) * *(int *)(unaff_EBP + -0x24) + 5;
        uStack_138 = 0x7809d7;
        FUN_004115d9();
        uStack_138 = 0x7809de;
        iVar1 = FUN_0040e48b();
        uStack_138 = iVar1 - 0x4b;
        FUN_004115d9();
        FUN_00470739();
        puStack_12c = (undefined4 *)(unaff_EBP + -200);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_130 = 0x780a01;
        puStack_12c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_12c < 0) {
          iStack_130 = 0x780a0c;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        puStack_12c = (undefined4 *)0x780a1b;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puStack_12c = (undefined4 *)0x780a27;
        FUN_00414ebb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
    } while (*(int *)(unaff_EBP + -0x18) < 6);
    puStack_12c = (undefined4 *)0x780a45;
    FUN_004125e6();
    puStack_12c = (undefined4 *)0x780a4d;
    FUN_004497b5();
    puStack_12c = (undefined4 *)0x780a55;
    FUN_004497b5();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


