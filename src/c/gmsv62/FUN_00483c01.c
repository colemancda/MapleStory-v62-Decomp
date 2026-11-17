/* FUN_00483c01 - 0x00483c01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00483c01(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_00483c31;
    iVar2 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar2 != 0) {
    FUN_004844bf(iVar2,0);
  }
LAB_00483c31:
  uVar3 = FUN_0087a024(*param_2,5);
  uVar3 = uVar3 % *(uint *)(param_1 + 8);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar3 * 4);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      if (puVar4[2] == *param_2) {
        if (param_3 == 0) {
          return puVar4;
        }
        FUN_00414f8b(param_3);
        return puVar4;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != (undefined4 *)0x0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar4 = (undefined4 *)FUN_0048456a();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *puVar1;
    *puVar4 = &PTR_LAB_008e9798;
    puVar4[2] = *param_2;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_008e9794;
  }
  if (param_3 != 0) {
    FUN_00414f8b(param_3);
  }
  *puVar1 = puVar4;
  return puVar4;
}


