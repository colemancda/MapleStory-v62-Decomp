/* FUN_00772bd0 - 0x00772bd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00772bd0(int param_1,int param_2,int param_3)

{
  param_1 = (uint)(param_2 == 0) * 0x7c + param_1;
  if (param_3 == *(int *)(param_1 + 0xd8)) {
    *(uint *)(param_1 + 0xdc) = (uint)(*(int *)(param_1 + 0xdc) == 0);
  }
  else {
    *(int *)(param_1 + 0xd8) = param_3;
    *(undefined4 *)(param_1 + 0xdc) = 1;
  }
  FUN_007733df();
  return;
}


