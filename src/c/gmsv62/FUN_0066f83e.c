/* FUN_0066f83e - 0x0066f83e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066f83e(int param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  double local_1c;
  double local_14;
  double local_c;
  
  uVar2 = FUN_004133f0();
  uVar3 = FUN_004133f0();
  if (*(int *)(param_2 + 0x54) < 1) {
    local_1c = 0.0;
  }
  else {
    local_1c = (double)*(int *)(param_2 + 0x54);
    local_c = local_1c * _DAT_008e89d0;
    local_1c = local_1c * _DAT_008ecb60;
    if (local_1c <= local_c) {
      dVar1 = local_1c;
      if (local_1c == local_c) goto LAB_0066f8db;
    }
    else {
      FUN_00671963(&local_1c,&local_c);
      dVar1 = local_1c;
    }
    local_1c = (double)(ulonglong)(uVar3 % 10000000);
    local_1c = (double)(longlong)local_1c * (local_c - dVar1) * _DAT_008ed7a0 + dVar1;
  }
LAB_0066f8db:
  local_c = (double)*(int *)(param_1 + 0x44) * _DAT_008e89c8;
  local_14 = (double)*(int *)(param_1 + 0x44) * _DAT_008ed818;
  if (local_c <= local_14) {
    if (local_c == local_14) goto LAB_0066f930;
  }
  else {
    FUN_00671963(&local_c,&local_14);
  }
  local_14 = (double)(ulonglong)(uVar2 % 10000000);
LAB_0066f930:
  __ftol();
  return;
}


