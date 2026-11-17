/* FUN_00617c1b - 0x00617c1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00617c1b(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x54) == 0) || (*(uint *)(*(int *)(param_1 + 0x54) + -4) <= param_3)) {
    *param_2 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    *param_2 = 0;
    FUN_00414f8b(iVar1 + param_3 * 4);
  }
  return param_2;
}


