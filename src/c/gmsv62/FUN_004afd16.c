/* FUN_004afd16 - 0x004afd16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004afd16(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  int *piStack_140;
  undefined4 *puStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined *puStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *piStack_fc;
  undefined4 *puStack_f8;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x28) = **(undefined4 **)(unaff_EBP + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x3c) = *(undefined4 *)(unaff_EBP + 0x18);
  puStack_f8 = (undefined4 *)0x3af;
  piStack_fc = (int *)(unaff_EBP + -0x10);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  uStack_100 = 0x4afd4f;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_100 = *puVar2;
  puStack_f8 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_104 = 0x4afd61;
  piStack_fc = (int *)(extraout_ECX + 0x50);
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_f8 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    piStack_fc = (int *)0x4afd78;
    FUN_00403384();
  }
  puStack_f8 = &DAT_00980690;
  piStack_fc = (int *)0x4afd87;
  FUN_00403191();
  puStack_f8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_fc = (int *)0x4afd9a;
  FUN_00403191();
  iVar3 = *(int *)(extraout_ECX + 0x50);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    puStack_f8 = (undefined4 *)0x80004003;
    piStack_fc = (int *)0x4afdac;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  piVar1 = *(int **)(iVar3 + 0x50);
  *(int **)(unaff_EBP + -0x20) = piVar1;
  puStack_f8 = (undefined4 *)0x4afdba;
  uStack_118 = FUN_004afbd0();
  uStack_11c = *(undefined4 *)(iVar3 + 0x3c);
  uStack_104 = *(undefined4 *)(unaff_EBP + -0x74);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x70);
  piStack_fc = *(int **)(unaff_EBP + -0x6c);
  puStack_f8 = *(undefined4 **)(unaff_EBP + -0x68);
  uStack_114 = *(undefined4 *)(unaff_EBP + -0x84);
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x80);
  uStack_10c = *(undefined4 *)(unaff_EBP + -0x7c);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x78);
  puStack_124 = (undefined *)0x4afde2;
  iVar3 = (**(code **)(*piVar1 + 0x2c))();
  if (iVar3 < 0) {
    puStack_124 = &DAT_00963cc8;
    uStack_128 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_130 = 0x4afdf4;
    iStack_12c = iVar3;
    FUN_00878e09();
  }
  puStack_124 = (undefined *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_128 = 0x4afe04;
  puStack_124 = (undefined *)FUN_00402bc3();
  if ((int)puStack_124 < 0) {
    uStack_128 = 0x4afe11;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_124 = (undefined *)(unaff_EBP + -0x74);
  uStack_128 = 0x4afe1e;
  puStack_124 = (undefined *)FUN_00402bc3();
  if ((int)puStack_124 < 0) {
    uStack_128 = 0x4afe29;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar3 + 0x50) == 0) {
    puStack_124 = (undefined *)0x80004003;
    uStack_128 = 0x4afe3e;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(iVar3 + 0x50);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + 4);
  puStack_124 = (undefined *)0x4afe4e;
  uStack_128 = FUN_004afbd0();
  puStack_124 = *(undefined **)(unaff_EBP + -0x10);
  iStack_12c = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x3c);
  uStack_130 = 0;
  uStack_134 = 0;
  puStack_13c = (undefined4 *)0x4afe64;
  piStack_138 = piVar1;
  iVar3 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar3 < 0) {
    puStack_13c = (undefined4 *)&DAT_00963cc8;
    iStack_148 = 0x4afe74;
    iStack_144 = iVar3;
    piStack_140 = piVar1;
    FUN_00878e09();
  }
  puStack_13c = &DAT_00980690;
  piStack_140 = (int *)0x4afe80;
  FUN_00403191();
  puStack_13c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piStack_140 = (int *)0x4afe90;
  FUN_00403191();
  puStack_13c = (undefined4 *)0x0;
  piStack_140 = (int *)0x0;
  iStack_144 = unaff_EBP + -0x84;
  iStack_148 = unaff_EBP + -0x74;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_14c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_144 = 0x4afee2;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x4c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar3 != 0) {
    puStack_13c = (undefined4 *)(unaff_EBP + -0x4c);
    piStack_140 = (int *)0x4afef8;
    puStack_13c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_13c < 0) && (puStack_13c != (undefined4 *)0x80004002)) {
      piStack_140 = (int *)0x4aff09;
      FUN_00878dfb();
    }
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0xd4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_140 = (int *)0x4aff19;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4aff24;
    FUN_00878dfb();
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_140 = (int *)0x4aff31;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4aff3c;
    FUN_00878dfb();
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_140 = (int *)0x4aff4c;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4aff57;
    FUN_00878dfb();
  }
  puStack_13c = &DAT_00980690;
  piStack_140 = (int *)0x4aff63;
  FUN_00403191();
  puStack_13c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_140 = (int *)0x4aff73;
  FUN_00403191();
  puStack_13c = (undefined4 *)0x0;
  piStack_140 = (int *)0x0;
  iStack_144 = unaff_EBP + -0xa4;
  iStack_148 = unaff_EBP + -0x94;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_14c;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_144 = 0x4affc3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -100) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar3 != 0) {
    puStack_13c = (undefined4 *)(unaff_EBP + -100);
    piStack_140 = (int *)0x4affd9;
    puStack_13c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_13c < 0) && (puStack_13c != (undefined4 *)0x80004002)) {
      piStack_140 = (int *)0x4affea;
      FUN_00878dfb();
    }
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0xf4);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_140 = (int *)0x4afffa;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4b0005;
    FUN_00878dfb();
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_140 = (int *)0x4b0015;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4b0020;
    FUN_00878dfb();
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piStack_140 = (int *)0x4b0030;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4b003b;
    FUN_00878dfb();
  }
  puStack_13c = &DAT_00980690;
  piStack_140 = (int *)0x4b0047;
  FUN_00403191();
  puStack_13c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_140 = (int *)0x4b0057;
  FUN_00403191();
  puStack_13c = (undefined4 *)0x0;
  piStack_140 = (int *)0x0;
  iStack_144 = unaff_EBP + -0xc4;
  iStack_148 = unaff_EBP + -0xb4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_14c;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_14c = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_144 = 0x4b00a7;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x60) = iVar3;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  if (iVar3 != 0) {
    puStack_13c = (undefined4 *)(unaff_EBP + -0x60);
    piStack_140 = (int *)0x4b00bd;
    puStack_13c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_13c < 0) && (puStack_13c != (undefined4 *)0x80004002)) {
      piStack_140 = (int *)0x4b00ce;
      FUN_00878dfb();
    }
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0xe4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_140 = (int *)0x4b00de;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4b00e9;
    FUN_00878dfb();
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  piStack_140 = (int *)0x4b00f9;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4b0104;
    FUN_00878dfb();
  }
  puStack_13c = (undefined4 *)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  piStack_140 = (int *)0x4b0114;
  puStack_13c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_13c < 0) {
    piStack_140 = (int *)0x4b011f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x3c);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (0 < iVar3) {
    do {
      puStack_13c = (undefined4 *)0x3;
      piStack_140 = (int *)0xff;
      iStack_144 = 0x4b0141;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        puStack_13c = (undefined4 *)0x80004003;
        piStack_140 = (int *)0x4b0154;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x50) == 0) {
        puStack_13c = (undefined4 *)0x80004003;
        piStack_140 = (int *)0x4b0168;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x50);
      *(int **)(unaff_EBP + -0x10) = piVar1;
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x38);
      puStack_13c = (undefined4 *)0x4b017f;
      FUN_0040eed0();
      uStack_14c = *(undefined4 *)(unaff_EBP + -0x1c);
      iStack_148 = *(int *)(unaff_EBP + -0x30);
      iStack_144 = *(int *)(unaff_EBP + -0x2c);
      piStack_140 = *(int **)(unaff_EBP + -0x28);
      puStack_13c = *(undefined4 **)(unaff_EBP + -0x24);
      iVar3 = (**(code **)(*piVar1 + 0x80))();
      if (iVar3 < 0) {
        puStack_13c = (undefined4 *)&DAT_00963cc8;
        piStack_140 = *(int **)(unaff_EBP + -0x10);
        iStack_148 = 0x4b01b1;
        iStack_144 = iVar3;
        FUN_00878e09();
      }
      puStack_13c = (undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_140 = (int *)0x4b01be;
      puStack_13c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_13c < 0) {
        piStack_140 = (int *)0x4b01c9;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    } while (*(int *)(unaff_EBP + -0x20) < *(int *)(*(int *)(unaff_EBP + -0x14) + 0x3c));
  }
  puStack_13c = (undefined4 *)0x3;
  piStack_140 = (int *)0xff;
  iStack_144 = 0x4b01ec;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    puStack_13c = (undefined4 *)0x80004003;
    piStack_140 = (int *)0x4b01ff;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x50) == 0) {
    puStack_13c = (undefined4 *)0x80004003;
    piStack_140 = (int *)0x4b0213;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x50);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_13c = (undefined4 *)0x4b022a;
  FUN_0040eed0();
  uStack_14c = *(undefined4 *)(unaff_EBP + -0x1c);
  iStack_148 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_144 = *(undefined4 *)(unaff_EBP + -0x2c);
  piStack_140 = *(int **)(unaff_EBP + -0x28);
  puStack_13c = *(undefined4 **)(unaff_EBP + -0x24);
  iVar3 = (**(code **)(*piVar1 + 0x80))();
  if (iVar3 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if ((*(int *)(unaff_EBP + 0x18) == 0) && (FUN_00878dfb(), *(int *)(unaff_EBP + 0x18) == 0)) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x50) == 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x50);
  *(int **)(unaff_EBP + -0x10) = piVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x18);
  iVar3 = FUN_0040eed0();
  *(int *)(unaff_EBP + -0x18) = -iVar3;
  FUN_0040e48b();
  iVar3 = (**(code **)(*piVar1 + 0x80))();
  if (iVar3 < 0) {
    iStack_180 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_188 = 0x4b030f;
    iStack_184 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_180 = 0x4b031c;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_180 = 0x4b0327;
    FUN_00878dfb();
  }
  iStack_180 = 0x4b0330;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_180 = 0x4b033d;
  FUN_00403191();
  iStack_180 = 0;
  iStack_184 = unaff_EBP + -0x48;
  iStack_188 = unaff_EBP + -0x30;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00679e4e(&uStack_18c,0x4f6);
  iVar3 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_184 = 0x4b038b;
  uVar4 = FUN_004032b4();
  iVar3 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_180 = 0x4b039d;
  iVar5 = FUN_0041a581();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    iStack_180 = 0x4b03ae;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_180 = 0x4b03bb;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b03c6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_180 = 0x4b03d3;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b03de;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_180 = 0x4b03eb;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b03f6;
    FUN_00878dfb();
  }
  iStack_180 = 0x4b03ff;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_180 = 0x4b040c;
  FUN_00403191();
  iStack_180 = 0;
  iStack_184 = unaff_EBP + -0x30;
  iStack_188 = unaff_EBP + -0x48;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18c;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00679e4e(&uStack_18c,0x4f7);
  iVar5 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00405a1d(iVar5);
  FUN_00402660();
  FUN_00404a02(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_184 = 0x4b0455;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_180 = 0x4b0464;
  iVar5 = FUN_0041a581();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    iStack_180 = 0x4b0475;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_180 = 0x4b0482;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b048d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_180 = 0x4b049a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b04a5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_180 = 0x4b04b2;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b04bd;
    FUN_00878dfb();
  }
  iStack_180 = 0x4b04c6;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_180 = 0x4b04d3;
  FUN_00403191();
  iStack_180 = 0;
  iStack_184 = unaff_EBP + -0x30;
  iStack_188 = unaff_EBP + -0x48;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18c;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00679e4e(&uStack_18c,0x4f8);
  iVar5 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00405a1d(iVar5);
  FUN_00402660();
  FUN_00404a02(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_184 = 0x4b051c;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_180 = 0x4b052b;
  iVar5 = FUN_0041a581();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    iStack_180 = 0x4b053c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_180 = 0x4b0549;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b0554;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_180 = 0x4b0561;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b056c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_180 = 0x4b0579;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b0584;
    FUN_00878dfb();
  }
  iStack_180 = 0x4b058e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_180 = unaff_EBP + -0x30;
  iStack_184 = 0x4b0598;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_180 = 0x4b05a4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_180 = 0x4b05b1;
  FUN_00403191();
  iStack_180 = 0;
  iStack_184 = unaff_EBP + -0x30;
  iStack_188 = unaff_EBP + -0x48;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_18c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00679e4e(&uStack_18c,0x4f9);
  iVar5 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00405a1d(iVar5);
  FUN_00402660();
  FUN_00404a02(iVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_184 = 0x4b05fa;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  iStack_180 = 0x4b0609;
  iVar5 = FUN_0041a581();
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    iStack_180 = 0x4b061a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_180 = 0x4b0627;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b0634;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_180 = 0x4b0641;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b064c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_180 = 0x4b0659;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_180 = 0x4b0664;
    FUN_00878dfb();
  }
  if (*(int *)(iVar3 + 0x54) == 0) {
    iStack_180 = 0x4b0673;
    FUN_00878dfb();
  }
  uVar4 = FUN_0040e48b();
  *(undefined4 *)(iVar3 + 0x4c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x40) = uVar4;
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  iStack_180 = 0x4b0696;
  iStack_180 = FUN_004afbd0();
  iStack_184 = *(undefined4 *)(iVar3 + 0x3c);
  iStack_188 = *(undefined4 *)(unaff_EBP + 0x14);
  uStack_18c = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004b388f(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
    iStack_180 = 0x4b06be;
    (**(code **)(**(int **)(unaff_EBP + 0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    iStack_180 = 0x4b06cf;
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    iStack_180 = 0x4b06e0;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


