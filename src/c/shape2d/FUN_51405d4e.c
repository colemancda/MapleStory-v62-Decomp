/* FUN_51405d4e - 0x51405d4e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int * __fastcall FUN_51405d4e(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_5140ac55(iVar1,param_1,&DAT_514101b0);
  }
  return local_8;
}


