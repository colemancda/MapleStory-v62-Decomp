/* FUN_508139fc - 0x508139fc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508139fc(int *param_1,int param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  piVar3 = param_1;
  if (*(int *)(param_5 + 8) != 0) {
    FUN_50813956(param_1,param_2,param_3,(undefined4 *)(param_5 + 8));
  }
  iVar1 = *(int *)(param_5 + 0x14);
  FUN_5080de0d(param_1 + 1,*(int *)(iVar1 + 8));
  uVar7 = *(uint *)(iVar1 + 0xc);
  while (uVar7 != 0) {
    piVar2 = *(int **)(uVar7 + 4);
    iVar6 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
    uVar7 = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
    if (piVar2[5] == 0) {
      param_1._0_1_ = 2;
      param_5._0_1_ = 4;
      piVar4 = (int *)FUN_50813ecf(param_4);
      *piVar4 = (int)piVar2;
    }
    else {
      param_1._0_1_ = 1;
      param_5._0_1_ = 3;
    }
    if ((undefined4 *)piVar2[3] == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)piVar2[3];
    }
    FUN_5080df8a(uVar5,piVar3[7],(byte)param_1,(byte)param_5);
    FUN_5080de0d(piVar3 + 1,*piVar2);
    FUN_5080de0d(piVar3 + 1,piVar2[7]);
    iVar6 = (**(code **)(*piVar3 + 0x24))();
    piVar2[2] = iVar6;
    (**(code **)(*piVar3 + 0x28))(4,1);
  }
  uVar7 = *(uint *)(iVar1 + 0xc);
  while (uVar7 != 0) {
    iVar1 = *(int *)((-(uint)(uVar7 != 0) & uVar7 - 0x10) + 4);
    uVar8 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    piVar2 = (int *)(uVar7 + 4);
    uVar7 = uVar8;
    if (*(int *)(*piVar2 + 0x14) != 0) {
      FUN_508139fc(piVar3,param_2,param_3,param_4,*piVar2);
    }
  }
  return;
}


