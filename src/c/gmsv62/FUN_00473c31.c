/* FUN_00473c31 - 0x00473c31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00473c31(undefined2 *param_1,undefined2 param_2,undefined4 param_3)

{
  _memset(param_1,0,0x10);
  param_1[1] = param_2;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}


