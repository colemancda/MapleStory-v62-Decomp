/* FUN_50402abf - 0x50402abf in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_50402abf(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = (*DAT_50438e0c)();
  FUN_50401895();
  piVar4 = *(int **)(param_2 + 0x18);
  while (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
    iVar1 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
    piVar4 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    FUN_5040d7e8();
    if (*(int *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x94) != 0) {
      iVar3 = FUN_50407fa0(*(int *)(param_1 + 4));
      if (iVar3 != 0) {
        FUN_50407cf6();
        FUN_50407d75(*(int *)(param_1 + 4));
      }
    }
  }
  piVar4 = (int *)(param_2 + 8);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  iVar3 = (*DAT_50438e0c)();
  if (*(int *)(param_1 + 0x10) == 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + (iVar3 - iVar2);
  }
  return;
}


