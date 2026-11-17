/* FUN_005d5804 - 0x005d5804 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005d5804(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  if (param_6 != 0) {
    iVar3 = (**(code **)(*DAT_00978358 + 4))();
    cVar2 = (**(code **)(**(int **)(iVar3 + 0x96c) + 4))();
    if (cVar2 == '\0') {
      return 0;
    }
    if (*(int *)(iVar3 + 0x96c) == 0) {
      return 0;
    }
    local_c = FUN_005c4af4();
  }
  local_18 = param_2;
  iVar3 = param_1 - param_2;
  do {
    if (param_2 <= param_3) {
      bVar1 = local_18 < param_3;
    }
    else {
      bVar1 = param_3 < local_18;
    }
    if (!bVar1) {
      return 0;
    }
    if (param_2 <= param_3) {
      iVar5 = local_18 + 0x14;
      iVar6 = iVar3 + -0x14;
      iVar3 = local_18 - param_1;
      local_20 = local_18;
      local_18 = iVar5;
      if (param_3 <= iVar5) {
        local_18 = param_3;
      }
    }
    else {
      iVar5 = local_18 + -0x14;
      iVar6 = iVar3 + 0x14;
      local_20 = iVar5;
      if (iVar5 <= param_3) {
        local_20 = param_3;
      }
    }
    local_1c = param_4 - iVar3 / param_5;
    local_14 = iVar3 / param_5 + param_4;
    uVar7 = local_c;
    if (param_6 == 0) {
      uVar7 = 0;
    }
    iVar4 = FUN_005d528b(&local_20,&local_8,1,0,uVar7,0,0,0);
    local_18 = iVar5;
    iVar3 = iVar6;
  } while (iVar4 == 0);
  return local_8;
}


