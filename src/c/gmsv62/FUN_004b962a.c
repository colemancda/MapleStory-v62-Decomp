/* FUN_004b962a - 0x004b962a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_004b962a(int param_1,short *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_004b965a;
    iVar2 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar2 != 0) {
    FUN_004bac75(iVar2,0);
  }
LAB_004b965a:
  uVar3 = FUN_0087a024(*param_2,5);
  uVar3 = uVar3 % *(uint *)(param_1 + 8);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar3 * 4);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    do {
      if (*(short *)(puVar4 + 2) == *param_2) {
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
  puVar4 = (undefined4 *)FUN_004bb638();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = *puVar1;
    *puVar4 = &PTR_LAB_008ea0d0;
    *(short *)(puVar4 + 2) = *param_2;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_008ea0cc;
  }
  if (param_3 != 0) {
    FUN_00414f8b(param_3);
  }
  *puVar1 = puVar4;
  return puVar4;
}


