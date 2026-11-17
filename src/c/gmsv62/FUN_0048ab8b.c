/* FUN_0048ab8b - 0x0048ab8b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0048ab8b(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_00455c59(local_18);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_14 != 0) {
    FUN_0045e7c2(0);
    local_14 = 0;
  }
  sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
  local_8 = (int)sVar1;
  if (*(int *)(iVar2 + 999) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(*(int *)(iVar2 + 999) + -4);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x78) + 4);
  local_10 = *(int *)(param_1 + 0x78) + 4;
  iVar3 = FUN_00458df2(1,local_8);
  (**(code **)(iVar4 + 0x1c))(local_c + iVar3 * -4 + 3 < 0x31);
  if (*(int *)(iVar2 + 0x3eb) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(*(int *)(iVar2 + 0x3eb) + -4);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 4);
  local_10 = *(int *)(param_1 + 0x80) + 4;
  iVar3 = FUN_00458df2(2,local_8);
  (**(code **)(iVar4 + 0x1c))(local_c + iVar3 * -4 + 3 < 0x31);
  if (*(int *)(iVar2 + 0x3ef) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(*(int *)(iVar2 + 0x3ef) + -4);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x88) + 4);
  local_10 = *(int *)(param_1 + 0x88) + 4;
  iVar3 = FUN_00458df2(3,local_8);
  (**(code **)(iVar4 + 0x1c))(local_c + iVar3 * -4 + 3 < 0x31);
  iVar4 = 0;
  if (*(int *)(iVar2 + 0x3f3) != 0) {
    iVar4 = *(int *)(*(int *)(iVar2 + 0x3f3) + -4);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 4);
  iVar3 = FUN_00458df2(4,local_8);
  (**(code **)(iVar2 + 0x1c))(iVar4 + iVar3 * -4 + 3 < 0x31);
  return;
}


