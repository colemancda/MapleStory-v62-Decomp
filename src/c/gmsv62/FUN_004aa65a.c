/* FUN_004aa65a - 0x004aa65a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004aa65a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_4c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = FUN_004aa461();
  iVar4 = *(int *)(extraout_ECX + 0x44);
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar4 + iVar2 * 4);
  iStack_4c = 0x4aa68f;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_4c = 0x4aa69f;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_4c;
  FUN_00448a17(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0044974c();
  uVar3 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  iStack_4c = 0x4aa6ce;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_4c = 0x4aa6d9;
    FUN_00878dfb();
  }
  iVar4 = *(int *)(unaff_EBP + 8);
  if (iVar4 < 0) {
    iStack_4c = 0x4aa6ee;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x4aa704;
      FUN_00878dfb();
    }
    iStack_4c = *(int *)(extraout_ECX + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0045e053(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_4c = 0x4aa72e;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_4c;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0044974c();
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(extraout_ECX + 0x58) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_4c = 0x4aa769;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_4c = 0x4aa774;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x4c) == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 1;
    }
    else {
      iStack_4c = 0x4aa784;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      iStack_4c = unaff_EBP + -0x34;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_4c = 0x4aa79a;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      iVar4 = *(int *)(extraout_ECX + 0x40);
      iStack_4c = iVar4 + *(int *)(extraout_ECX + 0x4c);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      FUN_0045e053(unaff_EBP + -0x14,iVar4);
      *(undefined4 *)(unaff_EBP + -0x10) = 3;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      iStack_4c = 0x4aa7d5;
      uVar3 = FUN_00449713();
      *(int **)(unaff_EBP + 8) = &iStack_4c;
      iStack_4c = extraout_ECX_00;
      FUN_00448a17(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_0044974c();
      uVar3 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + 8) = uVar3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      iStack_4c = 0x4aa82b;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_4c = 0x4aa836;
        FUN_00878dfb();
      }
    }
    iVar2 = *(int *)(extraout_ECX + 0x58);
    iVar4 = iVar2 + *(int *)(unaff_EBP + 8);
  }
  else {
    iStack_4c = 0x4aa84e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_4c = 0x4aa864;
      FUN_00878dfb();
    }
    iStack_4c = iVar4 + *(int *)(extraout_ECX + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 8;
    FUN_0045e053(unaff_EBP + 8,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_4c = 0x4aa88f;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_4c;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0044974c();
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(extraout_ECX + 0x58) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_4c = 0x4aa8ca;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_4c = 0x4aa8d5;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = 1;
    iStack_4c = 0x4aa8e6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x4aa8fc;
      FUN_00878dfb();
    }
    iStack_4c = *(int *)(extraout_ECX + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    FUN_0045e053(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_4c = 0x4aa923;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x10) = &iStack_4c;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0044974c();
    uVar3 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_4c = 0x4aa95e;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_4c = 0x4aa969;
      FUN_00878dfb();
    }
    iStack_4c = 0x4aa973;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_4c = unaff_EBP + -0x44;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x4aa989;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(extraout_ECX + 0x58);
    iStack_4c = *(int *)(extraout_ECX + 0x4c) + *(int *)(extraout_ECX + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    iVar4 = iVar4 + 1;
    FUN_0045e053(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_4c = 0x4aa9b8;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_4c;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0044974c();
    iVar2 = FUN_00448ebb();
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_4c = 0x4aa9f6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_4c = 0x4aaa01;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  iVar1 = *(int *)(extraout_ECX + 100);
  if (*(int *)(extraout_ECX + 0x60) + iVar1 < iVar4) {
    if (iVar4 < *(int *)(unaff_EBP + -0x20)) {
      iVar5 = *(int *)(extraout_ECX + 0x7c) << 2;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(extraout_ECX + 0x60) = (iVar5 - iVar1) + iVar4;
  }
  if (iVar2 < *(int *)(extraout_ECX + 0x60)) {
    iVar2 = iVar2 + *(int *)(extraout_ECX + 0x7c) * -4;
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    *(int *)(extraout_ECX + 0x60) = iVar2;
  }
  iVar4 = *(int *)(extraout_ECX + 0x58);
  if (*(int *)(extraout_ECX + 0x60) + iVar1 < iVar4 + *(int *)(unaff_EBP + 8)) {
    *(int *)(extraout_ECX + 0x60) = (iVar4 - iVar1) + *(int *)(unaff_EBP + 8);
  }
  if (iVar4 < *(int *)(extraout_ECX + 0x60)) {
    *(int *)(extraout_ECX + 0x60) = iVar4;
  }
  iVar4 = *(int *)(unaff_EBP + -0x24);
  iVar2 = iVar4 - *(int *)(extraout_ECX + 0x48);
  if ((iVar2 < 0) || (*(int *)(extraout_ECX + 0x90) <= iVar2)) {
    if (*(int *)(extraout_ECX + 0xb8) == 0) {
      *(undefined4 *)(extraout_ECX + 0xb4) = 1;
    }
  }
  else {
    if (*(int *)(extraout_ECX + 0xb8) == 0) {
      *(undefined4 *)(extraout_ECX + 0xb4) = 0;
    }
    iStack_4c = (iVar4 - *(int *)(extraout_ECX + 0x48)) * *(int *)(extraout_ECX + 0x7c);
    FUN_004a7b61(*(int *)(extraout_ECX + 0x58) - *(int *)(extraout_ECX + 0x60));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


