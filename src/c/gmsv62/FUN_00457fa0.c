/* FUN_00457fa0 - 0x00457fa0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00457fa0(int param_1,undefined4 param_2,int param_3)

{
  FUN_00457cf8(param_3);
  FUN_00879c20(*(int *)(param_1 + 4) + *(int *)(param_1 + 8),param_2,param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  return;
}


