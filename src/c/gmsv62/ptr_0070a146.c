/* ptr_0070a146 - 0x0070a146 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall ptr_0070a146(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x24))(param_2,param_3,0);
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x580) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x580) = 1;
  }
  return iVar1 != 0;
}


