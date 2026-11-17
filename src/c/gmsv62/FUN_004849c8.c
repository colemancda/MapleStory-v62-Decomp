/* FUN_004849c8 - 0x004849c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004849c8(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  bool bVar6;
  undefined4 *puStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  undefined4 uStack_18c;
  int iStack_188;
  undefined1 *puStack_184;
  int iStack_180;
  undefined4 *puStack_17c;
  undefined1 *puStack_178;
  int iStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  int *piStack_164;
  undefined4 *puStack_160;
  int *piStack_15c;
  undefined *puStack_158;
  int *piStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  int *piStack_148;
  undefined *puStack_144;
  int *piStack_140;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x414) = *(undefined4 *)(unaff_EBP + 8);
  piStack_140 = (int *)0x4849f4;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_140 = (int *)0x484a02;
  FUN_00403191();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar6) {
    piStack_140 = (int *)0x484a18;
    FUN_00878dfb();
  }
  piStack_140 = (int *)(unaff_EBP + -0x28);
  puStack_144 = (undefined *)0x0;
  piStack_148 = (int *)0xa5;
  iStack_14c = 0xd4;
  uStack_150 = 0x28;
  piStack_154 = (int *)0x18;
  puStack_158 = (undefined *)(unaff_EBP + 8);
  piStack_15c = (int *)0x484a3e;
  puVar1 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 1000);
  piStack_140 = (int *)0x484a4d;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_140 = (int *)0x484a62;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_140 = (int *)0x484a6d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_140 = (int *)0x484a7a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_140 = (int *)0x484a85;
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    piStack_140 = (int *)0x484a93;
    FUN_00878dfb();
  }
  piVar4 = *(int **)this;
  puStack_144 = (undefined *)0x484aa3;
  piStack_140 = piVar4;
  iVar2 = (**(code **)(*piVar4 + 0xb4))();
  if (iVar2 < 0) {
    puStack_144 = &DAT_00963df8;
    uStack_150 = 0x484ab3;
    iStack_14c = iVar2;
    piStack_148 = piVar4;
    FUN_00878e09();
  }
  puStack_144 = (undefined *)(unaff_EBP + -0x2c);
  piStack_148 = (int *)0x484ac2;
  puVar1 = (undefined4 *)FUN_00485656();
  piStack_148 = (int *)*puVar1;
  puStack_144 = (undefined *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_14c = 0x484ad6;
  FUN_0040ee87();
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    puStack_144 = (undefined *)0x80004003;
    piStack_148 = (int *)0x484ae9;
    FUN_00878dfb();
  }
  piStack_154 = *(int **)(extraout_ECX + 1000);
  iVar2 = *piStack_154;
  uStack_150 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_14c = *(undefined4 *)(unaff_EBP + -0x24);
  piStack_148 = *(int **)(unaff_EBP + -0x20);
  *(int **)(unaff_EBP + 8) = piStack_154;
  puStack_144 = *(undefined **)(unaff_EBP + -0x1c);
  puStack_158 = (undefined *)0x484b04;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_158 = &DAT_00963de8;
    piStack_15c = *(int **)(unaff_EBP + 8);
    piStack_164 = (int *)0x484b16;
    puStack_160 = (undefined4 *)iVar2;
    FUN_00878e09();
  }
  puStack_158 = (undefined *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_15c = (int *)0x484b23;
  puStack_158 = (undefined *)FUN_00402bc3();
  if ((int)puStack_158 < 0) {
    piStack_15c = (int *)0x484b30;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_158 = (undefined *)0x484b3c;
  FUN_004125d9();
  if (*(int *)(extraout_ECX + 1000) == 0) {
    puStack_158 = (undefined *)0x80004003;
    piStack_15c = (int *)0x484b54;
    FUN_00878dfb();
  }
  piVar4 = *(int **)(extraout_ECX + 1000);
  puStack_158 = (undefined *)0xffffffff;
  puStack_160 = (undefined4 *)0x484b61;
  piStack_15c = piVar4;
  iVar2 = (**(code **)(*piVar4 + 0xe0))();
  if (iVar2 < 0) {
    puStack_160 = (undefined4 *)&DAT_00963df8;
    iStack_16c = 0x484b71;
    iStack_168 = iVar2;
    piStack_164 = piVar4;
    FUN_00878e09();
  }
  puStack_160 = &DAT_00980690;
  piStack_164 = (int *)0x484b7f;
  FUN_00403191();
  puStack_160 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  piStack_164 = (int *)0x484b8f;
  FUN_00403191();
  puStack_160 = (undefined4 *)0x0;
  piStack_164 = (int *)0x0;
  iStack_168 = unaff_EBP + -0x54;
  iStack_16c = unaff_EBP + -0x28;
  puStack_178 = (undefined1 *)&uStack_170;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_170;
  iStack_174 = 0xc01;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_17c = (undefined4 *)0x484bb5;
  FUN_00679e4e();
  iStack_174 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_178 = (undefined1 *)0x484bc2;
  FUN_00405a1d();
  puStack_178 = (undefined1 *)0x484bc9;
  FUN_00402660();
  puStack_178 = (undefined1 *)0x484bd0;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_168 = 0x484bdb;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  puStack_160 = (undefined4 *)(unaff_EBP + 8);
  piStack_164 = (int *)0x484bed;
  puStack_160 = (undefined4 *)FUN_00404b30();
  if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
    piStack_164 = (int *)0x484bfe;
    FUN_00878dfb();
  }
  puStack_160 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_164 = (int *)0x484c0b;
  puStack_160 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_160 < 0) {
    piStack_164 = (int *)0x484c16;
    FUN_00878dfb();
  }
  puStack_160 = (undefined4 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_164 = (int *)0x484c23;
  puStack_160 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_160 < 0) {
    piStack_164 = (int *)0x484c2e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_160 = (undefined4 *)(unaff_EBP + -0x54);
  piStack_164 = (int *)0x484c3b;
  puStack_160 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_160 < 0) {
    piStack_164 = (int *)0x484c46;
    FUN_00878dfb();
  }
  puStack_160 = &DAT_00980690;
  piStack_164 = (int *)0x484c53;
  FUN_00403191();
  puStack_160 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  piStack_164 = (int *)0x484c67;
  FUN_00403191();
  puStack_160 = (undefined4 *)0x0;
  piStack_164 = (int *)0x0;
  iStack_168 = unaff_EBP + -0x54;
  iStack_16c = unaff_EBP + -0x28;
  puStack_178 = (undefined1 *)&uStack_170;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_170;
  iStack_174 = 0xc02;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_17c = (undefined4 *)0x484c88;
  FUN_00679e4e();
  iStack_174 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_178 = (undefined1 *)0x484c95;
  FUN_00405a1d();
  puStack_178 = (undefined1 *)0x484c9c;
  FUN_00402660();
  puStack_178 = (undefined1 *)0x484ca3;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_168 = 0x484cae;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  puStack_160 = (undefined4 *)(unaff_EBP + 8);
  piStack_164 = (int *)0x484cc0;
  puStack_160 = (undefined4 *)FUN_00404b30();
  if (((int)puStack_160 < 0) && (puStack_160 != (undefined4 *)0x80004002)) {
    piStack_164 = (int *)0x484cd1;
    FUN_00878dfb();
  }
  puStack_160 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_164 = (int *)0x484cde;
  puStack_160 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_160 < 0) {
    piStack_164 = (int *)0x484ce9;
    FUN_00878dfb();
  }
  puStack_160 = (undefined4 *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_164 = (int *)0x484cf6;
  puStack_160 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_160 < 0) {
    piStack_164 = (int *)0x484d01;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_160 = (undefined4 *)(unaff_EBP + -0x54);
  piStack_164 = (int *)0x484d0e;
  puStack_160 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_160 < 0) {
    piStack_164 = (int *)0x484d19;
    FUN_00878dfb();
  }
  puStack_160 = (undefined4 *)0x484d24;
  puStack_160 = (undefined4 *)FUN_0045dc32();
  piStack_164 = (int *)0x484d2c;
  FUN_00486bcd();
  puStack_160 = (undefined4 *)0x68;
  piStack_164 = (int *)0x484d38;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    puStack_160 = (undefined4 *)0x0;
  }
  else {
    puStack_160 = (undefined4 *)0x484d4d;
    puStack_160 = (undefined4 *)FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_164 = (int *)0x484d61;
  FUN_0048b9a0();
  puStack_160 = (undefined4 *)0x0;
  piStack_164 = (int *)0x73;
  iStack_168 = 0xb;
  iStack_16c = 0x8d;
  uStack_170 = 3;
  iStack_174 = 0x3ec;
  puStack_17c = (undefined4 *)0x484d7e;
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 8))();
  puStack_17c = &DAT_00980690;
  iStack_180 = 0x484d8e;
  FUN_00403191();
  puStack_17c = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  iStack_180 = 0x484da5;
  FUN_00403191();
  puStack_17c = (undefined4 *)0x0;
  iStack_180 = 0;
  puStack_184 = (undefined1 *)(unaff_EBP + -0xb0);
  iStack_188 = unaff_EBP + -0xa0;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_18c;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_184 = (undefined1 *)0x484df5;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar2 != 0) {
    puStack_17c = (undefined4 *)(unaff_EBP + -0x2c);
    iStack_180 = 0x484e0b;
    puStack_17c = (undefined4 *)FUN_00404b30();
    if (((int)puStack_17c < 0) && (puStack_17c != (undefined4 *)0x80004002)) {
      iStack_180 = 0x484e1c;
      FUN_00878dfb();
    }
  }
  puStack_17c = (undefined4 *)(unaff_EBP + -0x138);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_180 = 0x484e2c;
  puStack_17c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_17c < 0) {
    iStack_180 = 0x484e37;
    FUN_00878dfb();
  }
  puStack_17c = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_180 = 0x484e47;
  puStack_17c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_17c < 0) {
    iStack_180 = 0x484e52;
    FUN_00878dfb();
  }
  puStack_17c = (undefined4 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_180 = 0x484e62;
  puStack_17c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_17c < 0) {
    iStack_180 = 0x484e6d;
    FUN_00878dfb();
  }
  puStack_17c = &DAT_00980690;
  iStack_180 = 0x484e7a;
  FUN_00403191();
  puStack_17c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_180 = 0x484e8e;
  FUN_00403191();
  puStack_17c = (undefined4 *)0x0;
  iStack_180 = 0;
  puStack_184 = (undefined1 *)(unaff_EBP + -0x80);
  iStack_188 = unaff_EBP + -0x90;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_18c;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_18c = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  puStack_184 = (undefined1 *)0x484edb;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x70) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar2 != 0) {
    puStack_17c = (undefined4 *)(unaff_EBP + -0x70);
    iStack_180 = 0x484ef1;
    puStack_17c = (undefined4 *)FUN_00404b30();
    if (((int)puStack_17c < 0) && (puStack_17c != (undefined4 *)0x80004002)) {
      iStack_180 = 0x484f02;
      FUN_00878dfb();
    }
  }
  puStack_17c = (undefined4 *)(unaff_EBP + -0xf8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_180 = 0x484f12;
  puStack_17c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_17c < 0) {
    iStack_180 = 0x484f1d;
    FUN_00878dfb();
  }
  puStack_17c = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_180 = 0x484f2d;
  puStack_17c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_17c < 0) {
    iStack_180 = 0x484f38;
    FUN_00878dfb();
  }
  puStack_17c = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_180 = 0x484f45;
  puStack_17c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_17c < 0) {
    iStack_180 = 0x484f50;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    puStack_17c = (undefined4 *)0x484f5b;
    FUN_0087a1b0();
    puStack_17c = (undefined4 *)0x0;
    iStack_180 = 0;
    iStack_188 = *(undefined4 *)(unaff_EBP + 8);
    uStack_18c = 0x484f68;
    puStack_184 = (undefined1 *)&puStack_178;
    iStack_188 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_184;
    uStack_18c = 0x484f74;
    FUN_00448a17();
    iStack_188 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    uStack_18c = 0x484f84;
    FUN_0040263d();
    uStack_18c = 0x484f8b;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    puStack_184 = (undefined1 *)0x484f96;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x44) = uVar3;
    puStack_17c = (undefined4 *)0x484fa1;
    FUN_0087a1b0();
    puStack_17c = (undefined4 *)0x0;
    iStack_180 = 0;
    iStack_188 = *(undefined4 *)(unaff_EBP + 8);
    uStack_18c = 0x484fae;
    puStack_184 = (undefined1 *)&puStack_178;
    iStack_188 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_184;
    uStack_18c = 0x484fba;
    FUN_00448a17();
    iStack_188 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uStack_18c = 0x484fca;
    FUN_0040263d();
    uStack_18c = 0x484fd1;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    puStack_184 = (undefined1 *)0x484fdc;
    uVar3 = FUN_004032b4();
    puStack_17c = (undefined4 *)0x1;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    puStack_184 = (undefined1 *)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + -0x30) = &iStack_180;
    iStack_188 = 0x484ff0;
    FUN_0048bb05();
    iStack_188 = unaff_EBP + -0x10;
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_184;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    uStack_18c = 0x485003;
    puStack_184 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_188 = 0x485012;
    FUN_0048b99c();
    iStack_188 = 0x485019;
    FUN_004b22e5();
    puStack_17c = (undefined4 *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_180 = 0x485026;
    puStack_17c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_17c < 0) {
      iStack_180 = 0x485031;
      FUN_00878dfb();
    }
    puStack_17c = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_180 = 0x48503e;
    puStack_17c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_17c < 0) {
      iStack_180 = 0x485049;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 3);
  puStack_17c = (undefined4 *)0x0;
  iStack_180 = 0x485062;
  FUN_004b2699();
  puStack_17c = (undefined4 *)0x48506d;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0xc4) = 0xffffffff;
  puStack_17c = (undefined4 *)0xa;
  iStack_180 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  *(undefined4 *)(unaff_EBP + -0xcc) = 0xff000000;
  puStack_184 = (undefined1 *)0x48508f;
  uVar3 = FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  puStack_17c = (undefined4 *)0x485099;
  FUN_00408b49();
  puStack_17c = (undefined4 *)0x4850a4;
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0xd4) = **(undefined4 **)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_17c = (undefined4 *)0x4850bb;
    FUN_004030b1();
  }
  puStack_17c = (undefined4 *)0xb8;
  iStack_180 = 0x4850ca;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar2 == 0) {
    puStack_17c = (undefined4 *)0x0;
  }
  else {
    puStack_17c = (undefined4 *)0x4850dc;
    puStack_17c = (undefined4 *)FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_180 = 0x4850ed;
  FUN_0045e196();
  piVar4 = *(int **)(extraout_ECX + 0x80);
  puStack_17c = (undefined4 *)(unaff_EBP + -0xe8);
  iStack_180 = 0xf;
  puStack_184 = (undefined1 *)0xb6;
  iStack_188 = 0xd6;
  uStack_18c = 0x32;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0x1e;
  (**(code **)(*piVar4 + 8))();
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 1;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00402676();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00402676();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))();
  iStack_1e4 = unaff_EBP + 8;
  iStack_1e8 = 0x4852ff;
  piVar4 = (int *)FUN_00679d86();
  iStack_1e8 = *piVar4;
  iStack_1e4 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_1ec = 0x485311;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00402676();
  iStack_1e4 = 0x485327;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_1e4 = unaff_EBP + -0x28;
  iStack_1e8 = 0x485335;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_1e4 = 0x485341;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_1e4 = 0x48534f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iStack_1e4 = unaff_EBP + -0x54;
  puStack_1f0 = &DAT_00980690;
  iStack_1e8 = 0x48535d;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_1e4 = 0x485369;
    FUN_00878dfb();
    puStack_1f0 = extraout_ECX_02;
  }
  iStack_1e4 = 0;
  iStack_1e8 = unaff_EBP + -0x28;
  iStack_1ec = unaff_EBP + -0x54;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_1f0;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00679e4e(&puStack_1f0,0xbff);
  iVar2 = unaff_EBP + -0x128;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_1e8 = 0x4853b3;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    iStack_1e4 = 0x4853c9;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_1e4 = 0x4853da;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_1e4 = 0x4853ea;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1e4 = 0x4853f5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_1e4 = 0x485402;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1e4 = 0x48540d;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_1e4 = 0x48541a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1e4 = 0x485425;
    FUN_00878dfb();
    iVar2 = extraout_ECX_03;
  }
  iStack_1e4 = 0;
  puStack_1f0 = &iStack_1e8;
  *(int **)(unaff_EBP + -0x18) = &iStack_1e8;
  iStack_1ec = 0x5cf;
  iStack_1e8 = iVar2;
  FUN_00679e4e();
  iStack_1ec = unaff_EBP + -0x108;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  puStack_1f0 = (undefined4 *)0x48544d;
  FUN_0040263d();
  puStack_1f0 = (undefined4 *)0x485454;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iStack_1e8 = 0x48545f;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (iVar2 != 0) {
    iStack_1e4 = 0x485475;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_1e4 = 0x485486;
      FUN_00878dfb();
    }
  }
  iVar2 = unaff_EBP + -0x108;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iStack_1e4 = 0x485496;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1e4 = 0x4854a1;
    FUN_00878dfb();
    iVar2 = extraout_ECX_04;
  }
  iStack_1e4 = 0;
  puStack_1f0 = &iStack_1e8;
  *(int **)(unaff_EBP + -0x18) = &iStack_1e8;
  iStack_1ec = 0x5d0;
  iStack_1e8 = iVar2;
  FUN_00679e4e();
  iStack_1ec = unaff_EBP + -0x118;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  puStack_1f0 = (undefined4 *)0x4854c9;
  FUN_0040263d();
  puStack_1f0 = (undefined4 *)0x4854d0;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iStack_1e8 = 0x4854db;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar2 != 0) {
    iStack_1e4 = 0x4854f1;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_1e4 = 0x485502;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  iStack_1e4 = 0x485512;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_1e4 = 0x48551d;
    FUN_00878dfb();
  }
  FUN_0048ba33();
  *(undefined1 **)(unaff_EBP + -0x18) = &stack0xfffffe20;
  iStack_1e8 = unaff_EBP + -0x34;
  *(int **)(unaff_EBP + -0x30) = &iStack_1e4;
  iStack_1ec = 0x485541;
  FUN_00424dbc();
  iStack_1ec = unaff_EBP + -0x3c;
  *(int **)(unaff_EBP + -0x68) = &iStack_1e8;
  puStack_1f0 = (undefined4 *)0x485550;
  FUN_00424dbc();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  iStack_1ec = 0x48555b;
  FUN_0048b994();
  iStack_1ec = 0x485562;
  FUN_0085fe71();
  FUN_0086192b();
  iStack_1e4 = 0x48557c;
  iVar2 = FUN_00455c59();
  iStack_1e8 = *(int *)(iVar2 + 4);
  iStack_1e4 = iStack_1e8 + 0xd3;
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iStack_1ec = 0x48559d;
  FUN_004b857d();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (*(int *)(unaff_EBP + -0x68) != 0) {
    iStack_1e4 = 0x4855af;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
  }
  FUN_0048ba66();
  FUN_007c50b6();
  FUN_00486015();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    iStack_1e4 = 0x4855e0;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
    iStack_1e4 = 0x4855f1;
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_1e4 = 0x485602;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_0045c14e();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
    iStack_1e4 = 0x48562e;
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    iStack_1e4 = 0x48563f;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


