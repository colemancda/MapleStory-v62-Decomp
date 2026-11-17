/* FUN_0084c94e - 0x0084c94e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0084c94e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = FUN_00455c59(unaff_EBP + -0x24);
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  iVar3 = *(int *)(unaff_EBP + 8) / 1000000;
  iVar4 = *(int *)(iVar2 + 0x3e3 + iVar3 * 4);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + -4);
  }
  *(int *)(unaff_EBP + -0x1c) = iVar4 + -1;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  if (0 < iVar4 + -1) {
    do {
      iVar4 = FUN_00458c4f(unaff_EBP + -0x2c,iVar3,*(undefined4 *)(unaff_EBP + -0x14));
      piVar1 = *(int **)(iVar4 + 4);
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      if ((piVar1 != (int *)0x0) && (iVar4 = FUN_0045e2eb(), iVar4 == *(int *)(unaff_EBP + 8))) {
        iVar4 = (**(code **)(*piVar1 + 0x18))();
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar4;
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + -0x1c));
  }
  iVar4 = FUN_0054e7b3(*(undefined4 *)(unaff_EBP + 8));
  if (iVar4 != 0) {
    FUN_0044da62(*(undefined4 *)(unaff_EBP + 8),*(undefined1 *)(iVar2 + 0x11),unaff_EBP + -0x1c,0);
    FUN_00458c4f(unaff_EBP + -0x18,1,-*(int *)(unaff_EBP + -0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(int *)(unaff_EBP + -0x14) != 0) &&
       (iVar2 = FUN_0045e2eb(), *(int *)(unaff_EBP + 8) == iVar2)) {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00449913(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}


