/* FUN_0045ded1 - 0x0045ded1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0045ded1(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x2cac) != 0) &&
     (**(int **)(param_1 + 0x2cb8) == *(int *)(param_1 + 0x2088))) {
    uVar1 = 1;
  }
  return uVar1;
}


