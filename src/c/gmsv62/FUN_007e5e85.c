/* FUN_007e5e85 - 0x007e5e85 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e5e85(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = param_4;
  *param_4 = 0;
  local_8 = 0x7fffffff;
  local_c = 0x80000000;
  param_4 = (int *)0x0;
  for (uVar3 = 0; (iVar1 = *param_5, iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    if (*(int *)(iVar1 + (int)param_4 + 8) == param_1) {
      if ((int)uVar3 <= (int)local_8) {
        local_8 = uVar3;
      }
      if ((int)local_c <= (int)uVar3) {
        local_c = uVar3;
      }
      iVar1 = *(int *)(iVar1 + (int)param_4 + 0x24);
      if (*piVar2 < iVar1) {
        *piVar2 = iVar1;
      }
    }
    param_4 = (int *)((int)param_4 + 0x3c);
  }
  if ((local_8 == 0x7fffffff) || (local_c == 0x80000000)) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
  }
  else {
    *param_2 = local_8;
    *param_3 = local_c;
    if (*piVar2 < 0x10) {
      *piVar2 = 0x10;
    }
  }
  return;
}


