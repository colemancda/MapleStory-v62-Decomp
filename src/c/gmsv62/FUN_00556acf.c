/* FUN_00556acf - 0x00556acf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00556acf(void)

{
  int unaff_EBP;
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_24 = *(int **)(unaff_EBP + 0xc);
  puStack_28 = (undefined1 *)(unaff_EBP + 0xc);
  FUN_00552b90();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    *puVar1 = 0;
    piStack_24 = (int *)0xffffffff;
    puStack_28 = &DAT_00978474;
    FUN_00414edd();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    piStack_24 = (int *)&DAT_0097812c;
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_28;
    FUN_00679e4e(&puStack_28,0x64b);
    iVar2 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d(iVar2);
    puStack_28 = (undefined1 *)FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_28 = (undefined1 *)FUN_004343c5();
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    *puVar1 = 0;
    piStack_24 = (int *)0xffffffff;
    FUN_00454081();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    piStack_24 = (int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_28 = (undefined1 *)0x556b56;
    piStack_24 = (int *)FUN_00402bc3();
    if ((int)piStack_24 < 0) {
      puStack_28 = (undefined1 *)0x556b61;
      FUN_00878dfb();
    }
  }
  piStack_24 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_24 != (int *)0x0) {
    puStack_28 = (undefined1 *)0x556b8b;
    (**(code **)(*piStack_24 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


