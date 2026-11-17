/* FUN_0058a16d - 0x0058a16d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058a16d(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 *puVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = DAT_00978134;
  *(int *)(unaff_EBP + -0x40) = DAT_00978134;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  FUN_00414edd();
  *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(iVar2 + 4);
  iVar3 = *(int *)(iVar2 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (((iVar3 != 0) && (*(char **)(iVar2 + 8) != (char *)0x0)) && (**(char **)(iVar2 + 8) != '\0'))
  {
    FUN_00414f8b();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xac) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xb4) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xbc) + 0x20))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0xc4) + 0x20))();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x78) = 2;
  *(undefined4 *)(unaff_EBP + -0x80) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  *(undefined4 *)(unaff_EBP + -100) = 0xffffff;
  *(undefined4 *)(unaff_EBP + -0x84) = 2;
  *(undefined4 *)(unaff_EBP + -0x7c) = 2;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar3 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0045e196();
  FUN_00414f8b();
  piVar1 = *(int **)(extraout_ECX + 0xcc);
  *(undefined4 *)(unaff_EBP + -0x58) = 0xc;
  (**(code **)(*piVar1 + 8))();
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar3 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0045e196();
  FUN_00414f8b();
  piVar1 = *(int **)(extraout_ECX + 0xd4);
  *(undefined4 *)(unaff_EBP + -0x60) = 1;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xc;
  (**(code **)(*piVar1 + 8))();
  iStack_198 = 0x58a6c4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_198 = unaff_EBP + -0x3c;
  iStack_19c = 0x58a6d3;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_198 = 0x58a6df;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_198 = 0x58a6e9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_198 = unaff_EBP + -0x50;
  puStack_1a4 = &DAT_00980690;
  iStack_19c = 0x58a6f3;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_198 = 0x58a6ff;
    FUN_00878dfb();
    puStack_1a4 = extraout_ECX_00;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x3c;
  iStack_1a0 = unaff_EBP + -0x50;
  *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00679e4e(&puStack_1a4,0x546);
  iVar3 = unaff_EBP + -0x98;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_19c = 0x58a74e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_198 = 0x58a760;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x58a771;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_198 = 0x58a781;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x58a78c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_198 = 0x58a799;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x58a7a4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_198 = 0x58a7b1;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x58a7bc;
    FUN_00878dfb();
  }
  iStack_198 = 0x58a7c2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  iStack_198 = unaff_EBP + -0x50;
  iStack_19c = 0x58a7cc;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_198 = 0x58a7d8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_198 = 0x58a7e2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_198 = unaff_EBP + -0x3c;
  puVar5 = &DAT_00980690;
  iStack_19c = 0x58a7ec;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_198 = 0x58a7fa;
    FUN_00878dfb();
    puVar5 = extraout_ECX_01;
  }
  iStack_198 = 0;
  iStack_19c = unaff_EBP + -0x50;
  iStack_1a0 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_1a4;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  puStack_1a4 = puVar5;
  FUN_00679e4e(&puStack_1a4,0x547);
  iVar3 = unaff_EBP + -0x98;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_19c = 0x58a847;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iStack_198 = 0x58a859;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_198 = 0x58a86a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_198 = 0x58a87a;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x58a885;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_198 = 0x58a892;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x58a89d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_198 = 0x58a8aa;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_198 = 0x58a8b5;
    FUN_00878dfb();
  }
  iStack_198 = 0x58a8de;
  FUN_008164fd();
  *(undefined4 *)(extraout_ECX + 0x78) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045c14e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


