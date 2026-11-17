/* ptr_006d285e - 0x006d285e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006d285e(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1000) {
    FUN_006d1fd1();
  }
  else {
    if (param_2 == 0x3e9) {
      iVar1 = *(int *)(param_1 + 100) + 1;
    }
    else {
      if (param_2 != 0x3ea) {
        if (param_2 != 0x3eb) {
          return;
        }
        FUN_006d5d39();
        return;
      }
      iVar1 = *(int *)(param_1 + 100) + -1;
    }
    FUN_006d2db7(iVar1 % 3);
  }
  return;
}


