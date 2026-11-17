/* FUN_0070f050 - 0x0070f050 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0070f050(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 4) == 0) {
    *param_2 = 0;
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = FUN_0087a024(*(undefined4 *)(iVar1 + 8),5);
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
    FUN_0070eda5();
    FUN_0070edc2();
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar1 + 0x10);
  }
  return iVar1 + 8;
}


