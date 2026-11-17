/* FUN_0066f203 - 0x0066f203 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0066f203(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  float10 fVar9;
  uint local_48 [7];
  double local_2c;
  double local_24;
  double local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  iVar2 = param_4;
  puVar8 = local_48;
  iVar7 = 7;
  do {
    uVar3 = FUN_004133f0();
    *puVar8 = uVar3;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_14 = (double)CONCAT44(param_4 + 0x3c,(undefined4)local_14);
  iVar4 = FUN_00413367(param_4 + 0x3c,*(undefined4 *)(param_4 + 0x44));
  uVar6 = *(undefined4 *)(param_4 + 0x50);
  iVar7 = param_4 + 0x48;
  iVar5 = FUN_00413367();
  local_c._4_4_ = (iVar5 / 10 + iVar4 / 10) * 5;
  param_4 = FUN_00413367(param_4 + 0xc,*(undefined4 *)(param_4 + 0x14),iVar7,uVar6);
  param_4 = *param_2 - param_4;
  if (param_4 < 1) {
    param_4 = 0;
  }
  iVar7 = param_2[0x1e] + param_2[0x1d];
  local_24 = ((double)local_c._4_4_ * _DAT_008e9978) /
             ((double)param_4 * _DAT_008ecb38 + _DAT_008ed7b8);
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  param_4 = iVar7;
  if (0x3e6 < iVar7) {
    param_4 = 999;
  }
  local_c = local_24 * _DAT_008e89d0;
  local_24 = local_24 * _DAT_008ed2f0;
  if (local_24 <= local_c) {
    dVar1 = local_24;
    if (local_24 != local_c) goto LAB_0066f2ee;
  }
  else {
    FUN_00671963(&local_24,&local_c);
    dVar1 = local_24;
LAB_0066f2ee:
    local_24 = (double)(ulonglong)(local_48[0] % 10000000);
    dVar1 = (double)(longlong)local_24 * (local_c - dVar1) * _DAT_008ed7a0 + dVar1;
  }
  if (dVar1 < (double)param_4) {
    return 0;
  }
  iVar7 = FUN_00413367(param_5 + 0x60,*(undefined4 *)(param_5 + 0x68));
  param_4 = FUN_00413367();
  param_4 = param_4 + iVar7;
  if (param_4 < 1) {
    param_4 = 0;
  }
  if (0x7ce < param_4) {
    param_4 = 1999;
  }
  iVar7 = FUN_006509a1(param_7);
  iVar7 = FUN_00413367(iVar7 + 0x124,*(undefined4 *)(iVar7 + 300));
  local_2c = ((double)iVar7 * _DAT_008ecb30 + _DAT_008ecb38) * _DAT_008ed7b0;
  if (param_2[0x68] != 0) {
    return 0;
  }
  if ((param_2[0x4b] != 0) &&
     (iVar7 = FUN_00413367(param_5 + 0x87c,*(undefined4 *)(param_5 + 0x884)),
     iVar7 < (int)(local_48[1] % 100))) {
    return 1;
  }
  iVar7 = FUN_00413367(local_14._4_4_,*(undefined4 *)(iVar2 + 0x44));
  dVar1 = (double)param_4;
  local_c = (double)param_4;
  local_24 = (double)param_4;
  local_14 = local_c * local_2c;
  if (local_c <= local_14) {
    if (dVar1 == local_14) goto LAB_0066f447;
  }
  else {
    FUN_00671963(&local_24,&local_14);
    dVar1 = local_24;
  }
  local_24 = (double)(ulonglong)(local_48[2] % 10000000);
  dVar1 = (double)(longlong)local_24 * (local_14 - dVar1) * _DAT_008ed7a0 + dVar1;
LAB_0066f447:
  local_1c = (dVar1 * _DAT_008ed7c8 +
             (double)iVar7 * _DAT_008e89d0 + local_c * _DAT_008ed7d0 * local_c * _DAT_008ed7d0) *
             (double)param_8 * _DAT_008e8cd0;
  fVar9 = (float10)FUN_0066e37d(local_1c,param_6,param_2 + 1,param_7);
  local_1c = (double)fVar9;
  FUN_0066c156(param_3,param_5,param_1,&local_1c);
  uVar6 = __ftol();
  return uVar6;
}


