/* FUN_50408c33 - 0x50408c33 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int * __fastcall FUN_50408c33(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_5042a366(iVar1,param_1,&DAT_50434120);
  }
  return local_8;
}


