/* FUN_0056d708 - 0x0056d708 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0056d708(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0056d8c9();
  if (iVar1 != 0) {
    FUN_0056d891(0xffffffff);
    *(int *)(param_1 + 0x6c) = param_2 + -1000;
    if (param_2 == 1000) {
      FUN_005665b3();
    }
    else if (param_2 == 0x3e9) {
      FUN_00565460();
    }
    else if (param_2 == 0x3ea) {
      FUN_0056691d();
    }
    if (DAT_00978364 != 0) {
      FUN_00817f6e(-(uint)(param_1 != 0) & param_1 + 4U);
    }
  }
  return;
}


