/* FUN_00552d7f - 0x00552d7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00552d7f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int iVar2;
  int iStack_24;
  int *piStack_20;
  
  FUN_00879bb8();
  piStack_20 = *(int **)(unaff_EBP + 8);
  iStack_24 = unaff_EBP + 8;
  FUN_00552b90();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    uVar1 = 0;
  }
  else {
    piStack_20 = (int *)0x0;
    *(int **)(unaff_EBP + -0x10) = &iStack_24;
    FUN_00679e4e(&iStack_24,0xe8b);
    iVar2 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar2);
    iStack_24 = FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar1 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_20 = (int *)FUN_00402bc3(unaff_EBP + -0x20);
    if ((int)piStack_20 < 0) {
      iStack_24 = 0x552df6;
      FUN_00878dfb();
    }
    piStack_20 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_20 != (int *)0x0) {
      iStack_24 = 0x552e07;
      (**(code **)(*piStack_20 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


