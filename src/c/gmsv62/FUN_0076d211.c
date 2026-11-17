/* FUN_0076d211 - 0x0076d211 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076d211(void)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar11;
  int *piStack_224;
  uint uStack_220;
  undefined **ppuStack_21c;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined **ppuStack_1bc;
  undefined **ppuStack_1b8;
  int *piStack_1b4;
  undefined4 uStack_1b0;
  undefined1 *puStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 *puStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  int iStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined4 *puStack_178;
  int *piStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x154) = 0;
  *(int *)(unaff_EBP + -0x9c) = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x838);
  puStack_158 = (undefined4 *)0x76d25d;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x834);
  puStack_158 = (undefined4 *)0x76d272;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x83c);
  puStack_158 = (undefined4 *)0x76d287;
  FUN_0045e787();
  puStack_158 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_15c = 0x76d298;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(extraout_ECX + 4);
  piStack_174 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_174 == (int *)0x0) {
    puStack_158 = (undefined4 *)0x80004003;
    uStack_15c = 0x76d2b3;
    FUN_00878dfb();
    piStack_174 = *(int **)(unaff_EBP + 8);
  }
  iVar5 = *piStack_174;
  uStack_168 = *(undefined4 *)(unaff_EBP + -0x54);
  uStack_164 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_160 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_16c = 0;
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_170 = 0;
  *(int **)(unaff_EBP + -0x5c) = piStack_174;
  puStack_158 = *(undefined4 **)(unaff_EBP + -0x38);
  puStack_178 = (undefined4 *)0x76d2d5;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    puStack_178 = (undefined4 *)&DAT_00963cc8;
    iStack_17c = *(int *)(unaff_EBP + -0x5c);
    iStack_184 = 0x76d2e7;
    iStack_180 = iVar5;
    FUN_00878e09();
  }
  puStack_178 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_17c = 0x76d2f4;
  puStack_178 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    iStack_17c = 0x76d2ff;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x28) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(extraout_ECX + 0x28) + -4);
  }
  puStack_178 = (undefined4 *)0x80e;
  iStack_17c = unaff_EBP + -0x54;
  iStack_180 = 0x76d320;
  puVar6 = (undefined4 *)FUN_00679d22();
  puStack_178 = *(undefined4 **)(*(int *)(extraout_ECX + 0x24) + 0x77c);
  iStack_180 = *puVar6;
  iStack_184 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_188 = 0x76d33a;
  iStack_17c = iVar5;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + -0x54) != 0) {
    puStack_178 = (undefined4 *)(*(int *)(unaff_EBP + -0x54) + -0xc);
    iStack_17c = 0x76d351;
    FUN_00434e38();
  }
  puStack_178 = &DAT_00980690;
  iStack_17c = 0x76d360;
  FUN_00403191();
  puStack_178 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_17c = 0x76d370;
  iStack_180 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_17c;
  iStack_184 = 0x76d37c;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_180 = 0x76d388;
  FUN_0044974c();
  iStack_180 = 0x76d38f;
  iVar5 = FUN_00448ebb();
  puStack_178 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_17c = 0x76d39e;
  puStack_178 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    iStack_17c = 0x76d3a9;
    FUN_00878dfb();
  }
  puStack_178 = &DAT_00980690;
  iStack_17c = 0x76d3b5;
  FUN_00403191();
  puStack_178 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_17c = 0x76d3c2;
  FUN_00403191();
  puStack_178 = (undefined4 *)(unaff_EBP + -0x88);
  iStack_17c = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_180 = 0x76d3d9;
  iStack_180 = FUN_00449749();
  iStack_184 = 0x76d3e2;
  uStack_188 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_184;
  iStack_18c = 0x76d3ee;
  FUN_00448a17();
  uStack_188 = 6;
  iStack_18c = -iVar5 + 0x105;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_190 = 0x76d404;
  FUN_004115d9();
  uStack_190 = 0x76d40b;
  FUN_00448e3a();
  puStack_178 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_17c = 0x76d418;
  puStack_178 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    iStack_17c = 0x76d423;
    FUN_00878dfb();
  }
  puStack_178 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_17c = 0x76d433;
  puStack_178 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    iStack_17c = 0x76d43e;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x70) = -iVar5 + 0xf1;
  iVar5 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -0x6c) = 3;
  *(undefined4 *)(unaff_EBP + -0x68) = 0x119;
  *(undefined4 *)(unaff_EBP + -100) = 0x19;
  *(undefined4 *)(iVar5 + 0x788) = *(undefined4 *)(unaff_EBP + -0x70);
  *(undefined4 *)(iVar5 + 0x78c) = *(undefined4 *)(unaff_EBP + -0x6c);
  *(undefined4 *)(iVar5 + 0x790) = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined4 *)(iVar5 + 0x794) = *(undefined4 *)(unaff_EBP + -100);
  if (*(int *)(extraout_ECX + 4) == 0) {
    puStack_178 = (undefined4 *)0x80004003;
    iStack_17c = 0x76d479;
    FUN_00878dfb();
  }
  puStack_178 = (undefined4 *)0x76d481;
  iVar5 = FUN_0040e53d();
  puStack_178 = &DAT_00980690;
  *(int *)(unaff_EBP + -0x10) = iVar5 + 4;
  iStack_17c = 0x76d494;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(extraout_ECX + 0x18);
  piStack_194 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (piStack_194 == (int *)0x0) {
    puStack_178 = (undefined4 *)0x80004003;
    iStack_17c = 0x76d4af;
    FUN_00878dfb();
    piStack_194 = *(int **)(unaff_EBP + 8);
  }
  iVar5 = *piStack_194;
  uStack_188 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_18c = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_184 = *(int *)(unaff_EBP + -0x44);
  iStack_180 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_17c = *(int *)(unaff_EBP + -0x3c);
  uStack_190 = 0;
  *(int **)(unaff_EBP + -0x5c) = piStack_194;
  puStack_178 = *(undefined4 **)(unaff_EBP + -0x38);
  puStack_198 = (undefined4 *)0x76d4d2;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    puStack_198 = (undefined4 *)&DAT_00963cc8;
    iStack_19c = *(undefined4 *)(unaff_EBP + -0x5c);
    uStack_1a4 = 0x76d4e4;
    iStack_1a0 = iVar5;
    FUN_00878e09();
  }
  puStack_198 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_19c = 0x76d4f1;
  puStack_198 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_198 < 0) {
    iStack_19c = 0x76d4fe;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    puStack_198 = (undefined4 *)0x80004003;
    iStack_19c = 0x76d50d;
    FUN_00878dfb();
  }
  puStack_198 = (undefined4 *)0x76d515;
  iVar5 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar5;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 2;
  while ((*(int *)(extraout_ECX + 0x28) != 0 &&
         (*(uint *)(unaff_EBP + -0x34) < *(uint *)(*(int *)(extraout_ECX + 0x28) + -4)))) {
    puStack_198 = &DAT_00980690;
    iStack_19c = 0x76d54b;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(extraout_ECX + 8);
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (piVar9 == (int *)0x0) {
      puStack_198 = (undefined4 *)0x80004003;
      iStack_19c = 0x76d566;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar5 = *piVar9;
    iStack_1a8 = *(int *)(unaff_EBP + -0x58);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x10);
    uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_1a0 = *(int *)(unaff_EBP + -0x40);
    iStack_19c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_1b0 = 0;
    *(int **)(unaff_EBP + -0x30) = piVar9;
    puStack_198 = *(undefined4 **)(unaff_EBP + -0x38);
    ppuStack_1b8 = (undefined **)0x76d589;
    piStack_1b4 = piVar9;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < 0) {
      ppuStack_1b8 = (undefined **)&DAT_00963cc8;
      ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x30);
      uStack_1c4 = 0x76d59b;
      iStack_1c0 = iVar5;
      FUN_00878e09();
    }
    ppuStack_1b8 = (undefined **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    ppuStack_1bc = (undefined **)0x76d5a8;
    ppuStack_1b8 = (undefined **)FUN_00402bc3();
    if ((int)ppuStack_1b8 < 0) {
      ppuStack_1bc = (undefined **)0x76d5b5;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x20);
    ppuStack_1b8 = (undefined **)(iVar5 + 0xc + *(int *)(extraout_ECX + 0x28));
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    ppuStack_1bc = (undefined **)0x76d5cb;
    FUN_00414f8b();
    ppuStack_1b8 = (undefined **)0x43;
    iStack_1c0 = unaff_EBP + -0x28;
    *(undefined ****)(unaff_EBP + -0x30) = &ppuStack_1bc;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_1c4 = 0x76d5e0;
    FUN_0046fcc9();
    iStack_1c0 = unaff_EBP + -0x2c;
    uStack_1c4 = 0x76d5e9;
    uVar7 = FUN_007d3a22();
    *(undefined4 *)(iVar5 + 0x4c + *(int *)(extraout_ECX + 0x28)) = uVar7;
    ppuStack_1b8 = (undefined **)(iVar5 + 4 + *(int *)(extraout_ECX + 0x28));
    ppuStack_1bc = (undefined **)0x76d603;
    FUN_00414f8b();
    ppuStack_1b8 = (undefined **)(iVar5 + 0xc + *(int *)(extraout_ECX + 0x28));
    ppuStack_1bc = (undefined **)0x76d613;
    FUN_00414f8b();
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_EBP + -0x24) + -4);
    }
    if (10 < iVar8) {
      ppuStack_1b8 = (undefined **)0x9;
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x1c);
      iStack_1c0 = 0x76d634;
      FUN_0045e070();
      ppuStack_1b8 = (undefined **)&DAT_0096b790;
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_1c0 = 0x76d648;
      ppuStack_1b8 = (undefined **)FUN_004653c5();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      ppuStack_1bc = (undefined **)0x76d655;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (*(int *)(unaff_EBP + -0x78) != 0) {
        ppuStack_1b8 = (undefined **)(*(int *)(unaff_EBP + -0x78) + -0xc);
        ppuStack_1bc = (undefined **)0x76d669;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        ppuStack_1b8 = (undefined **)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        ppuStack_1bc = (undefined **)0x76d67e;
        FUN_00434e38();
      }
    }
    ppuStack_1b8 = *(undefined ***)(iVar5 + 0x10 + *(int *)(extraout_ECX + 0x28));
    iStack_1c0 = unaff_EBP + -0x4c;
    ppuStack_1bc = &PTR_LAB_0096b78c;
    uStack_1c4 = 0x76d694;
    FUN_00434e21();
    if (*(int *)(*(int *)(extraout_ECX + 0x24) + 0x818) ==
        *(int *)(iVar5 + *(int *)(extraout_ECX + 0x28))) {
      ppuStack_1b8 = (undefined **)0x14;
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x5c) = 0;
      iStack_1c0 = 0x76d6bf;
      piVar9 = (int *)FUN_00679d22();
      ppuStack_1b8 = (undefined **)*piVar9;
      if ((undefined **)*piVar9 == (undefined **)0x0) {
        ppuStack_1b8 = DAT_00980dfc;
      }
      ppuStack_1bc = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x2c);
      }
      iStack_1c0 = 0x76d6dc;
      iVar5 = FUN_008858f0();
      *(uint *)(unaff_EBP + -0x54) = (uint)(iVar5 == 0);
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        ppuStack_1b8 = (undefined **)(*(int *)(unaff_EBP + -0x14) + -0xc);
        ppuStack_1bc = (undefined **)0x76d6f6;
        FUN_00434e38();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        ppuStack_1b8 = (undefined **)0x80004003;
        ppuStack_1bc = (undefined **)0x76d706;
        FUN_00878dfb();
      }
      ppuVar2 = *(undefined ***)(unaff_EBP + 8);
      ppuStack_1b8 = (undefined **)0xff244768;
      ppuStack_1bc = (undefined **)0x12;
      iStack_1c0 = 0x119;
      uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x10);
      iVar5 = (**(code **)(*ppuVar2 + 0x8c))();
      if (iVar5 < 0) {
        ppuStack_1b8 = (undefined **)&DAT_00963cc8;
        uStack_1c4 = 0x76d733;
        iStack_1c0 = iVar5;
        ppuStack_1bc = ppuVar2;
        FUN_00878e09();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76d744;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)0x3;
      ppuStack_1bc = (undefined **)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_1c0 = 0x76d75b;
      FUN_004031b7();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x120);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_1c0 = 0x76d775;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76d77e;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      ppuStack_1bc = (undefined **)0x76d7b2;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76d7bd;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x120);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      ppuStack_1bc = (undefined **)0x76d7cd;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76d7d8;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76d7e4;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)0x3;
      ppuStack_1bc = (undefined **)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_1c0 = 0x76d7f6;
      FUN_004031b7();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xe0);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x100);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_1c0 = 0x76d810;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76d819;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x100);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      ppuStack_1bc = (undefined **)0x76d84d;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76d858;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      ppuStack_1bc = (undefined **)0x76d868;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76d873;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76d87f;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)0x3;
      ppuStack_1bc = (undefined **)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_1c0 = 0x76d891;
      FUN_004031b7();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xb0);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_1c0 = 0x76d8ab;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76d8b4;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      ppuStack_1bc = (undefined **)0x76d8eb;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76d8f6;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      ppuStack_1bc = (undefined **)0x76d906;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76d911;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x18 + *(int *)(extraout_ECX + 0x28)) != 0) {
        ppuStack_1b8 = (undefined **)&DAT_00980690;
        ppuStack_1bc = (undefined **)0x76d932;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(extraout_ECX + 0x20);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        if (piVar9 == (int *)0x0) {
          ppuStack_1b8 = (undefined **)0x80004003;
          ppuStack_1bc = (undefined **)0x76d94d;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar9;
        uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x130);
        iStack_1c0 = *(int *)(unaff_EBP + -300);
        ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x128);
        *(int **)(unaff_EBP + -0x58) = piVar9;
        ppuStack_1b8 = *(undefined ***)(unaff_EBP + -0x124);
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          ppuStack_1b8 = (undefined **)&DAT_00963cc8;
          ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x58);
          uStack_1c4 = 0x76d985;
          iStack_1c0 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        ppuStack_1b8 = (undefined **)(unaff_EBP + -0x130);
LAB_0076dbd5:
        ppuStack_1bc = (undefined **)0x76dbdb;
        ppuStack_1b8 = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_1b8 < 0) {
          ppuStack_1bc = (undefined **)0x76dbe6;
          FUN_00878dfb();
        }
      }
    }
    else {
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76d9a5;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      ppuStack_1bc = (undefined **)0x76d9b5;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x150);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_1c0 = 0x76d9cf;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76d9d8;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      ppuStack_1bc = (undefined **)0x76da0c;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76da17;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x150);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      ppuStack_1bc = (undefined **)0x76da27;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76da32;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76da3e;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      ppuStack_1bc = (undefined **)0x76da4e;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x110);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_1c0 = 0x76da68;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76da71;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      ppuStack_1bc = (undefined **)0x76daa5;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76dab0;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x110);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      ppuStack_1bc = (undefined **)0x76dac0;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76dacb;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76dad7;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      ppuStack_1bc = (undefined **)0x76dae7;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x98);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x140);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_1c0 = 0x76db01;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76db0a;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x30) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x140);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      ppuStack_1bc = (undefined **)0x76db41;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76db4c;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      ppuStack_1bc = (undefined **)0x76db5c;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76db67;
        FUN_00878dfb();
      }
      if (*(int *)(iVar5 + 0x18 + *(int *)(extraout_ECX + 0x28)) != 0) {
        ppuStack_1b8 = (undefined **)&DAT_00980690;
        ppuStack_1bc = (undefined **)0x76db7e;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(extraout_ECX + 0x1c);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        if (piVar9 == (int *)0x0) {
          ppuStack_1b8 = (undefined **)0x80004003;
          ppuStack_1bc = (undefined **)0x76db99;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar9;
        uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x70);
        iStack_1c0 = *(int *)(unaff_EBP + -0x6c);
        ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x68);
        *(int **)(unaff_EBP + -0x58) = piVar9;
        ppuStack_1b8 = *(undefined ***)(unaff_EBP + -100);
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          ppuStack_1b8 = (undefined **)&DAT_00963cc8;
          ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x58);
          uStack_1c4 = 0x76dbce;
          iStack_1c0 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        ppuStack_1b8 = (undefined **)(unaff_EBP + -0x70);
        goto LAB_0076dbd5;
      }
    }
    iVar8 = *(int *)(unaff_EBP + -0x20);
    iVar5 = *(int *)(unaff_EBP + -0x18) + 0x10;
    ppuStack_1bc = (undefined **)0x119;
    iStack_1c0 = *(int *)(unaff_EBP + -0x10);
    uStack_1c4 = 0;
    ppuStack_1b8 = (undefined **)iVar5;
    (*DAT_0097b504)();
    iStack_1dc = iVar8 + 0x2c + *(int *)(extraout_ECX + 0x28);
    iStack_1e0 = 0x76dc1e;
    (*DAT_0097b504)();
    iStack_1e4 = 0xcd;
    iStack_1e0 = iVar5;
    (*DAT_0097b504)();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      puStack_198 = (undefined4 *)(*(int *)(unaff_EBP + -0x2c) + -0xc);
      iStack_19c = 0x76dc53;
      FUN_00434e38();
    }
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
    *(int *)(unaff_EBP + -0x20) = iVar8 + 0x50;
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 2;
  while ((*(int *)(extraout_ECX + 0x30) != 0 &&
         (*(uint *)(unaff_EBP + -0x34) < *(uint *)(*(int *)(extraout_ECX + 0x30) + -4)))) {
    puStack_198 = &DAT_00980690;
    iStack_19c = 0x76dc97;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 8);
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (piVar9 == (int *)0x0) {
      puStack_198 = (undefined4 *)0x80004003;
      iStack_19c = 0x76dcb2;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar5 = *piVar9;
    iStack_1a8 = *(int *)(unaff_EBP + -0x14);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x10);
    uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_1a0 = *(int *)(unaff_EBP + -0x40);
    iStack_19c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_1b0 = 0;
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    puStack_198 = *(undefined4 **)(unaff_EBP + -0x38);
    ppuStack_1b8 = (undefined **)0x76dcd5;
    piStack_1b4 = piVar9;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < 0) {
      ppuStack_1b8 = (undefined **)&DAT_00963cc8;
      ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x1c);
      uStack_1c4 = 0x76dce7;
      iStack_1c0 = iVar5;
      FUN_00878e09();
    }
    ppuStack_1b8 = (undefined **)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    ppuStack_1bc = (undefined **)0x76dcf4;
    ppuStack_1b8 = (undefined **)FUN_00402bc3();
    if ((int)ppuStack_1b8 < 0) {
      ppuStack_1bc = (undefined **)0x76dd01;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x20);
    ppuStack_1b8 = (undefined **)(iVar5 + 0xc + *(int *)(extraout_ECX + 0x30));
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    ppuStack_1bc = (undefined **)0x76dd17;
    FUN_00414f8b();
    ppuStack_1b8 = (undefined **)0x43;
    iStack_1c0 = unaff_EBP + -0x28;
    *(undefined ****)(unaff_EBP + -0x14) = &ppuStack_1bc;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    uStack_1c4 = 0x76dd2c;
    FUN_0046fcc9();
    iStack_1c0 = unaff_EBP + -0x2c;
    uStack_1c4 = 0x76dd35;
    uVar7 = FUN_007d3a22();
    *(undefined4 *)(iVar5 + 0x4c + *(int *)(extraout_ECX + 0x30)) = uVar7;
    ppuStack_1b8 = (undefined **)(iVar5 + 4 + *(int *)(extraout_ECX + 0x30));
    ppuStack_1bc = (undefined **)0x76dd4f;
    FUN_00414f8b();
    ppuStack_1b8 = (undefined **)(iVar5 + 0xc + *(int *)(extraout_ECX + 0x30));
    ppuStack_1bc = (undefined **)0x76dd5f;
    FUN_00414f8b();
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_EBP + -0x24) + -4);
    }
    if (10 < iVar8) {
      ppuStack_1b8 = (undefined **)0x9;
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x30);
      iStack_1c0 = 0x76dd80;
      FUN_0045e070();
      ppuStack_1b8 = (undefined **)&DAT_0096b790;
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_1c0 = 0x76dd94;
      ppuStack_1b8 = (undefined **)FUN_004653c5();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      ppuStack_1bc = (undefined **)0x76dda1;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      if (*(int *)(unaff_EBP + -0x78) != 0) {
        ppuStack_1b8 = (undefined **)(*(int *)(unaff_EBP + -0x78) + -0xc);
        ppuStack_1bc = (undefined **)0x76ddb5;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        ppuStack_1b8 = (undefined **)(*(int *)(unaff_EBP + -0x30) + -0xc);
        ppuStack_1bc = (undefined **)0x76ddca;
        FUN_00434e38();
      }
    }
    ppuStack_1b8 = *(undefined ***)(iVar5 + 0x10 + *(int *)(extraout_ECX + 0x30));
    iStack_1c0 = unaff_EBP + -0x4c;
    ppuStack_1bc = &PTR_LAB_0096b78c;
    uStack_1c4 = 0x76dde0;
    FUN_00434e21();
    if (*(int *)(*(int *)(extraout_ECX + 0x24) + 0x818) ==
        *(int *)(iVar5 + *(int *)(extraout_ECX + 0x30))) {
      ppuStack_1b8 = (undefined **)0x14;
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x58);
      *(undefined4 *)(unaff_EBP + -0x5c) = 0;
      iStack_1c0 = 0x76de0b;
      piVar9 = (int *)FUN_00679d22();
      ppuStack_1b8 = (undefined **)*piVar9;
      if ((undefined **)*piVar9 == (undefined **)0x0) {
        ppuStack_1b8 = DAT_00980dfc;
      }
      ppuStack_1bc = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x2c);
      }
      iStack_1c0 = 0x76de28;
      iVar5 = FUN_008858f0();
      *(uint *)(unaff_EBP + -0x54) = (uint)(iVar5 == 0);
      if (*(int *)(unaff_EBP + -0x58) != 0) {
        ppuStack_1b8 = (undefined **)(*(int *)(unaff_EBP + -0x58) + -0xc);
        ppuStack_1bc = (undefined **)0x76de42;
        FUN_00434e38();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        ppuStack_1b8 = (undefined **)0x80004003;
        ppuStack_1bc = (undefined **)0x76de52;
        FUN_00878dfb();
      }
      ppuVar2 = *(undefined ***)(unaff_EBP + 8);
      ppuStack_1b8 = (undefined **)0xff244768;
      ppuStack_1bc = (undefined **)0x12;
      iStack_1c0 = 0x119;
      uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x10);
      iVar5 = (**(code **)(*ppuVar2 + 0x8c))();
      if (iVar5 < 0) {
        ppuStack_1b8 = (undefined **)&DAT_00963cc8;
        uStack_1c4 = 0x76de7f;
        iStack_1c0 = iVar5;
        ppuStack_1bc = ppuVar2;
        FUN_00878e09();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76de90;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)0x3;
      ppuStack_1bc = (undefined **)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_1c0 = 0x76dea7;
      FUN_004031b7();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x120);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iStack_1c0 = 0x76dec1;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76deca;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      ppuStack_1bc = (undefined **)0x76defe;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76df09;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x120);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      ppuStack_1bc = (undefined **)0x76df19;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76df24;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76df30;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)0x3;
      ppuStack_1bc = (undefined **)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_1c0 = 0x76df42;
      FUN_004031b7();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xe0);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x100);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      iStack_1c0 = 0x76df5c;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76df65;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x100);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      ppuStack_1bc = (undefined **)0x76df99;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76dfa4;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      ppuStack_1bc = (undefined **)0x76dfb4;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76dfbf;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76dfcb;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)0x3;
      ppuStack_1bc = (undefined **)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_1c0 = 0x76dfdd;
      FUN_004031b7();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xb0);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      iStack_1c0 = 0x76dff7;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76e000;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      ppuStack_1bc = (undefined **)0x76e037;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e042;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      ppuStack_1bc = (undefined **)0x76e052;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e05d;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x18 + *(int *)(extraout_ECX + 0x30)) != 0) {
        ppuStack_1b8 = (undefined **)&DAT_00980690;
        ppuStack_1bc = (undefined **)0x76e07e;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x20);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        if (piVar9 == (int *)0x0) {
          ppuStack_1b8 = (undefined **)0x80004003;
          ppuStack_1bc = (undefined **)0x76e099;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar9;
        uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x130);
        iStack_1c0 = *(int *)(unaff_EBP + -300);
        ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x128);
        *(int **)(unaff_EBP + -0x1c) = piVar9;
        ppuStack_1b8 = *(undefined ***)(unaff_EBP + -0x124);
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          ppuStack_1b8 = (undefined **)&DAT_00963cc8;
          ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x1c);
          uStack_1c4 = 0x76e0d1;
          iStack_1c0 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        ppuStack_1b8 = (undefined **)(unaff_EBP + -0x130);
LAB_0076e321:
        ppuStack_1bc = (undefined **)0x76e327;
        ppuStack_1b8 = (undefined **)FUN_00402bc3();
        if ((int)ppuStack_1b8 < 0) {
          ppuStack_1bc = (undefined **)0x76e332;
          FUN_00878dfb();
        }
      }
    }
    else {
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76e0f1;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      ppuStack_1bc = (undefined **)0x76e101;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x150);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iStack_1c0 = 0x76e11b;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76e124;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xf0);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      ppuStack_1bc = (undefined **)0x76e158;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e163;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x150);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      ppuStack_1bc = (undefined **)0x76e173;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e17e;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76e18a;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      ppuStack_1bc = (undefined **)0x76e19a;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x110);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      iStack_1c0 = 0x76e1b4;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76e1bd;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0xd0);
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      ppuStack_1bc = (undefined **)0x76e1f1;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e1fc;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x110);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      ppuStack_1bc = (undefined **)0x76e20c;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e217;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      ppuStack_1bc = (undefined **)0x76e223;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      ppuStack_1bc = (undefined **)0x76e233;
      FUN_00403191();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x98);
      ppuStack_1bc = (undefined **)(unaff_EBP + -0x140);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      iStack_1c0 = 0x76e24d;
      iStack_1c0 = FUN_00449749();
      uStack_1c4 = 0x76e256;
      FUN_00449713();
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      FUN_004115d9();
      FUN_00448e3a();
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x140);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      ppuStack_1bc = (undefined **)0x76e28d;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e298;
        FUN_00878dfb();
      }
      ppuStack_1b8 = (undefined **)(unaff_EBP + -0x98);
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      ppuStack_1bc = (undefined **)0x76e2a8;
      ppuStack_1b8 = (undefined **)FUN_00402bc3();
      if ((int)ppuStack_1b8 < 0) {
        ppuStack_1bc = (undefined **)0x76e2b3;
        FUN_00878dfb();
      }
      if (*(int *)(iVar5 + 0x18 + *(int *)(extraout_ECX + 0x30)) != 0) {
        ppuStack_1b8 = (undefined **)&DAT_00980690;
        ppuStack_1bc = (undefined **)0x76e2ca;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x1c);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        if (piVar9 == (int *)0x0) {
          ppuStack_1b8 = (undefined **)0x80004003;
          ppuStack_1bc = (undefined **)0x76e2e5;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar9;
        uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x70);
        iStack_1c0 = *(int *)(unaff_EBP + -0x6c);
        ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x68);
        *(int **)(unaff_EBP + -0x1c) = piVar9;
        ppuStack_1b8 = *(undefined ***)(unaff_EBP + -100);
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          ppuStack_1b8 = (undefined **)&DAT_00963cc8;
          ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x1c);
          uStack_1c4 = 0x76e31a;
          iStack_1c0 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        ppuStack_1b8 = (undefined **)(unaff_EBP + -0x70);
        goto LAB_0076e321;
      }
    }
    iVar8 = *(int *)(unaff_EBP + -0x20);
    iVar5 = *(int *)(unaff_EBP + -0x18) + 0x10;
    ppuStack_1bc = (undefined **)0x119;
    iStack_1c0 = *(int *)(unaff_EBP + -0x10);
    uStack_1c4 = 0;
    ppuStack_1b8 = (undefined **)iVar5;
    (*DAT_0097b504)();
    iStack_1dc = iVar8 + 0x2c + *(int *)(extraout_ECX + 0x30);
    iStack_1e0 = 0x76e36a;
    (*DAT_0097b504)();
    iStack_1e4 = 0xcd;
    iStack_1e0 = iVar5;
    (*DAT_0097b504)();
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_198 = (undefined4 *)0x76e397;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
    *(int *)(unaff_EBP + -0x20) = iVar8 + 0x50;
  }
  if (((*(int *)(extraout_ECX + 0x30) == 0) || (*(int *)(*(int *)(extraout_ECX + 0x30) + -4) == 0))
     && ((*(int *)(extraout_ECX + 0x28) == 0 || (*(int *)(*(int *)(extraout_ECX + 0x28) + -4) == 0))
        )) {
    puStack_198 = &DAT_00980690;
    iStack_19c = 0x76e3d4;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 8);
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    if (piVar9 == (int *)0x0) {
      puStack_198 = (undefined4 *)0x80004003;
      iStack_19c = 0x76e3ef;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar5 = *piVar9;
    iStack_1a8 = *(undefined4 *)(unaff_EBP + -0x14);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x10);
    uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_1a0 = *(int *)(unaff_EBP + -0x40);
    iStack_19c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_1b0 = 0;
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    puStack_198 = *(undefined4 **)(unaff_EBP + -0x38);
    ppuStack_1b8 = (undefined **)0x76e412;
    piStack_1b4 = piVar9;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < 0) {
      puStack_198 = (undefined4 *)&DAT_00963cc8;
      iStack_19c = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_1a4 = 0x76e424;
      iStack_1a0 = iVar5;
      FUN_00878e09();
    }
    puStack_198 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_19c = 0x76e431;
    puStack_198 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_198 < 0) {
      iStack_19c = 0x76e43c;
      FUN_00878dfb();
    }
    puStack_198 = &DAT_00980690;
    iStack_19c = 0x76e44d;
    FUN_00403191();
    puStack_198 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iStack_19c = 0x76e45a;
    FUN_00403191();
    puStack_198 = (undefined4 *)(unaff_EBP + -0x88);
    iStack_19c = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    iStack_1a0 = 0x76e471;
    iStack_1a0 = FUN_00449749();
    puStack_1ac = (undefined1 *)&uStack_1a4;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1a4;
    iStack_1a8 = 0x2cd;
    uStack_1b0 = 0x76e488;
    uStack_1a4 = extraout_ECX_00;
    FUN_00679e4e();
    iStack_1a8 = *(int *)(unaff_EBP + -0x10) + 2;
    puStack_1ac = (undefined1 *)0x19;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    uStack_1b0 = 0x76e49d;
    FUN_004115d9();
    uStack_1b0 = 0x76e4a4;
    FUN_00448e3a();
    puStack_198 = (undefined4 *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iStack_19c = 0x76e4b1;
    puStack_198 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_198 < 0) {
      iStack_19c = 0x76e4bc;
      FUN_00878dfb();
    }
    puStack_198 = (undefined4 *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_19c = 0x76e4cc;
    puStack_198 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_198 < 0) {
      iStack_19c = 0x76e4d7;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
  }
  puStack_198 = &DAT_00980690;
  iStack_19c = 0x76e4e8;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0xc);
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  if (piVar9 == (int *)0x0) {
    puStack_198 = (undefined4 *)0x80004003;
    iStack_19c = 0x76e503;
    FUN_00878dfb();
    piVar9 = *(int **)(unaff_EBP + 8);
  }
  iVar5 = *piVar9;
  iStack_1a8 = *(undefined4 *)(unaff_EBP + -0x14);
  puStack_1ac = *(undefined1 **)(unaff_EBP + -0x10);
  uStack_1a4 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_1a0 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_19c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_1b0 = 0;
  *(int **)(unaff_EBP + -0x1c) = piVar9;
  puStack_198 = *(undefined4 **)(unaff_EBP + -0x38);
  ppuStack_1b8 = (undefined **)0x76e526;
  piStack_1b4 = piVar9;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    ppuStack_1b8 = (undefined **)&DAT_00963cc8;
    ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x1c);
    uStack_1c4 = 0x76e538;
    iStack_1c0 = iVar5;
    FUN_00878e09();
  }
  ppuStack_1b8 = (undefined **)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  ppuStack_1bc = (undefined **)0x76e545;
  ppuStack_1b8 = (undefined **)FUN_00402bc3();
  if ((int)ppuStack_1b8 < 0) {
    ppuStack_1bc = (undefined **)0x76e550;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0xc) == 0) {
    ppuStack_1b8 = (undefined **)0x80004003;
    ppuStack_1bc = (undefined **)0x76e560;
    FUN_00878dfb();
  }
  ppuStack_1b8 = (undefined **)0x76e568;
  iVar5 = FUN_0040e53d();
  ppuStack_1b8 = (undefined **)&DAT_00980690;
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10 + iVar5;
  ppuStack_1bc = (undefined **)0x76e57f;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x14);
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x46;
  if (piVar9 == (int *)0x0) {
    ppuStack_1b8 = (undefined **)0x80004003;
    ppuStack_1bc = (undefined **)0x76e59a;
    FUN_00878dfb();
    piVar9 = *(int **)(unaff_EBP + 8);
  }
  iVar5 = *piVar9;
  uStack_1c4 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x40);
  ppuStack_1bc = *(undefined ***)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x1c) = piVar9;
  ppuStack_1b8 = *(undefined ***)(unaff_EBP + -0x38);
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    iStack_1dc = *(int *)(unaff_EBP + -0x1c);
    iStack_1e4 = 0x76e5cf;
    iStack_1e0 = iVar5;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_1dc = 0x76e5dc;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1dc = 0x76e5e7;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x2c) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(extraout_ECX + 0x2c) + -4);
  }
  iStack_1dc = unaff_EBP + -0x14;
  iStack_1e0 = 0x76e608;
  puVar6 = (undefined4 *)FUN_00679d22();
  iStack_1e0 = *puVar6;
  iStack_1e4 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x47;
  iStack_1dc = iVar5;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  iStack_1dc = 0x76e63f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  iStack_1dc = 0x76e64f;
  iStack_1e0 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_1dc;
  iStack_1e4 = 0x76e65b;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x48;
  iStack_1e0 = 0x76e667;
  FUN_0044974c();
  iStack_1e0 = 0x76e66e;
  uVar7 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_1dc = 0x76e67e;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1dc = 0x76e689;
    FUN_00878dfb();
  }
  iStack_1dc = 0x76e698;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
  iStack_1dc = unaff_EBP + -0x98;
  iStack_1e0 = 0x76e6a5;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_1dc = 0x76e6b1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  iStack_1dc = 0x76e6bb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
  iStack_1dc = unaff_EBP + -0x70;
  iStack_1e0 = 0x76e6c5;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_1dc = 0x76e6d1;
    FUN_00878dfb();
  }
  iStack_1dc = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  iStack_1e0 = 0x76e6e8;
  iStack_1e0 = FUN_00449749();
  iStack_1e4 = 0x76e6f1;
  FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_1e4;
  FUN_00448a17();
  iVar5 = *(int *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x4b;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x4a;
  iStack_1dc = 0x76e72f;
  iVar8 = FUN_00402bc3();
  if (iVar8 < 0) {
    iStack_1dc = 0x76e73a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_1dc = 0x76e74a;
  iVar8 = FUN_00402bc3();
  if (iVar8 < 0) {
    iStack_1dc = 0x76e755;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x70) = 0xf1 - iVar5;
  *(int *)(unaff_EBP + -0x6c) = *(int *)(unaff_EBP + -0x10) + 3;
  iVar5 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -0x68) = 0x119;
  *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0x10) + 0x19;
  *(undefined4 *)(iVar5 + 0x798) = *(undefined4 *)(unaff_EBP + -0x70);
  *(undefined4 *)(iVar5 + 0x79c) = *(undefined4 *)(unaff_EBP + -0x6c);
  *(undefined4 *)(iVar5 + 0x7a0) = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined4 *)(iVar5 + 0x7a4) = *(undefined4 *)(unaff_EBP + -100);
  if (*(int *)(extraout_ECX + 0x14) == 0) {
    iStack_1dc = 0x76e791;
    FUN_00878dfb();
  }
  iVar5 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4 + iVar5;
  iStack_1dc = 0x76e7b0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
  iStack_1dc = unaff_EBP + -0x98;
  iStack_1e0 = 0x76e7c1;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_1dc = 0x76e7cd;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x18);
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x4d;
  if (piVar9 == (int *)0x0) {
    iStack_1dc = 0x76e7e8;
    FUN_00878dfb();
    piVar9 = *(int **)(unaff_EBP + 8);
  }
  iVar5 = *piVar9;
  iStack_1e4 = *(int *)(unaff_EBP + -0x98);
  iStack_1e0 = *(undefined4 *)(unaff_EBP + -0x94);
  iStack_1dc = *(int *)(unaff_EBP + -0x90);
  *(int **)(unaff_EBP + -0x1c) = piVar9;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    iStack_1fc = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_204 = 0x76e820;
    iStack_200 = iVar5;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_1fc = 0x76e830;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1fc = 0x76e83d;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    iStack_1fc = 0x76e84c;
    FUN_00878dfb();
  }
  iVar5 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar5;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 2;
  while ((*(int *)(extraout_ECX + 0x2c) != 0 &&
         (*(uint *)(unaff_EBP + -0x34) < *(uint *)(*(int *)(extraout_ECX + 0x2c) + -4)))) {
    iStack_1fc = 0x76e88a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
    iStack_1fc = unaff_EBP + -0x98;
    iStack_200 = 0x76e89b;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      iStack_1fc = 0x76e8a7;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 8);
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if (piVar9 == (int *)0x0) {
      iStack_1fc = 0x76e8c2;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar5 = *piVar9;
    uStack_204 = *(undefined4 *)(unaff_EBP + -0x98);
    iStack_200 = *(int *)(unaff_EBP + -0x94);
    iStack_1fc = *(undefined4 *)(unaff_EBP + -0x90);
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < 0) {
      ppuStack_21c = *(undefined ***)(unaff_EBP + -0x1c);
      piStack_224 = (int *)0x76e8fa;
      uStack_220 = iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    ppuStack_21c = (undefined **)0x76e90a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      ppuStack_21c = (undefined **)0x76e915;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    ppuStack_21c = (undefined **)0x76e92c;
    FUN_00414f8b();
    uStack_220 = unaff_EBP + -0x28;
    *(undefined ****)(unaff_EBP + -0x14) = &ppuStack_21c;
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    piStack_224 = (int *)0x76e941;
    FUN_0046fcc9();
    uStack_220 = unaff_EBP + -0x2c;
    piStack_224 = (int *)0x76e94a;
    uVar7 = FUN_007d3a22();
    *(undefined4 *)(iVar5 + 0x4c + *(int *)(extraout_ECX + 0x2c)) = uVar7;
    ppuStack_21c = (undefined **)0x76e964;
    FUN_00414f8b();
    ppuStack_21c = (undefined **)0x76e974;
    FUN_00414f8b();
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(unaff_EBP + -0x24) + -4);
    }
    if (10 < iVar8) {
      ppuStack_21c = (undefined **)(unaff_EBP + -0x30);
      uStack_220 = 0x76e995;
      FUN_0045e070();
      ppuStack_21c = (undefined **)(unaff_EBP + -0x78);
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      uStack_220 = 0x76e9a9;
      FUN_004653c5();
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      ppuStack_21c = (undefined **)0x76e9b6;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      FUN_00414ebb();
    }
    uStack_220 = unaff_EBP + -0x4c;
    ppuStack_21c = &PTR_LAB_0096b78c;
    piStack_224 = (int *)0x76e9e3;
    FUN_00434e21();
    if (*(int *)(*(int *)(extraout_ECX + 0x24) + 0x818) ==
        *(int *)(iVar5 + *(int *)(extraout_ECX + 0x2c))) {
      ppuStack_21c = (undefined **)(unaff_EBP + -0x58);
      *(undefined4 *)(unaff_EBP + -0x5c) = 1;
      uStack_220 = 0x76ea11;
      FUN_00679d22();
      ppuStack_21c = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        ppuStack_21c = *(undefined ***)(unaff_EBP + -0x2c);
      }
      uStack_220 = 0x76ea2f;
      iVar5 = FUN_008858f0();
      *(uint *)(unaff_EBP + -0x54) = (uint)(iVar5 == 0);
      FUN_00414ebb();
      if (*(int *)(unaff_EBP + 8) == 0) {
        ppuStack_21c = (undefined **)0x76ea51;
        FUN_00878dfb();
      }
      ppuVar2 = *(undefined ***)(unaff_EBP + 8);
      ppuStack_21c = (undefined **)0x12;
      uStack_220 = 0x119;
      piStack_224 = *(int **)(unaff_EBP + -0x10);
      iVar5 = (**(code **)(*ppuVar2 + 0x8c))(ppuVar2,1);
      if (iVar5 < 0) {
        piStack_224 = (int *)0x76ea7d;
        uStack_220 = iVar5;
        ppuStack_21c = ppuVar2;
        FUN_00878e09();
      }
      ppuStack_21c = (undefined **)0x76ea8c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x140));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x140);
      uStack_220 = 0x76ea9e;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eaaa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      ppuStack_21c = (undefined **)0x76eab4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x70);
      uStack_220 = 0x76eabe;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eaca;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)(unaff_EBP + -0x70);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      uStack_220 = 0x76eae1;
      uStack_220 = FUN_00449749();
      piStack_224 = (int *)0x76eaea;
      uVar7 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_224;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      FUN_004115d9(0x19,uVar7);
      FUN_00448e3a(uVar11,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      ppuStack_21c = (undefined **)0x76eb1b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eb26;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      ppuStack_21c = (undefined **)0x76eb36;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eb41;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)0x76eb4a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xd0));
      ppuStack_21c = (undefined **)(unaff_EBP + -0xd0);
      uStack_220 = 0x76eb57;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eb63;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      ppuStack_21c = (undefined **)0x76eb70;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x110));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x110);
      uStack_220 = 0x76eb7d;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eb89;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)(unaff_EBP + -0x110);
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      uStack_220 = 0x76eba3;
      uStack_220 = FUN_00449749();
      piStack_224 = (int *)0x76ebac;
      uVar7 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_224;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = 0x7d;
      *(undefined1 *)(unaff_EBP + -4) = 0x56;
      FUN_004115d9(0x7d,uVar7);
      FUN_00448e3a(uVar11,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      ppuStack_21c = (undefined **)0x76ebe0;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ebeb;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      ppuStack_21c = (undefined **)0x76ebfb;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ec06;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)0x76ec0f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xf0));
      ppuStack_21c = (undefined **)(unaff_EBP + -0xf0);
      uStack_220 = 0x76ec1c;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ec28;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      ppuStack_21c = (undefined **)0x76ec35;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x150));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x150);
      uStack_220 = 0x76ec42;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ec4e;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)(unaff_EBP + -0x150);
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      uStack_220 = 0x76ec68;
      uStack_220 = FUN_00449749();
      piStack_224 = (int *)0x76ec71;
      uVar7 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_224;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = 0xcd;
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      FUN_004115d9(0xcd,uVar7);
      FUN_00448e3a(uVar11,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      ppuStack_21c = (undefined **)0x76eca8;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ecb3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      ppuStack_21c = (undefined **)0x76ecc3;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ecce;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x18 + *(int *)(extraout_ECX + 0x2c)) != 0) {
        ppuStack_21c = (undefined **)0x76ecec;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x130));
        ppuStack_21c = (undefined **)(unaff_EBP + -0x130);
        uStack_220 = 0x76ecfd;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          ppuStack_21c = (undefined **)0x76ed09;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x20);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        if (piVar9 == (int *)0x0) {
          ppuStack_21c = (undefined **)0x76ed24;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar9;
        piStack_224 = *(int **)(unaff_EBP + -0x130);
        uStack_220 = *(int *)(unaff_EBP + -300);
        ppuStack_21c = *(undefined ***)(unaff_EBP + -0x128);
        *(int **)(unaff_EBP + -0x1c) = piVar9;
        iVar5 = (**(code **)(iVar5 + 0x80))
                          (piVar9,1,*(undefined4 *)(unaff_EBP + -0x10),
                           *(undefined4 *)(unaff_EBP + -0x14));
        if (iVar5 < 0) {
          ppuStack_21c = *(undefined ***)(unaff_EBP + -0x1c);
          piStack_224 = (int *)0x76ed5c;
          uStack_220 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
LAB_0076f054:
        ppuStack_21c = (undefined **)0x76f05a;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          ppuStack_21c = (undefined **)0x76f065;
          FUN_00878dfb();
        }
      }
    }
    else {
      ppuStack_21c = (undefined **)0x76ed7a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xc0));
      ppuStack_21c = (undefined **)(unaff_EBP + -0xc0);
      uStack_220 = 0x76ed8c;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ed98;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      ppuStack_21c = (undefined **)0x76eda5;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xb0));
      ppuStack_21c = (undefined **)(unaff_EBP + -0xb0);
      uStack_220 = 0x76edb2;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76edbe;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)(unaff_EBP + -0xb0);
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      uStack_220 = 0x76edd8;
      uStack_220 = FUN_00449749();
      piStack_224 = (int *)0x76ede1;
      uVar7 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_224;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = 0x19;
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      FUN_004115d9(0x19,uVar7);
      FUN_00448e3a(uVar11,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x5c;
      ppuStack_21c = (undefined **)0x76ee15;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ee20;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      ppuStack_21c = (undefined **)0x76ee30;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ee3b;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)0x76ee44;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x100));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x100);
      uStack_220 = 0x76ee51;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ee5d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      ppuStack_21c = (undefined **)0x76ee6a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
      ppuStack_21c = (undefined **)(unaff_EBP + -0xe0);
      uStack_220 = 0x76ee77;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ee83;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)(unaff_EBP + -0xe0);
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      uStack_220 = 0x76ee9d;
      uStack_220 = FUN_00449749();
      piStack_224 = (int *)0x76eea6;
      uVar7 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_224;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = 0x7d;
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      FUN_004115d9(0x7d,uVar7);
      FUN_00448e3a(uVar11,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      ppuStack_21c = (undefined **)0x76eeda;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76eee5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      ppuStack_21c = (undefined **)0x76eef5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ef00;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)0x76ef09;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x88);
      uStack_220 = 0x76ef16;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ef22;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      ppuStack_21c = (undefined **)0x76ef2f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x120));
      ppuStack_21c = (undefined **)(unaff_EBP + -0x120);
      uStack_220 = 0x76ef3c;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76ef48;
        FUN_00878dfb();
      }
      ppuStack_21c = (undefined **)(unaff_EBP + -0x120);
      *(undefined1 *)(unaff_EBP + -4) = 99;
      uStack_220 = 0x76ef62;
      uStack_220 = FUN_00449749();
      piStack_224 = (int *)0x76ef6b;
      uVar7 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x14) = &piStack_224;
      FUN_00448a17(uVar7);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar11 = 0xcd;
      *(undefined1 *)(unaff_EBP + -4) = 99;
      FUN_004115d9(0xcd,uVar7);
      FUN_00448e3a(uVar11,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x62;
      ppuStack_21c = (undefined **)0x76efa2;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76efad;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      ppuStack_21c = (undefined **)0x76efbd;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        ppuStack_21c = (undefined **)0x76efc8;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x18 + *(int *)(extraout_ECX + 0x2c)) != 0) {
        ppuStack_21c = (undefined **)0x76efe3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
        ppuStack_21c = (undefined **)(unaff_EBP + -0x44);
        uStack_220 = 0x76eff1;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          ppuStack_21c = (undefined **)0x76effd;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x1c);
        piVar9 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x65;
        if (piVar9 == (int *)0x0) {
          ppuStack_21c = (undefined **)0x76f018;
          FUN_00878dfb();
          piVar9 = *(int **)(unaff_EBP + 8);
        }
        iVar5 = *piVar9;
        piStack_224 = *(int **)(unaff_EBP + -0x44);
        uStack_220 = *(int *)(unaff_EBP + -0x40);
        ppuStack_21c = *(undefined ***)(unaff_EBP + -0x3c);
        *(int **)(unaff_EBP + -0x1c) = piVar9;
        iVar5 = (**(code **)(iVar5 + 0x80))
                          (piVar9,3,*(undefined4 *)(unaff_EBP + -0x18),
                           *(undefined4 *)(unaff_EBP + -0x14));
        if (iVar5 < 0) {
          ppuStack_21c = *(undefined ***)(unaff_EBP + -0x1c);
          piStack_224 = (int *)0x76f04d;
          uStack_220 = iVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4f;
        goto LAB_0076f054;
      }
    }
    iVar5 = *(int *)(unaff_EBP + -0x18);
    iVar8 = *(int *)(unaff_EBP + -0x20);
    ppuStack_21c = (undefined **)0x119;
    uStack_220 = *(int *)(unaff_EBP + -0x10);
    piStack_224 = (int *)0x0;
    (*DAT_0097b504)(iVar8 + 0x1c + *(int *)(extraout_ECX + 0x2c));
    (*DAT_0097b504)(iVar8 + 0x3c + *(int *)(extraout_ECX + 0x2c),0x74,
                    *(undefined4 *)(unaff_EBP + -0x10),0xcd,iVar5 + 0x10);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
    *(int *)(unaff_EBP + -0x20) = iVar8 + 0x50;
  }
  if (*(int *)(unaff_EBP + -0x34) == 0) {
    iStack_1fc = 0x76f0d6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_1fc = unaff_EBP + -0x44;
    iStack_200 = 0x76f0e4;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      iStack_1fc = 0x76f0f0;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 8);
    piVar9 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    if (piVar9 == (int *)0x0) {
      iStack_1fc = 0x76f10b;
      FUN_00878dfb();
      piVar9 = *(int **)(unaff_EBP + 8);
    }
    iVar5 = *piVar9;
    uStack_204 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_200 = *(int *)(unaff_EBP + -0x40);
    iStack_1fc = *(undefined4 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x1c) = piVar9;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < 0) {
      iStack_1fc = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_204 = 0x76f140;
      iStack_200 = iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_1fc = 0x76f14d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_1fc = 0x76f158;
      FUN_00878dfb();
    }
    iStack_1fc = 0x76f167;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
    iStack_1fc = unaff_EBP + -0x88;
    iStack_200 = 0x76f179;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      iStack_1fc = 0x76f185;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    iStack_1fc = 0x76f18f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_1fc = unaff_EBP + -0x44;
    iStack_200 = 0x76f199;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      iStack_1fc = 0x76f1a5;
      FUN_00878dfb();
    }
    iStack_1fc = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iStack_200 = 0x76f1bc;
    iStack_200 = FUN_00449749();
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_204;
    uStack_204 = extraout_ECX_01;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    iStack_1fc = 0x76f1fc;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_1fc = 0x76f207;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_1fc = 0x76f217;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_1fc = 0x76f222;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
  }
  iStack_1fc = 0x76f230;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_1fc = unaff_EBP + -0x44;
  iStack_200 = 0x76f23e;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_1fc = 0x76f24a;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0xc);
  piVar9 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x6a;
  if (piVar9 == (int *)0x0) {
    iStack_1fc = 0x76f265;
    FUN_00878dfb();
    piVar9 = *(int **)(unaff_EBP + 8);
  }
  iVar5 = *piVar9;
  uStack_204 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_200 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_1fc = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x1c) = piVar9;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < 0) {
    ppuStack_21c = *(undefined ***)(unaff_EBP + -0x1c);
    piStack_224 = (int *)0x76f29a;
    uStack_220 = iVar5;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  ppuStack_21c = (undefined **)0x76f2a7;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    ppuStack_21c = (undefined **)0x76f2b4;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0xc) == 0) {
    ppuStack_21c = (undefined **)0x76f2c3;
    FUN_00878dfb();
  }
  FUN_0040e53d();
  iVar5 = *(int *)(unaff_EBP + -0x9c);
  if (*(int *)(iVar5 + 0x2b40) == 0) {
    ppuStack_21c = (undefined **)0x76f2f2;
    (**(code **)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5c0) + 4) + 0x1c))();
    ppuStack_21c = (undefined **)0x1;
    uStack_220 = 0x76f307;
    (**(code **)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5c8) + 4) + 0x1c))();
    iVar5 = 0x5d0;
    do {
      uStack_220 = 0;
      piStack_224 = (int *)0x76f31c;
      (**(code **)(*(int *)(*(int *)(iVar5 + *(int *)(extraout_ECX + 0x24)) + 4) + 0x1c))();
      iVar5 = iVar5 + 8;
    } while (iVar5 < 0x600);
    uStack_220 = unaff_EBP + -0xa0;
    piStack_224 = (int *)0x76f335;
    iVar5 = FUN_00455c59();
    iVar5 = *(int *)(iVar5 + 4);
    if (*(int *)(unaff_EBP + -0x9c) != 0) {
      uStack_220 = 0;
      piStack_224 = (int *)0x76f34e;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x9c) = 0;
    }
    uStack_220 = *(undefined4 *)(iVar5 + 0x35);
    piStack_224 = (int *)(iVar5 + 0x33);
    bVar4 = FUN_0045f03e();
    iVar5 = *(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x600) + 4);
    uStack_220 = (uint)(9 < bVar4);
    goto LAB_0076f4be;
  }
  ppuStack_21c = (undefined **)0x76f392;
  (**(code **)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5c0) + 4) + 0x1c))();
  iVar8 = *(int *)(extraout_ECX + 0x24);
  iVar3 = *(int *)(iVar8 + 0x818);
  if ((iVar3 == 0) ||
     (iVar1 = *(int *)(DAT_00978368 + 0x2088), *(undefined4 *)(unaff_EBP + -0x20) = 1,
     iVar3 == iVar1)) {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  if ((*(int *)(iVar5 + 0x2b40) == 0) || (*(int *)(iVar5 + 0x2bf2) != *(int *)(iVar5 + 0x2088))) {
    ppuStack_21c = (undefined **)0x0;
  }
  else {
    ppuStack_21c = (undefined **)0x1;
  }
  uStack_220 = 0x76f3e3;
  (**(code **)(*(int *)(*(int *)(iVar8 + 0x5c8) + 4) + 0x1c))();
  if (((*(int *)(iVar5 + 0x2b40) == 0) || (*(int *)(iVar5 + 0x2bf2) != *(int *)(iVar5 + 0x2088))) ||
     (*(int *)(unaff_EBP + -0x20) == 0)) {
    uStack_220 = 0;
  }
  else {
    uStack_220 = 1;
  }
  piStack_224 = (int *)0x76f417;
  (**(code **)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5d0) + 4) + 0x1c))();
  piStack_224 = (int *)0x1;
  (**(code **)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5d8) + 4) + 0x1c))();
  iVar8 = 0x5e0;
  do {
    uVar7 = 0;
    if ((*(int *)(unaff_EBP + -0x20) != 0) && (*(int *)(unaff_EBP + -0x5c) == 0)) {
      uVar7 = 1;
    }
    (**(code **)(*(int *)(*(int *)(iVar8 + *(int *)(extraout_ECX + 0x24)) + 4) + 0x1c))(uVar7);
    iVar8 = iVar8 + 8;
  } while (iVar8 < 0x5f0);
  if (((*(int *)(iVar5 + 0x2b40) == 0) || (*(int *)(iVar5 + 0x2bf2) != *(int *)(iVar5 + 0x2088))) ||
     ((*(int *)(unaff_EBP + -0x20) == 0 ||
      ((*(int *)(unaff_EBP + -0x5c) != 0 || (*(int *)(unaff_EBP + -0x54) != 0)))))) {
LAB_0076f49a:
    uVar7 = 0;
  }
  else {
    iVar5 = FUN_00429303();
    uVar7 = 1;
    uVar10 = *(uint *)(iVar5 + 0x108) >> 0xb & 1;
    *(uint *)(unaff_EBP + -0x9c) = uVar10;
    if (uVar10 != 0) goto LAB_0076f49a;
  }
  (**(code **)(*(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5f0) + 4) + 0x1c))(uVar7);
  iVar5 = *(int *)(*(int *)(*(int *)(extraout_ECX + 0x24) + 0x5f8) + 4);
  uStack_220 = 1;
LAB_0076f4be:
  piStack_224 = (int *)0x76f4c1;
  (**(code **)(iVar5 + 0x1c))();
  piStack_224 = *(int **)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_224 != (int *)0x0) {
    (**(code **)(*piStack_224 + 8))();
  }
  piStack_224 = *(int **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piStack_224 != (int *)0x0) {
    (**(code **)(*piStack_224 + 8))();
  }
  piStack_224 = *(int **)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_224 != (int *)0x0) {
    (**(code **)(*piStack_224 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_224 = (int *)0x76f503;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_224 = (int *)0x76f50f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_224 = (int *)0x76f51b;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_224 = (int *)0x76f527;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_224 = (int *)0x76f533;
  FUN_00414ebb();
  piStack_224 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_224 != (int *)0x0) {
    (**(code **)(*piStack_224 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


