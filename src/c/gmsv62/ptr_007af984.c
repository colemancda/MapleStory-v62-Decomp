/* ptr_007af984 - 0x007af984 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007af984(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_007950dc(param_2);
  iVar1 = *(int *)(param_1 + 0x1744);
  if (*(int *)(iVar1 + 0x14) == 0) {
    if (*(int *)(iVar1 + 0xc) == 0) {
      if (*(int *)(iVar1 + 4) == 0) goto LAB_007af9f0;
      uVar2 = 0;
    }
    else {
      FUN_00615182(1);
      uVar2 = 2;
    }
  }
  else {
    FUN_00615182(5);
    FUN_00615182(3);
    uVar2 = 4;
  }
  FUN_00615182(uVar2);
LAB_007af9f0:
  if (DAT_009791a4 != 0) {
    FUN_008161f1(0);
  }
  return;
}


