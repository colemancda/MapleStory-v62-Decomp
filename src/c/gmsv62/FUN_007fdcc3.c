/* FUN_007fdcc3 - 0x007fdcc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007fdcc3(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007f113f(param_2);
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x238) = param_3;
  return;
}


