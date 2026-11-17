/* FUN_0045262a - 0x0045262a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined2 * __thiscall FUN_0045262a(undefined2 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00402bc3(param_1);
  if (iVar1 < 0) {
    *param_1 = 10;
    *(int *)(param_1 + 4) = iVar1;
  }
  *param_1 = 8;
  iVar1 = FUN_00402fed(param_2);
  *(int *)(param_1 + 4) = iVar1;
  if ((iVar1 == 0) && (param_2 != 0)) {
    *param_1 = 10;
    *(undefined4 *)(param_1 + 4) = 0x8007000e;
  }
  return param_1;
}


