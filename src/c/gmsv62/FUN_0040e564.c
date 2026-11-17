/* FUN_0040e564 - 0x0040e564 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0040e564(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *puStack_54;
  int iStack_50;
  undefined4 *puVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_50 = 0x40e586;
  iVar1 = FUN_0064d61f();
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
  }
  else {
    iStack_50 = 0x40e5a0;
    FUN_0040e6bb();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x40e5b2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_50 = unaff_EBP + -0x38;
    puStack_54 = (undefined4 *)0x40e5c1;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_50 = 0x40e5cd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_50 = 0x40e5d7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_50 = unaff_EBP + -0x28;
    puVar2 = &DAT_00980690;
    puStack_54 = (undefined4 *)0x40e5e1;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_50 = 0x40e5ed;
      FUN_00878dfb();
      puVar2 = extraout_ECX;
    }
    iStack_50 = unaff_EBP + -0x28;
    *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_54;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_54 = puVar2;
    FUN_004059fd(unaff_EBP + 0xc);
    iVar1 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    iStack_50 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_54 = (undefined4 *)0x40e631;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_50 = 0x40e640;
    FUN_00417232();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_50 = 0x40e654;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_50 = 0x40e661;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x40e66c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_50 = 0x40e679;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x40e684;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x40e690;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x40e69b;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_004030b1();
    }
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


