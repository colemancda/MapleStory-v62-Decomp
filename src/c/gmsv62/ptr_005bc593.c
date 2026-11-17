/* ptr_005bc593 - 0x005bc593 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_005bc593(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x34))(8);
  }
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
  return;
}


