/* FUN_006e24c5 - 0x006e24c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006e24c5(int param_1,int param_2,undefined4 param_3)

{
  if ((1999 < param_2) && (param_2 < 0x7d2)) {
    (**(code **)(*(int *)(*(int *)(param_1 + -0x3e08 + param_2 * 8) + 4) + 0x1c))(param_3);
  }
  return;
}


