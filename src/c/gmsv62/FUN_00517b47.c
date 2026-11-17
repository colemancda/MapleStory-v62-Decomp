/* FUN_00517b47 - 0x00517b47 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00517b47(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xc);
  while (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    iVar2 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    iVar2 = FUN_00518908(param_2);
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  piVar3 = *(int **)(param_1 + 0x20);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 4);
    iVar2 = *piVar3;
    piVar3 = (int *)(iVar1 + 0x10U & -(uint)(iVar1 != 0));
  } while (iVar2 != param_2);
  return 1;
}


