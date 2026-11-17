/* FUN_005ca2b4 - 0x005ca2b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ca2b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = FUN_00404a94();
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_00404abb();
  FUN_0042ad64(uVar1,iVar2 + -0xf,param_2);
  return;
}


