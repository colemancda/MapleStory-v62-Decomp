/* ptr_006a284e - 0x006a284e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a284e(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int *unaff_EDI;
  undefined4 uVar5;
  int iStack_c;
  
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x20) = unaff_EDI;
  *(int **)(unaff_EBP + -0x1c) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_c = 0x6a28c7;
  FUN_00434e21();
  iStack_c = 0x6a28de;
  FUN_00434e21();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar2 = FUN_00402e32();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar2 = FUN_00402e32();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  iStack_c = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_00449749();
  iStack_c = 0x6a294f;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_c;
  FUN_00448a17(uVar3);
  uVar5 = 0x2f;
  uVar3 = 0xed;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_004115d9(0xed,0x2f);
  FUN_00448e3a(uVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int **)(unaff_EBP + -0x2c) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iVar2 = FUN_00402e32();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
  iVar2 = FUN_00402e32();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  iStack_c = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_00449749();
  iStack_c = 0x6a2a1e;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_c;
  iStack_c = extraout_ECX;
  FUN_00448a17(uVar3);
  uVar5 = 0x180;
  uVar3 = 99;
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_004115d9(99,0x180);
  FUN_00448e3a(uVar3,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (*(int **)(unaff_EBP + -0x2c) != unaff_EDI) {
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  if (*(int **)(*(int *)(unaff_EBP + -0x14) + 0xa0) != unaff_EDI) {
    FUN_004031b7();
    iVar2 = *(int *)(unaff_EBP + -0x14);
    iVar4 = *(int *)(iVar2 + 0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    *(int *)(unaff_EBP + -0x2c) = iVar4;
    if (iVar4 == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(iVar2 + 0xa0) == 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x18) = piVar1;
    iVar2 = FUN_0040eed0();
    iVar4 = FUN_0040eea9();
    iStack_c = *(int *)(unaff_EBP + -0x5c);
    iVar2 = (**(code **)(*piVar1 + 0x80))
                      (*(undefined4 *)(unaff_EBP + -0x18),0x9c - iVar4,0x11f - iVar2,
                       *(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar2 < 0) {
      iStack_c = 0x6a2b34;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


