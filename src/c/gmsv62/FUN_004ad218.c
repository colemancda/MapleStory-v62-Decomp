/* FUN_004ad218 - 0x004ad218 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004ad218(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x3c) < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  local_c = param_1;
  local_8 = param_1;
  FUN_00817e25(&local_c,0);
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
  iVar1 = local_c - iVar1;
  iVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x30))();
  iVar1 = FUN_004ad311(iVar1,local_8 - iVar2);
  if (iVar1 == 0x65) {
    if (*(int *)(param_1 + 0x40) != 0x65) {
      return;
    }
    iVar1 = FUN_004ad2df();
    if (iVar1 == 0) {
      return;
    }
    uVar3 = 0xffffffff;
  }
  else {
    if (iVar1 != 0x66) {
      if (iVar1 == 0x67) {
        if (*(int *)(param_1 + 0x40) != 0x67) {
          return;
        }
        iVar1 = FUN_004ad2df();
        if (iVar1 == 0) {
          return;
        }
        uVar3 = 0xffffffff;
      }
      else {
        if (iVar1 != 0x68) {
          return;
        }
        if (*(int *)(param_1 + 0x40) != 0x68) {
          return;
        }
        iVar1 = FUN_004ad2df();
        if (iVar1 == 0) {
          return;
        }
        uVar3 = 1;
      }
      FUN_004ad3e0(uVar3);
      return;
    }
    if (*(int *)(param_1 + 0x40) != 0x66) {
      return;
    }
    iVar1 = FUN_004ad2df();
    if (iVar1 == 0) {
      return;
    }
    uVar3 = 1;
  }
  FUN_004ad39c(uVar3);
  return;
}


