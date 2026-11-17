/* FUN_005ca30e - 0x005ca30e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ca30e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = FUN_00404a94();
  if (*(int *)(param_1 + 0xec) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_00404abb();
  FUN_0042aa0a(uVar1,iVar2 + -2,param_2,param_3);
  iVar2 = FUN_005ca395(param_2,param_3);
  if (iVar2 != 0) {
    uVar1 = FUN_005ca395(param_2,param_3,100);
    FUN_007d4073(uVar1);
  }
  return;
}


