/* FUN_50003878 - 0x50003878 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_50003878(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)
     ) {
    if (param_3 == (undefined4 *)0x0) {
      iVar1 = -0x7fffbffd;
    }
    else {
      *param_3 = param_1;
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  else {
    iVar1 = FUN_500041ee((int)(param_1 + 3),(int *)&PTR_DAT_50014308,param_2,param_3);
  }
  return iVar1;
}


