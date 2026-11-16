/* FUN_5000ecca - 0x5000ecca in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * __fastcall FUN_5000ecca(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_50012ca5(iVar1,param_1,&DAT_50018368);
  }
  return local_8;
}


