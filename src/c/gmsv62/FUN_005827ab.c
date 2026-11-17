/* FUN_005827ab - 0x005827ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005827ab(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  local_4 = 9;
  do {
    iVar2 = _rand();
    iVar3 = iVar2 / 4;
    iVar2 = iVar2 % 4;
    if (iVar2 == 0) {
      FUN_00413367(param_1 + 0x94,*(undefined4 *)(param_1 + 0x9c));
      iVar3 = FUN_004133b5();
      *(int *)(param_1 + 0x9c) = iVar3;
    }
    else if (iVar2 == 1) {
      FUN_00413367(param_1 + 0xa0,*(undefined4 *)(param_1 + 0xa8));
      iVar3 = FUN_004133b5();
      *(int *)(param_1 + 0xa8) = iVar3;
    }
    else if (iVar2 == 2) {
      FUN_00413367(param_1 + 0xac,*(undefined4 *)(param_1 + 0xb4));
      iVar3 = FUN_004133b5();
      *(int *)(param_1 + 0xb4) = iVar3;
    }
    else if (iVar2 == 3) {
      FUN_00413367(param_1 + 0xb8,*(undefined4 *)(param_1 + 0xc0));
      iVar3 = FUN_004133b5();
      *(int *)(param_1 + 0xc0) = iVar3;
    }
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return iVar3;
}


