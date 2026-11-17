/* FUN_0058e736 - 0x0058e736 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0058e736(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    piVar2 = (int *)(param_1 + 0x88);
    do {
      (**(code **)(*(int *)(*piVar2 + 4) + 0x1c))(1);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0x7c));
  }
  if (-1 < param_2) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x88 + param_2 * 8) + 4) + 0x1c))(0);
  }
  return;
}


