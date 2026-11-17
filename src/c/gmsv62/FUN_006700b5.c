/* FUN_006700b5 - 0x006700b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_006700b5(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  double local_20;
  double local_18;
  undefined8 local_10;
  
  iVar2 = FUN_0066f607(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    return 0;
  }
  param_5 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44);
  if (param_5 < 1) {
    param_5 = 0;
  }
  if (0x7ce < param_5) {
    param_5 = 1999;
  }
  uVar3 = FUN_004133f0();
  local_10 = (double)param_5;
  local_20 = (double)param_5 * _DAT_008e89c8;
  local_18 = local_10 * _DAT_008ed818;
  if (local_20 <= local_18) {
    dVar1 = local_20;
    if (local_20 == local_18) goto LAB_00670175;
  }
  else {
    FUN_00671963(&local_20);
    dVar1 = local_20;
  }
  local_20 = (double)(ulonglong)(uVar3 % 10000000);
  dVar1 = (double)(longlong)local_20 * (local_18 - dVar1) * _DAT_008ed7a0 + dVar1;
LAB_00670175:
  local_18 = dVar1 * local_10 * _DAT_008e8cd0;
  iVar2 = FUN_00413367(param_4 + 0x90);
  param_5 = FUN_00413367(param_4 + 0x9c,*(undefined4 *)(param_4 + 0xa4));
  param_5 = param_5 + iVar2;
  if (param_5 < 1) {
    param_5 = 0;
  }
  if (0x7ce < param_5) {
    param_5 = 1999;
  }
  iVar2 = FUN_00413367();
  if (iVar2 / 100 == 2) {
    iVar2 = FUN_00413367(param_3 + 0x24,*(undefined4 *)(param_3 + 0x2c));
    iVar4 = FUN_00413367(param_3 + 0x30,*(undefined4 *)(param_3 + 0x38));
    local_10._4_4_ = iVar4;
    iVar4 = FUN_00413367(param_3 + 0x48,*(undefined4 *)(param_3 + 0x50));
    dVar1 = ((double)local_10._4_4_ * _DAT_008ed870 +
             (double)iVar2 * _DAT_008ed878 + (double)iVar4 * _DAT_008e8d80 + (double)param_5) *
            _DAT_008ed700;
  }
  else {
    iVar2 = FUN_00413367(param_3 + 0x24,*(undefined4 *)(param_3 + 0x2c));
    iVar4 = FUN_00413367(param_3 + 0x30,*(undefined4 *)(param_3 + 0x38));
    local_10._4_4_ = iVar4;
    iVar4 = FUN_00413367(param_3 + 0x48,*(undefined4 *)(param_3 + 0x50));
    dVar1 = ((double)local_10._4_4_ * _DAT_008ed870 +
             (double)iVar2 * _DAT_008ed878 + (double)iVar4 * _DAT_008e8d80 + (double)param_5) *
            _DAT_008ed868;
  }
  local_18 = local_18 - dVar1;
  iVar2 = FUN_00413367(param_4 + 0x474,*(undefined4 *)(param_4 + 0x47c));
  if ((iVar2 != 0) && (param_6 != (undefined4 *)0x0)) {
    uVar5 = FUN_0066fbe5(param_2,local_18);
    *param_6 = uVar5;
  }
  uVar5 = __ftol();
  return uVar5;
}


