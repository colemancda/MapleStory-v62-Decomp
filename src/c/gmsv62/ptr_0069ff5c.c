/* ptr_0069ff5c - 0x0069ff5c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0069ff5c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  FUN_0081622a();
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(extraout_ECX + 0x84);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 == (int *)0x0) {
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar1;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    iStack_64 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_6c = 0x69ffe6;
    iStack_68 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_64 = 0x69fff3;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_64 = 0x69fffe;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((*(int *)(extraout_ECX + 0x88) != 0 &&
         (*(uint *)(unaff_EBP + 8) < *(uint *)(*(int *)(extraout_ECX + 0x88) + -4)))) {
    iStack_64 = 0x6a0033;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_64 = unaff_EBP + -0x3c;
    iStack_68 = 0x6a003d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_64 = 0x6a0049;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_64 = 0x6a0053;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_64 = unaff_EBP + -0x2c;
    iStack_68 = 0x6a005d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_64 = 0x6a0069;
      FUN_00878dfb();
    }
    iStack_64 = unaff_EBP + -0x2c;
    iStack_6c = unaff_EBP + -0x18;
    iStack_68 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_68 = 0x6a008d;
    iStack_68 = FUN_00449749();
    iStack_6c = *(int *)(unaff_EBP + 8);
    FUN_004726fc();
    iStack_6c = 0x6a009f;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_6c;
    iStack_6c = extraout_ECX_00;
    FUN_00448a17(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_006a7cca();
    iVar2 = *(int *)(unaff_EBP + -0x14) + iVar2 * -8 + 0x3b;
    uVar3 = 0x57;
    FUN_004115d9(0x57,iVar2);
    FUN_00448e3a(uVar3,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_64 = 0x6a00e4;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_64 = 0x6a00f1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_64 = 0x6a00fc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_64 = 0x6a0109;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_64 = 0x6a0114;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x11;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_64 = 0x6a0131;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


