/* FUN_0077cd5e - 0x0077cd5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077cd5e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar7;
  int unaff_EBP;
  undefined4 uStack_18c;
  undefined *puStack_188;
  int *piStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 *puStack_16c;
  int *piStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  iStack_134 = 0x77cd7c;
  FUN_0081622a();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_134 = 0x77cd9a;
  puVar1 = (undefined4 *)FUN_00448dc6();
  iStack_134 = 0x77cda4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
             (IBinding *)*puVar1);
  FUN_004125e6();
  iStack_134 = unaff_EBP + 8;
  iStack_138 = 0x77cdc2;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_138 = *puVar1;
  iStack_134 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_13c = 0x77cdd3;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_134 = 0x77cdea;
    FUN_00403384();
  }
  iStack_134 = unaff_EBP + 8;
  iStack_138 = 0x77cdf7;
  piVar2 = (int *)FUN_00679d86();
  iStack_138 = *piVar2;
  iStack_134 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_13c = 0x77ce08;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_134 = 0x77ce1f;
    FUN_00403384();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x588);
  if (iVar3 == 0) {
    iStack_134 = 0x77d313;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_134 = 0x77d320;
    FUN_00403191();
    piStack_158 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_158 == (int *)0x0) {
      iStack_134 = 0x77d331;
      FUN_00878dfb();
      piStack_158 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_13c = *(int *)(unaff_EBP + -0x9c);
    iStack_138 = *(int *)(unaff_EBP + -0x98);
    iVar3 = *piStack_158;
    iStack_134 = *(int *)(unaff_EBP + -0x94);
    uStack_14c = *(undefined4 *)(unaff_EBP + -0x7c);
    iStack_148 = *(int *)(unaff_EBP + -0x78);
    iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x780) * 0x12 + 0x5f;
    uStack_144 = *(undefined4 *)(unaff_EBP + -0x74);
    uStack_154 = 0x119;
    *(int **)(unaff_EBP + 8) = piStack_158;
    uStack_140 = *(undefined4 *)(unaff_EBP + -0x70);
    puStack_15c = (undefined4 *)0x77d36a;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_15c = (undefined4 *)&DAT_00963cc8;
      uStack_160 = *(undefined4 *)(unaff_EBP + 8);
      piStack_168 = (int *)0x77d37c;
      iStack_164 = iVar3;
      FUN_00878e09();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_160 = 0x77d389;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77d394;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_160 = 0x77d3a4;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77d3af;
      FUN_00878dfb();
    }
    puStack_15c = &DAT_00980690;
    uStack_160 = 0x77d3c0;
    FUN_00403191();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_160 = 0x77d3d0;
    FUN_00403191();
    piStack_184 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piStack_184 == (int *)0x0) {
      puStack_15c = (undefined4 *)0x80004003;
      uStack_160 = 0x77d3e5;
      FUN_00878dfb();
      piStack_184 = *(int **)(unaff_EBP + -0x20);
    }
    piStack_168 = *(int **)(unaff_EBP + -0x8c);
    iStack_164 = *(int *)(unaff_EBP + -0x88);
    iVar3 = *piStack_184;
    uStack_160 = *(undefined4 *)(unaff_EBP + -0x84);
    puStack_15c = *(undefined4 **)(unaff_EBP + -0x80);
    uStack_178 = *(undefined4 *)(unaff_EBP + -0xbc);
    iStack_174 = *(int *)(unaff_EBP + -0xb8);
    uStack_17c = 0x10;
    uStack_170 = *(undefined4 *)(unaff_EBP + -0xb4);
    uStack_180 = 0x138;
    *(int **)(unaff_EBP + 8) = piStack_184;
    puStack_16c = *(undefined4 **)(unaff_EBP + -0xb0);
    puStack_188 = (undefined *)0x77d416;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_188 = &DAT_00963cc8;
      uStack_18c = *(undefined4 *)(unaff_EBP + 8);
      FUN_00878e09(iVar3);
    }
    puStack_188 = (undefined *)(unaff_EBP + -0xbc);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_18c = 0x77d438;
    puStack_188 = (undefined *)FUN_00402bc3();
    if ((int)puStack_188 < 0) {
      uStack_18c = 0x77d443;
      FUN_00878dfb();
    }
    puStack_188 = (undefined *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_18c = 0x77d453;
    puStack_188 = (undefined *)FUN_00402bc3();
    if ((int)puStack_188 < 0) {
      uStack_18c = 0x77d45e;
      FUN_00878dfb();
    }
    puStack_188 = *(undefined **)(unaff_EBP + -0x20);
    *(undefined ***)(unaff_EBP + 8) = &puStack_188;
    uStack_18c = 0x77d46e;
    FUN_004125f3();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_18c;
    uStack_18c = extraout_ECX_02;
    FUN_0046fc23(unaff_EBP + -0x10);
    FUN_0076a27b();
  }
  else if (iVar3 == 1) {
    iStack_134 = 0x77d24e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_134 = 0x77d25b;
    FUN_00403191();
    piStack_158 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piStack_158 == (int *)0x0) {
      iStack_134 = 0x77d26c;
      FUN_00878dfb();
      piStack_158 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_13c = *(int *)(unaff_EBP + -0x5c);
    iStack_138 = *(int *)(unaff_EBP + -0x58);
    iVar3 = *piStack_158;
    iStack_134 = *(int *)(unaff_EBP + -0x54);
    uStack_14c = *(undefined4 *)(unaff_EBP + -0x4c);
    iStack_148 = *(int *)(unaff_EBP + -0x48);
    iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x780) * 0x12 + 0x74;
    uStack_144 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_154 = 0x119;
    *(int **)(unaff_EBP + 8) = piStack_158;
    uStack_140 = *(undefined4 *)(unaff_EBP + -0x40);
    puStack_15c = (undefined4 *)0x77d2a2;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_15c = (undefined4 *)&DAT_00963cc8;
      uStack_160 = *(undefined4 *)(unaff_EBP + 8);
      piStack_168 = (int *)0x77d2b4;
      iStack_164 = iVar3;
      FUN_00878e09();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_160 = 0x77d2c1;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77d2cc;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_160 = 0x77d2d9;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77d2e4;
      FUN_00878dfb();
    }
    puStack_15c = *(undefined4 **)(unaff_EBP + -0x10);
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_15c;
    uStack_160 = 0x77d2f4;
    FUN_004125f3();
    uStack_160 = 0x77d302;
    FUN_0076d211();
  }
  else if (iVar3 == 2) {
    iStack_134 = 0x77d0c8;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_134 = 0x77d0d8;
    FUN_00403191();
    piStack_158 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (piStack_158 == (int *)0x0) {
      iStack_134 = 0x77d0e9;
      FUN_00878dfb();
      piStack_158 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_13c = *(int *)(unaff_EBP + -0xec);
    iStack_138 = *(int *)(unaff_EBP + -0xe8);
    iVar3 = *piStack_158;
    iStack_134 = *(int *)(unaff_EBP + -0xe4);
    uStack_14c = *(undefined4 *)(unaff_EBP + -0xdc);
    iStack_148 = *(int *)(unaff_EBP + -0xd8);
    iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x780) * 0x12 + 0x6e;
    uStack_144 = *(undefined4 *)(unaff_EBP + -0xd4);
    uStack_154 = 0x119;
    *(int **)(unaff_EBP + 8) = piStack_158;
    uStack_140 = *(undefined4 *)(unaff_EBP + -0xd0);
    puStack_15c = (undefined4 *)0x77d125;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_15c = (undefined4 *)&DAT_00963cc8;
      uStack_160 = *(undefined4 *)(unaff_EBP + 8);
      piStack_168 = (int *)0x77d137;
      iStack_164 = iVar3;
      FUN_00878e09();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_160 = 0x77d147;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77d152;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_160 = 0x77d162;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77d16d;
      FUN_00878dfb();
    }
    puStack_15c = &DAT_00980690;
    uStack_160 = 0x77d17e;
    FUN_00403191();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_160 = 0x77d18b;
    FUN_00403191();
    piStack_184 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piStack_184 == (int *)0x0) {
      puStack_15c = (undefined4 *)0x80004003;
      uStack_160 = 0x77d1a0;
      FUN_00878dfb();
      piStack_184 = *(int **)(unaff_EBP + -0x20);
    }
    piStack_168 = *(int **)(unaff_EBP + -0xac);
    iStack_164 = *(int *)(unaff_EBP + -0xa8);
    iVar3 = *piStack_184;
    uStack_160 = *(undefined4 *)(unaff_EBP + -0xa4);
    puStack_15c = *(undefined4 **)(unaff_EBP + -0xa0);
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x6c);
    iStack_174 = *(int *)(unaff_EBP + -0x68);
    uStack_17c = 0x32;
    uStack_170 = *(undefined4 *)(unaff_EBP + -100);
    uStack_180 = 0x138;
    *(int **)(unaff_EBP + 8) = piStack_184;
    puStack_16c = *(undefined4 **)(unaff_EBP + -0x60);
    puStack_188 = (undefined *)0x77d1ce;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_188 = &DAT_00963cc8;
      uStack_18c = *(undefined4 *)(unaff_EBP + 8);
      FUN_00878e09(iVar3);
    }
    puStack_188 = (undefined *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_18c = 0x77d1ed;
    puStack_188 = (undefined *)FUN_00402bc3();
    if ((int)puStack_188 < 0) {
      uStack_18c = 0x77d1f8;
      FUN_00878dfb();
    }
    puStack_188 = (undefined *)(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_18c = 0x77d208;
    puStack_188 = (undefined *)FUN_00402bc3();
    if ((int)puStack_188 < 0) {
      uStack_18c = 0x77d213;
      FUN_00878dfb();
    }
    puStack_188 = *(undefined **)(unaff_EBP + -0x10);
    *(undefined ***)(unaff_EBP + 8) = &puStack_188;
    uStack_18c = 0x77d223;
    FUN_004125f3();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_18c;
    uStack_18c = extraout_ECX_01;
    FUN_0046fc23(unaff_EBP + -0x20);
    FUN_007705c7();
  }
  else if (iVar3 == 3) {
    iStack_134 = 0x77cf33;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_134 = 0x77cf43;
    FUN_00403191();
    piStack_158 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piStack_158 == (int *)0x0) {
      iStack_134 = 0x77cf54;
      FUN_00878dfb();
      piStack_158 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_13c = *(int *)(unaff_EBP + -0xcc);
    iStack_138 = *(int *)(unaff_EBP + -200);
    iVar3 = *piStack_158;
    iStack_134 = *(int *)(unaff_EBP + -0xc4);
    uStack_14c = *(undefined4 *)(unaff_EBP + -0x10c);
    iStack_148 = *(int *)(unaff_EBP + -0x108);
    iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x780) * 0x12 + 0x23c;
    uStack_144 = *(undefined4 *)(unaff_EBP + -0x104);
    uStack_154 = 0x119;
    *(int **)(unaff_EBP + 8) = piStack_158;
    uStack_140 = *(undefined4 *)(unaff_EBP + -0x100);
    puStack_15c = (undefined4 *)0x77cf93;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_15c = (undefined4 *)&DAT_00963cc8;
      uStack_160 = *(undefined4 *)(unaff_EBP + 8);
      piStack_168 = (int *)0x77cfa5;
      iStack_164 = iVar3;
      FUN_00878e09();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0x10c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_160 = 0x77cfb5;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77cfc0;
      FUN_00878dfb();
    }
    puStack_15c = (undefined4 *)(unaff_EBP + -0xcc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_160 = 0x77cfd0;
    puStack_15c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_15c < 0) {
      uStack_160 = 0x77cfdb;
      FUN_00878dfb();
    }
    puStack_15c = &DAT_00980690;
    uStack_160 = 0x77cfec;
    FUN_00403191();
    puStack_15c = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_160 = 0x77cffc;
    FUN_00403191();
    piStack_184 = *(int **)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piStack_184 == (int *)0x0) {
      puStack_15c = (undefined4 *)0x80004003;
      uStack_160 = 0x77d011;
      FUN_00878dfb();
      piStack_184 = *(int **)(unaff_EBP + -0x20);
    }
    piStack_168 = *(int **)(unaff_EBP + -0xfc);
    iStack_164 = *(int *)(unaff_EBP + -0xf8);
    iVar3 = *piStack_184;
    uStack_160 = *(undefined4 *)(unaff_EBP + -0xf4);
    puStack_15c = *(undefined4 **)(unaff_EBP + -0xf0);
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x11c);
    iStack_174 = *(int *)(unaff_EBP + -0x118);
    uStack_17c = 0x32;
    uStack_170 = *(undefined4 *)(unaff_EBP + -0x114);
    uStack_180 = 0x138;
    *(int **)(unaff_EBP + 8) = piStack_184;
    puStack_16c = *(undefined4 **)(unaff_EBP + -0x110);
    puStack_188 = (undefined *)0x77d042;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_188 = &DAT_00963cc8;
      uStack_18c = *(undefined4 *)(unaff_EBP + 8);
      FUN_00878e09(iVar3);
    }
    puStack_188 = (undefined *)(unaff_EBP + -0x11c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_18c = 0x77d064;
    puStack_188 = (undefined *)FUN_00402bc3();
    if ((int)puStack_188 < 0) {
      uStack_18c = 0x77d06f;
      FUN_00878dfb();
    }
    puStack_188 = (undefined *)(unaff_EBP + -0xfc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_18c = 0x77d07f;
    puStack_188 = (undefined *)FUN_00402bc3();
    if ((int)puStack_188 < 0) {
      uStack_18c = 0x77d08a;
      FUN_00878dfb();
    }
    puStack_188 = *(undefined **)(unaff_EBP + -0x10);
    *(undefined ***)(unaff_EBP + 8) = &puStack_188;
    uStack_18c = 0x77d09a;
    FUN_004125f3();
    *(undefined4 **)(unaff_EBP + 8) = &uStack_18c;
    uStack_18c = extraout_ECX_00;
    FUN_0046fc23(unaff_EBP + -0x20);
    FUN_00773f73();
  }
  else if (iVar3 == 4) {
    iStack_134 = 0x77ce68;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_134 = 0x77ce75;
    FUN_00403191();
    piStack_158 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (piStack_158 == (int *)0x0) {
      iStack_134 = 0x77ce86;
      FUN_00878dfb();
      piStack_158 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_13c = *(int *)(unaff_EBP + -300);
    iStack_138 = *(int *)(unaff_EBP + -0x128);
    iVar3 = *piStack_158;
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x124);
    uStack_14c = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_148 = *(int *)(unaff_EBP + -0x34);
    iStack_150 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x780) * 0x12 + 0x2b;
    uStack_144 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_154 = 0x119;
    *(int **)(unaff_EBP + 8) = piStack_158;
    uStack_140 = *(undefined4 *)(unaff_EBP + -0x2c);
    puStack_15c = (undefined4 *)0x77cebf;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      iStack_134 = *(undefined4 *)(unaff_EBP + 8);
      iStack_13c = 0x77ced1;
      iStack_138 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_134 = 0x77cede;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_134 = 0x77cee9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_134 = 0x77cef9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_134 = 0x77cf04;
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffed0;
    iStack_134 = 0x77cf14;
    FUN_004125f3();
    iStack_134 = 0x77cf22;
    FUN_00779e54();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_134 = 0x77d4a1;
    FUN_00878dfb();
  }
  uVar4 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  iVar3 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x584) + 0x38);
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  iVar7 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x588);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar7 == 0) {
    iVar7 = *(int *)(unaff_EBP + 8) + iVar3 * -0x21;
    *(int *)(unaff_EBP + -0x1c) = iVar3 * 0x21;
    *(int *)(unaff_EBP + 8) = iVar7;
    if (0x101 < iVar7) {
      *(undefined4 *)(unaff_EBP + 8) = 0x102;
    }
    iStack_134 = 0x77d98d;
    FUN_00403191();
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (piVar2 == (int *)0x0) {
      iStack_134 = 0x77d99e;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x18);
    }
    uStack_140 = *(undefined4 *)(unaff_EBP + 8);
    iVar3 = *piVar2;
    uStack_144 = 0x119;
    iStack_148 = *(int *)(unaff_EBP + -0x1c);
    uStack_14c = 0;
    iStack_150 = *(int *)(unaff_EBP + 8);
    iStack_13c = *(int *)(unaff_EBP + -0xac);
    uStack_154 = 0x119;
    piStack_158 = (int *)0xff;
    puStack_15c = *(undefined4 **)(unaff_EBP + -0x10);
    iStack_138 = *(int *)(unaff_EBP + -0xa8);
    uStack_160 = 0x35;
    iStack_134 = *(undefined4 *)(unaff_EBP + -0xa4);
    iStack_164 = 6;
    *(int **)(unaff_EBP + -0x24) = piVar2;
    puStack_16c = (undefined4 *)0x77d9d5;
    piStack_168 = piVar2;
    iVar3 = (**(code **)(iVar3 + 0x84))();
    if (iVar3 < 0) {
      puStack_16c = (undefined4 *)&DAT_00963cc8;
      uStack_170 = *(undefined4 *)(unaff_EBP + -0x24);
      uStack_178 = 0x77d9e7;
      iStack_174 = iVar3;
      FUN_00878e09();
    }
    puStack_16c = (undefined4 *)(unaff_EBP + -0xac);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_170 = 0x77d9f7;
    puStack_16c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_16c < 0) {
      uStack_170 = 0x77da04;
      FUN_00878dfb();
    }
    puStack_16c = &DAT_00980690;
    uStack_170 = 0x77da11;
    FUN_00403191();
    piVar2 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (piVar2 == (int *)0x0) {
      puStack_16c = (undefined4 *)0x80004003;
      uStack_170 = 0x77da26;
      FUN_00878dfb();
      piVar2 = *(int **)(unaff_EBP + -0x18);
    }
    iVar3 = *piVar2;
    uStack_17c = 0x10;
    uStack_180 = 0x138;
    piStack_184 = (int *)0x0;
    puStack_188 = (undefined *)0x0;
    uStack_18c = 0x10;
    uStack_178 = *(undefined4 *)(unaff_EBP + -0x6c);
    iStack_174 = *(int *)(unaff_EBP + -0x68);
    uStack_170 = *(undefined4 *)(unaff_EBP + -100);
    *(int **)(unaff_EBP + 8) = piVar2;
    puStack_16c = *(undefined4 **)(unaff_EBP + -0x60);
    iVar3 = (**(code **)(iVar3 + 0x84))
                      (piVar2,0,0x13b,*(undefined4 *)(unaff_EBP + -0x20),0xff,0x138);
    if (iVar3 < 0) {
      iStack_134 = *(undefined4 *)(unaff_EBP + 8);
      iStack_13c = 0x77da6e;
      iStack_138 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_134 = 0x77da7b;
    iVar3 = FUN_00402bc3();
  }
  else {
    if (iVar7 == 1) {
      iVar7 = *(int *)(unaff_EBP + 8) + iVar3 * -0x21;
      *(int *)(unaff_EBP + -0x1c) = iVar3 * 0x21;
      *(int *)(unaff_EBP + 8) = iVar7;
      if (0x115 < iVar7) {
        *(undefined4 *)(unaff_EBP + 8) = 0x116;
      }
      iStack_134 = 0x77d8fb;
      FUN_00403191();
      piVar2 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (piVar2 == (int *)0x0) {
        iStack_134 = 0x77d90c;
        FUN_00878dfb();
        piVar2 = *(int **)(unaff_EBP + -0x18);
      }
      uStack_140 = *(undefined4 *)(unaff_EBP + 8);
      iVar3 = *piVar2;
      uStack_144 = 0x119;
      iStack_148 = *(int *)(unaff_EBP + -0x1c);
      uStack_14c = 0;
      iStack_150 = *(int *)(unaff_EBP + 8);
      iStack_13c = *(int *)(unaff_EBP + -0x4c);
      uStack_154 = 0x119;
      piStack_158 = (int *)0xff;
      puStack_15c = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_138 = *(int *)(unaff_EBP + -0x48);
      uStack_160 = 0x35;
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_164 = 6;
      *(int **)(unaff_EBP + -0x24) = piVar2;
      puStack_16c = (undefined4 *)0x77d940;
      piStack_168 = piVar2;
      iVar3 = (**(code **)(iVar3 + 0x84))();
      if (iVar3 < 0) {
        iStack_134 = *(undefined4 *)(unaff_EBP + -0x24);
        iStack_13c = 0x77d952;
        iStack_138 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
    }
    else {
      if (iVar7 == 2) {
        iStack_134 = 0x77d733;
        FUN_00403191();
        piVar2 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (piVar2 == (int *)0x0) {
          iStack_134 = 0x77d744;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + -0x18);
        }
        iVar3 = *piVar2;
        uStack_140 = 0x32;
        uStack_144 = 0x138;
        iStack_148 = 0;
        uStack_14c = 0;
        iStack_150 = 0x32;
        iStack_13c = *(undefined4 *)(unaff_EBP + -0x7c);
        uStack_154 = 0x138;
        piStack_158 = (int *)0xff;
        puStack_15c = *(undefined4 **)(unaff_EBP + -0x20);
        iStack_138 = *(int *)(unaff_EBP + -0x78);
        uStack_160 = 0x37;
        iStack_134 = *(undefined4 *)(unaff_EBP + -0x74);
        iStack_164 = 5;
        *(int **)(unaff_EBP + -0x24) = piVar2;
        puStack_16c = (undefined4 *)0x77d77a;
        piStack_168 = piVar2;
        iVar3 = (**(code **)(iVar3 + 0x84))();
        if (iVar3 < 0) {
          puStack_16c = (undefined4 *)&DAT_00963cc8;
          uStack_170 = *(undefined4 *)(unaff_EBP + -0x24);
          uStack_178 = 0x77d78c;
          iStack_174 = iVar3;
          FUN_00878e09();
        }
        puStack_16c = (undefined4 *)(unaff_EBP + -0x7c);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        uStack_170 = 0x77d799;
        puStack_16c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_16c < 0) {
          uStack_170 = 0x77d7a4;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x28) * -0x21;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x28) * 0x21;
        *(int *)(unaff_EBP + 8) = iVar3;
        if (0xbf < iVar3) {
          *(undefined4 *)(unaff_EBP + 8) = 0xc0;
        }
        puStack_16c = &DAT_00980690;
        uStack_170 = 0x77d7ce;
        FUN_00403191();
        piVar2 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (piVar2 == (int *)0x0) {
          puStack_16c = (undefined4 *)0x80004003;
          uStack_170 = 0x77d7e3;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + -0x18);
        }
        uStack_17c = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = *piVar2;
        uStack_180 = 0x119;
        piStack_184 = *(int **)(unaff_EBP + -0x1c);
        puStack_188 = (undefined *)0x0;
        uStack_18c = *(undefined4 *)(unaff_EBP + 8);
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x5c);
        iStack_174 = *(int *)(unaff_EBP + -0x58);
        uStack_170 = *(undefined4 *)(unaff_EBP + -0x54);
        *(int **)(unaff_EBP + -0x24) = piVar2;
        puStack_16c = *(undefined4 **)(unaff_EBP + -0x50);
        iVar3 = (**(code **)(iVar3 + 0x84))
                          (piVar2,6,0x71,*(undefined4 *)(unaff_EBP + -0x10),0xff,0x119);
        if (iVar3 < 0) {
          iStack_134 = *(undefined4 *)(unaff_EBP + -0x24);
          iStack_13c = 0x77d829;
          iStack_138 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_134 = 0x77d836;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_134 = 0x77d843;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x1c);
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 8);
        iStack_134 = unaff_EBP + -0x38;
        iStack_138 = *(int *)(iVar3 + 0x824) + 100;
        iStack_13c = 1;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(undefined4 *)(unaff_EBP + -0x30) = 0x119;
        uStack_140 = 0x77d874;
        iVar7 = FUN_0077ed03();
        if (iVar7 == 0) {
          iStack_134 = 0x77d880;
          FUN_0077efbd();
          iStack_134 = 0x77d889;
          FUN_0077efbd();
          iStack_134 = 0x77d892;
          FUN_0077efbd();
        }
        iStack_134 = unaff_EBP + -0x38;
        iStack_138 = *(int *)(iVar3 + 0x824) + 0xe0;
        iStack_13c = 0;
        uStack_140 = 0x77d8ad;
        iVar3 = FUN_0077ed03();
        if (iVar3 == 0) {
          iStack_134 = 0x77d8bf;
          FUN_0077efbd();
          iStack_134 = 0x77d8c9;
          FUN_0077efbd();
          iStack_134 = 0x77d8d3;
          FUN_0077efbd();
        }
        goto LAB_0077da86;
      }
      if (iVar7 == 3) {
        iStack_134 = 0x77d573;
        FUN_00403191();
        piVar2 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (piVar2 == (int *)0x0) {
          iStack_134 = 0x77d584;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + -0x18);
        }
        iVar3 = *piVar2;
        uStack_140 = 0x32;
        uStack_144 = 0x138;
        iStack_148 = 0;
        uStack_14c = 0;
        iStack_150 = 0x32;
        iStack_13c = *(int *)(unaff_EBP + -0xbc);
        uStack_154 = 0x138;
        piStack_158 = (int *)0xff;
        puStack_15c = *(undefined4 **)(unaff_EBP + -0x20);
        iStack_138 = *(int *)(unaff_EBP + -0xb8);
        uStack_160 = 0x37;
        iStack_134 = *(undefined4 *)(unaff_EBP + -0xb4);
        iStack_164 = 5;
        *(int **)(unaff_EBP + -0x1c) = piVar2;
        puStack_16c = (undefined4 *)0x77d5bd;
        piStack_168 = piVar2;
        iVar3 = (**(code **)(iVar3 + 0x84))();
        if (iVar3 < 0) {
          puStack_16c = (undefined4 *)&DAT_00963cc8;
          uStack_170 = *(undefined4 *)(unaff_EBP + -0x1c);
          uStack_178 = 0x77d5cf;
          iStack_174 = iVar3;
          FUN_00878e09();
        }
        puStack_16c = (undefined4 *)(unaff_EBP + -0xbc);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        uStack_170 = 0x77d5df;
        puStack_16c = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_16c < 0) {
          uStack_170 = 0x77d5ea;
          FUN_00878dfb();
        }
        iVar3 = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x28) * -0x21;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x28) * 0x21;
        *(int *)(unaff_EBP + 8) = iVar3;
        if (0xbf < iVar3) {
          *(undefined4 *)(unaff_EBP + 8) = 0xc0;
        }
        puStack_16c = &DAT_00980690;
        uStack_170 = 0x77d617;
        FUN_00403191();
        piVar2 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (piVar2 == (int *)0x0) {
          puStack_16c = (undefined4 *)0x80004003;
          uStack_170 = 0x77d62c;
          FUN_00878dfb();
          piVar2 = *(int **)(unaff_EBP + -0x18);
        }
        uStack_17c = *(undefined4 *)(unaff_EBP + 8);
        iVar3 = *piVar2;
        uStack_180 = 0x119;
        piStack_184 = *(int **)(unaff_EBP + -0x1c);
        puStack_188 = (undefined *)0x0;
        uStack_18c = *(undefined4 *)(unaff_EBP + 8);
        uStack_178 = *(undefined4 *)(unaff_EBP + -0x9c);
        iStack_174 = *(int *)(unaff_EBP + -0x98);
        uStack_170 = *(undefined4 *)(unaff_EBP + -0x94);
        *(int **)(unaff_EBP + -0x24) = piVar2;
        puStack_16c = *(undefined4 **)(unaff_EBP + -0x90);
        iVar3 = (**(code **)(iVar3 + 0x84))
                          (piVar2,6,0x71,*(undefined4 *)(unaff_EBP + -0x10),0xff,0x119);
        if (iVar3 < 0) {
          iStack_134 = *(undefined4 *)(unaff_EBP + -0x24);
          iStack_13c = 0x77d675;
          iStack_138 = iVar3;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iStack_134 = 0x77d685;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_134 = 0x77d690;
          FUN_00878dfb();
        }
        iVar3 = DAT_00978368;
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
        *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x30) = 0x119;
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 8);
        if (*(int *)(iVar3 + 0x2cd2) != 0) {
          iVar7 = 0;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined4 *)(unaff_EBP + 8) = 6;
          while( true ) {
            iVar6 = *(int *)(iVar3 + 0x2cf8);
            iVar5 = 0;
            if (iVar6 != 0) {
              iVar5 = *(int *)(iVar6 + -4);
            }
            if (iVar5 + 1 <= iVar7) break;
            iStack_134 = unaff_EBP + -0x38;
            iStack_138 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x828) + 0x60 +
                         *(int *)(unaff_EBP + -0x1c);
            uStack_140 = 0x77d6fa;
            iStack_13c = iVar7;
            iVar6 = FUN_0077f00e();
            if (iVar6 == 0) {
              iStack_134 = 0x77d706;
              FUN_0077f2b3();
              iStack_134 = 0x77d712;
              FUN_0077f2b3();
              iStack_134 = 0x77d71c;
              FUN_0077f2b3();
            }
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x80;
            iVar7 = iVar7 + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 2;
          }
        }
        goto LAB_0077da86;
      }
      if (iVar7 != 4) goto LAB_0077da86;
      iStack_134 = 0x77d4fa;
      FUN_00403191();
      piVar2 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      if (piVar2 == (int *)0x0) {
        iStack_134 = 0x77d50b;
        FUN_00878dfb();
        piVar2 = *(int **)(unaff_EBP + -0x18);
      }
      iStack_148 = *(int *)(unaff_EBP + -0x28) * 0x21;
      uStack_140 = *(undefined4 *)(unaff_EBP + 8);
      iVar3 = *piVar2;
      uStack_144 = 0x119;
      uStack_14c = 0;
      iStack_150 = *(int *)(unaff_EBP + 8);
      iStack_13c = *(int *)(unaff_EBP + -0x8c);
      uStack_154 = 0x119;
      piStack_158 = (int *)0xff;
      puStack_15c = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_138 = *(int *)(unaff_EBP + -0x88);
      uStack_160 = 0x35;
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x84);
      iStack_164 = 6;
      *(int **)(unaff_EBP + -0x1c) = piVar2;
      puStack_16c = (undefined4 *)0x77d546;
      piStack_168 = piVar2;
      iVar3 = (**(code **)(iVar3 + 0x84))();
      if (iVar3 < 0) {
        iStack_134 = *(undefined4 *)(unaff_EBP + -0x1c);
        iStack_13c = 0x77d558;
        iStack_138 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
    }
    iStack_134 = 0x77d95f;
    iVar3 = FUN_00402bc3();
  }
  if (iVar3 < 0) {
    iStack_134 = 0x77da86;
    FUN_00878dfb();
  }
LAB_0077da86:
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_134 = 0x77daa3;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_134 = 0x77dab4;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_134 = 0x77dac5;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


