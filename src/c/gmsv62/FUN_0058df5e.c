/* FUN_0058df5e - 0x0058df5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0058df5e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e7c5();
  if (((iVar1 != 0) && (param_2 = param_2 + -1000, -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x7c))) {
    *(int *)(param_1 + 0x80) = param_2;
    FUN_0058e736(param_2);
    FUN_0058e780(0xffffffff);
    *(int *)(param_1 + 0x14c) = param_2;
    FUN_00566c1c(param_2);
    if ((DAT_00978364 != 0) && (DAT_00979428 != 0)) {
      FUN_00817f6e(-(uint)(DAT_00979428 != 0) & DAT_00979428 + 4U);
    }
  }
  return;
}


