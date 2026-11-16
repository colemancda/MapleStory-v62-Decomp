/* FUN_5040f157 - 0x5040f157 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5040f157(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined2 *param_6)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 0x108))
                    (param_1,param_2,param_3,param_4,param_5,
                     -(uint)(param_6 != (undefined2 *)0x0) & (uint)&local_8);
  if (-1 < iVar1) {
    if (local_8 != 0) {
      *param_6 = 0xd;
      *(int *)(param_6 + 4) = local_8;
    }
    iVar1 = 0;
  }
  return iVar1;
}


