/* FUN_0066f607 - 0x0066f607 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0066f607(int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  double dVar1;
  int iVar2;
  double local_14;
  double local_c;
  
  iVar2 = FUN_00413367(param_4 + 0xf0,*(undefined4 *)(param_4 + 0xf8));
  param_4 = FUN_00662a40(param_2);
  param_4 = param_4 + iVar2;
  if (param_4 < 1) {
    param_4 = 0;
  }
  if (0x3e6 < param_4) {
    param_4 = 999;
  }
  iVar2 = FUN_00413367(param_3 + 0xc,*(undefined4 *)(param_3 + 0x14));
  if (iVar2 < *param_1) {
    iVar2 = FUN_00413367(param_3 + 0xc,*(undefined4 *)(param_3 + 0x14));
    param_4 = param_4 - (*param_1 - iVar2) / 2;
    if (param_4 < 1) {
      param_4 = 0;
    }
  }
  dVar1 = (double)param_4;
  local_c = dVar1 * _DAT_008ed3b0;
  local_14 = (double)param_4;
  if (dVar1 <= local_c) {
    if (dVar1 == local_c) goto LAB_0066f6e7;
  }
  else {
    FUN_00671963(&local_14,&local_c);
  }
  dVar1 = local_c - local_14;
  local_c = (double)(ulonglong)(param_5 % 10000000);
  dVar1 = (double)(longlong)local_c * dVar1 * _DAT_008ed7a0 + local_14;
LAB_0066f6e7:
  param_4 = param_1[0x1a] + param_1[0x19];
  if (param_4 < 1) {
    param_4 = 0;
  }
  if (0x3e6 < param_4) {
    param_4 = 999;
  }
  return (double)param_4 <= dVar1;
}


