/* FUN_00522476 - 0x00522476 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00522476(int *param_1,int param_2,int param_3,int param_4)

{
  if ((param_2 == 0x3f0) && (param_3 == 600)) {
    if (param_4 == *(int *)(param_1[0x32] + 0x3c) + -1) {
      param_1[0x3b] = 9000;
    }
    else {
      param_1[0x3b] = (param_4 + 2) * 1000;
    }
    FUN_005221cb();
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


