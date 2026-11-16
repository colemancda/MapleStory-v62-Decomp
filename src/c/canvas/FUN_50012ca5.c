/* FUN_50012ca5 - 0x50012ca5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50012ca5(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)*param_2)(param_2,&DAT_500195d0,&param_2);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_3);
      (**(code **)(*param_2 + 8))(param_2);
      if (iVar1 == 0) {
        iVar1 = Ordinal_200(0,&local_8);
        if (iVar1 != 0) {
          local_8 = (int *)0x0;
        }
      }
    }
  }
  FUN_50012d44(param_1,local_8);
  return;
}


