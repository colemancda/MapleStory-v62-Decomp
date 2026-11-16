/* FUN_10008790 - 0x10008790 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_10008790(void *this,uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint local_18;
  
  iVar4 = *(int *)((int)this + 0xb8);
  puVar7 = (uint *)((int)this + 0xa8);
  if (iVar4 != 0) {
    local_18 = 8U - iVar4;
    if (param_3 < 8U - iVar4) {
      local_18 = param_3;
    }
    if (local_18 != 0) {
      pbVar6 = (byte *)(iVar4 + (int)puVar7);
      iVar4 = iVar4 + local_18;
      do {
        uVar8 = *param_2;
        pbVar6[(int)this + (0xb0 - (int)puVar7)] = (byte)uVar8;
        param_2 = (uint *)((int)param_2 + 1);
        *(byte *)param_1 = *pbVar6 ^ (byte)uVar8;
        param_1 = (uint *)((int)param_1 + 1);
        param_3 = param_3 - 1;
        pbVar6 = pbVar6 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    if (iVar4 == 8) {
      *puVar7 = *(uint *)((int)this + 0xb0);
      *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xb4);
      *(undefined4 *)((int)this + 0xb8) = 0;
    }
    else {
      *(int *)((int)this + 0xb8) = iVar4;
    }
    if (param_3 == 0) {
      return;
    }
  }
  puVar1 = *(uint **)((int)this + 0xc0);
  uVar8 = *(uint *)((int)this + 0xac);
  uVar3 = *puVar7;
  uVar9 = 0;
  puVar2 = *(uint **)((int)this + 0xbc);
  puVar5 = param_2;
  for (; param_2 = puVar2, param_3 != 0; param_3 = param_3 - 8) {
    puVar2 = param_2;
    if ((puVar1 == (uint *)0x1) ||
       (param_2 = (uint *)((int)param_2 + -1), puVar2 = puVar1, param_2 == (uint *)0x0)) {
      param_2 = puVar2;
      uVar9 = FUN_10008990(uVar3,uVar8,(uint *)((int)this + 0x24));
    }
    else {
      lVar10 = __allshl(7,uVar8);
      uVar9 = CONCAT44((int)((ulonglong)lVar10 >> 0x20),uVar8 >> 0x19 | (uint)lVar10);
    }
    if (param_3 < 8) break;
    uVar3 = *puVar5;
    uVar8 = puVar5[1];
    *param_1 = uVar3 ^ (uint)uVar9;
    param_1[1] = uVar8 ^ (uint)((ulonglong)uVar9 >> 0x20);
    param_1 = param_1 + 2;
    puVar5 = puVar5 + 2;
    puVar2 = param_2;
  }
  *(uint **)((int)this + 0xbc) = param_2;
  if (param_3 != 0) {
    *(undefined8 *)puVar7 = uVar9;
    uVar8 = 0;
    if (param_3 != 0) {
      iVar4 = 0xb0 - (int)puVar7;
      uVar3 = param_3;
      do {
        uVar8 = *puVar5;
        *(byte *)((int)puVar7 + (int)this + iVar4) = (byte)uVar8;
        puVar5 = (uint *)((int)puVar5 + 1);
        *(byte *)param_1 = (byte)*puVar7 ^ (byte)uVar8;
        puVar7 = (uint *)((int)puVar7 + 1);
        uVar3 = uVar3 - 1;
        uVar8 = param_3;
        param_1 = (uint *)((int)param_1 + 1);
      } while (uVar3 != 0);
    }
    *(uint *)((int)this + 0xb8) = uVar8;
    return;
  }
  *puVar7 = uVar3;
  *(uint *)((int)this + 0xac) = uVar8;
  return;
}


