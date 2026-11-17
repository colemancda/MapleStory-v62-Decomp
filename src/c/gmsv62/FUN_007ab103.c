/* FUN_007ab103 - 0x007ab103 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_007ab103(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = FUN_006509a1(param_3);
  piVar1 = *(int **)(iVar2 + 0x1a8);
  param_3 = piVar1;
  if (piVar1 != (int *)0x0) {
    InterlockedIncrement(piVar1 + 2);
    if (*piVar1 != 0) {
      uVar3 = *(uint *)(*piVar1 + -4) >> 1;
      goto LAB_007ab145;
    }
  }
  uVar3 = 0;
LAB_007ab145:
  piVar4 = (int *)&param_3;
  if (uVar3 == 0) {
    piVar4 = (int *)(param_1 + 100);
  }
  iVar2 = *piVar4;
  *param_2 = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  if (piVar1 != (int *)0x0) {
    FUN_004030b1();
  }
  return param_2;
}


