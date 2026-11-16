/* FUN_5000d3c0 - 0x5000d3c0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * __fastcall FUN_5000d3c0(int *param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_8);
  if (iVar1 < 0) {
    FUN_50012ca5(iVar1,param_1,&DAT_500183f8);
  }
  return local_8;
}


