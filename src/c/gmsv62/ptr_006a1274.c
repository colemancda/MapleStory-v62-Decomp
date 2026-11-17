/* ptr_006a1274 - 0x006a1274 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a1274(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  code *unaff_ESI;
  undefined4 uVar3;
  int iStack_10;
  
  *(BADSPACEBASE **)(unaff_EBP + -0x24) = register0x00000010;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    param_2 = 0x6a12a6;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  param_2 = 0x6a12b3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    param_2 = 0x6a12be;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  param_2 = 0x6a12cb;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    param_2 = 0x6a12d6;
    FUN_00878dfb();
  }
  param_2 = 0x6a12dc;
  (*unaff_ESI)();
  param_1 = (int *)(unaff_EBP + -0x38);
  param_2 = FUN_00402e32();
  if (param_2 < 0) {
    param_1 = (int *)0x6a12f2;
    FUN_00878dfb();
  }
  param_2 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  param_1 = (int *)0x6a12fc;
  (*unaff_ESI)();
  param_1 = (int *)FUN_00402e32();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00449749();
  iStack_10 = 0x6a134c;
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0xfffffff8;
  iStack_10 = 0x6a1363;
  FUN_00448a17();
  iStack_10 = 0x2d;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  param_1 = (int *)0x6a1389;
  FUN_00414ebb();
  param_1 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  param_1 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  param_1 = (int *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  param_1 = (int *)FUN_00402bc3();
  if ((int)param_1 < 0) {
    FUN_00878dfb();
  }
  param_1 = (int *)(unaff_EBP + -0x38);
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
  iStack_10 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x44;
  FUN_00449749();
  iStack_10 = 0xf0a;
  FUN_00679d22(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x45;
  iStack_10 = 0x6a1446;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_10;
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
    iStack_10 = 0x6a14d9;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    (*unaff_ESI)();
    iStack_10 = unaff_EBP + -0x48;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_10 = 0x6a1505;
      FUN_00878dfb();
    }
    iStack_10 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a(unaff_EBP + -0x24,6);
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00449749();
    iStack_10 = 0xf0e;
    FUN_00679d22(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    iStack_10 = 0x6a1545;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_10;
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


