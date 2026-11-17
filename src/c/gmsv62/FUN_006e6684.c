/* FUN_006e6684 - 0x006e6684 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006e6684(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0xa74) + 0x34);
  iVar1 = *(int *)(*(int *)(param_1 + 0xa7c) + 0x34);
  bVar6 = iVar4 == 9;
  bVar2 = !bVar6;
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa8c) + 4) + 0x24))(bVar2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa94) + 4) + 0x24))(bVar2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa9c) + 4) + 0x24))(bVar2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xaa4) + 4) + 0x24))(bVar2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xaac) + 4) + 0x24))(bVar2);
  uVar5 = 0;
  if ((!bVar6) && (iVar1 != 0)) {
    uVar5 = 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xaa4) + 4) + 0x24))(uVar5);
  uVar5 = 0;
  if ((!bVar6) && (iVar1 != 0)) {
    uVar5 = 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xaac) + 4) + 0x24))(uVar5);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa84) + 4) + 0x24))(bVar2);
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa8c) + 4) + 0x1c))(bVar2);
  if ((bVar6) || (*(int *)(param_1 + 0x578) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa94) + 4) + 0x1c))(uVar5);
  if (bVar6) {
LAB_006e67a1:
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xd98 + iVar4 * 4);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + -4);
    }
    if (iVar3 - 1U <= *(uint *)(param_1 + 0x578)) goto LAB_006e67a1;
    uVar5 = 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xa9c) + 4) + 0x1c))(uVar5);
  if ((bVar6) || (*(int *)(param_1 + 0x57c) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xaa4) + 4) + 0x1c))(uVar5);
  if (bVar6) {
    return;
  }
  iVar4 = 0;
  if (iVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0xdcc);
  }
  else if (iVar1 == 3) {
    iVar4 = *(int *)(param_1 + 0xdd0);
  }
  else {
    if (iVar1 != 2) goto LAB_006e680c;
    iVar4 = *(int *)(param_1 + 0xdd4);
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + -4);
  }
  iVar4 = iVar4 + -1;
LAB_006e680c:
  (**(code **)(*(int *)(*(int *)(param_1 + 0xaac) + 4) + 0x1c))(*(int *)(param_1 + 0x57c) < iVar4);
  return;
}


