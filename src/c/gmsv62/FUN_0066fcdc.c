/* FUN_0066fcdc - 0x0066fcdc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0066fcdc(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_8;
  
  iVar3 = FUN_0066f4b5(param_1,param_2,param_3,param_4,param_6);
  if (iVar3 != 0) {
    return 0;
  }
  local_8 = FUN_00413367();
  local_8 = local_8 / 100;
  if (param_5 == 0) {
    param_6 = param_1[9];
  }
  else {
    param_6 = *(int *)(param_5 + 0x18);
  }
  param_6 = param_1[10] + param_6;
  if (param_6 < 1) {
    param_6 = 0;
  }
  if (0x7ce < param_6) {
    param_6 = 1999;
  }
  uVar4 = FUN_004133f0();
  local_1c = (double)param_6;
  local_14 = (double)param_6 * _DAT_008e8aa8;
  local_24 = local_1c * _DAT_008e89c8;
  if (local_14 <= local_24) {
    dVar1 = local_14;
    if (local_14 != local_24) goto LAB_0066fd9a;
  }
  else {
    FUN_00671963(&local_14,&local_24);
LAB_0066fd9a:
    dVar1 = local_24 - local_14;
    local_24 = (double)(ulonglong)(uVar4 % 10000000);
    dVar1 = (double)(longlong)local_24 * dVar1 * _DAT_008ed7a0 + local_14;
  }
  local_24 = dVar1 * local_1c * _DAT_008e8cd0;
  iVar3 = FUN_00413367(param_4 + 0x30,*(undefined4 *)(param_4 + 0x38));
  iVar5 = FUN_00413367(param_4 + 0x3c,*(undefined4 *)(param_4 + 0x44));
  iVar5 = iVar5 + iVar3;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar3 = 1999;
  if (iVar5 < 1999) {
    iVar3 = iVar5;
  }
  iVar5 = param_3 + 0xc;
  uVar6 = FUN_00413367(iVar5,*(undefined4 *)(param_3 + 0x14));
  iVar7 = FUN_0066fbb2(local_8,uVar6);
  if (local_8 == 1) {
    uVar6 = FUN_00413367(param_3 + 0x24,*(undefined4 *)(param_3 + 0x2c));
    local_1c = (double)CONCAT44(uVar6,(undefined4)local_1c);
    local_8 = FUN_00413367(param_3 + 0x30,*(undefined4 *)(param_3 + 0x38));
    uVar6 = FUN_00413367(param_3 + 0x3c,*(undefined4 *)(param_3 + 0x44));
    local_14 = (double)CONCAT44(uVar6,(undefined4)local_14);
    FUN_00413367(param_3 + 0x48,*(undefined4 *)(param_3 + 0x50));
  }
  else {
    uVar6 = FUN_00413367(param_3 + 0x24,*(undefined4 *)(param_3 + 0x2c));
    local_14 = (double)CONCAT44(uVar6,(undefined4)local_14);
    uVar6 = FUN_00413367(param_3 + 0x30,*(undefined4 *)(param_3 + 0x38));
    local_1c = (double)CONCAT44(uVar6,(undefined4)local_1c);
    local_8 = FUN_00413367(param_3 + 0x3c,*(undefined4 *)(param_3 + 0x44));
    FUN_00413367(param_3 + 0x48,*(undefined4 *)(param_3 + 0x50));
  }
  iVar8 = __ftol();
  if (iVar3 < iVar7) {
    iVar9 = FUN_00413367(iVar5,*(undefined4 *)(param_3 + 0x14));
    if (*param_1 <= iVar9) {
      uVar6 = FUN_00413367(iVar5,*(undefined4 *)(param_3 + 0x14));
      local_1c = (double)CONCAT44(uVar6,(undefined4)local_1c);
      iVar5 = FUN_00413367(iVar5,*(undefined4 *)(param_3 + 0x14));
      local_24 = local_24 -
                 (((double)iVar8 * _DAT_008ed830 + _DAT_008ed838) * (double)iVar3 +
                 ((double)(iVar3 - iVar7) *
                  ((double)local_1c._4_4_ * _DAT_008ed828 + (double)iVar8 * _DAT_008ed830 +
                  _DAT_008ed838) * _DAT_008ed820) / ((double)(iVar5 - *param_1) + _DAT_008ed820));
      goto LAB_00670009;
    }
    local_1c = (double)iVar8 * _DAT_008ed830;
    iVar5 = FUN_00413367(iVar5,*(undefined4 *)(param_3 + 0x14));
    dVar1 = (double)(iVar3 - iVar7) * ((double)iVar5 * _DAT_008ed828 + local_1c + _DAT_008ed838) *
            _DAT_008ed790;
    dVar2 = local_1c;
  }
  else {
    local_1c = (double)iVar8;
    iVar5 = FUN_00413367(iVar5,*(undefined4 *)(param_3 + 0x14));
    dVar1 = (double)(iVar3 - iVar7) *
            (local_1c * _DAT_008ed840 + (double)iVar5 * _DAT_008ed848 + _DAT_008ed838) *
            _DAT_008ed6f8;
    dVar2 = local_1c * _DAT_008ed830;
  }
  local_24 = local_24 - ((dVar2 + _DAT_008ed838) * (double)iVar3 + dVar1);
LAB_00670009:
  iVar3 = FUN_00413367(param_4 + 0x294,*(undefined4 *)(param_4 + 0x29c));
  local_24 = local_24 - (double)iVar3 * local_24 * _DAT_008e8cd0;
  iVar3 = FUN_00413367(param_4 + 0x474,*(undefined4 *)(param_4 + 0x47c));
  if ((iVar3 != 0) && (param_7 != (undefined4 *)0x0)) {
    uVar6 = FUN_0066fbe5(param_2,local_24);
    *param_7 = uVar6;
  }
  uVar6 = __ftol();
  return uVar6;
}


