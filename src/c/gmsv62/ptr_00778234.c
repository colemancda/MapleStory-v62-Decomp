/* ptr_00778234 - 0x00778234 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_00778234(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = FUN_007786a2(param_4,param_5);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x70) = iVar1;
      FUN_008161f1(0);
    }
  }
  return;
}


