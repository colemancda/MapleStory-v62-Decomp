/* FUN_0053c187 - 0x0053c187 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0053c187(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined1 *puStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  undefined1 auStack_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  FUN_00879bb8();
  uStack_d0 = 0x68;
  *(undefined4 *)(extraout_ECX + 0x574) = *(undefined4 *)(unaff_EBP + 8);
  uStack_d4 = 0x53c1b1;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uStack_d0 = 0;
  }
  else {
    uStack_d0 = 0x53c1c4;
    uStack_d0 = FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_d4 = 0x53c1d5;
  FUN_0048b9a0();
  uStack_d0 = 0;
  uStack_d4 = 0x9c;
  uStack_d8 = 0x1e;
  uStack_dc = 0x12;
  uStack_e0 = 3;
  uStack_e4 = 1000;
  puStack_ec = (undefined4 *)0x53c1ef;
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 8))();
  iVar1 = *(int *)(extraout_ECX + 0x68);
  puStack_ec = &DAT_00980690;
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  uStack_f0 = 0x53c20b;
  FUN_00403191();
  puStack_ec = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_f0 = 0x53c21e;
  FUN_00403191();
  puStack_ec = (undefined4 *)0x0;
  uStack_f0 = 0;
  puStack_f4 = (undefined1 *)(unaff_EBP + -0x9c);
  iStack_f8 = unaff_EBP + -0x8c;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_f4 = (undefined1 *)0x53c271;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    puStack_ec = (undefined4 *)(unaff_EBP + -0x2c);
    uStack_f0 = 0x53c287;
    puStack_ec = (undefined4 *)FUN_00404b30();
    if (((int)puStack_ec < 0) && (puStack_ec != (undefined4 *)0x80004002)) {
      uStack_f0 = 0x53c298;
      FUN_00878dfb();
    }
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0xac);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_f0 = 0x53c2a8;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x53c2b3;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_f0 = 0x53c2c3;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x53c2ce;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_f0 = 0x53c2de;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x53c2e9;
    FUN_00878dfb();
  }
  puStack_ec = &DAT_00980690;
  uStack_f0 = 0x53c2f6;
  FUN_00403191();
  puStack_ec = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_f0 = 0x53c307;
  FUN_00403191();
  puStack_ec = (undefined4 *)0x0;
  uStack_f0 = 0;
  puStack_f4 = (undefined1 *)(unaff_EBP + -0x7c);
  iStack_f8 = unaff_EBP + -0x6c;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_fc;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_fc = extraout_ECX_00;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_f4 = (undefined1 *)0x53c354;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
    uStack_f0 = 0x53c36a;
    puStack_ec = (undefined4 *)FUN_00404b30();
    if (((int)puStack_ec < 0) && (puStack_ec != (undefined4 *)0x80004002)) {
      uStack_f0 = 0x53c37b;
      FUN_00878dfb();
    }
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_f0 = 0x53c38b;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x53c396;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_f0 = 0x53c3a3;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x53c3ae;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_f0 = 0x53c3bb;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x53c3c6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    puStack_ec = (undefined4 *)0x53c3d1;
    FUN_0087a1b0();
    puStack_ec = (undefined4 *)0x0;
    uStack_f0 = 0;
    iStack_f8 = *(undefined4 *)(unaff_EBP + 8);
    uStack_fc = 0x53c3de;
    puStack_f4 = auStack_e8;
    iStack_f8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_f4;
    uStack_fc = 0x53c3ea;
    FUN_00448a17();
    iStack_f8 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_fc = 0x53c3fa;
    FUN_0040263d();
    uStack_fc = 0x53c401;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_f4 = (undefined1 *)0x53c40c;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
    puStack_ec = (undefined4 *)0x53c417;
    FUN_0087a1b0();
    puStack_ec = (undefined4 *)0x0;
    uStack_f0 = 0;
    iStack_f8 = *(undefined4 *)(unaff_EBP + 8);
    uStack_fc = 0x53c424;
    puStack_f4 = auStack_e8;
    iStack_f8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_f4;
    uStack_fc = 0x53c430;
    FUN_00448a17();
    iStack_f8 = unaff_EBP + -0x4c;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_fc = 0x53c440;
    FUN_0040263d();
    uStack_fc = 0x53c447;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_f4 = (undefined1 *)0x53c452;
    uVar2 = FUN_004032b4();
    puStack_ec = (undefined4 *)0x1;
    *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
    puStack_f4 = (undefined1 *)(unaff_EBP + -0x30);
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_f0;
    iStack_f8 = 0x53c465;
    FUN_0048bb05();
    iStack_f8 = unaff_EBP + -0x38;
    *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_f4;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    uStack_fc = 0x53c478;
    puStack_f4 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_f8 = 0x53c484;
    FUN_0048b99c();
    iStack_f8 = 0x53c48b;
    FUN_004b22e5();
    puStack_ec = (undefined4 *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    uStack_f0 = 0x53c498;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      uStack_f0 = 0x53c4a3;
      FUN_00878dfb();
    }
    puStack_ec = (undefined4 *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_f0 = 0x53c4b0;
    puStack_ec = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_ec < 0) {
      uStack_f0 = 0x53c4bb;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 4);
  puStack_ec = (undefined4 *)0x74;
  uStack_f0 = 0x53c4d4;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar1 == 0) {
    puStack_ec = (undefined4 *)0x0;
  }
  else {
    puStack_ec = (undefined4 *)0x53c4e6;
    puStack_ec = (undefined4 *)FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uStack_f0 = 0x53c4f7;
  FUN_0048b9e9();
  puStack_ec = (undefined4 *)0x0;
  uStack_f0 = 0x66;
  puStack_f4 = (undefined1 *)0x3d;
  iStack_f8 = 0xe4;
  uStack_fc = 0;
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x70) + 0x34) = 0x8c;
  *(undefined4 *)(extraout_ECX + 0x568) = 1;
  FUN_004b2699();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00470891();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  FUN_00470891();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))();
  iStack_140 = unaff_EBP + 8;
  iStack_144 = 0x53c633;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_144 = *puVar3;
  iStack_140 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_148 = 0x53c644;
  FUN_00499493();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00402676();
  iStack_140 = 0x53c65c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iStack_140 = unaff_EBP + -0x4c;
  iStack_144 = 0x53c66a;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_140 = 0x53c676;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_140 = 0x53c680;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iStack_140 = unaff_EBP + -0x5c;
  puStack_14c = &DAT_00980690;
  iStack_144 = 0x53c68e;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_140 = 0x53c69a;
    FUN_00878dfb();
    puStack_14c = extraout_ECX_02;
  }
  iStack_140 = 0;
  iStack_144 = unaff_EBP + -0x4c;
  iStack_148 = unaff_EBP + -0x5c;
  *(undefined4 ***)(unaff_EBP + -0x34) = &puStack_14c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00679e4e(&puStack_14c,0x4e9);
  iVar1 = unaff_EBP + -0xcc;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_144 = 0x53c6e7;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_140 = 0x53c6f9;
  iVar1 = FUN_00404b30();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_140 = 0x53c70a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_140 = 0x53c71a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_140 = 0x53c725;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_140 = 0x53c732;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_140 = 0x53c73d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_140 = 0x53c74a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_140 = 0x53c755;
    FUN_00878dfb();
  }
  *(undefined4 *)(extraout_ECX + 0x570) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_140 = 0x53c779;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_140 = 0x53c78a;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


