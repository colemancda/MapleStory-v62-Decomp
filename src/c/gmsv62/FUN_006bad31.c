/* FUN_006bad31 - 0x006bad31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bad31(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x598) = 1;
  FUN_006bcc40();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar1 != 0) {
        FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00450382();
      iVar1 = **(int **)(extraout_ECX + 0x5c8);
    }
    else {
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar1 != 0) {
        FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00450382();
      iVar1 = **(int **)(extraout_ECX + 0x5c8);
    }
  }
  else {
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + 0xc) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382();
    iVar1 = **(int **)(extraout_ECX + 0x5c8);
  }
  (**(code **)(iVar1 + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5c8) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 0xc) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5d0) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5d0) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 0xc) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x608) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x608) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 0xc) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x610) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x610) + 4) + 0x24))();
  FUN_0049f842();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uVar2 = FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0xac) = **(undefined4 **)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00414f8b();
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0x19;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 0xc) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar1 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0045e196();
  (**(code **)(**(int **)(extraout_ECX + 0x618) + 8))();
  FUN_004a77eb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar2 = FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x6c) = **(undefined4 **)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x50) = 600;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xf0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00414f8b();
  }
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar1 != 0) {
    FUN_004a8730();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00609bca();
  (**(code **)(**(int **)(extraout_ECX + 0x620) + 8))();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar1 != 0) {
    FUN_004abf25();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0048b9e9();
  (**(code **)(**(int **)(extraout_ECX + 0x638) + 0x20))();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x638) + 0x34) = 300;
  *(int **)(unaff_EBP + 8) = &iStack_190;
  iStack_194 = 0x6bb249;
  FUN_0048bae8();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_194 = 0x6bb258;
  FUN_006bdc01();
  iStack_194 = 0x6bb25f;
  FUN_004aa49d();
  iStack_190 = 0x6bb26b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_190 = unaff_EBP + -0x30;
  iStack_194 = 0x6bb279;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_190 = 0x6bb285;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_190 = 0x6bb28f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_190 = unaff_EBP + -0x40;
  puStack_19c = &DAT_00980690;
  iStack_194 = 0x6bb29d;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_190 = 0x6bb2ab;
    FUN_00878dfb();
    puStack_19c = extraout_ECX_00;
  }
  iStack_190 = 0;
  iStack_194 = unaff_EBP + -0x30;
  iStack_198 = unaff_EBP + -0x40;
  *(undefined4 ***)(unaff_EBP + 0xc) = &puStack_19c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e(&puStack_19c,0xe53);
  iVar1 = unaff_EBP + -0x88;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_194 = 0x6bb2f5;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  iStack_190 = 0x6bb307;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_190 = 0x6bb318;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_190 = 0x6bb328;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_190 = 0x6bb333;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_190 = 0x6bb340;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_190 = 0x6bb34b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_190 = 0x6bb358;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_190 = 0x6bb363;
    FUN_00878dfb();
  }
  iStack_190 = 0x6bb36b;
  FUN_008161f1();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00608bf3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


