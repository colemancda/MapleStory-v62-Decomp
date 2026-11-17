/* FUN_006c062c - 0x006c062c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006c062c(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puStack_ec;
  int iStack_e8;
  undefined1 *puStack_e4;
  int iStack_e0;
  undefined1 *puStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined *puStack_c8;
  undefined4 uStack_c4;
  undefined4 *local_c0;
  
  FUN_00879bb8();
  *(undefined4 ***)(unaff_EBP + -0x1c) = &local_c0;
  uStack_c4 = 0xffffffff;
  puStack_c8 = &DAT_0097812c;
  local_c0 = (undefined4 *)0x0;
  iStack_cc = 0x6c0657;
  FUN_004184ca();
  uStack_c4 = *(undefined4 *)(unaff_EBP + 8);
  puStack_c8 = (undefined *)0x6c0661;
  FUN_0078a024();
  local_c0 = &DAT_00980690;
  uStack_c4 = 0x6c066f;
  FUN_00403191();
  local_c0 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_c4 = 0x6c067b;
  FUN_00403191();
  local_c0 = (undefined4 *)0x0;
  uStack_c4 = 0;
  puStack_c8 = (undefined *)(unaff_EBP + -0x58);
  iStack_cc = unaff_EBP + -0x48;
  puStack_d8 = (undefined1 *)&uStack_d0;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_d0;
  iStack_d4 = 0x4e9;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  iStack_d4 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d8 = (undefined1 *)0x6c06ac;
  FUN_00405a1d();
  puStack_d8 = (undefined1 *)0x6c06b3;
  FUN_00402660();
  puStack_d8 = (undefined1 *)0x6c06ba;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_c8 = (undefined *)0x6c06c5;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  local_c0 = (undefined4 *)(unaff_EBP + 8);
  uStack_c4 = 0x6c06d7;
  local_c0 = (undefined4 *)FUN_00404b30();
  if (((int)local_c0 < 0) && (local_c0 != (undefined4 *)0x80004002)) {
    uStack_c4 = 0x6c06e8;
    FUN_00878dfb();
  }
  local_c0 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_c4 = 0x6c06f5;
  local_c0 = (undefined4 *)FUN_00402bc3();
  if ((int)local_c0 < 0) {
    uStack_c4 = 0x6c0700;
    FUN_00878dfb();
  }
  local_c0 = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_c4 = 0x6c070c;
  local_c0 = (undefined4 *)FUN_00402bc3();
  if ((int)local_c0 < 0) {
    uStack_c4 = 0x6c0717;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c0 = (undefined4 *)(unaff_EBP + -0x58);
  uStack_c4 = 0x6c0724;
  local_c0 = (undefined4 *)FUN_00402bc3();
  if ((int)local_c0 < 0) {
    uStack_c4 = 0x6c072f;
    FUN_00878dfb();
  }
  local_c0 = (undefined4 *)0x68;
  uStack_c4 = 0x6c073b;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    local_c0 = (undefined4 *)0x0;
  }
  else {
    local_c0 = (undefined4 *)0x6c0750;
    local_c0 = (undefined4 *)FUN_004b1746();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_c4 = 0x6c0764;
  FUN_0048b9a0();
  local_c0 = (undefined4 *)0x0;
  uStack_c4 = 0xaa;
  puStack_c8 = (undefined *)0x17;
  iStack_cc = 3;
  uStack_d0 = 1;
  iStack_d4 = 2000;
  (**(code **)(**(int **)(extraout_ECX + 0x57c) + 8))();
  iVar2 = *(int *)(extraout_ECX + 0x57c);
  *(undefined4 *)(iVar2 + 0x34) = 1;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  iStack_e0 = 0x6c079b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
  iStack_e0 = unaff_EBP + -0x78;
  puStack_e4 = (undefined1 *)0x6c07a5;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c07b1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 5;
  iStack_e0 = 0x6c07c1;
  FUN_00403191();
  iStack_e0 = 0;
  puStack_e4 = (undefined1 *)(unaff_EBP + -0x78);
  iStack_e8 = unaff_EBP + -0x68;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00679e4e(&puStack_ec,0xa34);
  iVar2 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_e4 = (undefined1 *)0x6c080e;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iStack_e0 = 0x6c0824;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_e0 = 0x6c0835;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e0 = 0x6c0845;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c0850;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_e0 = 0x6c085d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c0868;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_e0 = 0x6c0875;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c0880;
    FUN_00878dfb();
  }
  iStack_e0 = 0x6c088a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_e0 = unaff_EBP + -0x48;
  puStack_e4 = (undefined1 *)0x6c0894;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c08a0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_e0 = 0x6c08ae;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  iStack_e0 = unaff_EBP + -0x58;
  puStack_ec = &DAT_00980690;
  puStack_e4 = (undefined1 *)0x6c08b8;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c08c4;
    FUN_00878dfb();
    puStack_ec = extraout_ECX_00;
  }
  iStack_e0 = 0;
  puStack_e4 = (undefined1 *)(unaff_EBP + -0x48);
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00679e4e(&puStack_ec,0xa35);
  iVar2 = unaff_EBP + -0xac;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_e4 = (undefined1 *)0x6c0911;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    iStack_e0 = 0x6c0927;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_e0 = 0x6c0938;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_e0 = 0x6c0948;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c0953;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_e0 = 0x6c0960;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c096b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e0 = 0x6c0978;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_e0 = 0x6c0983;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    FUN_0087a1b0();
    iStack_e0 = 0;
    iStack_e8 = *(undefined4 *)(unaff_EBP + 8);
    puStack_ec = (undefined4 *)0x6c099b;
    puStack_e4 = (undefined1 *)&puStack_d8;
    iStack_e8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e4;
    puStack_ec = (undefined4 *)0x6c09a7;
    FUN_00448a17();
    iStack_e8 = unaff_EBP + -0xbc;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_ec = (undefined4 *)0x6c09ba;
    FUN_0040263d();
    puStack_ec = (undefined4 *)0x6c09c1;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_e4 = (undefined1 *)0x6c09cc;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
    FUN_0087a1b0();
    iStack_e0 = 0;
    iStack_e8 = *(undefined4 *)(unaff_EBP + 8);
    puStack_ec = (undefined4 *)0x6c09e4;
    puStack_e4 = (undefined1 *)&puStack_d8;
    iStack_e8 = FUN_0048b981();
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_e4;
    puStack_ec = (undefined4 *)0x6c09f0;
    FUN_00448a17();
    iStack_e8 = unaff_EBP + -0x9c;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_ec = (undefined4 *)0x6c0a03;
    FUN_0040263d();
    puStack_ec = (undefined4 *)0x6c0a0a;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_e4 = (undefined1 *)0x6c0a15;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
    puStack_e4 = (undefined1 *)(unaff_EBP + -0x1c);
    *(int **)(unaff_EBP + -0x20) = &iStack_e0;
    iStack_e8 = 0x6c0a2b;
    FUN_0048bb05();
    iStack_e8 = unaff_EBP + -0x10;
    *(undefined1 ***)(unaff_EBP + -0x7c) = &puStack_e4;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_ec = (undefined4 *)0x6c0a3e;
    puStack_e4 = extraout_ECX_01;
    FUN_0048bb05();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_e8 = 0x6c0a4d;
    FUN_0048b99c();
    iStack_e8 = 0x6c0a54;
    FUN_004b22e5();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_e0 = 0x6c0a64;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_e0 = 0x6c0a6f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_e0 = 0x6c0a7f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_e0 = 0x6c0a8a;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  } while (*(int *)(unaff_EBP + 8) < 5);
  iStack_e0 = 0x6c0aa3;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar2 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e0 = 0x6c0ac9;
  FUN_0048b9e9();
  iStack_e0 = 200;
  puStack_e4 = (undefined1 *)0x33;
  iStack_e8 = 0x98;
  puStack_ec = (undefined4 *)0x3;
  (**(code **)(**(int **)(extraout_ECX + 0x584) + 0x20))(extraout_ECX,0x7d1,1);
  *(undefined4 *)(*(int *)(extraout_ECX + 0x584) + 0x34) = 0x8e;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x73c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x58c) + 0x20))
            (extraout_ECX,0x7d2,7,0x10a,0,unaff_EBP + -0x38);
  *(undefined4 *)(extraout_ECX + 0x598) = 1;
  FUN_004b2699(*(undefined4 *)(extraout_ECX + 0x570));
  puVar4 = (undefined4 *)(extraout_ECX + 0x5a0);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_006c1ca4(*(int *)(extraout_ECX + 0x59c),
               *(undefined4 *)(extraout_ECX + 0x5a0 + *(int *)(extraout_ECX + 0x59c) * 4));
  piVar3 = (int *)FUN_006b42c2(0xffffffff);
  *piVar3 = extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00402676();
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


