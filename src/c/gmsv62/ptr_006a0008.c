/* ptr_006a0008 - 0x006a0008 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a0008(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  code *unaff_ESI;
  int iStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  int *piStack_4;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((*(int *)(unaff_EBX + 0x88) != 0 &&
         (*(uint *)(unaff_EBP + 8) < *(uint *)(*(int *)(unaff_EBX + 0x88) + -4)))) {
    piStack_4 = (int *)(unaff_EBP + -0x3c);
    puStack_8 = (undefined4 *)0x6a0033;
    (*unaff_ESI)();
    puStack_c = (undefined4 *)(unaff_EBP + -0x3c);
    puStack_8 = &DAT_00980690;
    iStack_10 = 0x6a003d;
    puStack_8 = (undefined4 *)FUN_00402e32();
    if ((int)puStack_8 < 0) {
      puStack_c = (undefined4 *)0x6a0049;
      FUN_00878dfb();
    }
    puStack_8 = (undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_c = (undefined4 *)0x6a0053;
    (*unaff_ESI)();
    iStack_10 = unaff_EBP + -0x2c;
    puStack_c = &DAT_00980690;
    puStack_c = (undefined4 *)FUN_00402e32();
    if ((int)puStack_c < 0) {
      iStack_10 = 0x6a0069;
      FUN_00878dfb();
    }
    puStack_c = (undefined4 *)(unaff_EBP + -0x3c);
    iStack_10 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_007d4a9a(unaff_EBP + -0x18,0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_c = (undefined4 *)0x6a008d;
    puStack_c = (undefined4 *)FUN_00449749();
    iStack_10 = *(int *)(unaff_EBP + 8);
    FUN_004726fc();
    iStack_10 = 0x6a009f;
    uVar1 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_10;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_006a7cca();
    iVar2 = *(int *)(unaff_EBP + -0x14) + iVar2 * -8 + 0x3b;
    uVar1 = 0x57;
    FUN_004115d9(0x57,iVar2);
    FUN_00448e3a(uVar1,iVar2);
    piStack_4 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_4 != (int *)0x0) {
      puStack_8 = (undefined4 *)0x6a00e4;
      (**(code **)(*piStack_4 + 8))();
    }
    piStack_4 = (int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_8 = (undefined4 *)0x6a00f1;
    piStack_4 = (int *)FUN_00402bc3();
    if ((int)piStack_4 < 0) {
      puStack_8 = (undefined4 *)0x6a00fc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_4 = (int *)(unaff_EBP + -0x3c);
    puStack_8 = (undefined4 *)0x6a0109;
    piStack_4 = (int *)FUN_00402bc3();
    if ((int)piStack_4 < 0) {
      puStack_8 = (undefined4 *)0x6a0114;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x11;
  }
  piStack_4 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_4 != (int *)0x0) {
    puStack_8 = (undefined4 *)0x6a0131;
    (**(code **)(*piStack_4 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


