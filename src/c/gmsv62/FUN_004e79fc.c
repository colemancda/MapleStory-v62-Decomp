/* FUN_004e79fc - 0x004e79fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e79fc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar5;
  int extraout_ECX_02;
  undefined1 *puVar6;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int unaff_EBP;
  float10 fVar7;
  undefined1 *local_d8;
  int local_d4;
  
  FUN_00879bb8();
  _local_d4 = 0.0;
  *(undefined1 ***)(unaff_EBP + -0x2c) = &local_d8;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  FUN_00679e4e(&local_d8,0x3b4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = unaff_EBP + -0xac;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  local_d8 = (undefined1 *)0x4e7a58;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 != 0) {
    _local_d4 = (double)CONCAT44(unaff_EBP + -0x3c,0x4e7a6e);
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      _local_d4 = (double)CONCAT44(iVar2,0x4e7a7f);
      FUN_00878dfb();
    }
  }
  puVar6 = (undefined1 *)(unaff_EBP + -0xac);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_d4 = 0x4e7a8f;
  iVar2 = FUN_00402bc3();
  puVar5 = puVar6;
  if (iVar2 < 0) {
    _local_d4 = (double)CONCAT44(iVar2,0x4e7a9a);
    FUN_00878dfb();
    puVar5 = extraout_ECX_00;
  }
  _local_d4 = 1.0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &local_d8;
  local_d8 = puVar5;
  FUN_00679e4e(&local_d8,0x667);
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar2);
  local_d8 = (undefined1 *)FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  fVar7 = (float10)FUN_00434352();
  _local_d4 = (double)fVar7;
  local_d8 = (undefined1 *)0x4e7aea;
  uVar3 = FUN_004f1a11();
  *(undefined4 *)(extraout_ECX + 0x1a8) = uVar3;
  puVar6 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_d4 = 0x4e7afd;
  iVar2 = FUN_00402bc3();
  puVar5 = puVar6;
  if (iVar2 < 0) {
    _local_d4 = (double)CONCAT44(iVar2,0x4e7b08);
    FUN_00878dfb();
    puVar5 = extraout_ECX_01;
  }
  _local_d4 = 1.0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &local_d8;
  local_d8 = puVar5;
  FUN_00679e4e(&local_d8,0x45f);
  iVar2 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar2);
  local_d8 = (undefined1 *)FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  fVar7 = (float10)FUN_00434352();
  *(double *)(extraout_ECX + 0x110) = (double)fVar7;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    _local_d4 = (double)CONCAT44(iVar2,0x4e7b63);
    FUN_00878dfb();
  }
  _local_d4 = 0.0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &local_d8;
  FUN_00448a17(s_swimArea_00964eb4);
  iVar2 = unaff_EBP + -0xbc;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_d8 = (undefined1 *)0x4e7b9a;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    _local_d4 = (double)CONCAT44(unaff_EBP + -0x38,0x4e7bb0);
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      _local_d4 = (double)CONCAT44(iVar2,0x4e7bc1);
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  _local_d4 = (double)CONCAT44(unaff_EBP + -0xbc,0x4e7bd1);
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    _local_d4 = (double)CONCAT44(iVar2,0x4e7bdc);
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    _local_d4 = (double)CONCAT44(unaff_EBP + -0x2c,0x4e7bf0);
    uVar3 = FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    _local_d4 = (double)CONCAT44(uVar3,0x4e7bfd);
    FUN_004035f5();
    piVar1 = *(int **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piVar1 != (int *)0x0) {
      _local_d4 = (double)CONCAT44(piVar1,0x4e7c0e);
      (**(code **)(*piVar1 + 8))();
    }
    _local_d4 = (double)CONCAT44((VARIANTARG *)(unaff_EBP + -0x6c),0x4e7c18);
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        _local_d4 = -3.47731475678264e-310;
        FUN_00878dfb();
      }
      _local_d4 = (double)CONCAT44(unaff_EBP + -0x34,unaff_EBP + -0x6c);
      local_d8 = (undefined1 *)0x1;
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0xc))(*(int **)(unaff_EBP + -0x24));
      if (iVar2 != 0) break;
      puVar6 = (undefined1 *)(unaff_EBP + -0x6c);
      local_d4 = unaff_EBP + -0x28;
      local_d8 = (undefined1 *)0x4e7c5d;
      FUN_00405a23();
      local_d8 = puVar6;
      _local_d4 = 0.0;
      *(undefined1 ***)(unaff_EBP + -0x18) = &local_d8;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004059fd(unaff_EBP + -0x28);
      iVar2 = unaff_EBP + -0xcc;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      local_d8 = (undefined1 *)0x4e7c99;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar2 != 0) {
        _local_d4 = (double)CONCAT44(unaff_EBP + -0x14,0x4e7caf);
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          _local_d4 = (double)CONCAT44(iVar2,0x4e7cc0);
          FUN_00878dfb();
        }
      }
      puVar6 = (undefined1 *)(unaff_EBP + -0xcc);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      local_d4 = 0x4e7cd0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_d4 = (double)CONCAT44(iVar2,0x4e7cdb);
        FUN_00878dfb();
        puVar6 = (undefined1 *)extraout_ECX_02;
      }
      local_d8 = &stack0xffffff30;
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff30;
      local_d4 = 0x8f3;
      FUN_00679e4e();
      _local_d4 = (double)CONCAT44(puVar6,unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      local_d8 = (undefined1 *)0x4e7cfe;
      FUN_0040263d();
      local_d8 = (undefined1 *)0x4e7d05;
      FUN_004048a4();
      local_d8 = &stack0xffffff30;
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff30;
      local_d4 = 0x8f5;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puVar6 = (undefined1 *)extraout_ECX_03;
      FUN_00679e4e();
      _local_d4 = (double)CONCAT44(puVar6,unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      local_d8 = (undefined1 *)0x4e7d2f;
      FUN_0040263d();
      local_d8 = (undefined1 *)0x4e7d36;
      FUN_004048a4();
      local_d8 = &stack0xffffff30;
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff30;
      local_d4 = 0x8f4;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puVar6 = (undefined1 *)extraout_ECX_04;
      FUN_00679e4e();
      _local_d4 = (double)CONCAT44(puVar6,unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      local_d8 = (undefined1 *)0x4e7d60;
      FUN_0040263d();
      local_d8 = (undefined1 *)0x4e7d67;
      FUN_004048a4();
      local_d8 = &stack0xffffff30;
      *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff30;
      local_d4 = 0x8f6;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puVar6 = (undefined1 *)extraout_ECX_05;
      FUN_00679e4e();
      _local_d4 = (double)CONCAT44(puVar6,unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      local_d8 = (undefined1 *)0x4e7d8e;
      FUN_0040263d();
      local_d8 = (undefined1 *)0x4e7d95;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      _local_d4 = (double)CONCAT44(0x4e7da1,local_d4);
      uVar3 = FUN_00403213();
      *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
      _local_d4 = (double)CONCAT44(0x4e7daf,local_d4);
      uVar3 = FUN_00403213();
      *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
      _local_d4 = (double)CONCAT44(0x4e7dbd,local_d4);
      uVar3 = FUN_00403213();
      *(undefined4 *)(unaff_EBP + -0x54) = uVar3;
      _local_d4 = (double)CONCAT44(0x4e7dc8,local_d4);
      uVar3 = FUN_00403213();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar3;
      _local_d4 = -NAN;
      puVar4 = (undefined4 *)FUN_004f1aaa();
      *puVar4 = *(undefined4 *)(unaff_EBP + -0x5c);
      puVar4[1] = *(undefined4 *)(unaff_EBP + -0x58);
      puVar4[2] = *(undefined4 *)(unaff_EBP + -0x54);
      puVar4[3] = *(undefined4 *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      _local_d4 = (double)CONCAT44(unaff_EBP + -0x7c,0x4e7dee);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_d4 = (double)CONCAT44(iVar2,0x4e7df9);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      _local_d4 = (double)CONCAT44(unaff_EBP + -0x9c,0x4e7e09);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_d4 = (double)CONCAT44(iVar2,0x4e7e14);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      _local_d4 = (double)CONCAT44(unaff_EBP + -0x8c,0x4e7e24);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_d4 = (double)CONCAT44(iVar2,0x4e7e2f);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      _local_d4 = (double)CONCAT44(unaff_EBP + -0x4c,0x4e7e3c);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_d4 = (double)CONCAT44(iVar2,0x4e7e47);
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (piVar1 != (int *)0x0) {
        _local_d4 = (double)CONCAT44(piVar1,0x4e7e58);
        (**(code **)(*piVar1 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        _local_d4 = (double)CONCAT44(0x4e7e68,local_d4);
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      _local_d4 = (double)CONCAT44(unaff_EBP + -0x6c,0x4e7e75);
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        _local_d4 = (double)CONCAT44(iVar2,0x4e7e84);
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    _local_d4 = (double)CONCAT44(unaff_EBP + -0x6c,0x4e7e96);
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      _local_d4 = (double)CONCAT44(iVar2,0x4e7ea1);
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (piVar1 != (int *)0x0) {
      _local_d4 = (double)CONCAT44(piVar1,0x4e7eb2);
      (**(code **)(*piVar1 + 8))();
    }
  }
  _local_d4 = (double)CONCAT44(0x4e7ebd,local_d4);
  FUN_0086192b();
  piVar1 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    _local_d4 = (double)CONCAT44(piVar1,0x4e7ece);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    _local_d4 = (double)CONCAT44(piVar1,0x4e7edf);
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


