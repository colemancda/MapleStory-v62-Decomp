/* FUN_0053c7a9 - 0x0053c7a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053c7a9(int *param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 1000) {
    if (param_3 == 500) {
      FUN_0053c8c2(param_4);
      return;
    }
  }
  else if (((param_2 == 0x3e9) && (299 < param_3)) && (param_3 < 0x131)) {
    FUN_0074d6fb();
    *(int *)(&DAT_00979310 + param_1[0x15b] * 4) = param_4;
    param_1[0x15a] = param_4 * 6 + 1;
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


