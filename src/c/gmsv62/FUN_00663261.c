/* FUN_00663261 - 0x00663261 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00663261(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar2 = param_2;
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 8) = uVar3;
  FUN_0045f03e(param_2 + 0x33,*(undefined4 *)(param_2 + 0x35));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_0045f084(param_2 + 0x39,*(undefined4 *)(param_2 + 0x3d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_0045f084(param_2 + 0x41,*(undefined4 *)(param_2 + 0x45));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_0045f084(param_2 + 0x51,*(undefined4 *)(param_2 + 0x55));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_0045f084(param_2 + 0x49,*(undefined4 *)(param_2 + 0x4d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  iVar1 = param_2 + 0x59;
  FUN_0045f084(iVar1,*(undefined4 *)(param_2 + 0x5d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  FUN_0045f084(param_2 + 0x9d,*(undefined4 *)(param_2 + 0xa1));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_0045f084(param_2 + 0x69,*(undefined4 *)(param_2 + 0x6d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  FUN_0045f084(param_2 + 0x79,*(undefined4 *)(param_2 + 0x7d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  param_2 = param_5 + -0x178;
  local_8 = -1;
  do {
    param_4 = param_4 + 8;
    iVar4 = param_2;
    if (-0x31 < local_8) {
      iVar4 = param_4;
    }
    iVar4 = *(int *)(iVar4 + 4);
    if ((((iVar4 != 0) && (local_8 != -0x1e)) && (local_8 != -0x26)) &&
       (((local_8 != -0x1f && (local_8 != -0x27)) && ((local_8 != -0x20 && (local_8 != -0x28)))))) {
      FUN_00413367(param_1 + 0x24,*(undefined4 *)(param_1 + 0x2c));
      FUN_0045f084(iVar4 + 0x34,*(undefined4 *)(iVar4 + 0x38));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      FUN_00413367(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x44));
      FUN_0045f084(iVar4 + 0x44,*(undefined4 *)(iVar4 + 0x48));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      FUN_00413367(param_1 + 0x30,*(undefined4 *)(param_1 + 0x38));
      FUN_0045f084(iVar4 + 0x3c,*(undefined4 *)(iVar4 + 0x40));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      FUN_00413367(param_1 + 0x48,*(undefined4 *)(param_1 + 0x50));
      FUN_0045f084(iVar4 + 0x4c,*(undefined4 *)(iVar4 + 0x50));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      FUN_00413367(param_1 + 0x60,*(undefined4 *)(param_1 + 0x68));
      FUN_0045f084(iVar4 + 0x54,*(undefined4 *)(iVar4 + 0x58));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      FUN_00413367(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x74));
      FUN_0045f084(iVar4 + 0x5c,*(undefined4 *)(iVar4 + 0x60));
      uVar3 = FUN_004133b5();
      *(undefined4 *)(param_1 + 0x74) = uVar3;
    }
    param_2 = param_2 + 8;
    local_8 = local_8 + -1;
  } while (-0x61 < local_8);
  FUN_00413367(param_1 + 0x60,*(undefined4 *)(param_1 + 0x68));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  FUN_00413367(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x74));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  iVar4 = FUN_00413367(param_1 + 0x60,*(undefined4 *)(param_1 + 0x68));
  if (30000 < iVar4) {
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x68) = uVar3;
  }
  iVar4 = FUN_00413367(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x74));
  if (30000 < iVar4) {
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x74) = uVar3;
  }
  iVar4 = FUN_00413367(param_3,*(undefined4 *)(param_3 + 8));
  if (0 < iVar4) {
    FUN_00413367(param_3,*(undefined4 *)(param_3 + 8));
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  iVar4 = FUN_00413367(param_3 + 0xc,*(undefined4 *)(param_3 + 0x14));
  if (0 < iVar4) {
    FUN_00413367(param_3 + 0xc,*(undefined4 *)(param_3 + 0x14));
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  iVar4 = FUN_00413367(param_3 + 0x18,*(undefined4 *)(param_3 + 0x20));
  if (0 < iVar4) {
    FUN_00413367(param_3 + 0x18,*(undefined4 *)(param_3 + 0x20));
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x44) = uVar3;
  }
  iVar4 = FUN_00413367(param_3 + 0x24,*(undefined4 *)(param_3 + 0x2c));
  if (0 < iVar4) {
    FUN_00413367(param_3 + 0x24,*(undefined4 *)(param_3 + 0x2c));
    uVar3 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  FUN_00413367(param_1 + 0x24,*(undefined4 *)(param_1 + 0x2c));
  FUN_0045f084(iVar2 + 0x41,*(undefined4 *)(iVar2 + 0x45));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_00413367(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x44));
  FUN_0045f084(iVar2 + 0x51,*(undefined4 *)(iVar2 + 0x55));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_00413367(param_1 + 0x30,*(undefined4 *)(param_1 + 0x38));
  FUN_0045f084(iVar2 + 0x49,*(undefined4 *)(iVar2 + 0x4d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  FUN_00413367(param_1 + 0x48,*(undefined4 *)(param_1 + 0x50));
  FUN_0045f084(iVar1,*(undefined4 *)(iVar2 + 0x5d));
  uVar3 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  return;
}


