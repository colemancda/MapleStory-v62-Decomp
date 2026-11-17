/* FUN_006cc064 - 0x006cc064 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006cc064(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = param_1;
  if (*(int *)(param_1 + 0xa8) < 0) {
LAB_006cc0ed:
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x20))();
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_0045b90e(&local_8);
      if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      FUN_00414ebb();
      if (bVar1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x1c))(0);
      }
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x20))();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_0045b90e(&local_8);
      if (((char *)*puVar3 == (char *)0x0) || (*(char *)*puVar3 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      FUN_00414ebb();
      if (!bVar1) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x1c))(1);
      }
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x20))();
    if (iVar2 == 0) goto LAB_006cc1ac;
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_004b3d90();
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
      FUN_008161f1(0);
    }
    if (*(int *)(param_1 + 0xa8) < 0) goto LAB_006cc0ed;
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x20))();
    if (iVar2 == 0) {
      (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 0x1c))(1);
    }
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x20))();
    if (iVar2 != 0) goto LAB_006cc1ac;
    iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
    uVar4 = 1;
  }
  (**(code **)(iVar2 + 0x1c))(uVar4);
LAB_006cc1ac:
  FUN_008162ff();
  return;
}


