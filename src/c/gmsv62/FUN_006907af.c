/* FUN_006907af - 0x006907af in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006907af(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  int unaff_EBP;
  undefined4 *puStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 *puStack_190;
  int iStack_18c;
  undefined1 *puStack_188;
  int iStack_184;
  undefined4 *puVar4;
  undefined1 auStack_17c [4];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined1 *puStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 *puStack_d4;
  
  FUN_00879bb8();
  puStack_d4 = &DAT_00980690;
  iStack_d8 = 0x6907d2;
  FUN_00403191();
  puStack_d4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_d8 = 0x6907e0;
  FUN_00403191();
  puStack_d4 = (undefined4 *)0x0;
  iStack_d8 = 0;
  iStack_dc = unaff_EBP + -0x54;
  iStack_e0 = unaff_EBP + -0x44;
  puStack_ec = (undefined1 *)&uStack_e4;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_e4;
  iStack_e8 = 0xade;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_f0 = 0x690806;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_ec = (undefined1 *)0x690813;
  FUN_00405a1d();
  puStack_ec = (undefined1 *)0x69081a;
  FUN_00402660();
  puStack_ec = (undefined1 *)0x690821;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_dc = 0x69082c;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_d8 = 0x69083e;
  puStack_d4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_d4 < 0) && (puStack_d4 != (undefined4 *)0x80004002)) {
    iStack_d8 = 0x69084f;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_d8 = 0x69085c;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x690867;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_d8 = 0x690874;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x69087f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_d8 = 0x69088c;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x690897;
    FUN_00878dfb();
  }
  puStack_d4 = &DAT_00980690;
  iStack_d8 = 0x6908a0;
  FUN_00403191();
  puStack_d4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_d8 = 0x6908b0;
  FUN_00403191();
  puStack_d4 = (undefined4 *)0x0;
  iStack_d8 = 0;
  iStack_dc = unaff_EBP + -0x54;
  iStack_e0 = unaff_EBP + -0x44;
  puStack_ec = (undefined1 *)&uStack_e4;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_e4;
  iStack_e8 = 0x722;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_f0 = 0x6908d3;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_ec = (undefined1 *)0x6908e0;
  FUN_00405a1d();
  puStack_ec = (undefined1 *)0x6908e7;
  FUN_00402660();
  puStack_ec = (undefined1 *)0x6908ee;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_dc = 0x6908f9;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_d8 = 0x69090b;
  puStack_d4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_d4 < 0) && (puStack_d4 != (undefined4 *)0x80004002)) {
    iStack_d8 = 0x69091c;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_d8 = 0x690929;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x690934;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_d8 = 0x690941;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x69094c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_d8 = 0x690959;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x690964;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_d4 = (undefined4 *)0xadf;
  iStack_d8 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_dc = 0x690990;
  puStack_d4 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_d8 = 0x69099d;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_d4 = (undefined4 *)0x6909a9;
  FUN_00402676();
  puStack_d4 = (undefined4 *)0x578;
  iStack_d8 = 0x6909bb;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    puStack_d4 = (undefined4 *)0x0;
  }
  else {
    puStack_d4 = (undefined4 *)0x6909cd;
    puStack_d4 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_d8 = 0x6909de;
  FUN_00450382();
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x24);
  iStack_d8 = 0;
  iStack_dc = 0xf;
  iStack_e0 = 0x9a;
  uStack_e4 = 2;
  puStack_ec = (undefined1 *)0x6909f6;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  puStack_ec = (undefined1 *)0x723;
  iStack_f0 = unaff_EBP + -0x10;
  uStack_f4 = 0x690a09;
  puStack_ec = (undefined1 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_f0 = 0x690a16;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_ec = (undefined1 *)0x690a22;
  FUN_00402676();
  puStack_ec = (undefined1 *)0x578;
  iStack_f0 = 0x690a2a;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    puStack_ec = (undefined1 *)0x0;
  }
  else {
    puStack_ec = (undefined1 *)0x690a3c;
    puStack_ec = (undefined1 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_f0 = 0x690a50;
  FUN_00450382();
  puStack_ec = (undefined1 *)(unaff_EBP + -0x24);
  iStack_f0 = 0;
  uStack_f4 = 0x23;
  uStack_f8 = 0x9a;
  uStack_fc = 1000;
  iStack_104 = 0x690a6e;
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
  iStack_104 = 0x724;
  iStack_108 = unaff_EBP + -0x10;
  uStack_10c = 0x690a81;
  iStack_104 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_108 = 0x690a8e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_104 = 0x690a9a;
  FUN_00402676();
  iStack_104 = 0x578;
  iStack_108 = 0x690aa2;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 == 0) {
    iStack_104 = 0;
  }
  else {
    iStack_104 = 0x690ab4;
    iStack_104 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_108 = 0x690ac8;
  FUN_00450382();
  iStack_104 = unaff_EBP + -0x24;
  iStack_108 = 0;
  uStack_10c = 0xf;
  uStack_110 = 0x180;
  uStack_114 = 0x3e9;
  iStack_11c = 0x690ae6;
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))();
  iStack_11c = 0x725;
  iStack_120 = unaff_EBP + -0x10;
  uStack_124 = 0x690af9;
  iStack_11c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_120 = 0x690b06;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_11c = 0x690b12;
  FUN_00402676();
  iStack_11c = 0x578;
  iStack_120 = 0x690b1a;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    iStack_11c = 0;
  }
  else {
    iStack_11c = 0x690b2c;
    iStack_11c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_120 = 0x690b40;
  FUN_00450382();
  iStack_11c = unaff_EBP + -0x24;
  iStack_120 = 0;
  uStack_124 = 0x37;
  uStack_128 = 0x9a;
  uStack_12c = 0x3ea;
  iStack_134 = 0x690b5e;
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
  iStack_134 = 0xae0;
  iStack_138 = unaff_EBP + -0x10;
  uStack_13c = 0x690b71;
  iStack_134 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_138 = 0x690b7e;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_134 = 0x690b8a;
  FUN_00402676();
  iStack_134 = 0x578;
  iStack_138 = 0x690b92;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    iStack_134 = 0;
  }
  else {
    iStack_134 = 0x690ba4;
    iStack_134 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_138 = 0x690bb8;
  FUN_00450382();
  iStack_134 = unaff_EBP + -0x24;
  iStack_138 = 0;
  uStack_13c = 0x126;
  uStack_140 = 5;
  uStack_144 = 0x3eb;
  iStack_14c = 0x690bd6;
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))();
  iStack_14c = 0xae1;
  iStack_150 = unaff_EBP + -0x10;
  uStack_154 = 0x690be9;
  iStack_14c = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_150 = 0x690bf6;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_14c = 0x690c02;
  FUN_00402676();
  iStack_14c = 0x578;
  iStack_150 = 0x690c0a;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 == 0) {
    iStack_14c = 0;
  }
  else {
    iStack_14c = 0x690c1c;
    iStack_14c = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_150 = 0x690c30;
  FUN_00450382();
  iStack_14c = unaff_EBP + -0x24;
  iStack_150 = 0;
  uStack_154 = 0x126;
  uStack_158 = 0xec;
  uStack_15c = 0x3ec;
  uStack_164 = 0x690c52;
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))();
  uStack_164 = 0x68;
  uStack_168 = 0x690c5b;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar3 == 0) {
    uStack_164 = 0;
  }
  else {
    uStack_164 = 0x690c6d;
    uStack_164 = FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_168 = 0x690c81;
  FUN_0048b9a0();
  uStack_164 = 0;
  uStack_168 = 0xde;
  uStack_16c = 0x5c;
  uStack_170 = 0xeb;
  uStack_174 = 2;
  uStack_178 = 0x3ed;
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 8))();
  iStack_184 = 0x690cab;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
  iStack_184 = unaff_EBP + -0x68;
  puStack_188 = (undefined1 *)0x690cb9;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_184 = 0x690cc5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_184 = 0x690cd6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
  iStack_184 = unaff_EBP + -0xa0;
  puStack_190 = &DAT_00980690;
  puStack_188 = (undefined1 *)0x690ce7;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_184 = 0x690cf3;
    FUN_00878dfb();
    puStack_190 = extraout_ECX_00;
  }
  iStack_184 = 0;
  puStack_188 = (undefined1 *)(unaff_EBP + -0x68);
  iStack_18c = unaff_EBP + -0xa0;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_190;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_188 = (undefined1 *)0x690d43;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x70) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar3 != 0) {
    iStack_184 = 0x690d59;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_184 = 0x690d6a;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_184 = 0x690d7a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_184 = 0x690d85;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_184 = 0x690d95;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_184 = 0x690da0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_184 = 0x690dad;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_184 = 0x690db8;
    FUN_00878dfb();
  }
  iStack_184 = 0x690dc2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_184 = unaff_EBP + -0x44;
  puStack_188 = (undefined1 *)0x690dd0;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_184 = 0x690ddc;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_184 = 0x690dea;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iStack_184 = unaff_EBP + -0x54;
  puVar4 = &DAT_00980690;
  puStack_188 = (undefined1 *)0x690df8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_184 = 0x690e04;
    FUN_00878dfb();
    puVar4 = extraout_ECX_01;
  }
  iStack_184 = 0;
  puStack_188 = (undefined1 *)(unaff_EBP + -0x44);
  iStack_18c = unaff_EBP + -0x54;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_190;
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  puStack_190 = puVar4;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  puStack_188 = (undefined1 *)0x690e51;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar3 != 0) {
    iStack_184 = 0x690e67;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_184 = 0x690e78;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_184 = 0x690e88;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_184 = 0x690e93;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_184 = 0x690ea0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_184 = 0x690eab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_184 = 0x690eb8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_184 = 0x690ec3;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    FUN_0087a1b0();
    iStack_184 = 0;
    iStack_18c = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_190 = (undefined4 *)0x690edb;
    puStack_188 = auStack_17c;
    iStack_18c = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_188;
    puStack_190 = (undefined4 *)0x690ee7;
    FUN_00448a17();
    iStack_18c = unaff_EBP + -0x90;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    puStack_190 = (undefined4 *)0x690efa;
    FUN_0040263d();
    puStack_190 = (undefined4 *)0x690f01;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_188 = (undefined1 *)0x690f0c;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x6c) = uVar2;
    FUN_0087a1b0();
    iStack_184 = 0;
    iStack_18c = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_190 = (undefined4 *)0x690f24;
    puStack_188 = auStack_17c;
    iStack_18c = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_188;
    puStack_190 = (undefined4 *)0x690f30;
    FUN_00448a17();
    iStack_18c = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_190 = (undefined4 *)0x690f40;
    FUN_0040263d();
    puStack_190 = (undefined4 *)0x690f47;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    puStack_188 = (undefined1 *)0x690f52;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    puStack_188 = (undefined1 *)(unaff_EBP + -0x6c);
    *(int **)(unaff_EBP + -0x34) = &iStack_184;
    iStack_18c = 0x690f66;
    FUN_0048bb05();
    iStack_18c = unaff_EBP + -0x14;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_188;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    puStack_190 = (undefined4 *)0x690f79;
    puStack_188 = extraout_ECX_02;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_18c = 0x690f88;
    FUN_0048b99c();
    iStack_18c = 0x690f8f;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_184 = 0x690f9c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_184 = 0x690fa7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_184 = 0x690fb7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_184 = 0x690fc2;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 5);
  iVar3 = *(int *)(extraout_ECX + 0xac);
  *(undefined4 *)(iVar3 + 0x34) = 1;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  iStack_184 = 0x690fe8;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_184 = 0x69100e;
  FUN_0048b9e9();
  iStack_184 = 0xc5;
  puStack_188 = (undefined1 *)0x58;
  iStack_18c = 0xd2;
  puStack_190 = (undefined4 *)0x3;
  (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + 0x34) = 0xb4;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0xbc) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0xbc) + 0x34) = 0x92;
  iStack_1c4 = unaff_EBP + -0x14;
  iStack_1c8 = 0x6910a6;
  puVar4 = (undefined4 *)FUN_007d4a9a();
  iStack_1c4 = 0x6910b5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd8),
             (IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_1c4 = 0x6910c2;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_1c4 = 0x6910ce;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  iStack_1c4 = unaff_EBP + -0x80;
  iStack_1c8 = 0x6910dc;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1c4 = 0x6910e8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_1c4 = 0x6910f5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
  iStack_1c4 = unaff_EBP + -0x90;
  puStack_1d0 = &DAT_00980690;
  iStack_1c8 = 0x691106;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1c4 = 0x691112;
    FUN_00878dfb();
    puStack_1d0 = extraout_ECX_03;
  }
  iStack_1c4 = 0;
  iStack_1c8 = unaff_EBP + -0x80;
  iStack_1cc = unaff_EBP + -0x90;
  *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1d0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  FUN_00679e4e(&puStack_1d0,0x4e9);
  iVar3 = unaff_EBP + -0xd0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  iStack_1c8 = 0x691162;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  iStack_1c4 = 0x691174;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_1c4 = 0x691185;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iStack_1c4 = 0x691195;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1c4 = 0x6911a0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_1c4 = 0x6911b0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1c4 = 0x6911bb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_1c4 = 0x6911c8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1c4 = 0x6911d3;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x30);
  *(undefined4 *)(extraout_ECX + 0xec) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xe8) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xfc) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar1 != (int *)0x0) {
    iStack_1c4 = 0x6911f8;
    (**(code **)(*piVar1 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    iStack_1c4 = 0x691209;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


