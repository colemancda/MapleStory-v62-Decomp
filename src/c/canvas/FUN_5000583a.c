/* FUN_5000583a - 0x5000583a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000583a(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  uVar2 = (*DAT_50081bfc)();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined4 **)(unaff_EBP + -0x1c) = (undefined4 *)(extraout_ECX + 4);
  FUN_500024f7();
  piVar3 = *(int **)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + *(int *)(extraout_ECX + 0x14);
    for (; piVar3 < piVar1; piVar3 = piVar3 + 1) {
      if (*piVar3 != 0) {
        iVar4 = *piVar3;
        goto LAB_5000588a;
      }
    }
  }
  iVar4 = 0;
LAB_5000588a:
  *(int *)(unaff_EBP + -0x10) = iVar4;
  while (iVar4 != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_50005f35((void *)(extraout_ECX + 0xc),(int *)(unaff_EBP + -0x10),unaff_EBP + -0x24);
    if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x24) == 0) &&
       ((*(int *)(unaff_EBP + 8) != 0 ||
        (60000 < *(int *)(unaff_EBP + -0x14) - *(int *)(*(int *)(unaff_EBP + -0x20) + 0x28))))) {
      FUN_50005eb8((void *)(extraout_ECX + 0xc),(int *)(*(int *)(unaff_EBP + -0x18) + 8));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_50003649(unaff_EBP + -0x24);
    iVar4 = *(int *)(unaff_EBP + -0x10);
  }
  piVar3 = (int *)(extraout_ECX + 8);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


