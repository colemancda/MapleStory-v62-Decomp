/* FUN_0080ebbb - 0x0080ebbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0080ebbb(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  if ((param_2 == 0x3e9) || (param_2 == 0x3ea)) {
    if ((299 < param_3) && (param_3 < 0x131)) {
      FUN_008161f1(0);
      return;
    }
  }
  else if ((param_2 == 1000) && (param_3 == 500)) {
    FUN_0080ec12(param_4);
    return;
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


