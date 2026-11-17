/* FUN_006f2db2 - 0x006f2db2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_006f2db2(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if ((((int)param_3 < 0) || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) ||
     (*(uint *)(iVar1 + -4) <= param_3)) {
    *param_2 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    *param_2 = 0;
    FUN_00414f8b(iVar1 + 4 + param_3 * 0x28);
  }
  return param_2;
}


