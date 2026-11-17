/* FUN_0045d247 - 0x0045d247 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0045d247(int param_1,undefined2 param_2)

{
  FUN_00457cf8(2);
  *(undefined2 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8)) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
  return;
}


