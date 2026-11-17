/* FUN_007ee33f - 0x007ee33f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007ee33f(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_8;
  
  piVar2 = param_2;
  uVar5 = 0;
  if (*param_2 != 0) {
    uVar5 = *(undefined4 *)(*param_2 + -4);
  }
  piVar1 = (int *)(param_1 + 0x120);
  FUN_007eebaf(uVar5,(int)&param_2 + 3);
  local_8 = 0;
  param_2 = (int *)0x0;
  while ((*piVar2 != 0 && (local_8 < *(uint *)(*piVar2 + -4)))) {
    puVar4 = (undefined4 *)(*piVar1 + (int)param_2);
    iVar8 = local_8 * 8;
    uVar5 = FUN_0045e2eb();
    *puVar4 = uVar5;
    FUN_00414edd(*(int *)(*piVar2 + 4 + iVar8) + 0x28,0xffffffff);
    iVar7 = *(int *)(*piVar2 + 4 + iVar8);
    uVar6 = FUN_0045f03e(iVar7 + 0x35,*(undefined4 *)(iVar7 + 0x37));
    *(uint *)(*piVar1 + 8 + (int)param_2) = uVar6 & 0xff;
    iVar7 = *(int *)(*piVar2 + 4 + iVar8);
    sVar3 = FUN_0045f084(iVar7 + 0x3b,*(undefined4 *)(iVar7 + 0x3f));
    *(int *)(*piVar1 + 0xc + (int)param_2) = (int)sVar3;
    iVar9 = *piVar1 + (int)param_2;
    iVar7 = (*DAT_0097b4ac)(*(int *)(*piVar2 + 4 + iVar8) + 0x59,&DAT_008f1fa8);
    local_8 = local_8 + 1;
    param_2 = (int *)((int)param_2 + 0x14);
    *(uint *)(iVar9 + 0x10) = (uint)(-1 < iVar7);
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  FUN_007ee44b(0,1);
  return;
}


