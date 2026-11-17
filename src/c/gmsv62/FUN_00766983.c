/* FUN_00766983 - 0x00766983 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00766983(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x61c) == param_2) && (*(int *)(param_1 + 0x618) == 1)) {
    if (*(int *)(param_1 + 0x5f4) != 0) {
      FUN_00815de9();
      FUN_00766beb();
    }
    if (DAT_00978358 != 0) {
      if (*(int *)(param_1 + 0x680) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 2;
      }
      FUN_007621bc(uVar1);
    }
  }
  return;
}


