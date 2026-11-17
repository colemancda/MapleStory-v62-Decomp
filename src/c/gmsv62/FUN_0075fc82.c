/* FUN_0075fc82 - 0x0075fc82 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0075fc82(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  iVar1 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + *(int *)(param_1 + 0x9c) * 8);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x7c);
    piVar6 = piVar2;
    for (uVar7 = 0; (piVar2 != (int *)0x0 && (uVar7 < (uint)piVar2[-1])); uVar7 = uVar7 + 1) {
      if (*piVar6 == param_2) {
        FUN_00475dc9(piVar2 + uVar7);
        iVar3 = *(int *)(iVar1 + 0x7c);
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = *(int *)(iVar3 + -4);
        }
        FUN_004ad003(iVar5 + -5);
        FUN_008161f1(0);
        (**(code **)(*(int *)(*(int *)(param_1 + 0x70) + 4) + 0x1c))(1);
        uVar4 = *(uint *)(param_1 + 0x98);
        if (uVar4 == uVar7) {
          *(int *)(param_1 + 0x98) = -1;
        }
        else if ((int)uVar7 < (int)uVar4) {
          *(int *)(param_1 + 0x98) = uVar4 - 1;
        }
        FUN_006168e2((int *)(iVar1 + 0x7c));
        return 1;
      }
      piVar6 = piVar6 + 1;
    }
  }
  return 0;
}


