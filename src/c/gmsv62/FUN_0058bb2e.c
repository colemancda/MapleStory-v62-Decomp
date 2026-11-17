/* FUN_0058bb2e - 0x0058bb2e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0058bb2e(int *param_1,int param_2,uint param_3,int param_4)

{
  if (((param_2 == 1000) && (299 < param_3)) && (param_3 < 0x131)) {
    param_1[0x27] = param_4 * 5;
    (**(code **)(*(int *)(param_1[0x20] + 4) + 0x1c))
              (param_1[0x28] <= *(int *)(param_1[0x24] + 0x38));
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


