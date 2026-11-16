/* FUN_50c03677 - 0x50c03677 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c03677(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x10))
                    (*(undefined4 **)(param_1 + 0x10),param_2,param_3);
  if ((iVar1 < 0) && (DAT_50c13254 + param_1 != *(int *)(param_1 + 0x10))) {
    FUN_50c04782(param_1,(int *)&PTR_DAT_50c13250,param_2,param_3);
  }
  return;
}


