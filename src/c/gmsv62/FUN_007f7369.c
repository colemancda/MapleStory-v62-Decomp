/* FUN_007f7369 - 0x007f7369 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f7369(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_007f113f(param_2);
  *(undefined4 *)(param_1 + 0x238) = param_3;
  *(undefined4 *)(param_1 + 0x23c) = param_4;
  return;
}


