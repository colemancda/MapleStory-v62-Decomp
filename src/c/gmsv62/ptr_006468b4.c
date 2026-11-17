/* ptr_006468b4 - 0x006468b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006468b4(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  if ((param_2 == 0x3ec) || (param_2 == 0x3ed)) {
    if ((299 < param_3) && (param_3 < 0x131)) {
      if (param_2 == 0x3ec) {
        param_1[*(int *)(param_1[0x25] + 0x3c) + 0x3e] = *(int *)(param_1[0x2a] + 0x38);
      }
      FUN_008161f1(0);
      return;
    }
  }
  else if (((param_2 == 0x3ea) || (param_2 == 0x3eb)) && (param_3 == 500)) {
    FUN_006469b7(param_4);
    return;
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


