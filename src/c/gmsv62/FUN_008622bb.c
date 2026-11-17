/* FUN_008622bb - 0x008622bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_008622bb(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_8;
  
  iVar2 = param_2;
  puVar4 = (undefined4 *)(param_2 + 4);
  bVar1 = false;
  bVar5 = param_2 != *(int *)(param_1 + 0x1c);
  param_2 = *puVar4;
  if (bVar5) {
    iVar3 = FUN_008631ea(&param_2,0);
    if (iVar3 == 0) {
      bVar1 = true;
    }
  }
  local_8 = 0;
  if (bVar1) {
    puVar4 = (undefined4 *)FUN_00863172();
    *puVar4 = param_2;
    FUN_008628a4(iVar2,param_3);
  }
  else {
    local_8 = FUN_008624da(iVar2);
  }
  return local_8;
}


