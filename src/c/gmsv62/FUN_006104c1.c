/* FUN_006104c1 - 0x006104c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_006104c1(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = param_1;
  puVar1 = (undefined4 *)FUN_0045b90e(&local_8);
  uVar2 = FUN_0087b6ab(*puVar1);
  *param_2 = uVar2;
  FUN_00414ebb();
  puVar1 = (undefined4 *)FUN_0045b90e(&param_2);
  uVar2 = FUN_0087b6ab(*puVar1);
  *param_3 = uVar2;
  FUN_00414ebb();
  if (*(int *)(param_1 + 0x74) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x90) + 0x48) == 0) {
      *param_4 = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_0045b90e(&param_2);
      uVar2 = FUN_0087b6ab(*puVar1);
      *param_4 = uVar2;
      FUN_00414ebb();
    }
  }
  else {
    *param_4 = *(undefined4 *)(param_1 + 0x78);
  }
  return;
}


