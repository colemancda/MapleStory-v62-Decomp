/* ptr_006e246a - 0x006e246a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_006e246a(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((((param_2 == 0x201) || (param_2 == 0x202)) || (param_2 == 0x204)) || (param_2 == 0x205)) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x24))(param_4,param_5,0);
    if (iVar1 == 0) {
      (**(code **)(*(int *)(param_1 + -4) + 0x34))(2);
    }
  }
  return;
}


