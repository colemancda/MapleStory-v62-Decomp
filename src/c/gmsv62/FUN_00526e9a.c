/* FUN_00526e9a - 0x00526e9a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00526e9a(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int local_38;
  int local_34;
  int local_30;
  byte abStack_2c [8];
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  piVar4 = (int *)param_1[3];
  if (piVar4 == (int *)0x0) {
    return;
  }
  local_1c = piVar4;
  _memset(&local_38,0,0x14);
  iVar5 = (**(code **)(*piVar4 + 0x24))(piVar4,0x14,&local_38);
  if (iVar5 < 0) {
    FUN_00526cad(1);
    return;
  }
  local_8 = (*DAT_0097b704)();
  uVar8 = (uint)(abStack_2c[param_1[0x25d] != 0] >> 7);
  local_c = (uint)(abStack_2c[param_1[0x25d] == 0] >> 7);
  local_10 = uVar8;
  iVar5 = FUN_005265f8(0x11);
  iVar6 = FUN_005265f8(0x10);
  uVar9 = -(uint)(iVar5 != 0) & 8 | -(uint)(iVar6 != 0) & 4 | (abStack_2c[2] & 0x80) >> 3 |
          -(uint)(local_c != 0) & 2 | (uint)(uVar8 != 0);
  if ((local_38 != 0) || (local_34 != 0)) {
    local_24 = ((param_1[0x25c] + 5) * local_38) / 10 + param_1[0x24e];
    local_20 = ((param_1[0x25c] + 5) * local_34) / 10 + param_1[0x24f];
    local_18 = local_24;
    if (local_24 < 1) {
      local_18 = 0;
    }
    if (799 < local_18) {
      local_18 = 800;
    }
    local_14 = local_20;
    if (local_20 < 1) {
      local_14 = 0;
    }
    if (599 < local_14) {
      local_14 = 600;
    }
    if ((local_18 != local_24) || (local_14 != local_20)) {
      if (DAT_0097c1ac == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar5 = FUN_00527f9a();
      if (iVar5 == 0) {
        (**(code **)(*local_1c + 0x20))(local_1c);
        (*DAT_0097b59c)(*param_1,&local_24);
        (*DAT_0097b598)(local_24,local_20);
        return;
      }
    }
    if ((param_1[0x24e] != local_18) || (param_1[0x24f] != local_14)) {
      param_1[0x24f] = local_14;
      param_1[0x24e] = local_18;
      puVar7 = (undefined4 *)FUN_0052771e();
      puVar7[2] = CONCAT22((undefined2)local_14,(undefined2)local_18);
      *puVar7 = 0x200;
      puVar7[1] = uVar9;
      FUN_00526469(local_18,local_14);
    }
  }
  if (param_1[0x250] != uVar8) {
    if (uVar8 == 0) {
      local_1c = (int *)CONCAT22(*(undefined2 *)(param_1 + 0x24f),*(undefined2 *)(param_1 + 0x24e));
      puVar7 = (undefined4 *)FUN_0052771e();
      *puVar7 = 0x202;
      puVar7[1] = uVar9;
      puVar7[2] = local_1c;
    }
    else {
      if ((param_1[0x252] != 0) && (local_8 - param_1[0x252] <= (int)param_1[0x259])) {
        if (((int)(param_1[0x254] - param_1[0x25a]) <= (int)param_1[0x24e]) &&
           ((int)param_1[0x24e] < (int)(param_1[0x25a] + param_1[0x254]))) {
          iVar5 = param_1[0x24f];
          if (((int)(param_1[0x255] - param_1[0x25b]) <= iVar5) &&
             (iVar5 < (int)(param_1[0x25b] + param_1[0x255]))) {
            uVar3 = *(ushort *)(param_1 + 0x24e);
            puVar7 = (undefined4 *)FUN_0052771e();
            *puVar7 = 0x203;
            puVar7[1] = uVar9;
            puVar7[2] = iVar5 << 0x10 | (uint)uVar3;
            param_1[0x252] = 0;
            uVar8 = local_10;
            goto LAB_0052719c;
          }
        }
      }
      uVar1 = *(undefined2 *)(param_1 + 0x24f);
      uVar2 = *(undefined2 *)(param_1 + 0x24e);
      puVar7 = (undefined4 *)FUN_0052771e();
      *puVar7 = 0x201;
      puVar7[1] = uVar9;
      puVar7[2] = CONCAT22(uVar1,uVar2);
      param_1[0x252] = local_8;
      param_1[0x254] = param_1[0x24e];
      param_1[0x255] = param_1[0x24f];
      uVar8 = local_10;
    }
LAB_0052719c:
    param_1[0x250] = uVar8;
  }
  if (param_1[0x251] == local_c) goto LAB_005272ca;
  if (local_c == 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x24f);
    uVar2 = *(undefined2 *)(param_1 + 0x24e);
    puVar7 = (undefined4 *)FUN_0052771e();
    *puVar7 = 0x205;
    puVar7[1] = uVar9;
    puVar7[2] = CONCAT22(uVar1,uVar2);
  }
  else {
    if ((param_1[0x253] != 0) && (local_8 - param_1[0x253] <= (int)param_1[0x259])) {
      if (((int)(param_1[0x256] - param_1[0x25a]) <= (int)param_1[0x24e]) &&
         ((int)param_1[0x24e] < (int)(param_1[0x256] + param_1[0x25a]))) {
        iVar5 = param_1[0x24f];
        if (((int)(param_1[599] - param_1[0x25b]) <= iVar5) &&
           (iVar5 < (int)(param_1[599] + param_1[0x25b]))) {
          uVar3 = *(ushort *)(param_1 + 0x24e);
          puVar7 = (undefined4 *)FUN_0052771e();
          *puVar7 = 0x206;
          puVar7[1] = uVar9;
          puVar7[2] = iVar5 << 0x10 | (uint)uVar3;
          param_1[0x253] = 0;
          goto LAB_005272c1;
        }
      }
    }
    uVar1 = *(undefined2 *)(param_1 + 0x24f);
    uVar2 = *(undefined2 *)(param_1 + 0x24e);
    puVar7 = (undefined4 *)FUN_0052771e();
    *puVar7 = 0x204;
    puVar7[1] = uVar9;
    puVar7[2] = CONCAT22(uVar1,uVar2);
    param_1[0x253] = local_8;
    param_1[0x256] = param_1[0x24e];
    param_1[599] = param_1[0x24f];
  }
LAB_005272c1:
  param_1[0x251] = local_c;
LAB_005272ca:
  if (local_30 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x24f);
    uVar2 = *(undefined2 *)(param_1 + 0x24e);
    local_1c = (int *)(local_30 << 0x10 | uVar9);
    puVar7 = (undefined4 *)FUN_0052771e();
    *puVar7 = 0x20a;
    puVar7[1] = local_1c;
    puVar7[2] = CONCAT22(uVar1,uVar2);
  }
  return;
}


