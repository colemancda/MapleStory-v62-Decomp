/* ptr_00610290 - 0x00610290 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00610290(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0x3ec) && (param_3 == 200)) {
    if ((param_1[0x1d] == 0) && (*(int *)(param_1[0x24] + 0x48) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    (**(code **)(*(int *)(param_1[0x2a] + 4) + 0x1c))(uVar1);
    FUN_008161f1(0);
  }
  if (param_3 == 100) {
    (**(code **)(*param_1 + 0x20))(param_2);
  }
  return;
}


