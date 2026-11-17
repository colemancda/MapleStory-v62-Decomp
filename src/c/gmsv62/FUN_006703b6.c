/* FUN_006703b6 - 0x006703b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006703b6(int param_1)

{
  uint uVar1;
  int iVar2;
  double local_1c;
  double local_14;
  double local_c;
  
  iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44);
  uVar1 = FUN_004133f0();
  local_14 = (double)iVar2;
  local_1c = (double)iVar2 * _DAT_008ed3b0;
  local_c = local_14 * _DAT_008e89c8;
  if (local_1c <= local_c) {
    if (local_1c == local_c) goto LAB_0067043b;
  }
  else {
    FUN_00671963(&local_1c,&local_c);
  }
  local_1c = (double)(ulonglong)(uVar1 % 10000000);
LAB_0067043b:
  __ftol();
  return;
}


