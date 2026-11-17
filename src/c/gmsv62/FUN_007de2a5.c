/* FUN_007de2a5 - 0x007de2a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007de2a5(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  undefined4 uStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  undefined4 *puStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 *puStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 *puStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 *puStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  int iStack_188;
  undefined4 *puStack_184;
  int *piStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 *puStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 *puStack_144;
  
  FUN_00879bb8();
  puStack_144 = (undefined4 *)(unaff_EBP + -0x38);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  iStack_148 = 0x7de2c6;
  FUN_00448dc6();
  puStack_144 = (undefined4 *)0x3;
  iStack_148 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_14c = 0x7de2d6;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    puStack_144 = (undefined4 *)0x80004003;
    iStack_148 = 0x7de2f2;
    FUN_00878dfb();
  }
  puStack_144 = (undefined4 *)(unaff_EBP + -0x48);
  iStack_148 = unaff_EBP + -0x1c;
  uStack_14c = 0x7de303;
  FUN_00425067();
  puStack_144 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_148 = 0x7de310;
  puStack_144 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_144 < 0) {
    iStack_148 = 0x7de31b;
    FUN_00878dfb();
  }
  puStack_144 = (undefined4 *)0x3;
  iStack_148 = 0;
  uStack_14c = 0x7de326;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    puStack_144 = (undefined4 *)0x80004003;
    iStack_148 = 0x7de342;
    FUN_00878dfb();
  }
  puStack_144 = (undefined4 *)(unaff_EBP + -0x80);
  iStack_148 = unaff_EBP + -0x2c;
  uStack_14c = 0x7de353;
  FUN_00425067();
  puStack_144 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_148 = 0x7de360;
  puStack_144 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_144 < 0) {
    iStack_148 = 0x7de36b;
    FUN_00878dfb();
  }
  puStack_144 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -0x4c) = DAT_00978368;
  iStack_148 = 0x7de381;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x88);
  piStack_160 = *(int **)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_160 == (int *)0x0) {
    puStack_144 = (undefined4 *)0x80004003;
    iStack_148 = 0x7de39f;
    FUN_00878dfb();
    piStack_160 = *(int **)(unaff_EBP + -0x38);
  }
  iVar1 = *piStack_160;
  uStack_154 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_150 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_14c = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_158 = 0;
  iStack_148 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_15c = 0;
  *(int **)(unaff_EBP + -0x28) = piStack_160;
  puStack_144 = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_164 = (undefined4 *)0x7de3c1;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    puStack_164 = (undefined4 *)&DAT_00963cc8;
    uStack_168 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_170 = 0x7de3d3;
    iStack_16c = iVar1;
    FUN_00878e09();
  }
  puStack_164 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_168 = 0x7de3e0;
  puStack_164 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x7de3eb;
    FUN_00878dfb();
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x80);
  *(undefined4 *)(unaff_EBP + -0x10) = 0x43;
  if (0x43 < iVar1 + -0x25) {
    do {
      puStack_164 = &DAT_00980690;
      uStack_168 = 0x7de40e;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x8c);
      piVar5 = *(int **)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piVar5 == (int *)0x0) {
        puStack_164 = (undefined4 *)0x80004003;
        uStack_168 = 0x7de42f;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x38);
      }
      iVar1 = *piVar5;
      uStack_174 = *(undefined4 *)(unaff_EBP + -0x28);
      iStack_178 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_170 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_16c = *(int *)(unaff_EBP + -0x44);
      uStack_168 = *(undefined4 *)(unaff_EBP + -0x40);
      uStack_17c = 0;
      *(int **)(unaff_EBP + -0x34) = piVar5;
      puStack_164 = *(undefined4 **)(unaff_EBP + -0x3c);
      puStack_184 = (undefined4 *)0x7de452;
      piStack_180 = piVar5;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        puStack_164 = (undefined4 *)&DAT_00963cc8;
        uStack_168 = *(undefined4 *)(unaff_EBP + -0x34);
        uStack_170 = 0x7de464;
        iStack_16c = iVar1;
        FUN_00878e09();
      }
      puStack_164 = (undefined4 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_168 = 0x7de471;
      puStack_164 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_164 < 0) {
        uStack_168 = 0x7de47c;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x80);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
    } while (*(int *)(unaff_EBP + -0x10) < iVar1 + -0x25);
  }
  puStack_164 = &DAT_00980690;
  uStack_168 = 0x7de49e;
  FUN_00403191();
  piVar5 = *(int **)(unaff_EBP + -0x38);
  uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x90);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
  if (piVar5 == (int *)0x0) {
    puStack_164 = (undefined4 *)0x80004003;
    uStack_168 = 0x7de4bf;
    FUN_00878dfb();
    piVar5 = *(int **)(unaff_EBP + -0x38);
  }
  iVar1 = *piVar5;
  uStack_174 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_170 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_16c = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_178 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x80) + -0x25;
  uStack_168 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_17c = 0;
  *(int **)(unaff_EBP + -0x28) = piVar5;
  puStack_164 = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_184 = (undefined4 *)0x7de4ec;
  piStack_180 = piVar5;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    puStack_184 = (undefined4 *)&DAT_00963cc8;
    iStack_188 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_190 = 0x7de4fe;
    iStack_18c = iVar1;
    FUN_00878e09();
  }
  puStack_184 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_188 = 0x7de50b;
  puStack_184 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_184 < 0) {
    iStack_188 = 0x7de518;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x4c) + 0x2048);
  puStack_184 = (undefined4 *)0x9ca;
  iStack_188 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_18c = 0x7de53b;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_188 = *puVar2;
  iStack_18c = unaff_EBP + -0x30;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_190 = 0x7de54c;
  puStack_184 = (undefined4 *)uVar4;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    puStack_184 = (undefined4 *)(*(int *)(unaff_EBP + -0x34) + -0xc);
    iStack_188 = 0x7de563;
    FUN_00434e38();
  }
  puStack_184 = &DAT_00980690;
  iStack_188 = 0x7de570;
  FUN_00403191();
  puStack_184 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_188 = 0x7de580;
  FUN_00403191();
  puStack_184 = (undefined4 *)0x0;
  iStack_188 = 0;
  iStack_18c = 0xffffffff;
  uStack_190 = *(undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_194 = 0;
  uStack_198 = 0;
  puStack_19c = (undefined4 *)0x7de593;
  (*DAT_0097b4c8)();
  puStack_19c = (undefined4 *)0x7de5a0;
  FUN_0087a1b0();
  puStack_19c = (undefined4 *)0x0;
  uStack_1a0 = 0;
  iStack_1a4 = unaff_EBP + -0x100;
  iStack_1a8 = unaff_EBP + -0xe0;
  uStack_1ac = 0xffffffff;
  uStack_1b4 = 0x7de5bd;
  puStack_1b0 = (undefined1 *)&uStack_198;
  uStack_1b4 = FUN_00449713();
  uStack_1b8 = 0x7de5c3;
  puStack_1b0 = (undefined1 *)FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1ac;
  uStack_1b4 = 0x7de5d0;
  FUN_004033a1();
  puStack_1b0 = (undefined1 *)(unaff_EBP + -0x130);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_1b4 = 0x7de5e0;
  FUN_00405a1d();
  uStack_1b4 = 0x7de5e7;
  FUN_00402660();
  uStack_1b4 = 0x7de5ee;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_1a4 = 0x7de5f9;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x34) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    puStack_19c = (undefined4 *)(unaff_EBP + -0x34);
    uStack_1a0 = 0x7de60f;
    puStack_19c = (undefined4 *)FUN_0041a581();
    if (((int)puStack_19c < 0) && (puStack_19c != (undefined4 *)0x80004002)) {
      uStack_1a0 = 0x7de620;
      FUN_00878dfb();
    }
  }
  puStack_19c = (undefined4 *)(unaff_EBP + -0x130);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_1a0 = 0x7de630;
  puStack_19c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_19c < 0) {
    uStack_1a0 = 0x7de63b;
    FUN_00878dfb();
  }
  puStack_19c = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_1a0 = 0x7de64b;
  puStack_19c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_19c < 0) {
    uStack_1a0 = 0x7de656;
    FUN_00878dfb();
  }
  puStack_19c = (undefined4 *)(unaff_EBP + -0x100);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_1a0 = 0x7de666;
  puStack_19c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_19c < 0) {
    uStack_1a0 = 0x7de671;
    FUN_00878dfb();
  }
  puStack_19c = &DAT_00980690;
  uStack_1a0 = 0x7de67a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    puStack_19c = (undefined4 *)0x80004003;
    uStack_1a0 = 0x7de68d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_19c = (undefined4 *)0x80004003;
    uStack_1a0 = 0x7de69c;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + -0x10) = piVar5;
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x24);
  puStack_19c = (undefined4 *)0x7de6ad;
  uVar3 = FUN_0040e53d();
  uStack_1ac = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_1b0 = (undefined1 *)(0x28 - (uVar3 >> 1));
  iStack_1a8 = *(undefined4 *)(unaff_EBP + -0x48);
  iStack_1a4 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_1a0 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_1b4 = 0x10;
  uStack_1b8 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_19c = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_1bc = (undefined4 *)0x7de6d3;
  iVar1 = (**(code **)(*piVar5 + 0x80))();
  if (iVar1 < 0) {
    puStack_1bc = (undefined4 *)&DAT_00963cc8;
    iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_1c8 = 0x7de6e5;
    iStack_1c4 = iVar1;
    FUN_00878e09();
  }
  puStack_1bc = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_1c0 = 0x7de6f2;
  puStack_1bc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_1bc < 0) {
    iStack_1c0 = 0x7de6fd;
    FUN_00878dfb();
  }
  iVar1 = *(int *)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(iVar1 + 0x7c)) {
    while( true ) {
      puStack_1bc = (undefined4 *)0x9d0;
      iStack_1c0 = unaff_EBP + -0x28;
      iStack_1c4 = 0x7de72a;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_1c0 = *puVar2;
      puStack_1bc = *(undefined4 **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_1c4 = unaff_EBP + -0x30;
      uStack_1c8 = 0x7de73d;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        puStack_1bc = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
        iStack_1c0 = 0x7de754;
        FUN_00434e38();
      }
      puStack_1bc = &DAT_00980690;
      iStack_1c0 = 0x7de761;
      FUN_00403191();
      puStack_1bc = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_1c0 = 0x7de771;
      FUN_00403191();
      puStack_1bc = (undefined4 *)0x0;
      iStack_1c0 = 0;
      iStack_1c4 = -1;
      uStack_1c8 = *(undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      uStack_1cc = 0;
      uStack_1d0 = 0;
      puStack_1d4 = (undefined4 *)0x7de784;
      (*DAT_0097b4c8)();
      puStack_1d4 = (undefined4 *)0x7de791;
      FUN_0087a1b0();
      puStack_1d4 = (undefined4 *)0x0;
      iStack_1d8 = 0;
      iStack_1dc = unaff_EBP + -0xb0;
      iStack_1e0 = unaff_EBP + -0xf0;
      uStack_1e4 = 0xffffffff;
      uVar4 = FUN_00449713(&uStack_1d0);
      uVar4 = FUN_00456ad5(uVar4);
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1e4;
      FUN_004033a1(uVar4);
      iVar6 = unaff_EBP + -0x140;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_00405a1d(iVar6);
      FUN_00402660();
      FUN_00404a02(iVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_1dc = 0x7de7ea;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar4;
      puStack_1d4 = (undefined4 *)(unaff_EBP + -0x50);
      iStack_1d8 = 0x7de7f9;
      puStack_1d4 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1d4 < 0) && (puStack_1d4 != (undefined4 *)0x80004002)) {
        iStack_1d8 = 0x7de80a;
        FUN_00878dfb();
      }
      puStack_1d4 = (undefined4 *)(unaff_EBP + -0x140);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      iStack_1d8 = 0x7de81a;
      puStack_1d4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1d4 < 0) {
        iStack_1d8 = 0x7de825;
        FUN_00878dfb();
      }
      puStack_1d4 = (undefined4 *)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_1d8 = 0x7de835;
      puStack_1d4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1d4 < 0) {
        iStack_1d8 = 0x7de840;
        FUN_00878dfb();
      }
      puStack_1d4 = (undefined4 *)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1d8 = 0x7de850;
      puStack_1d4 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1d4 < 0) {
        iStack_1d8 = 0x7de85b;
        FUN_00878dfb();
      }
      puStack_1d4 = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_1d8 = unaff_EBP + -0x48;
      iStack_1dc = 0x7de869;
      FUN_007ded43();
      puStack_1d4 = &DAT_00980690;
      iStack_1d8 = 0x7de875;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar1 + 0x94);
      piVar5 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (piVar5 == (int *)0x0) {
        puStack_1d4 = (undefined4 *)0x80004003;
        iStack_1d8 = 0x7de893;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x1c);
      }
      iVar1 = *piVar5;
      uStack_1e4 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_1e0 = *(undefined4 *)(unaff_EBP + -0x120);
      iStack_1dc = *(undefined4 *)(unaff_EBP + -0x11c);
      iStack_1d8 = *(undefined4 *)(unaff_EBP + -0x118);
      *(int **)(unaff_EBP + -0x14) = piVar5;
      puStack_1d4 = *(undefined4 **)(unaff_EBP + -0x114);
      iVar1 = (**(code **)(iVar1 + 0x80))
                        (piVar5,*(undefined4 *)(unaff_EBP + -0x48),
                         *(undefined4 *)(unaff_EBP + -0x44));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x120);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      iVar1 = *(int *)(unaff_EBP + -0x10);
      iVar6 = *(int *)(unaff_EBP + -0x20);
      if ((iVar1 == *(int *)(iVar6 + 0x78)) ||
         ((*(int *)(iVar6 + 0x84) == 0 &&
          (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x4c) + 0x3270) + iVar1 * 4) != 0)))) {
        if (iVar1 == *(int *)(iVar6 + 0x74)) {
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar6 + 0x9c);
          piVar5 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x1c);
          }
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x18) = piVar5;
          iVar1 = (**(code **)(iVar1 + 0x80))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c),
                             *(undefined4 *)(unaff_EBP + -0x98),*(undefined4 *)(unaff_EBP + -0x94));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar1 = FUN_00402bc3(unaff_EBP + -0xa0);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          FUN_00403191(&DAT_00980690);
          piVar5 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x2c);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x18) = piVar5;
          iVar1 = (**(code **)(iVar1 + 0x80))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x14),
                             *(int *)(unaff_EBP + -0x44) + 5,*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0xc0),*(undefined4 *)(unaff_EBP + -0xbc),
                             *(undefined4 *)(unaff_EBP + -0xb8),*(undefined4 *)(unaff_EBP + -0xb4));
          if (iVar1 < 0) {
            puStack_1bc = (undefined4 *)&DAT_00963cc8;
            iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x18);
            uStack_1c8 = 0x7deb72;
            iStack_1c4 = iVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          puStack_1bc = (undefined4 *)(unaff_EBP + -0xc0);
        }
        else {
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar6 + 0x98);
          piVar5 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x1c);
          }
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x18) = piVar5;
          iVar1 = (**(code **)(iVar1 + 0x80))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                             *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          FUN_00403191(&DAT_00980690);
          piVar5 = *(int **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x2c);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x18) = piVar5;
          iVar1 = (**(code **)(iVar1 + 0x80))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x14),
                             *(int *)(unaff_EBP + -0x44) + 5,*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                             *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54));
          if (iVar1 < 0) {
            puStack_1bc = (undefined4 *)&DAT_00963cc8;
            iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x18);
            uStack_1c8 = 0x7dec56;
            iStack_1c4 = iVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          puStack_1bc = (undefined4 *)(unaff_EBP + -0x60);
        }
      }
      else if (iVar1 == *(int *)(iVar6 + 0x74)) {
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar6 + 0x9c);
        piVar5 = *(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + -0x1c);
        }
        iVar1 = *piVar5;
        *(int **)(unaff_EBP + -0x18) = piVar5;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x48),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0xd0),*(undefined4 *)(unaff_EBP + -0xcc),
                           *(undefined4 *)(unaff_EBP + -200),*(undefined4 *)(unaff_EBP + -0xc4));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iVar1 = FUN_00402bc3(unaff_EBP + -0xd0);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        FUN_00403191(&DAT_00980690);
        piVar5 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + -0x2c);
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
        iVar1 = *piVar5;
        *(int **)(unaff_EBP + -0x18) = piVar5;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x44) + 5
                           ,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x110),
                           *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108),
                           *(undefined4 *)(unaff_EBP + -0x104));
        if (iVar1 < 0) {
          puStack_1bc = (undefined4 *)&DAT_00963cc8;
          iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x18);
          uStack_1c8 = 0x7dea00;
          iStack_1c4 = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_1bc = (undefined4 *)(unaff_EBP + -0x110);
      }
      else {
        FUN_00403191(&DAT_00980690);
        piVar5 = *(int **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + -0x2c);
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48) + 8;
        iVar1 = *piVar5;
        *(int **)(unaff_EBP + -0x18) = piVar5;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x44) + 5
                           ,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x90),
                           *(undefined4 *)(unaff_EBP + -0x8c),*(undefined4 *)(unaff_EBP + -0x88),
                           *(undefined4 *)(unaff_EBP + -0x84));
        if (iVar1 < 0) {
          puStack_1bc = (undefined4 *)&DAT_00963cc8;
          iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x18);
          uStack_1c8 = 0x7dea75;
          iStack_1c4 = iVar1;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_1bc = (undefined4 *)(unaff_EBP + -0x90);
      }
      iStack_1c0 = 0x7dec63;
      puStack_1bc = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1bc < 0) {
        iStack_1c0 = 0x7dec6e;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar1 = *(int *)(unaff_EBP + -0x20);
      if (*(int *)(iVar1 + 0x7c) <= *(int *)(unaff_EBP + -0x10)) break;
      iVar1 = *(int *)(unaff_EBP + -0x20);
    }
  }
  while (*(int *)(unaff_EBP + -0x10) < (*(int *)(iVar1 + 0x7c) / 6 + 1) * 6) {
    puStack_1bc = *(undefined4 **)(unaff_EBP + -0x10);
    iStack_1c0 = unaff_EBP + -0x60;
    iStack_1c4 = 0x7deca4;
    FUN_007ded43();
    puStack_1bc = &DAT_00980690;
    iStack_1c0 = 0x7decad;
    FUN_00403191();
    uVar4 = *(undefined4 *)(iVar1 + 0x94);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      puStack_1bc = (undefined4 *)0x80004003;
      iStack_1c0 = 0x7decc7;
      FUN_00878dfb();
    }
    puStack_1bc = (undefined4 *)(unaff_EBP + -0x70);
    iStack_1c4 = *(int *)(unaff_EBP + -0x5c);
    uStack_1c8 = *(undefined4 *)(unaff_EBP + -0x60);
    uStack_1cc = 0x7decda;
    iStack_1c0 = uVar4;
    FUN_00470739();
    puStack_1bc = (undefined4 *)(unaff_EBP + -0x70);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1c0 = 0x7dece7;
    puStack_1bc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1bc < 0) {
      iStack_1c0 = 0x7decf2;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  puStack_1bc = (undefined4 *)0x7decff;
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    puStack_1bc = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
    iStack_1c0 = 0x7ded13;
    FUN_00434e38();
  }
  puStack_1bc = (undefined4 *)0x7ded1c;
  FUN_004125e6();
  puStack_1bc = (undefined4 *)0x7ded24;
  FUN_004125e6();
  puStack_1bc = (undefined4 *)0x7ded2c;
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


