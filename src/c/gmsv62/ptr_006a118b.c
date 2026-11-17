/* ptr_006a118b - 0x006a118b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a118b(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  code *unaff_ESI;
  undefined4 uVar3;
  int iStack_1c;
  
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffffc;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  (*unaff_ESI)();
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  (*unaff_ESI)();
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff4;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  (*unaff_ESI)();
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  (*unaff_ESI)();
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00449749();
  iStack_1c = 0x6a134c;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffec;
  iStack_1c = 0x6a1363;
  FUN_00448a17();
  iStack_1c = 0x2d;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  (*unaff_ESI)();
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  (*unaff_ESI)();
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  iStack_1c = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00449749();
  iStack_1c = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_1c = 0x6a1446;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_1c;
  FUN_00448a17(uVar2);
  uVar3 = 0xca;
  uVar2 = 0x26;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_004115d9(0x26,0xca);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) < 1) {
    (*unaff_ESI)();
    iStack_1c = 0x6a14d9;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    (*unaff_ESI)();
    iStack_1c = unaff_EBP + -0x48;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_1c = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_1c = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a(unaff_EBP + -0x24,6);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00449749();
    iStack_1c = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_1c = 0x6a1545;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_1c;
    FUN_00448a17(uVar2);
    uVar3 = 0x9e;
    uVar2 = 0x77;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9(0x77,0x9e);
    FUN_00448e3a(uVar2,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


