/* ptr_005b2904 - 0x005b2904 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_005b2904(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x3e9) {
    FUN_005b7233();
  }
  else if (param_2 == 0x3ea) {
    FUN_005b7195();
  }
  else if (param_2 == 0x3eb) {
    FUN_005b7104();
  }
  else if (param_2 == 0x3ec) {
    FUN_005b73c3();
  }
  else if (param_2 == 0x3ee) {
    FUN_005b728c();
  }
  else if (param_2 == 0x3ef) {
    FUN_005b7348();
  }
  else {
    if (param_2 == 1) {
      iVar1 = *param_1;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      iVar1 = *param_1;
    }
    (**(code **)(iVar1 + 0x34))(param_2);
  }
  return;
}


