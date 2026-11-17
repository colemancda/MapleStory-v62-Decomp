/* ptr_0068dc45 - 0x0068dc45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0068dc45(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
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
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffff0;
  iStack_1c = 0x68dcd3;
  iStack_1c = FUN_00449749();
  uStack_20 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_20;
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
  iStack_1c = unaff_EBP + 8;
  uStack_20 = 0x68dd5a;
  FUN_007d3546();
  FUN_00403191();
  iStack_1c = 0xffffffff;
  uStack_20 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  FUN_00449713();
  FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffd0;
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
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffc0;
  iStack_4c = 0x68de47;
  iStack_4c = FUN_00449749();
  uStack_50 = 0xffffffff;
  FUN_00449713();
  FUN_00456ad5();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_50;
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
    iStack_4c = 0x68dedd;
    FUN_005b1a45();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00403191();
    iStack_4c = 0xffffffff;
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    FUN_00449713();
    FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffa0;
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
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff90;
    iStack_7c = 0x68dfcb;
    iStack_7c = FUN_00449749();
    uStack_80 = 0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_80;
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
    iStack_7c = unaff_EBP + 8;
    uStack_80 = 0x68e050;
    FUN_007d3546();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_7c = 0x68e067;
    iVar1 = FUN_00402e32();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    iStack_7c = 0xffffffff;
    uStack_80 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    uVar2 = FUN_00449713(&stack0xffffff78);
    uVar2 = FUN_00456ad5(uVar2);
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff70;
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
    iStack_4c = 0x68e181;
    iStack_4c = FUN_00449749();
    uStack_50 = 0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_50;
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
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffbc;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    iStack_4c = 0x68e213;
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
    iStack_4c = 0x71;
    uStack_50 = 0x81;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < (int)unaff_EBX) {
      uStack_50 = 0x68e268;
      iStack_4c = iVar1;
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
    iStack_4c = 0x71;
    uStack_50 = 0x81;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar1 = (**(code **)(iVar1 + 0x8c))();
    if (iVar1 < (int)unaff_EBX) {
      uStack_50 = 0x68e2ae;
      iStack_4c = iVar1;
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
    iStack_4c = 0x68e307;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


