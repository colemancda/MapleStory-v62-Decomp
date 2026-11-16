/* FUN_51401a09 - 0x51401a09 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51401a09(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x10))
                    (*(undefined4 **)(param_1 + 0x10),param_2,param_3);
  if ((iVar1 < 0) && (DAT_5140c284 + param_1 != *(int *)(param_1 + 0x10))) {
    FUN_51402e63(param_1,(int *)&PTR_DAT_5140c280,param_2,param_3);
  }
  return;
}


