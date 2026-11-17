/* FUN_00598e08 - 0x00598e08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00598e08(int param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_00598dac(param_2 + 1);
  *(undefined4 *)(param_2 * 0x1d + *(int *)(param_1 + 0x2c) + param_3 * 4) = param_4;
  return;
}


