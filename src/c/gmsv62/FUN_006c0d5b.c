/* FUN_006c0d5b - 0x006c0d5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006c0d5b(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  *(int *)(param_1 + 0x570) = param_2;
  *(int *)(param_1 + 0x59c) = param_2 + 1;
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00455c59(&local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x3e3 + *(int *)(param_1 + 0x59c) * 4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  FUN_004ad003((iVar2 + -0x16) / 4 + 1);
  FUN_004acfe9(*(undefined4 *)(&DAT_0097bd30 + *(int *)(param_1 + 0x59c) * 4));
  *(int *)(param_1 + 0x598) = *(int *)(*(int *)(param_1 + 0x584) + 0x38) * 4 + 1;
  FUN_0074d6fb();
  FUN_006c1ca4(*(int *)(param_1 + 0x59c),
               *(undefined4 *)(param_1 + 0x5a0 + *(int *)(param_1 + 0x59c) * 4));
  FUN_008161f1(0);
  return;
}


