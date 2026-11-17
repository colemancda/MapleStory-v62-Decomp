/* FUN_008193ed - 0x008193ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008193ed(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_0081982a();
  FUN_00819595(&DAT_0097c268);
  while (DAT_0097c258 != 0) {
    puVar2 = (undefined4 *)*DAT_0097c25c;
    FUN_00819718(DAT_0097c25c);
    (**(code **)*puVar2)();
  }
  iVar4 = FUN_00818c24();
  if ((iVar4 != 0) && (DVar5 = timeGetTime(), 15000 < DVar5 - _DAT_0097c230)) {
    FUN_005266d6(0);
    piVar6 = DAT_0097c274;
    while (piVar6 != (int *)0x0) {
      iVar4 = *piVar6;
      iVar3 = *(int *)((-(uint)(piVar6 != (int *)0x0) & (uint)(piVar6 + -4)) + 4);
      piVar6 = (int *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
      (**(code **)(*(int *)(iVar4 + 4) + 0x34))();
      uVar8 = *(uint *)(iVar4 + 0x54);
      while (uVar8 != 0) {
        iVar4 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
        uVar7 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
        piVar1 = (int *)(*(int *)(uVar8 + 4) + 4);
        iVar4 = (**(code **)(*piVar1 + 0x20))();
        uVar8 = uVar7;
        if (iVar4 != 0) {
          (**(code **)(*piVar1 + 0x34))();
        }
      }
    }
  }
  return;
}


