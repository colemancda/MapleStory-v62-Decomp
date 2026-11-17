/* FUN_0053c8c2 - 0x0053c8c2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053c8c2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  *(int *)(param_1 + 0x56c) = param_2 + 1;
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00455c59(&local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x3e3 + *(int *)(param_1 + 0x56c) * 4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  FUN_004ad003((iVar2 + -0x10) / 6 + 1);
  FUN_004acfe9(*(undefined4 *)(&DAT_00979310 + *(int *)(param_1 + 0x56c) * 4));
  *(int *)(param_1 + 0x568) = *(int *)(*(int *)(param_1 + 0x70) + 0x38) * 6 + 1;
  FUN_0074d6fb();
  FUN_008161f1(0);
  return;
}


