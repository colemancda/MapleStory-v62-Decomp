/* FUN_00645d2c - 0x00645d2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00645d2c(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int unaff_EBP;
  undefined4 *puStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 *puStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  int iStack_15c;
  undefined4 *puVar3;
  undefined1 *puStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined4 *puStack_d8;
  
  FUN_00879bb8();
  puStack_d8 = &DAT_00980690;
  iStack_dc = 0x645d4f;
  FUN_00403191();
  puStack_d8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_dc = 0x645d5d;
  FUN_00403191();
  puStack_d8 = (undefined4 *)0x0;
  iStack_dc = 0;
  iStack_e0 = unaff_EBP + -0x44;
  iStack_e4 = unaff_EBP + -0x34;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_e8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_e0 = 0x645daa;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_dc = 0x645dbc;
  puStack_d8 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_d8 < 0) && (puStack_d8 != (undefined4 *)0x80004002)) {
    iStack_dc = 0x645dcd;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_dc = 0x645ddd;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    iStack_dc = 0x645de8;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_dc = 0x645df4;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    iStack_dc = 0x645dff;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_dc = 0x645e0c;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    iStack_dc = 0x645e17;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 1;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  puStack_d8 = (undefined4 *)0xa06;
  iStack_dc = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_e0 = 0x645e41;
  puStack_d8 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_dc = 0x645e4e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_d8 = (undefined4 *)0x645e5a;
  FUN_00402676();
  puStack_d8 = (undefined4 *)0x578;
  iStack_dc = 0x645e69;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    puStack_d8 = (undefined4 *)0x0;
  }
  else {
    puStack_d8 = (undefined4 *)0x645e7b;
    puStack_d8 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_dc = 0x645e8c;
  FUN_00450382();
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x5c);
  iStack_dc = 0;
  iStack_e0 = 0xf;
  iStack_e4 = 0x8e;
  uStack_e8 = 2;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 != 0) {
    FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0048b9a0();
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 8))();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00403191();
  iStack_148 = unaff_EBP + -0xb4;
  puStack_154 = (undefined1 *)&uStack_14c;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_14c;
  iStack_150 = 0xa42;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00679e4e();
  iStack_150 = unaff_EBP + -0xc4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_154 = (undefined1 *)0x646044;
  FUN_00405a1d();
  puStack_154 = (undefined1 *)0x64604b;
  FUN_00402660();
  puStack_154 = (undefined1 *)0x646052;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x74) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_00403191();
  iStack_148 = unaff_EBP + -0xa4;
  puStack_154 = (undefined1 *)&uStack_14c;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_14c;
  iStack_150 = 0xa43;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  FUN_00679e4e();
  iStack_150 = unaff_EBP + -0xd4;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_154 = (undefined1 *)0x64612b;
  FUN_00405a1d();
  puStack_154 = (undefined1 *)0x646132;
  FUN_00402660();
  puStack_154 = (undefined1 *)0x646139;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x60) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (((iVar2 != 0) && (iVar2 = FUN_00404b30(), iVar2 < 0)) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_0087a1b0();
  iStack_148 = 0;
  uStack_14c = 0x6461cf;
  iStack_148 = FUN_0048b981();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffebc;
  uStack_14c = 0x6461db;
  FUN_00448a17();
  iStack_148 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_14c = 0x6461eb;
  FUN_0040263d();
  uStack_14c = 0x6461f2;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  FUN_0087a1b0();
  iStack_148 = 0;
  uStack_14c = 0x646213;
  iStack_148 = FUN_0048b981();
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffebc;
  uStack_14c = 0x64621f;
  FUN_00448a17();
  iStack_148 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_14c = 0x64622f;
  FUN_0040263d();
  uStack_14c = 0x646236;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffec0;
  iStack_148 = 0x646255;
  FUN_0048bb05();
  iStack_148 = unaff_EBP + -0x18;
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffebc;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  uStack_14c = 0x646268;
  FUN_0048bb05();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_148 = 0x646277;
  FUN_0048b99c();
  iStack_148 = 0x64627e;
  FUN_004b22e5();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX + 0x94);
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 0x32;
  *(undefined4 *)(extraout_ECX + 0xf4) = 0;
  iStack_148 = 0x6462d7;
  _memset((void *)(extraout_ECX + 0xf8),0,8);
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (iVar2 != 0) {
    FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0048b9a0();
  iStack_148 = 0xeb;
  uStack_14c = 2;
  iStack_150 = 0x3eb;
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 8))();
  iStack_15c = 0x646336;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_15c = unaff_EBP + -0x34;
  puStack_160 = (undefined1 *)0x646340;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_15c = 0x64634c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_15c = 0x64635a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_15c = unaff_EBP + -0x44;
  puStack_168 = &DAT_00980690;
  puStack_160 = (undefined1 *)0x646364;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_15c = 0x646370;
    FUN_00878dfb();
    puStack_168 = extraout_ECX_00;
  }
  iStack_15c = 0;
  puStack_160 = (undefined1 *)(unaff_EBP + -0x34);
  iStack_164 = unaff_EBP + -0x44;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_168;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  puStack_160 = (undefined1 *)0x6463ba;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  iStack_15c = 0x6463c9;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_15c = 0x6463da;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_15c = 0x6463e7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_15c = 0x6463f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_15c = 0x6463ff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_15c = 0x64640a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_15c = 0x646417;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_15c = 0x646422;
    FUN_00878dfb();
  }
  iStack_15c = 0x64642c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_15c = unaff_EBP + -0x44;
  puStack_160 = (undefined1 *)0x646436;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_15c = 0x646442;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_15c = 0x646450;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_15c = unaff_EBP + -0x34;
  puVar3 = &DAT_00980690;
  puStack_160 = (undefined1 *)0x64645a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_15c = 0x646466;
    FUN_00878dfb();
    puVar3 = extraout_ECX_01;
  }
  iStack_15c = 0;
  puStack_160 = (undefined1 *)(unaff_EBP + -0x44);
  iStack_164 = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_168;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_168 = puVar3;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  puStack_160 = (undefined1 *)0x6464b0;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  iStack_15c = 0x6464bf;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_15c = 0x6464d0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_15c = 0x6464dd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_15c = 0x6464e8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_15c = 0x6464f5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_15c = 0x646500;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_15c = 0x64650d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_15c = 0x646518;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    FUN_0087a1b0();
    iStack_15c = 0;
    iStack_164 = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_168 = (undefined4 *)0x646530;
    puStack_160 = (undefined1 *)&puStack_154;
    iStack_164 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_160;
    puStack_168 = (undefined4 *)0x64653c;
    FUN_00448a17();
    iStack_164 = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_168 = (undefined4 *)0x64654c;
    FUN_0040263d();
    puStack_168 = (undefined4 *)0x646553;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_160 = (undefined1 *)0x64655e;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    FUN_0087a1b0();
    iStack_15c = 0;
    iStack_164 = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_168 = (undefined4 *)0x646576;
    puStack_160 = (undefined1 *)&puStack_154;
    iStack_164 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_160;
    puStack_168 = (undefined4 *)0x646582;
    FUN_00448a17();
    iStack_164 = unaff_EBP + -0x70;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_168 = (undefined4 *)0x646592;
    FUN_0040263d();
    puStack_168 = (undefined4 *)0x646599;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    puStack_160 = (undefined1 *)0x6465a4;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    puStack_160 = (undefined1 *)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x1c) = &iStack_15c;
    iStack_164 = 0x6465b8;
    FUN_0048bb05();
    iStack_164 = unaff_EBP + -0x14;
    *(undefined1 ***)(unaff_EBP + -0x48) = &puStack_160;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_168 = (undefined4 *)0x6465cb;
    puStack_160 = extraout_ECX_02;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_164 = 0x6465da;
    FUN_0048b99c();
    iStack_164 = 0x6465e1;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_15c = 0x6465ee;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_15c = 0x6465f9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_15c = 0x646606;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_15c = 0x646611;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 5);
  iVar2 = *(int *)(extraout_ECX + 0x9c);
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  iStack_15c = 0x64663a;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x48) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  if (iVar2 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_15c = 0x646660;
  FUN_0048b9e9();
  iStack_15c = 0xc2;
  puStack_160 = (undefined1 *)0x7f;
  iStack_164 = 0xd2;
  puStack_168 = (undefined4 *)0x3;
  (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0xa8) + 0x34) = 0xcc;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x48) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  if (iVar2 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0xb0) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0xb0) + 0x34) = 0xcc;
  iStack_19c = unaff_EBP + -0x14;
  iStack_1a0 = 0x6466fb;
  puVar3 = (undefined4 *)FUN_007d4a9a();
  iStack_19c = 0x64670a;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd4),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_19c = 0x646717;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_19c = 0x646721;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_19c = unaff_EBP + -0x44;
  iStack_1a0 = 0x64672b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_19c = 0x646737;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_19c = 0x646745;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_19c = unaff_EBP + -0x34;
  puStack_1a8 = &DAT_00980690;
  iStack_1a0 = 0x64674f;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_19c = 0x64675b;
    FUN_00878dfb();
    puStack_1a8 = extraout_ECX_03;
  }
  iStack_19c = 0;
  iStack_1a0 = unaff_EBP + -0x44;
  iStack_1a4 = unaff_EBP + -0x34;
  *(undefined4 ***)(unaff_EBP + -0x48) = &puStack_1a8;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  FUN_00679e4e(&puStack_1a8,0x4e9);
  iVar2 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_1a0 = 0x6467a5;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  iStack_19c = 0x6467b7;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_19c = 0x6467c8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_19c = 0x6467d5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_19c = 0x6467e0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_19c = 0x6467ed;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_19c = 0x6467f8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_19c = 0x646805;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_19c = 0x646810;
    FUN_00878dfb();
  }
  *(undefined4 *)(extraout_ECX + 0xe4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xe0) = 0xffffffff;
  iStack_19c = 5;
  *(undefined4 *)(extraout_ECX + 0xec) = 0;
  iStack_1a0 = 0x646835;
  FUN_00649656();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_19c = 0x646846;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_19c = 0x646857;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


