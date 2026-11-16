/* FUN_50803368 - 0x50803368 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50803368(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),param_2,param_3)
  ;
  if ((iVar1 < 0) && (DAT_5081751c + param_1 != *(int *)(param_1 + 4))) {
    FUN_50806095(param_1,(int *)&PTR_DAT_50817518,param_2,param_3);
  }
  return;
}


