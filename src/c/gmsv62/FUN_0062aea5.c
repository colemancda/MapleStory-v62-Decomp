/* FUN_0062aea5 - 0x0062aea5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0062aea5(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if ((((int)param_3 < 0) || (iVar1 = *(int *)(param_1 + 0x80), iVar1 == 0)) ||
     (*(uint *)(iVar1 + -4) <= param_3)) {
    *param_2 = 0;
  }
  else {
    *param_2 = 0;
    FUN_00414f8b(iVar1 + param_3 * 4);
  }
  return param_2;
}


