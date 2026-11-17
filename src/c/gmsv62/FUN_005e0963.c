/* FUN_005e0963 - 0x005e0963 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005e0963(int param_1,short *param_2,undefined2 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_005e0990;
    iVar3 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar3 != 0) {
    FUN_005e1d73(iVar3,0);
  }
LAB_005e0990:
  uVar2 = FUN_0087a024(*param_2,5);
  piVar1 = (int *)(*(int *)(param_1 + 4) + (uVar2 % *(uint *)(param_1 + 8)) * 4);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    do {
      if (*(short *)(iVar3 + 8) == *param_2) {
        if (param_3 == (undefined2 *)0x0) {
          return;
        }
        *(undefined2 *)(iVar3 + 10) = *param_3;
        return;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar4 = (undefined4 *)FUN_005e202e();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar3 = *piVar1;
    *puVar4 = &PTR_LAB_008ecc00;
    puVar4[1] = iVar3;
    *(short *)(puVar4 + 2) = *param_2;
    *puVar4 = &PTR_FUN_008ecbfc;
  }
  if (param_3 != (undefined2 *)0x0) {
    *(undefined2 *)((int)puVar4 + 10) = *param_3;
  }
  *piVar1 = (int)puVar4;
  return;
}


