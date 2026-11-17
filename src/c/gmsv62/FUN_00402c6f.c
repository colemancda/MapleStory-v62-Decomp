/* FUN_00402c6f - 0x00402c6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00402c6f(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 local_104;
  undefined4 local_103;
  
  uVar1 = *param_2;
  if (uVar1 == 8) {
    if (param_1 == param_2) {
      return 0;
    }
    iVar2 = FUN_00402bc3();
    uVar4 = 0;
    if (-1 < iVar2) {
      *param_1 = 8;
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 0) {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
      uVar3 = FUN_00402df5(iVar2,uVar4);
      *(undefined4 *)(param_1 + 4) = uVar3;
      return 0;
    }
    return iVar2;
  }
  if (uVar1 == 0) {
    iVar2 = FUN_00402bc3();
    if (-1 < iVar2) {
      *param_1 = 8;
      uVar3 = FUN_00402df5(0,0);
      *(undefined4 *)(param_1 + 4) = uVar3;
      return 0;
    }
    return iVar2;
  }
  local_104 = 0;
  puVar5 = &local_103;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (uVar1 < 0x11) {
    if (uVar1 == 0x10) {
      iVar2 = (int)(char)param_2[4];
    }
    else if (uVar1 == 2) {
      iVar2 = (int)(short)param_2[4];
    }
    else {
      if (uVar1 != 3) {
        if (uVar1 == 4) {
          dVar7 = (double)*(float *)(param_2 + 4);
          puVar6 = &DAT_00963ce0;
        }
        else {
          if (uVar1 != 5) {
            return -0x7ffdfffb;
          }
          dVar7 = *(double *)(param_2 + 4);
          puVar6 = &DAT_00963ce4;
        }
        FUN_00879f55(&local_104,puVar6,dVar7);
        goto LAB_00402d9e;
      }
      iVar2 = *(int *)(param_2 + 4);
    }
    uVar8 = CONCAT44(iVar2,&DAT_00963cdc);
  }
  else {
    if (uVar1 == 0x11) {
      uVar4 = (uint)(byte)param_2[4];
    }
    else if (uVar1 == 0x12) {
      uVar4 = (uint)param_2[4];
    }
    else {
      if (uVar1 != 0x13) {
        return -0x7ffdfffb;
      }
      uVar4 = *(uint *)(param_2 + 4);
    }
    uVar8 = CONCAT44(uVar4,&DAT_00963cd8);
  }
  (*DAT_0097b50c)(&local_104,uVar8);
LAB_00402d9e:
  iVar2 = FUN_00402bc3();
  if (-1 < iVar2) {
    *param_1 = 8;
    uVar4 = (*DAT_0097b4c8)(0,0,&local_104,0xffffffff,0,0);
    uVar3 = FUN_00402df5(0,(uVar4 & 0x7fffffff) - 1);
    (*DAT_0097b4c8)(0,0,&local_104,0xffffffff,uVar3,0x3fffffff);
    *(undefined4 *)(param_1 + 4) = uVar3;
    return 0;
  }
  return iVar2;
}


