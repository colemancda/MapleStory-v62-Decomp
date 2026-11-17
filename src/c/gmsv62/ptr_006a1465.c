/* ptr_006a1465 - 0x006a1465 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a1465(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  code *unaff_ESI;
  
  FUN_00448e3a();
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
    param_2 = 0x6a14d9;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    (*unaff_ESI)();
    param_2 = unaff_EBP + -0x48;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      param_2 = 0x6a1505;
      FUN_00878dfb();
    }
    param_2 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    FUN_00449749();
    param_2 = 0xf0e;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    param_2 = 0x6a1545;
    FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &param_2;
    param_2 = extraout_ECX;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_004115d9();
    FUN_00448e3a();
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


