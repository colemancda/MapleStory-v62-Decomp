/* FUN_51403af6 - 0x51403af6 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51403af6(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  int *piVar5;
  
  FUN_5140ad20();
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + 8) = iVar3 + 8;
  FUN_5140126a();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  (*DAT_51411794)(iVar3 + 0x24,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
  piVar5 = *(int **)(iVar3 + 0x1c);
  while (piVar5 != (int *)0x0) {
    piVar4 = (int *)(-(uint)(piVar5[-3] != 0) & piVar5[-3] + 0x10U);
    if (*piVar5 == 0) {
      FUN_5140ac47(0x80004003);
    }
    piVar1 = (int *)*piVar5;
    iVar3 = (**(code **)(*piVar1 + 0x44))
                      (piVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    piVar5 = piVar4;
    if (iVar3 < 0) {
      FUN_5140ac55(iVar3,piVar1,&DAT_514101b0);
    }
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  piVar5 = puVar2 + 1;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    *puVar2 = 0;
  }
  FUN_51403b99();
  return;
}


