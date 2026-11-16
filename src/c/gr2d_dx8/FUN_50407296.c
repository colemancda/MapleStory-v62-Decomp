/* FUN_50407296 - 0x50407296 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50407296(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_5042d378;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_50403ac0();
  puVar1 = *(undefined4 **)(extraout_ECX + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
    FUN_50401895();
    iVar2 = *(int *)(extraout_ECX + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar2 != 0) {
      FUN_5040e395((void *)(*(int *)(extraout_ECX + 0x18) + 8),iVar2);
      *(undefined4 *)(extraout_ECX + 0x1c) = 0;
    }
    piVar3 = puVar1 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined ***)(unaff_EBP + -0x28) = &PTR_FUN_5042d378;
  FUN_504068bd(unaff_EBP + -0x28);
  piVar3 = *(int **)(extraout_ECX + 0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = *(int **)(extraout_ECX + 0x58);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  iVar2 = *(int *)(extraout_ECX + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_5040508d(extraout_ECX + 0x14);
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50407138();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


