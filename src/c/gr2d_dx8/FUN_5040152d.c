/* FUN_5040152d - 0x5040152d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040152d(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8),param_2,param_3)
  ;
  if ((iVar1 < 0) && (DAT_5042c1e4 + param_1 != *(int *)(param_1 + 8))) {
    FUN_50401950(param_1,(int *)&PTR_DAT_5042c1e0,param_2,param_3);
  }
  return;
}


