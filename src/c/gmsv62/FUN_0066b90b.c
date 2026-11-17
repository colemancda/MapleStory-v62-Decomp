/* FUN_0066b90b - 0x0066b90b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0066b90b(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_0066b6c1(param_2);
  if (((param_2 & 0x8000000) != 0) && (param_2 = FUN_0042459a(), 0 < (int)param_2)) {
    do {
      iVar2 = FUN_0042459a();
      piVar4 = *(int **)(param_1 + 0x1b0);
      while (piVar3 = piVar4, piVar3 != (int *)0x0) {
        iVar1 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 4);
        piVar4 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
        *piVar3 = iVar2;
        if (iVar2 != 0) {
          FUN_00671851(piVar3);
        }
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


