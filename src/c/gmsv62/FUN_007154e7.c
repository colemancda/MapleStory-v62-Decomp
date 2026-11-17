/* FUN_007154e7 - 0x007154e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007154e7(int param_1,int param_2)

{
  if (param_2 == 1000) {
    FUN_00718149(0);
  }
  else {
    if (param_2 == 0x3e9) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x1c))(0);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x78) + 4) + 0x1c))(1);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    if (param_2 == 0x3ea) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x1c))(1);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x78) + 4) + 0x1c))(0);
      *(undefined4 *)(param_1 + 0x84) = 1;
    }
    FUN_008161f1(0);
  }
  return;
}


