/* FUN_0053b607 - 0x0053b607 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0053b607(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0074d6fb();
  FUN_00455c59(&local_c);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
  }
  if (param_2 == 0x201) {
    iVar1 = *(int *)(param_1 + 0x560);
    uVar2 = FUN_0053b81e(param_4,param_5);
    if ((((-1 < (int)uVar2) && (iVar1 = *(int *)(iVar1 + 0x48), iVar1 != 0)) &&
        (uVar2 < *(uint *)(iVar1 + -4))) && (*(uint *)(param_1 + 0x55c) != uVar2)) {
      *(uint *)(param_1 + 0x55c) = uVar2;
      FUN_008161f1(0);
    }
  }
  return;
}


