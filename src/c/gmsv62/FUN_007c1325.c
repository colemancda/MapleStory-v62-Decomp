/* FUN_007c1325 - 0x007c1325 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007c1325(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    piVar3 = *(int **)(param_1 + 0x88);
    do {
      do {
        piVar4 = piVar3;
        if (piVar4 == (int *)0x0) {
          return;
        }
        iVar1 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
        piVar3 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
      } while ((*piVar4 != param_2) && (piVar4[1] != param_2));
      iVar1 = FUN_007c00e8(*piVar4);
      iVar2 = FUN_007c00e8(piVar4[1]);
    } while ((iVar1 == 0) || (iVar2 == 0));
    FUN_0079b1fe(0,iVar2,0);
    FUN_007c1f6e(piVar4);
  }
  return;
}


