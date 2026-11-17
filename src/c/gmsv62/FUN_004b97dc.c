/* FUN_004b97dc - 0x004b97dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004b97dc(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 4) == 0) {
    *param_2 = 0;
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = FUN_0087a024(*(undefined2 *)(iVar1 + 8),5);
    for (piVar4 = (int *)(*(int *)(param_1 + 4) + 4 + (uVar3 % uVar2) * 4);
        piVar4 < (int *)(*(int *)(param_1 + 4) + uVar2 * 4); piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        *param_2 = *piVar4;
        break;
      }
    }
  }
  else {
    *param_2 = *(int *)(iVar1 + 4);
  }
  if (param_3 != 0) {
    FUN_00414f8b(iVar1 + 0xc);
  }
  return iVar1 + 8;
}


