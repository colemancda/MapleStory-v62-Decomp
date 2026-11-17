/* FUN_00579f3b - 0x00579f3b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00579f3b(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xac) + 4) + 0x1c))(param_2 & 1);
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + 0x1c))(param_2 & 2);
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xbc) + 4) + 0x1c))(param_2 & 0x10);
  }
  return;
}


