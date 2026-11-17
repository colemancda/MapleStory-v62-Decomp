/* FUN_00776924 - 0x00776924 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00776924(int param_1,int param_2,int param_3)

{
  param_1 = param_2 * 0x80 + param_1;
  if (param_3 == *(int *)(param_1 + 0xd8)) {
    *(uint *)(param_1 + 0xdc) = (uint)(*(int *)(param_1 + 0xdc) == 0);
  }
  else {
    *(int *)(param_1 + 0xd8) = param_3;
    *(undefined4 *)(param_1 + 0xdc) = 1;
  }
  FUN_007770bc();
  return;
}


