/* FUN_004b922e - 0x004b922e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b922e(int param_1,short *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x14)) goto LAB_004b925b;
    iVar3 = *(int *)(param_1 + 8) * 2 + 1;
  }
  if (iVar3 != 0) {
    FUN_004baa07(iVar3,0);
  }
LAB_004b925b:
  uVar2 = FUN_0087a024(*param_2,5);
  piVar1 = (int *)(*(int *)(param_1 + 4) + (uVar2 % *(uint *)(param_1 + 8)) * 4);
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    do {
      if (*(short *)(iVar3 + 8) == *param_2) {
        if (param_3 == (undefined4 *)0x0) {
          return;
        }
        *(undefined4 *)(iVar3 + 0xc) = *param_3;
        *(undefined4 *)(iVar3 + 0x10) = param_3[1];
        return;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar4 = (undefined4 *)FUN_004bb596();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar3 = *piVar1;
    *puVar4 = &PTR_LAB_008ea0c0;
    puVar4[1] = iVar3;
    *(short *)(puVar4 + 2) = *param_2;
    *puVar4 = &PTR_FUN_008ea0bc;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar4[3] = *param_3;
    puVar4[4] = param_3[1];
  }
  *piVar1 = (int)puVar4;
  return;
}


