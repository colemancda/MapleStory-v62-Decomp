/* FUN_005493c0 - 0x005493c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005493c0(int *param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 0x3e9) {
    if (param_3 == 500) {
      FUN_00549444(param_4);
      return;
    }
  }
  else if (((param_2 == 0x3ea) && (299 < param_3)) && (param_3 < 0x131)) {
    FUN_0074d6fb();
    *(int *)(&DAT_00979370 + param_1[0x15e] * 4) = param_4;
    param_1[0x15d] = param_4 * 4 + 1;
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


