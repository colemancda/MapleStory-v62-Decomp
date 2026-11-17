/* FUN_0040eff9 - 0x0040eff9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0040eff9(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *puStack_54;
  int iStack_50;
  undefined4 *puVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_50 = 0x40f01b;
  iVar1 = FUN_0064d61f();
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(unaff_EBP + 8);
    *puVar2 = 0;
  }
  else {
    iStack_50 = 0x40f035;
    FUN_0040f150();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x40f047;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_50 = unaff_EBP + -0x38;
    puStack_54 = (undefined4 *)0x40f056;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_50 = 0x40f062;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_50 = 0x40f06c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_50 = unaff_EBP + -0x28;
    puVar2 = &DAT_00980690;
    puStack_54 = (undefined4 *)0x40f076;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_50 = 0x40f082;
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
    puStack_54 = (undefined4 *)0x40f0c6;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_50 = 0x40f0d5;
    FUN_00417232();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_50 = 0x40f0e9;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_50 = 0x40f0f6;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x40f101;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_50 = 0x40f10e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x40f119;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x40f125;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_50 = 0x40f130;
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


