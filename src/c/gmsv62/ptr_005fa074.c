/* ptr_005fa074 - 0x005fa074 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_005fa074(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x3e9) {
    FUN_005fdf2f();
  }
  else if (param_2 == 0x3ea) {
    FUN_005fddb5();
  }
  else if (param_2 == 0x3eb) {
    FUN_005fdd1b();
  }
  else if (param_2 == 0x3ec) {
    FUN_005fe0bf();
  }
  else if (param_2 == 0x3ee) {
    FUN_005fdf88();
  }
  else if (param_2 == 0x3ef) {
    FUN_005fe044();
  }
  else if (param_2 == 0x3f0) {
    FUN_005fde53();
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


