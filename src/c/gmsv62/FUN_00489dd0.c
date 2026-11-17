/* FUN_00489dd0 - 0x00489dd0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00489dd0(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((((-1 < (int)param_3) && (iVar1 = *(int *)(*(int *)(param_1 + 0x564) + 0x488), iVar1 != 0)) &&
      (param_3 < *(uint *)(iVar1 + -4))) &&
     ((iVar1 = param_3 + *(int *)(*(int *)(param_1 + 0x70) + 0x38) * -6, -1 < iVar1 && (iVar1 < 0xc)
      ))) {
    local_c = (iVar1 % 6) * 0x23;
    local_14 = local_c + 0x15;
    local_c = local_c + 0x35;
    local_8 = (iVar1 / 6) * 0x23;
    local_10 = local_8 + 0x1e;
    local_8 = local_8 + 0x3e;
  }
  *param_2 = local_14;
  param_2[1] = local_10;
  param_2[2] = local_c;
  param_2[3] = local_8;
  return;
}


