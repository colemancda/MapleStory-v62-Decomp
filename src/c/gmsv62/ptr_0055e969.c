/* ptr_0055e969 - 0x0055e969 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_0055e969(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((param_2 == 0x201) && (*(int *)(param_1 + 0x88) != 0)) {
    iVar1 = FUN_0055f1c8(param_4,param_5);
    if (iVar1 != 0) {
      FUN_0055eabf(0xffffffff,0xffffffff);
    }
  }
  return;
}


