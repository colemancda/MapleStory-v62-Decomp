/* ptr_0057530a - 0x0057530a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_0057530a(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = FUN_00575e0a(param_4,param_5);
    if (-1 < iVar1) {
      *(int *)(*(int *)(param_1 + 0x60) + 0x160) = iVar1;
      FUN_005753a5(iVar1);
    }
  }
  else if (param_2 == 0x203) {
    iVar1 = FUN_00575e0a(param_4,param_5);
    if (-1 < iVar1) {
      FUN_005666f1();
    }
  }
  return;
}


