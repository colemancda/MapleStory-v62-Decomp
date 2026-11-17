/* FUN_007edf11 - 0x007edf11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007edf11(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0xa4) = param_2;
  *(int *)(param_1 + 0xa8) = param_3;
  if ((param_2 != 0) || (param_3 != 0)) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 0x12;
  }
  FUN_007ee44b(1,0);
  return;
}


