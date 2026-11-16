/* FUN_500038d5 - 0x500038d5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500038d5(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 **)(param_1 + 0xc),param_2,param_3);
  if ((iVar1 < 0) && (DAT_5001430c + param_1 != *(int *)(param_1 + 0xc))) {
    FUN_500041ee(param_1,(int *)&PTR_DAT_50014308,param_2,param_3);
  }
  return;
}


