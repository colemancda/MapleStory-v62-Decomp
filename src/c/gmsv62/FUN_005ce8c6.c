/* FUN_005ce8c6 - 0x005ce8c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005ce8c6(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  iVar1 = FUN_004cd670(*(int *)(param_1 + 0x15c) + 0x17c,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x184));
  if ((iVar1 == 0) && (iVar1 = FUN_005d053d(), iVar1 == 0)) {
    return;
  }
  iVar1 = DAT_00978358;
  uVar2 = -(uint)(*(int *)(param_1 + 0xf0) != 0) & *(int *)(param_1 + 0xf0) - 0xcU;
  if (*(int *)(uVar2 + 0x18) == 0) {
    return;
  }
  if (*(int *)(uVar2 + 0x240) != 0) {
    return;
  }
  piVar3 = (int *)FUN_00429303();
  iVar4 = (**(code **)(*piVar3 + 0x1c))();
  if ((iVar4 == 10) && (*(int *)(param_1 + 0x330) == *(int *)(iVar1 + 0x16fc))) {
    return;
  }
  iVar4 = *(int *)(DAT_0097813c + 0x68);
  if (iVar4 != 0) {
    iVar5 = FUN_005d053d();
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)(**(code **)(*(int *)(param_1 + 4) + 0x10))();
      iVar1 = FUN_005d5c94(*puVar6,puVar6[1]);
      if (iVar1 == 0) {
        return;
      }
      iVar4 = FUN_005cb531(1,0,0,0);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*(int *)(iVar1 + 4) + 0x10))();
        iVar4 = *(int *)(iVar4 + 4);
        piVar3 = (int *)(**(code **)(*(int *)(iVar1 + 4) + 0x10))();
        iVar5 = *piVar3;
        iVar7 = (**(code **)(*(int *)(param_1 + 4) + 0x10))();
        iVar7 = *(int *)(iVar7 + 4);
        piVar3 = (int *)(**(code **)(*(int *)(param_1 + 4) + 0x10))();
        iVar5 = FUN_0087a90a(*piVar3 - iVar5);
        iVar4 = FUN_0087a90a(iVar7 - iVar4);
        if (0x28 < iVar4 / 3 + iVar5 / 10) {
          return;
        }
      }
      piVar11 = (int *)(iVar1 + 4);
      goto LAB_005cebb4;
    }
    piVar3 = (int *)(param_1 + 4);
    iVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x10))();
    iVar5 = *(int *)(iVar5 + 4);
    piVar11 = (int *)(**(code **)(*piVar3 + 0x10))();
    iVar7 = *piVar11;
    piVar11 = (int *)(iVar4 + 4);
    iVar4 = (**(code **)(*piVar11 + 0x10))();
    iVar4 = *(int *)(iVar4 + 4);
    piVar8 = (int *)(**(code **)(*piVar11 + 0x10))();
    iVar7 = FUN_0087a90a(*piVar8 - iVar7);
    iVar4 = FUN_0087a90a(iVar4 - iVar5);
    iVar9 = iVar4 / 3 + iVar7 / 10;
    iVar4 = (**(code **)(*piVar3 + 0x10))();
    iVar4 = *(int *)(iVar4 + 4);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x10))();
    iVar5 = *piVar3;
    iVar7 = (**(code **)(*(int *)(iVar1 + 4) + 0x10))();
    iVar7 = *(int *)(iVar7 + 4);
    piVar3 = (int *)(**(code **)(*(int *)(iVar1 + 4) + 0x10))();
    iVar5 = FUN_0087a90a(*piVar3 - iVar5);
    iVar4 = FUN_0087a90a(iVar7 - iVar4);
    if ((iVar9 <= iVar4 / 3 + iVar5 / 10) &&
       ((iVar4 = FUN_005cb531(2,0,0,0), iVar4 != 0 || (iVar9 < 0x29)))) goto LAB_005cebb4;
  }
  piVar11 = (int *)(iVar1 + 4);
  piVar3 = (int *)(**(code **)(*piVar11 + 0x10))();
  piVar10 = (int *)(param_1 + 4);
  piVar8 = (int *)(**(code **)(*piVar10 + 0x10))();
  FUN_0087a90a(*piVar3 - *piVar8);
  iVar4 = (**(code **)(*piVar11 + 0x10))();
  iVar5 = (**(code **)(*piVar10 + 0x10))();
  FUN_0087a90a(*(int *)(iVar4 + 4) - *(int *)(iVar5 + 4));
  iVar4 = FUN_005cb531(0,0,0,0);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*piVar10 + 0x10))();
    iVar4 = *(int *)(iVar4 + 4);
    piVar3 = (int *)(**(code **)(*piVar10 + 0x10))();
    iVar5 = *piVar3;
    iVar7 = (**(code **)(*piVar11 + 0x10))();
    iVar7 = *(int *)(iVar7 + 4);
    piVar3 = (int *)(**(code **)(*piVar11 + 0x10))();
    iVar5 = FUN_0087a90a(*piVar3 - iVar5);
    iVar4 = FUN_0087a90a(iVar7 - iVar4);
    if (0x28 < iVar4 / 3 + iVar5 / 10) {
      return;
    }
  }
  piVar11 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar11);
LAB_005cebb4:
  FUN_005cc3d9(1,piVar11,0);
  return;
}


