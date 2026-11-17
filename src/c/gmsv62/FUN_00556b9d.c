/* FUN_00556b9d - 0x00556b9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00556b9d(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  int iVar2;
  int *piStack_24;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_24 = *(int **)(unaff_EBP + 0xc);
  FUN_00552b90(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    *puVar1 = 0;
  }
  else {
    *(int ***)(unaff_EBP + -0x18) = &piStack_24;
    FUN_00679e4e(&piStack_24,0x916);
    iVar2 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d(iVar2);
    piStack_24 = (int *)FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_24 = (int *)FUN_00412348(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004172b7();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    piStack_24 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 8))();
    }
    piStack_24 = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_24 = (int *)FUN_00402bc3();
    if ((int)piStack_24 < 0) {
      FUN_00878dfb();
    }
    piStack_24 = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_24 != (int *)0x0) {
      (**(code **)(*piStack_24 + 8))();
    }
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


