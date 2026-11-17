/* ptr_006912bd - 0x006912bd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006912bd(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1000) {
    FUN_006927e9();
  }
  else if (param_2 == 0x3e9) {
    FUN_00692967();
  }
  else if (param_2 == 0x3ea) {
    FUN_00692bcb();
  }
  else if (param_2 == 0x3eb) {
    FUN_00692c32();
  }
  else if (param_2 == 0x3ec) {
    FUN_00692ce9();
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


