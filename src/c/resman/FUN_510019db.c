/* FUN_510019db - 0x510019db in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_510019db(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),param_2,param_3)
  ;
  if ((iVar1 < 0) && (DAT_5100617c + param_1 != *(int *)(param_1 + 4))) {
    FUN_51001fc3(param_1,(int *)&PTR_DAT_51006178,param_2,param_3);
  }
  return;
}


