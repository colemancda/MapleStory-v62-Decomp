/* FUN_0081a94a - 0x0081a94a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0081a94a(int param_1,uint *param_2,uint *param_3,uint *param_4,undefined4 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar2 = param_4;
  puVar1 = param_2;
  uVar4 = *param_2;
  if (uVar4 == 0x50) {
    return 1;
  }
  if (uVar4 < 0x10f) {
    if (uVar4 == 0x10e) {
      if ((*(uint *)(param_1 + 0xb0) & 0x20000) == 0) {
        return 1;
      }
      if ((*(uint *)(param_1 + 0xb0) & 0x10000) == 0) {
        return 1;
      }
      uVar4 = *param_4;
      uVar8 = *param_3;
      uVar7 = 0x10e;
      goto LAB_0081acb8;
    }
    if (uVar4 != 0x51) {
      if (uVar4 < 0x100) {
        return 0;
      }
      if (0x101 < uVar4) {
        if (uVar4 == 0x102) {
          uVar4 = *param_3;
          if (uVar4 != 0xd) {
            if (uVar4 < 0x20) {
              return 1;
            }
            if (0x7e < uVar4) {
              return 1;
            }
          }
          param_4 = (uint *)(uint)CONCAT12((char)*param_3,(short)param_4);
          FUN_0081b1a4((int)&param_4 + 2);
          return 1;
        }
        if (uVar4 < 0x104) {
          return 0;
        }
        if (0x105 < uVar4) {
          if (uVar4 != 0x10d) {
            return 0;
          }
          if ((*(uint *)(param_1 + 0xb0) & 0x20000) == 0) {
            return 1;
          }
          if ((*(uint *)(param_1 + 0xb0) & 0x10000) == 0) {
            return 1;
          }
          iVar3 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
          if (iVar3 != 0) {
            local_20 = 2;
            local_1c = (*DAT_0097b544)(0);
            local_1c = -local_1c;
            local_18 = (*DAT_0097b544)(1);
            local_18 = -local_18;
            (*DAT_0097b6e8)(iVar3,&local_20);
            (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),iVar3);
          }
          goto LAB_0081ab99;
        }
      }
      if ((DAT_009784c0 == 0) || (*(int *)(DAT_009784c0 + 8) != 0)) {
        if (*(int **)(param_1 + 0x80) == (int *)0x0) {
          return 0;
        }
        iVar3 = (**(code **)(**(int **)(param_1 + 0x80) + 0x48))(&DAT_00979144);
        if (iVar3 == 0) {
          return 0;
        }
      }
      if ((*param_2 == 0x100) || (*param_2 == 0x104)) {
        param_2 = (uint *)0x0;
      }
      else {
        param_2 = (uint *)0x80000000;
      }
      uVar4 = FUN_00527587();
      *param_4 = uVar4 | *param_4 & 0x1ff0000 | (uint)param_2;
      *puVar1 = 0x100;
      uVar6 = FUN_00818d3e(0x100,*param_3,*param_4);
LAB_0081ac82:
      *param_5 = uVar6;
      return 0;
    }
    uVar6 = (*DAT_0097b5dc)(0,4);
    uVar6 = (*DAT_0097b6cc)(uVar6);
    *(undefined4 *)(param_1 + 0xb0) = uVar6;
    iVar3 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
    if (iVar3 != 0) {
      if ((*(byte *)(param_1 + 0xb2) & 1) == 0) {
        param_2 = (uint *)0x0;
        do {
          iVar5 = (*DAT_0097b6dc)(iVar3,param_2,&local_24);
          if ((iVar5 != 0) && (local_20 != 0)) {
            local_20 = 0;
            (*DAT_0097b6e0)(iVar3,&local_24);
          }
          param_2 = (uint *)((int)param_2 + 1);
        } while (param_2 < 4);
      }
      else {
        local_24 = 0;
        local_20 = 0x40;
        local_1c = (*DAT_0097b544)(0);
        local_1c = -local_1c;
        local_18 = (*DAT_0097b544)(1);
        local_18 = -local_18;
        (*DAT_0097b6e0)(iVar3,&local_24);
      }
      (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),iVar3);
      FUN_0081af69();
    }
LAB_0081ab99:
    uVar4 = *param_4;
    uVar8 = *param_3;
    uVar7 = *puVar1;
    uVar6 = *(undefined4 *)(param_1 + 0xa4);
  }
  else {
    if (uVar4 == 0x10f) {
      FUN_0081ada5(*param_4);
      if (((*(uint *)(param_1 + 0xb0) & 0x20000) == 0) &&
         ((*(uint *)(param_1 + 0xb0) & 0x10000) != 0)) {
LAB_0081acab:
        uVar6 = 0;
        goto LAB_0081acc4;
      }
      uVar4 = *puVar2;
      uVar8 = *param_3;
    }
    else {
      if (uVar4 < 0x200) {
        return 0;
      }
      if ((uVar4 < 0x207) || (uVar4 == 0x20a)) {
        if (DAT_009784c0 == 0) {
          return 0;
        }
        if (*(int *)(DAT_009784c0 + 0xc) != 0) {
          return 0;
        }
        FUN_00526469((short)*param_4,*param_4 >> 0x10);
        uVar6 = FUN_0081874a(*param_2,*param_3,*puVar2);
        goto LAB_0081ac82;
      }
      if (uVar4 == 0x281) {
        *(uint *)(param_1 + 0xb4) = *param_3;
        *param_4 = 0;
        FUN_0081af69();
        uVar4 = *param_4;
      }
      else {
        if (uVar4 != 0x282) {
          return 0;
        }
        FUN_0081acd3(*param_3);
        if (((*(uint *)(param_1 + 0xb0) & 0x20000) == 0) &&
           ((*(uint *)(param_1 + 0xb0) & 0x10000) != 0)) goto LAB_0081acab;
        uVar4 = *param_4;
      }
      uVar8 = *param_3;
    }
    uVar7 = *param_2;
LAB_0081acb8:
    uVar6 = *(undefined4 *)(param_1 + 0xa4);
  }
  uVar6 = (*DAT_0097b510)(uVar6,uVar7,uVar8,uVar4);
LAB_0081acc4:
  *param_5 = uVar6;
  return 1;
}


