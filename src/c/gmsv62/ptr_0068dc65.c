/* ptr_0068dc65 - 0x0068dc65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0068dc65(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00878dfb();
  if (*(int **)(unaff_EDI + 0x1a0) == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004a2734();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffec;
  iStack_20 = 0x68dcd3;
  iStack_20 = FUN_00449749();
  uStack_24 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_24;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iStack_20 = unaff_EBP + 8;
  uStack_24 = 0x68dd5a;
  FUN_007d3546();
  FUN_00403191();
  iStack_20 = 0xffffffff;
  uStack_24 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffcc;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0044974c();
  iVar1 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EDI + 0x1a4) == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004a2734();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffbc;
  iStack_50 = 0x68de47;
  iStack_50 = FUN_00449749();
  uStack_54 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_54;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (1 < *(int *)(unaff_EDI + 200)) {
    iStack_50 = 0x68dedd;
    FUN_005b1a45();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00403191();
    iStack_50 = 0xffffffff;
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    FUN_00449713();
    FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff9c;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0044974c();
    iVar1 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(int **)(unaff_EDI + 0x1a0) == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004a2734();
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff8c;
    iStack_80 = 0x68dfcb;
    iStack_80 = FUN_00449749();
    uStack_84 = 0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_84;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    iStack_80 = unaff_EBP + 8;
    uStack_84 = 0x68e050;
    FUN_007d3546();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_80 = 0x68e067;
    iVar1 = FUN_00402e32();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    iStack_80 = 0xffffffff;
    uStack_84 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    uVar2 = FUN_00449713(&stack0xffffff74);
    uVar2 = FUN_00456ad5(uVar2);
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff6c;
    FUN_004033a1(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0044974c();
    iVar1 = FUN_00448ebb();
    *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(int **)(unaff_EDI + 0x1a4) == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004a2734();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iVar1 = FUN_00402e32();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iVar1 = FUN_00402e32();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_50 = 0x68e181;
    iStack_50 = FUN_00449749();
    uStack_54 = 0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_54;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
  }
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffb8;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    iStack_50 = 0x68e213;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
  }
  FUN_0068e31b();
  if (*(int **)(unaff_EDI + 0x1ac) != unaff_EBX) {
    piVar3 = *(int **)(unaff_EBP + -0x10);
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar3;
    iStack_50 = 0x71;
    uStack_54 = 0x81;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < (int)unaff_EBX) {
      uStack_54 = 0x68e268;
      iStack_50 = iVar1;
      FUN_00878e09();
    }
  }
  if (*(int **)(unaff_EDI + 0x1b0) != unaff_EBX) {
    piVar3 = *(int **)(unaff_EBP + -0x10);
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar3;
    iStack_50 = 0x71;
    uStack_54 = 0x81;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < (int)unaff_EBX) {
      uStack_54 = 0x68e2ae;
      iStack_50 = iVar1;
      FUN_00878e09();
    }
  }
  if ((*(int *)(unaff_EDI + 200) < 2) || (*(int **)(unaff_EDI + 0x1ac) != unaff_EBX)) {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x184) + 4);
  }
  else {
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x184) + 4);
  }
  (**(code **)(iVar1 + 0x1c))();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    iStack_50 = 0x68e307;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


