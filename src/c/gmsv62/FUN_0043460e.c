/* FUN_0043460e - 0x0043460e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043460e(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xc);
  while (piVar1 = piVar3, piVar1 != (int *)0x0) {
    iVar2 = *(int *)((-(uint)(piVar1 != (int *)0x0) & (uint)(piVar1 + -4)) + 4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    iVar2 = (**(code **)(*piVar1 + 4))(param_2);
    if (iVar2 != 0) {
      FUN_004362ac(piVar1);
    }
  }
  return;
}


