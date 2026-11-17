/* FUN_0045f146 - 0x0045f146 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0045f146(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    piVar2 = *(int **)(param_1 + 0xc);
  }
  else {
    piVar2 = (int *)(-(uint)(*(int *)(param_3 + -0xc) != 0) & *(int *)(param_3 + -0xc) + 0x10U);
  }
  if (piVar2 != (int *)0x0) {
    do {
      if (*piVar2 == *param_2) {
        return piVar2;
      }
      iVar1 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
    } while (piVar2 != (int *)0x0);
  }
  return (int *)0x0;
}


