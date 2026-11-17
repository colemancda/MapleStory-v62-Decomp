/* FUN_005df45d - 0x005df45d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005df45d(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  if ((((param_3 < 0) || (8 < param_3)) || ((int)param_4 < 0)) ||
     ((iVar1 = *(int *)(param_1 + 4 + param_3 * 4), iVar1 == 0 || (*(uint *)(iVar1 + -4) <= param_4)
      ))) {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 4 + param_4 * 8);
    FUN_005e05a2();
  }
  return param_2;
}


