/* ptr_00646936 - 0x00646936 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_00646936(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1000) {
    FUN_00648855();
  }
  else if (param_2 == 0x3e9) {
    FUN_00648ac9();
  }
  else if ((param_2 < 2000) || (0x7d4 < param_2)) {
    if (param_2 == 1) {
      iVar1 = *param_1;
      uVar2 = 1;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      iVar1 = *param_1;
      uVar2 = 2;
    }
    (**(code **)(iVar1 + 0x34))(uVar2);
  }
  else {
    iVar1 = *(int *)(param_1[0x2c] + 0x38);
    param_1[0x38] = -1;
    param_1[0x39] = iVar1 + -2000 + param_2;
    FUN_008161f1(0);
    FUN_00648ce0();
  }
  return;
}


