/* FUN_005ea7a3 - 0x005ea7a3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ea7a3(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 0xc))(param_2,param_3);
  }
  if ((param_3 != 0) || (param_2 != *(int *)(param_1 + 0x9c))) {
    *(int *)(param_1 + 0x9c) = param_2;
    iVar1 = FUN_005ea7e8();
    if (iVar1 == 0) {
      FUN_005ea930();
    }
  }
  return;
}


