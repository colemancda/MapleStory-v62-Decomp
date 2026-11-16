/* FUN_5100277c - 0x5100277c in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_5100277c(void *this,uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 local_14;
  uint local_8;
  
  iVar5 = *(int *)((int)this + 0xb8);
  puVar8 = (uint *)((int)this + 0xa8);
  if (iVar5 != 0) {
    local_8 = 8U - iVar5;
    if (param_3 < 8U - iVar5) {
      local_8 = param_3;
    }
    if (local_8 != 0) {
      pbVar4 = (byte *)(iVar5 + (int)puVar8);
      iVar5 = iVar5 + local_8;
      do {
        uVar6 = *param_2;
        param_2 = (uint *)((int)param_2 + 1);
        pbVar4[(int)this + (0xb0 - (int)puVar8)] = (byte)uVar6;
        bVar2 = *pbVar4;
        puVar1 = (uint *)((int)param_1 + 1);
        param_3 = param_3 - 1;
        pbVar4 = pbVar4 + 1;
        local_8 = local_8 - 1;
        *(byte *)param_1 = bVar2 ^ (byte)uVar6;
        param_1 = puVar1;
      } while (local_8 != 0);
    }
    if (iVar5 == 8) {
      *(undefined4 *)((int)this + 0xb8) = 0;
      *puVar8 = *(uint *)((int)this + 0xb0);
      *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xb4);
    }
    else {
      *(int *)((int)this + 0xb8) = iVar5;
    }
    if (param_3 == 0) {
      return;
    }
  }
  local_8 = *(int *)((int)this + 0xbc);
  uVar6 = *puVar8;
  iVar5 = *(int *)((int)this + 0xc0);
  local_14._4_4_ = 0;
  local_14._0_4_ = 0;
  uVar7 = *(uint *)((int)this + 0xac);
  for (; param_3 != 0; param_3 = param_3 - 8) {
    uVar3 = local_8;
    if ((iVar5 == 1) || (local_8 = local_8 + -1, uVar3 = iVar5, local_8 == 0)) {
      local_8 = uVar3;
      local_14 = FUN_51002922(uVar6,uVar7,(uint *)((int)this + 0x24));
    }
    else {
      lVar9 = __allshl(7,uVar7);
      local_14 = CONCAT44((int)((ulonglong)lVar9 >> 0x20),uVar7 >> 0x19 | (uint)lVar9);
    }
    if (param_3 < 8) break;
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar6 ^ (uint)local_14;
    param_1[1] = uVar7 ^ local_14._4_4_;
    param_1 = param_1 + 2;
  }
  *(uint *)((int)this + 0xbc) = local_8;
  if (param_3 == 0) {
    *puVar8 = uVar6;
    *(uint *)((int)this + 0xac) = uVar7;
  }
  else {
    *puVar8 = (uint)local_14;
    *(uint *)((int)this + 0xac) = local_14._4_4_;
    uVar6 = 0;
    if (param_3 != 0) {
      iVar5 = 0xb0 - (int)puVar8;
      uVar7 = param_3;
      do {
        uVar6 = *param_2;
        param_2 = (uint *)((int)param_2 + 1);
        *(byte *)((int)puVar8 + (int)this + iVar5) = (byte)uVar6;
        uVar3 = *puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        uVar7 = uVar7 - 1;
        *(byte *)param_1 = (byte)uVar3 ^ (byte)uVar6;
        uVar6 = param_3;
        param_1 = (uint *)((int)param_1 + 1);
      } while (uVar7 != 0);
    }
    *(uint *)((int)this + 0xb8) = uVar6;
  }
  return;
}


