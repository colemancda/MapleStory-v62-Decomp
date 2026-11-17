/* FUN_0074d755 - 0x0074d755 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074d755(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  piVar1 = *(int **)(extraout_ECX + 0x440);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  if (piVar1 != (int *)0x0) {
    iStack_44 = 0x74d77d;
    (**(code **)(*piVar1 + 4))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_44 = 0x74d78c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_44 = unaff_EBP + -0x2c;
  iStack_48 = 0x74d79b;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_44 = 0x74d7a7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x74d7b5;
  FUN_0044974c();
  iStack_44 = 0x74d7bc;
  iStack_44 = FUN_004a2734();
  iStack_44 = iStack_44 + 6;
  iStack_48 = unaff_EBP + -0x2c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0044974c();
  iStack_48 = FUN_00448ebb();
  iStack_48 = iStack_48 + 8;
  uStack_4c = 1;
  FUN_0074d72a();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_44 = 0x74d7ff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x74d80a;
    FUN_00878dfb();
  }
  iStack_44 = 0;
  iStack_48 = 0;
  uStack_4c = *(undefined4 *)(unaff_EBP + 0xc);
  FUN_0075699b(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_44 = 0x74d829;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_44 = unaff_EBP + -0x3c;
  iStack_48 = 0x74d833;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_44 = 0x74d83f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_44 = 0x74d849;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_44 = unaff_EBP + -0x2c;
  iStack_48 = 0x74d853;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_44 = 0x74d85f;
    FUN_00878dfb();
  }
  iStack_44 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_48 = 0x74d873;
  iStack_48 = FUN_00449749();
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_4c;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 0x10));
  uVar4 = 1;
  uVar3 = 4;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004115d9(4,1);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_44 = 0x74d8a6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x74d8b1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_44 = 0x74d8be;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_44 = 0x74d8c9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_44 = 0x74d8d9;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_44 = 0x74d8ea;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


