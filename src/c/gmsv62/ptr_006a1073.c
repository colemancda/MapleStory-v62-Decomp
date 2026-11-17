/* ptr_006a1073 - 0x006a1073 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a1073(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  code *unaff_ESI;
  undefined4 uVar4;
  int iStack_14;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffffc;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x14) + 0x98);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    (*unaff_ESI)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    (*unaff_ESI)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00449749();
    iStack_14 = 0x6a1185;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff4;
    iStack_14 = 0x6a119c;
    FUN_00448a17();
    iStack_14 = 0x34;
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
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    (*unaff_ESI)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    (*unaff_ESI)();
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    iStack_14 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_00449749();
    FUN_00449713();
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffffc;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  (*unaff_ESI)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  (*unaff_ESI)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00449749();
  iStack_14 = 0x6a134c;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff4;
  iStack_14 = 0x6a1363;
  FUN_00448a17();
  iStack_14 = 0x2d;
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
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  (*unaff_ESI)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  (*unaff_ESI)();
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  iStack_14 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00449749();
  iStack_14 = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_14 = 0x6a1446;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_14;
  FUN_00448a17(uVar3);
  uVar4 = 0xca;
  uVar3 = 0x26;
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  FUN_004115d9(0x26,0xca);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa8) < 1) {
    (*unaff_ESI)();
    iStack_14 = 0x6a14d9;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    (*unaff_ESI)();
    iStack_14 = unaff_EBP + -0x48;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_14 = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_14 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a(unaff_EBP + -0x24,6);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00449749();
    iStack_14 = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_14 = 0x6a1545;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_14;
    FUN_00448a17(uVar3);
    uVar4 = 0x9e;
    uVar3 = 0x77;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9(0x77,0x9e);
    FUN_00448e3a(uVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
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


