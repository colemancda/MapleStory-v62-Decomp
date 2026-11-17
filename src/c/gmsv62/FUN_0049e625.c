/* FUN_0049e625 - 0x0049e625 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0049e625(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_004b3b5d(param_2,param_3);
  if (iVar2 == 0) {
    piVar1 = *(int **)(param_1 + 0x4c);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
      iVar3 = (**(code **)(piVar1[1] + 0x30))();
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
      iVar3 = (**(code **)(piVar1[1] + 0x2c))((param_2 - iVar3) + iVar4);
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
      iVar2 = (**(code **)(iVar2 + 0x18))((param_2 - iVar3) + iVar4);
    }
  }
  return iVar2;
}


