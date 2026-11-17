/* FUN_00474aec - 0x00474aec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_00474aec(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_3;
  if (param_1[6] != 0) {
    uVar4 = param_1[3];
    uVar3 = param_1[2];
    if (((uint)param_1[9] <= uVar4) && (((uint)param_1[9] < uVar4 || ((uint)param_1[8] <= uVar3))))
    {
      uVar4 = uVar4 + CARRY4(param_3,uVar3);
      if ((uVar4 <= (uint)param_1[0xb]) &&
         ((uVar4 < (uint)param_1[0xb] || (param_3 + uVar3 <= (uint)param_1[10])))) {
        FUN_00879c20(param_2,param_1[2] + param_1[6],param_3);
        puVar1 = (uint *)(param_1 + 2);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + param_3;
        param_1[3] = param_1[3] + (uint)CARRY4(uVar2,param_3);
        return param_3;
      }
    }
  }
  while( true ) {
    if (uVar2 == 0) {
      return param_3;
    }
    iVar5 = (**(code **)(*param_1 + 4))(param_2,uVar2);
    if (iVar5 == 0) break;
    param_2 = param_2 + iVar5;
    uVar2 = uVar2 - iVar5;
  }
  return param_3 - uVar2;
}


