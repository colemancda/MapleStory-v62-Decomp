/* ptr_006a0017 - 0x006a0017 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a0017(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_EBP;
  code *unaff_ESI;
  int iStack_10;
  
  while ((*unaff_EBX != 0 && (*(uint *)(unaff_EBP + 8) < *(uint *)(*unaff_EBX + -4)))) {
    (*unaff_ESI)();
    iStack_10 = 0x6a003d;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    (*unaff_ESI)();
    iStack_10 = unaff_EBP + -0x2c;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_10 = 0x6a0069;
      FUN_00878dfb();
    }
    iStack_10 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4a9a(unaff_EBP + -0x18,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00449749();
    iStack_10 = *(int *)(unaff_EBP + 8);
    FUN_004726fc();
    iStack_10 = 0x6a009f;
    uVar2 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_10;
    FUN_00448a17(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = FUN_006a7cca();
    iVar1 = *(int *)(unaff_EBP + -0x14) + iVar1 * -8 + 0x3b;
    uVar2 = 0x57;
    FUN_004115d9(0x57,iVar1);
    FUN_00448e3a(uVar2,iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x11;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


