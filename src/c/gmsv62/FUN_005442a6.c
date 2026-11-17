/* FUN_005442a6 - 0x005442a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005442a6(int *param_1,int param_2,uint param_3,int param_4)

{
  if (param_2 == 1000) {
    if (param_3 == 800) {
      FUN_0052acac(param_4);
      return;
    }
  }
  else if (((param_2 == 3000) && (299 < param_3)) && (param_3 < 0x131)) {
    param_1[0x1ab] = param_4 * 5;
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


