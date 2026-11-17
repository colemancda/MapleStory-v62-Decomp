/* FUN_006734d0 - 0x006734d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006734d0(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_14;
  uint local_10;
  uint local_8;
  
  iVar5 = *(int *)(param_1 + 0xb8);
  puVar8 = (uint *)(param_1 + 0xa8);
  if (iVar5 != 0) {
    local_8 = 8U - iVar5;
    if (param_4 < 8U - iVar5) {
      local_8 = param_4;
    }
    if (local_8 != 0) {
      pbVar4 = (byte *)(iVar5 + (int)puVar8);
      iVar5 = iVar5 + local_8;
      do {
        uVar6 = *param_3;
        param_3 = (uint *)((int)param_3 + 1);
        pbVar4[(param_1 + 0xb0) - (int)puVar8] = (byte)uVar6;
        bVar2 = *pbVar4;
        puVar1 = (uint *)((int)param_2 + 1);
        param_4 = param_4 - 1;
        pbVar4 = pbVar4 + 1;
        local_8 = local_8 - 1;
        *(byte *)param_2 = bVar2 ^ (byte)uVar6;
        param_2 = puVar1;
      } while (local_8 != 0);
    }
    if (iVar5 == 8) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *puVar8 = *(uint *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xb4);
    }
    else {
      *(int *)(param_1 + 0xb8) = iVar5;
    }
    if (param_4 == 0) {
      return;
    }
  }
  local_8 = *(int *)(param_1 + 0xbc);
  uVar6 = *puVar8;
  iVar5 = *(int *)(param_1 + 0xc0);
  uVar9 = 0;
  uVar7 = *(uint *)(param_1 + 0xac);
  for (; param_4 != 0; param_4 = param_4 - 8) {
    uVar3 = local_8;
    if ((iVar5 == 1) || (local_8 = local_8 + -1, uVar3 = iVar5, local_8 == 0)) {
      local_8 = uVar3;
      uVar9 = FUN_00673676(uVar6,uVar7,param_1 + 0x24);
    }
    else {
      uVar9 = __allshl();
      uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),uVar7 >> 0x19 | (uint)uVar9);
    }
    local_10 = (uint)((ulonglong)uVar9 >> 0x20);
    local_14 = (uint)uVar9;
    if (param_4 < 8) break;
    uVar6 = *param_3;
    uVar7 = param_3[1];
    param_3 = param_3 + 2;
    *param_2 = uVar6 ^ local_14;
    param_2[1] = uVar7 ^ local_10;
    param_2 = param_2 + 2;
  }
  *(uint *)(param_1 + 0xbc) = local_8;
  if (param_4 == 0) {
    *puVar8 = uVar6;
    *(uint *)(param_1 + 0xac) = uVar7;
  }
  else {
    *(undefined8 *)puVar8 = uVar9;
    uVar6 = 0;
    if (param_4 != 0) {
      iVar5 = (param_1 + 0xb0) - (int)puVar8;
      uVar7 = param_4;
      do {
        uVar6 = *param_3;
        param_3 = (uint *)((int)param_3 + 1);
        *(byte *)((int)puVar8 + iVar5) = (byte)uVar6;
        uVar3 = *puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        uVar7 = uVar7 - 1;
        *(byte *)param_2 = (byte)uVar3 ^ (byte)uVar6;
        uVar6 = param_4;
        param_2 = (uint *)((int)param_2 + 1);
      } while (uVar7 != 0);
    }
    *(uint *)(param_1 + 0xb8) = uVar6;
  }
  return;
}


