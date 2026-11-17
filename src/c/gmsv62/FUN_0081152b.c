/* FUN_0081152b - 0x0081152b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081152b(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 *puStack_130;
  int iStack_12c;
  undefined1 *puStack_128;
  int iStack_124;
  undefined1 auStack_11c [4];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
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
  iStack_d8 = 0x81154e;
  FUN_00403191();
  puStack_d4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_d8 = 0x81155c;
  FUN_00403191();
  puStack_d4 = (undefined4 *)0x0;
  iStack_d8 = 0;
  iStack_dc = unaff_EBP + -0x44;
  iStack_e0 = unaff_EBP + -0x34;
  puStack_ec = (undefined1 *)&uStack_e4;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_e4;
  iStack_e8 = 0x1032;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_f0 = 0x811580;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_ec = (undefined1 *)0x81158d;
  FUN_00405a1d();
  puStack_ec = (undefined1 *)0x811594;
  FUN_00402660();
  puStack_ec = (undefined1 *)0x81159b;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_dc = 0x8115a6;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_d8 = 0x8115b8;
  puStack_d4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_d4 < 0) && (puStack_d4 != (undefined4 *)0x80004002)) {
    iStack_d8 = 0x8115c9;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_d8 = 0x8115d6;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x8115e1;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_d8 = 0x8115ed;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x8115f8;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_d8 = 0x811605;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x811610;
    FUN_00878dfb();
  }
  puStack_d4 = &DAT_00980690;
  iStack_d8 = 0x811619;
  FUN_00403191();
  puStack_d4 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_d8 = 0x811629;
  FUN_00403191();
  puStack_d4 = (undefined4 *)0x0;
  iStack_d8 = 0;
  iStack_dc = unaff_EBP + -0x44;
  iStack_e0 = unaff_EBP + -0x34;
  puStack_ec = (undefined1 *)&uStack_e4;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_e4;
  iStack_e8 = 0x1033;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_f0 = 0x81164d;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x70;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_ec = (undefined1 *)0x81165a;
  FUN_00405a1d();
  puStack_ec = (undefined1 *)0x811661;
  FUN_00402660();
  puStack_ec = (undefined1 *)0x811668;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_dc = 0x811673;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x10);
  iStack_d8 = 0x811685;
  puStack_d4 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_d4 < 0) && (puStack_d4 != (undefined4 *)0x80004002)) {
    iStack_d8 = 0x811696;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_d8 = 0x8116a3;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x8116ae;
    FUN_00878dfb();
  }
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_d8 = 0x8116bb;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x8116c6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x44);
  iStack_d8 = 0x8116d3;
  puStack_d4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d4 < 0) {
    iStack_d8 = 0x8116de;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 1;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  puStack_d4 = (undefined4 *)0x1034;
  iStack_d8 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 8;
  iStack_dc = 0x811708;
  puStack_d4 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_d8 = 0x811715;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_d4 = (undefined4 *)0x811721;
  FUN_00402676();
  puStack_d4 = (undefined4 *)0x578;
  iStack_d8 = 0x811730;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    puStack_d4 = (undefined4 *)0x0;
  }
  else {
    puStack_d4 = (undefined4 *)0x811742;
    puStack_d4 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_d8 = 0x811753;
  FUN_00450382();
  puStack_d4 = (undefined4 *)(unaff_EBP + -0x54);
  iStack_d8 = 0;
  iStack_dc = 0x109;
  iStack_e0 = 0x9a;
  uStack_e4 = 2;
  puStack_ec = (undefined1 *)0x81176d;
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))();
  puStack_ec = (undefined1 *)0x1035;
  iStack_f0 = unaff_EBP + -0x10;
  uStack_f4 = 0x811780;
  puStack_ec = (undefined1 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_f0 = 0x81178d;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_ec = (undefined1 *)0x811799;
  FUN_00402676();
  puStack_ec = (undefined1 *)0x578;
  iStack_f0 = 0x8117a8;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    puStack_ec = (undefined1 *)0x0;
  }
  else {
    puStack_ec = (undefined1 *)0x8117ba;
    puStack_ec = (undefined1 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_f0 = 0x8117ce;
  FUN_00450382();
  puStack_ec = (undefined1 *)(unaff_EBP + -0x54);
  iStack_f0 = 0;
  uStack_f4 = 0x109;
  uStack_f8 = 0x180;
  uStack_fc = 2000;
  uStack_104 = 0x8117ee;
  (**(code **)(**(int **)(extraout_ECX + 0x5c4) + 0x20))();
  uStack_104 = 0x68;
  uStack_108 = 0x8117fa;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar3 == 0) {
    uStack_104 = 0;
  }
  else {
    uStack_104 = 0x81180c;
    uStack_104 = FUN_004b1746();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_108 = 0x811820;
  FUN_0048b9a0();
  uStack_104 = 0;
  uStack_108 = 0xde;
  uStack_10c = 0x41;
  uStack_110 = 0xeb;
  uStack_114 = 2;
  uStack_118 = 1000;
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 8))();
  iStack_124 = 0x81184d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xa0));
  iStack_124 = unaff_EBP + -0xa0;
  puStack_128 = (undefined1 *)0x81185a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_124 = 0x811866;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_124 = 0x811873;
  FUN_00403191();
  iStack_124 = 0;
  puStack_128 = (undefined1 *)(unaff_EBP + -0xa0);
  iStack_12c = unaff_EBP + -0x70;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_130;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_128 = (undefined1 *)0x8118c3;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x60) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar3 != 0) {
    iStack_124 = 0x8118d9;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_124 = 0x8118ea;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_124 = 0x8118fa;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_124 = 0x811905;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_124 = 0x811912;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_124 = 0x81191d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_124 = 0x81192d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_124 = 0x811938;
    FUN_00878dfb();
  }
  iStack_124 = 0x811942;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_124 = unaff_EBP + -0x34;
  puStack_128 = (undefined1 *)0x81194c;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_124 = 0x811958;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_124 = 0x811966;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_124 = unaff_EBP + -0x44;
  puStack_130 = &DAT_00980690;
  puStack_128 = (undefined1 *)0x811970;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_124 = 0x81197c;
    FUN_00878dfb();
    puStack_130 = extraout_ECX_00;
  }
  iStack_124 = 0;
  puStack_128 = (undefined1 *)(unaff_EBP + -0x34);
  iStack_12c = unaff_EBP + -0x44;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_130;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_128 = (undefined1 *)0x8119c9;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x58) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar3 != 0) {
    iStack_124 = 0x8119df;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_124 = 0x8119f0;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_124 = 0x811a00;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_124 = 0x811a0b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_124 = 0x811a18;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_124 = 0x811a23;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_124 = 0x811a30;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_124 = 0x811a3b;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    FUN_0087a1b0();
    iStack_124 = 0;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_130 = (undefined4 *)0x811a53;
    puStack_128 = auStack_11c;
    iStack_12c = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_128;
    puStack_130 = (undefined4 *)0x811a5f;
    FUN_00448a17();
    iStack_12c = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    puStack_130 = (undefined4 *)0x811a6f;
    FUN_0040263d();
    puStack_130 = (undefined4 *)0x811a76;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_128 = (undefined1 *)0x811a81;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x5c) = uVar2;
    FUN_0087a1b0();
    iStack_124 = 0;
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_130 = (undefined4 *)0x811a99;
    puStack_128 = auStack_11c;
    iStack_12c = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_128;
    puStack_130 = (undefined4 *)0x811aa5;
    FUN_00448a17();
    iStack_12c = unaff_EBP + -0x90;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_130 = (undefined4 *)0x811ab8;
    FUN_0040263d();
    puStack_130 = (undefined4 *)0x811abf;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_128 = (undefined1 *)0x811aca;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    puStack_128 = (undefined1 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x24) = &iStack_124;
    iStack_12c = 0x811ade;
    FUN_0048bb05();
    iStack_12c = unaff_EBP + -0x14;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_128;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    puStack_130 = (undefined4 *)0x811af1;
    puStack_128 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_12c = 0x811b00;
    FUN_0048b99c();
    iStack_12c = 0x811b07;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_124 = 0x811b17;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_124 = 0x811b22;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_124 = 0x811b2f;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_124 = 0x811b3a;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 5);
  iVar3 = *(int *)(extraout_ECX + 0x8c);
  *(undefined4 *)(iVar3 + 0x34) = 1;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  iStack_124 = 0x811b63;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_124 = 0x811b89;
  FUN_0048b9e9();
  iStack_124 = 0xc3;
  puStack_128 = (undefined1 *)0x3c;
  iStack_12c = 0xd2;
  puStack_130 = (undefined4 *)0x3;
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x94) + 0x34) = 0xb4;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (iVar3 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x9c) + 0x34) = 0x8c;
  iStack_164 = unaff_EBP + -0x14;
  iStack_168 = 0x811c24;
  puVar4 = (undefined4 *)FUN_007d4a9a();
  iStack_164 = 0x811c33;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xb4),
             (IBinding *)*puVar4);
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_164 = 0x811c40;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  iStack_164 = 0x811c4d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
  iStack_164 = unaff_EBP + -0x90;
  iStack_168 = 0x811c5a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_164 = 0x811c66;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_164 = 0x811c74;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
  iStack_164 = unaff_EBP + -0x80;
  puStack_170 = &DAT_00980690;
  iStack_168 = 0x811c7e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_164 = 0x811c8a;
    FUN_00878dfb();
    puStack_170 = extraout_ECX_02;
  }
  iStack_164 = 0;
  iStack_168 = unaff_EBP + -0x90;
  iStack_16c = unaff_EBP + -0x80;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_170;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00679e4e(&puStack_170,0x4e9);
  iVar3 = unaff_EBP + -0xd0;
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_168 = 0x811cda;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  iStack_164 = 0x811cec;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_164 = 0x811cfd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_164 = 0x811d0d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_164 = 0x811d18;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_164 = 0x811d25;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_164 = 0x811d30;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_164 = 0x811d40;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_164 = 0x811d4b;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined4 *)(extraout_ECX + 200) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xc4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0xd4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar1 != (int *)0x0) {
    iStack_164 = 0x811d70;
    (**(code **)(*piVar1 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_164 = 0x811d81;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


