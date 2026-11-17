/* FUN_004ccd14 - 0x004ccd14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004ccd14(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = DAT_00978368;
  if ((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x68) == 0)) {
    FUN_00853b6c(1);
  }
  if ((*(int *)(iVar3 + 0x3330) != 0) && (*(int *)(param_1 + 0x5c) == 0)) {
    FUN_00853b6c(1);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x60);
  local_14 = *param_2 + -0x19;
  local_10 = param_2[1] + -0x32;
  local_c = *param_2 + 0x19;
  local_8 = param_2[1] + 10;
  do {
    if (puVar5 == (undefined4 *)0x0) goto LAB_004ccdb2;
    puVar1 = puVar5 + 1;
    uVar2 = *puVar5;
    iVar4 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
    puVar5 = (undefined4 *)(-(uint)(iVar4 != 0) & iVar4 + 0x10U);
    iVar4 = (*DAT_0097b57c)(&local_14,uVar2,*puVar1);
  } while (iVar4 != 0);
  FUN_00853b6c(2);
LAB_004ccdb2:
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_004cdc72();
  *(undefined4 *)(iVar3 + 0x3330) = 0;
  return;
}


