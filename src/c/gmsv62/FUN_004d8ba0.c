/* FUN_004d8ba0 - 0x004d8ba0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d8ba0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  int *apiStack_168 [2];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  undefined *puStack_150;
  int *piStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 *puStack_110;
  int *piStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *piStack_e8;
  undefined4 *puStack_e4;
  
  FUN_00879bb8();
  puStack_e4 = (undefined4 *)0x3af;
  piStack_e8 = (int *)(unaff_EBP + -0x10);
  uStack_ec = 0x4d8bc8;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_ec = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_e4 = (undefined4 *)0x0;
  piVar1 = (int *)(extraout_ECX + 0x60);
  uStack_f0 = 0x4d8bda;
  piStack_e8 = piVar1;
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_e4 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    piStack_e8 = (int *)0x4d8bf1;
    FUN_00403384();
  }
  puStack_e4 = &DAT_00980690;
  piStack_e8 = (int *)0x4d8c00;
  FUN_00403191();
  puStack_e4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_e8 = (int *)0x4d8c10;
  FUN_00403191();
  iVar3 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    puStack_e4 = (undefined4 *)0x80004003;
    piStack_e8 = (int *)0x4d8c23;
    FUN_00878dfb();
  }
  piStack_10c = (int *)*piVar1;
  uStack_104 = *(undefined4 *)(extraout_ECX + 0x20);
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x58);
  iVar3 = *piStack_10c;
  piStack_e8 = *(int **)(unaff_EBP + -0x54);
  puStack_e4 = *(undefined4 **)(unaff_EBP + -0x50);
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x30);
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_108 = *(undefined4 *)(extraout_ECX + 0x1c);
  uStack_f8 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = piStack_10c;
  uStack_f4 = *(undefined4 *)(unaff_EBP + -0x24);
  puStack_110 = (undefined4 *)0x4d8c4d;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_110 = (undefined4 *)&DAT_00963cc8;
    uStack_114 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_11c = 0x4d8c5f;
    iStack_118 = iVar3;
    FUN_00878e09();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_114 = 0x4d8c6c;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8c77;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_110 = (undefined4 *)(unaff_EBP + -0x5c);
  uStack_114 = 0x4d8c84;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8c8f;
    FUN_00878dfb();
  }
  puStack_110 = &DAT_00980690;
  uStack_114 = 0x4d8ca0;
  FUN_00403191();
  puStack_110 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uStack_114 = 0x4d8cb0;
  FUN_00403191();
  puStack_110 = (undefined4 *)0x0;
  uStack_114 = 0;
  iStack_118 = unaff_EBP + -0xb0;
  iStack_11c = unaff_EBP + -0x5c;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_120;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_118 = 0x4d8d04;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x34) = iVar3;
  if (iVar3 != 0) {
    puStack_110 = (undefined4 *)(unaff_EBP + -0x34);
    uStack_114 = 0x4d8d1b;
    puStack_110 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_110 < 0) && (puStack_110 != (undefined4 *)0x80004002)) {
      uStack_114 = 0x4d8d2c;
      FUN_00878dfb();
    }
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_114 = 0x4d8d3c;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8d47;
    FUN_00878dfb();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_114 = 0x4d8d54;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8d5f;
    FUN_00878dfb();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_114 = 0x4d8d6f;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8d7a;
    FUN_00878dfb();
  }
  puStack_110 = &DAT_00980690;
  uStack_114 = 0x4d8d83;
  FUN_00403191();
  puStack_110 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_114 = 0x4d8d93;
  FUN_00403191();
  puStack_110 = (undefined4 *)0x0;
  uStack_114 = 0;
  iStack_118 = unaff_EBP + -0x70;
  iStack_11c = unaff_EBP + -0x90;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_120;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_118 = 0x4d8de2;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x38) = iVar3;
  if (iVar3 != 0) {
    puStack_110 = (undefined4 *)(unaff_EBP + -0x38);
    uStack_114 = 0x4d8df9;
    puStack_110 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_110 < 0) && (puStack_110 != (undefined4 *)0x80004002)) {
      uStack_114 = 0x4d8e0a;
      FUN_00878dfb();
    }
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_114 = 0x4d8e1a;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8e25;
    FUN_00878dfb();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_114 = 0x4d8e35;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8e40;
    FUN_00878dfb();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_114 = 0x4d8e4d;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8e58;
    FUN_00878dfb();
  }
  puStack_110 = &DAT_00980690;
  uStack_114 = 0x4d8e61;
  FUN_00403191();
  puStack_110 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_114 = 0x4d8e71;
  FUN_00403191();
  puStack_110 = (undefined4 *)0x0;
  uStack_114 = 0;
  iStack_118 = unaff_EBP + -0x80;
  iStack_11c = unaff_EBP + -0xa0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_120;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_118 = 0x4d8ec0;
  iVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x3c) = iVar3;
  if (iVar3 != 0) {
    puStack_110 = (undefined4 *)(unaff_EBP + -0x3c);
    uStack_114 = 0x4d8ed7;
    puStack_110 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_110 < 0) && (puStack_110 != (undefined4 *)0x80004002)) {
      uStack_114 = 0x4d8ee8;
      FUN_00878dfb();
    }
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_114 = 0x4d8ef8;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8f03;
    FUN_00878dfb();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_114 = 0x4d8f13;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8f1e;
    FUN_00878dfb();
  }
  puStack_110 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_114 = 0x4d8f2b;
  puStack_110 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_110 < 0) {
    uStack_114 = 0x4d8f36;
    FUN_00878dfb();
  }
  puStack_110 = &DAT_00980690;
  uStack_114 = 0x4d8f3f;
  FUN_00403191();
  iVar3 = *(int *)(extraout_ECX + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar3 == 0) {
    puStack_110 = (undefined4 *)0x80004003;
    uStack_114 = 0x4d8f53;
    FUN_00878dfb();
  }
  iVar3 = **(int **)(extraout_ECX + 0x60);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_11c = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_118 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_114 = *(undefined4 *)(unaff_EBP + -0x28);
  *(int **)(unaff_EBP + -0x10) = *(int **)(extraout_ECX + 0x60);
  puStack_110 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_13c = 0x4d8f87;
    iStack_138 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_134 = 0x4d8f94;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_134 = 0x4d8f9f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0x15;
  if (0x15 < iVar3 + -0x37) {
    do {
      iStack_134 = 0x4d8fbc;
      FUN_00403191();
      iVar3 = *(int *)(extraout_ECX + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (iVar3 == 0) {
        iStack_134 = 0x4d8fd0;
        FUN_00878dfb();
      }
      piStack_14c = *(int **)(extraout_ECX + 0x60);
      iVar3 = *piStack_14c;
      uStack_140 = *(undefined4 *)(unaff_EBP + -0x18);
      uStack_144 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_13c = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_138 = *(int *)(unaff_EBP + -0x2c);
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_148 = 0;
      *(int **)(unaff_EBP + -0x14) = piStack_14c;
      puStack_150 = (undefined *)0x4d8ff3;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        iStack_134 = *(undefined4 *)(unaff_EBP + -0x14);
        uStack_13c = 0x4d9005;
        iStack_138 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_134 = 0x4d9012;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_134 = 0x4d901d;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(extraout_ECX + 0x20);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
    } while (*(int *)(unaff_EBP + -0x10) < iVar3 + -0x37);
  }
  iStack_134 = 0x4d9036;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_134 = unaff_EBP + -0x30;
  iStack_138 = 0x4d9044;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_134 = 0x4d9050;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(extraout_ECX + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar3 == 0) {
    iStack_134 = 0x4d9064;
    FUN_00878dfb();
  }
  piStack_14c = *(int **)(extraout_ECX + 0x60);
  iVar3 = *piStack_14c;
  uStack_140 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_144 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x2c);
  iStack_134 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_148 = 0;
  *(int **)(unaff_EBP + -0x14) = piStack_14c;
  puStack_150 = (undefined *)0x4d9088;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_150 = &DAT_00963cc8;
    iStack_154 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_15c = 0x4d909a;
    iStack_158 = iVar3;
    FUN_00878e09();
  }
  puStack_150 = (undefined *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_154 = 0x4d90a7;
  puStack_150 = (undefined *)FUN_00402bc3();
  if ((int)puStack_150 < 0) {
    iStack_154 = 0x4d90b2;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 1;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  puStack_150 = (undefined *)0x4ee;
  iStack_154 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_158 = 0x4d90d9;
  puStack_150 = (undefined *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_154 = 0x4d90e6;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_150 = (undefined *)0x4d90f2;
  FUN_00402676();
  puStack_150 = (undefined *)0x578;
  iStack_154 = 0x4d9101;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (iVar3 == 0) {
    puStack_150 = (undefined *)0x0;
  }
  else {
    puStack_150 = (undefined *)0x4d9113;
    puStack_150 = (undefined *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_154 = 0x4d9127;
  FUN_00450382();
  puStack_150 = (undefined *)(unaff_EBP + -0x4c);
  iStack_154 = 0;
  iStack_158 = *(int *)(extraout_ECX + 0x20) + -0x1e;
  uStack_15c = 0xcd;
  uStack_160 = 2;
  apiStack_168[0] = (int *)0x4d9146;
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
  puStack_170 = (undefined1 *)apiStack_168;
  *(int ***)(unaff_EBP + -0x10) = apiStack_168;
  puStack_16c = (undefined1 *)0xf;
  FUN_007d4a9a();
  puStack_170 = puStack_16c;
  puStack_16c = (undefined1 *)0xc8;
  *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_170;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00450368(extraout_ECX + 0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_007d2c14(extraout_ECX + 0x88);
  apiStack_168[0] = *(int **)(extraout_ECX + 0x84);
  puStack_16c = (undefined1 *)0x4d918e;
  FUN_008164fd();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  apiStack_168[0] = (int *)0x4d919a;
  FUN_00402676();
  apiStack_168[0] = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (apiStack_168[0] != (int *)0x0) {
    puStack_16c = (undefined1 *)0x4d91ab;
    (**(code **)(*apiStack_168[0] + 8))();
  }
  apiStack_168[0] = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (apiStack_168[0] != (int *)0x0) {
    puStack_16c = (undefined1 *)0x4d91bc;
    (**(code **)(*apiStack_168[0] + 8))();
  }
  apiStack_168[0] = *(int **)(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (apiStack_168[0] != (int *)0x0) {
    puStack_16c = (undefined1 *)0x4d91cd;
    (**(code **)(*apiStack_168[0] + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


