/* FUN_508026f2 - 0x508026f2 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508026f2(int *param_1,int *param_2,undefined4 *param_3)

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
    iVar1 = FUN_50806095((int)(param_1 + 4),(int *)&PTR_DAT_50817210,param_2,param_3);
  }
  return iVar1;
}


