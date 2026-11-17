/* FUN_004b90a6 - 0x004b90a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b90a6(int param_1,int *param_2,undefined2 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_004b90d3;
    iVar3 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar3 != 0) {
    FUN_004ba8f0(iVar3,0);
  }
LAB_004b90d3:
  uVar2 = FUN_0087a024(*param_2,5);
  piVar1 = (int *)(*(int *)(param_1 + 4) + (uVar2 % *(uint *)(param_1 + 8)) * 4);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    do {
      if (*(int *)(iVar3 + 8) == *param_2) {
        if (param_3 == (undefined2 *)0x0) {
          return;
        }
        *(undefined2 *)(iVar3 + 0xc) = *param_3;
        return;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar4 = (undefined4 *)FUN_004bb544();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar3 = *piVar1;
    *puVar4 = &PTR_LAB_008ea0b8;
    puVar4[1] = iVar3;
    puVar4[2] = *param_2;
    *puVar4 = &PTR_FUN_008ea0b4;
  }
  if (param_3 != (undefined2 *)0x0) {
    *(undefined2 *)(puVar4 + 3) = *param_3;
  }
  *piVar1 = (int)puVar4;
  return;
}


