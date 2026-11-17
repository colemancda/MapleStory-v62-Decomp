/* ptr_006cfa46 - 0x006cfa46 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_006cfa46(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = FUN_00815f0f(param_4,param_5,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
      (**(code **)(*(int *)(param_1 + -4) + 0x34))(1);
    }
  }
  return;
}


