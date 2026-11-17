/* FUN_0043ad50 - 0x0043ad50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0043ad50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = param_2 * 2;
  uVar7 = iVar4 + 1;
  if (uVar7 < *(uint *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(iVar1 + param_2 * 4);
    iVar3 = *(int *)(iVar1 + uVar7 * 4);
    uVar5 = -(uint)(iVar3 != 0) & iVar3 - 0x10U;
    uVar6 = -(uint)(iVar2 != 0) & iVar2 - 0x10U;
    if (*(int *)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 8) -
        *(int *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 8) < 0) {
      if ((uVar7 < *(int *)(param_1 + 0xc) - 1U) &&
         (iVar1 = *(int *)(iVar1 + 4 + uVar7 * 4), uVar5 = -(uint)(iVar1 != 0) & iVar1 - 0x10U,
         uVar6 = -(uint)(iVar3 != 0) & iVar3 - 0x10U,
         *(int *)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 8) -
         *(int *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 8) < 0)) {
        uVar7 = iVar4 + 2;
      }
    }
    else {
      uVar7 = iVar4 + 2;
      if ((*(uint *)(param_1 + 0xc) <= uVar7) ||
         (iVar4 = *(int *)(iVar1 + uVar7 * 4), uVar5 = -(uint)(iVar4 != 0) & iVar4 - 0x10U,
         uVar6 = -(uint)(iVar2 != 0) & iVar2 - 0x10U,
         -1 < *(int *)((-(uint)(uVar5 != 0) & uVar5 + 0x10) + 8) -
              *(int *)((-(uint)(uVar6 != 0) & uVar6 + 0x10) + 8))) goto LAB_0043ae48;
    }
    FUN_0043c516(param_2,uVar7);
  }
  else {
LAB_0043ae48:
    uVar7 = 0;
  }
  return uVar7;
}


