/* FUN_50c03cfb - 0x50c03cfb in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c03cfb(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 **)(param_1 + 0xc),param_2,param_3);
  if ((iVar1 < 0) && (DAT_50c13414 + param_1 != *(int *)(param_1 + 0xc))) {
    FUN_50c04782(param_1,(int *)&PTR_DAT_50c13410,param_2,param_3);
  }
  return;
}


