/* ptr_004ad06a - 0x004ad06a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004ad06a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004b3b3e(param_2);
  if ((param_2 != 0) && (1 < *(int *)(param_1 + 0x38))) {
    if (*(int *)(param_1 + 0x50) == 0) {
      uVar1 = 8;
    }
    else {
      if (*(int *)(param_1 + 0x50) != 1) {
        return;
      }
      uVar1 = 7;
    }
    FUN_00526a75(uVar1);
  }
  return;
}


