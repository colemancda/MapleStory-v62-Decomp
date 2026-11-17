/* FUN_00554386 - 0x00554386 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00554386(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iStack_24;
  int *piStack_20;
  
  FUN_00879bb8();
  piStack_20 = *(int **)(unaff_EBP + 8);
  iStack_24 = unaff_EBP + 8;
  FUN_004497f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_20 = (int *)0x0;
    *(int **)(unaff_EBP + -0x10) = &iStack_24;
    FUN_00679e4e(&iStack_24,0xc29);
    iVar1 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar1);
    iStack_24 = FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00412550();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_20 = (int *)FUN_00402bc3(unaff_EBP + -0x20);
    if ((int)piStack_20 < 0) {
      iStack_24 = 0x5543fd;
      FUN_00878dfb();
    }
    if (iVar1 != 0) {
      piStack_20 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_20 != (int *)0x0) {
        iStack_24 = 0x554412;
        (**(code **)(*piStack_20 + 8))();
      }
      uVar2 = 1;
      goto LAB_0055442a;
    }
    piStack_20 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_20 != (int *)0x0) {
      iStack_24 = 0x554428;
      (**(code **)(*piStack_20 + 8))();
    }
  }
  uVar2 = 0;
LAB_0055442a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


