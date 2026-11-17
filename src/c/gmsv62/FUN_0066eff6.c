/* FUN_0066eff6 - 0x0066eff6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0066eff6(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int param_8)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  float10 fVar8;
  uint local_38 [7];
  double local_1c;
  double local_14;
  double local_c;
  
  iVar2 = param_5;
  iVar5 = param_4;
  puVar7 = local_38;
  iVar6 = 7;
  do {
    uVar3 = FUN_004133f0();
    *puVar7 = uVar3;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = FUN_00413367(param_5 + 0xc0,*(undefined4 *)(param_5 + 200));
  param_5 = FUN_00413367();
  param_5 = param_5 + iVar6;
  if (param_5 < 1) {
    param_5 = 0;
  }
  if (0x3e6 < param_5) {
    param_5 = 999;
  }
  param_4 = FUN_00413367(param_4 + 0xc,*(undefined4 *)(param_4 + 0x14));
  param_4 = *param_2 - param_4;
  if (param_4 < 1) {
    param_4 = 0;
  }
  dVar1 = (double)param_5;
  param_5 = param_2[0x1e] + param_2[0x1d];
  local_1c = (dVar1 * _DAT_008e9978) / ((double)param_4 * _DAT_008ecb38 + _DAT_008ed7b8);
  if (param_5 < 1) {
    param_5 = 0;
  }
  if (0x3e6 < param_5) {
    param_5 = 999;
  }
  local_c = local_1c * _DAT_008ed6f8;
  local_1c = local_1c * _DAT_008ed790;
  if (local_1c <= local_c) {
    dVar1 = local_1c;
    if (local_1c == local_c) goto LAB_0066f113;
  }
  else {
    FUN_00671963(&local_1c,&local_c);
    dVar1 = local_1c;
  }
  local_1c = (double)(ulonglong)(local_38[0] % 10000000);
  dVar1 = (double)(longlong)local_1c * (local_c - dVar1) * _DAT_008ed7a0 + dVar1;
LAB_0066f113:
  if ((dVar1 < (double)param_5) || (param_2[0x68] != 0)) {
    uVar4 = 0;
  }
  else if ((param_2[0x48] == 0) ||
          (iVar6 = FUN_00413367(iVar2 + 0x84c,*(undefined4 *)(iVar2 + 0x854)),
          (int)(local_38[1] % 100) <= iVar6)) {
    iVar6 = FUN_00413367(iVar5 + 0x24,*(undefined4 *)(iVar5 + 0x2c));
    iVar5 = FUN_00413367();
    local_1c = (double)(ulonglong)(local_38[2] % 10000000);
    local_14 = ((double)iVar5 * ((double)(longlong)local_1c * _DAT_008ed7f0 + _DAT_008ed6f8) *
                _DAT_008ea338 + (double)iVar6) * (double)param_8 * _DAT_008e8cd0;
    fVar8 = (float10)FUN_0066e37d(local_14,param_6,param_2 + 1,param_7);
    local_14 = (double)fVar8;
    FUN_0066c156(param_3,iVar2,param_1,&local_14);
    uVar4 = __ftol();
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


