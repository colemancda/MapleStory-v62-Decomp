/* ptr_006a008e - 0x006a008e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a008e(void)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_EBP;
  code *unaff_ESI;
  int iStack_4;
  
  while( true ) {
    iStack_4 = *(int *)(unaff_EBP + 8);
    FUN_004726fc();
    iStack_4 = 0x6a009f;
    uVar1 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_4;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_006a7cca();
    iVar2 = *(int *)(unaff_EBP + -0x14) + iVar2 * -8 + 0x3b;
    uVar1 = 0x57;
    FUN_004115d9(0x57,iVar2);
    FUN_00448e3a(uVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x11;
    if ((*unaff_EBX == 0) || (*(uint *)(*unaff_EBX + -4) <= *(uint *)(unaff_EBP + 8))) break;
    (*unaff_ESI)();
    iStack_4 = 0x6a003d;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    (*unaff_ESI)();
    iStack_4 = unaff_EBP + -0x2c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_4 = 0x6a0069;
      FUN_00878dfb();
    }
    iStack_4 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4a9a(unaff_EBP + -0x18,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00449749();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


