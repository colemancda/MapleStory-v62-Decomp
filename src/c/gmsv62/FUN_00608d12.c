/* FUN_00608d12 - 0x00608d12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00608d12(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  if (param_2 == 0x7d3) {
    if (param_3 != 900) goto LAB_00608d8a;
    if (param_1[0x21] != 2) {
      return;
    }
    *(undefined4 *)(param_1[0x41] + 0x1c) = 1;
    FUN_008161f1(0);
  }
  if (param_2 == 0x7d1) {
    if (param_3 == 500) {
      FUN_0060909d(param_4);
      return;
    }
  }
  else if (((param_2 == 0x7d4) && (299 < param_3)) && (param_3 < 0x131)) {
    FUN_008161f1(0);
  }
LAB_00608d8a:
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


