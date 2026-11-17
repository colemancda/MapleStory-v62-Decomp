/* FUN_00486876 - 0x00486876 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00486876(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00486aff(0x2f,&local_8);
  iVar2 = FUN_0044dddc(iVar1);
  if (iVar2 == 0x2f) {
    iVar2 = *(int *)(param_1 + 0x3d8);
    if (*(int *)(iVar2 + 0xc1) != iVar1) {
      *(int *)(iVar2 + 0xc1) = iVar1;
      FUN_0043f184(iVar2 + 0x7c);
    }
    FUN_007c582b(iVar1,param_2);
  }
  return;
}


