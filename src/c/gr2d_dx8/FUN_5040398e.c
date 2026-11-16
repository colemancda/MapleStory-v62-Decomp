/* FUN_5040398e - 0x5040398e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040398e(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 **)(unaff_EBP + -0x14) = (undefined4 *)(extraout_ECX + 4);
  FUN_50401895();
  puVar3 = *(undefined4 **)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
LAB_504039f1:
    puVar3 = (undefined4 *)FUN_50405151((void *)(extraout_ECX + 0xc));
  }
  else {
    while (iVar2 = FUN_50403a3e(piVar1,(int *)*puVar3), iVar2 < 0) {
      iVar2 = *(int *)((-(uint)(*(int *)(unaff_EBP + -0x10) != 0) &
                       *(int *)(unaff_EBP + -0x10) - 0x10U) + 8);
      uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      *(uint *)(unaff_EBP + -0x10) = uVar4;
      if (uVar4 == 0) goto LAB_504039f1;
      puVar3 = *(undefined4 **)(unaff_EBP + -0x10);
    }
    puVar3 = (undefined4 *)FUN_504053da((void *)(extraout_ECX + 0xc),*(int *)(unaff_EBP + -0x10));
  }
  *puVar3 = piVar1;
  (**(code **)(*piVar1 + 8))(0,puVar3);
  iVar2 = *(int *)(extraout_ECX + 0x20);
  *(int *)(extraout_ECX + 0x20) = iVar2 + 1;
  (**(code **)(*piVar1 + 8))(1,iVar2);
  piVar1 = (int *)(extraout_ECX + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


