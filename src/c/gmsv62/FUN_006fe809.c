/* FUN_006fe809 - 0x006fe809 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_006fe809(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_5 < 0x28) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x5c8 + *(int *)(param_1 + 0x584) * 4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  local_8 = (iVar2 - *(int *)(*(int *)(param_1 + 0x580) + 0x38)) * 0x16 + 0x32;
  local_14 = 0xd;
  local_10 = 0x32;
  local_c = 0xdf;
  iVar2 = (*DAT_0097b57c)(&local_14,param_4,param_5);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x588) < 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x588) = 0xffffffff;
    FUN_00701905(0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x584);
    iVar3 = (param_5 + -0x32) / 0x16 + *(int *)(*(int *)(param_1 + 0x580) + 0x38);
    puVar1 = *(ushort **)(*(int *)(param_1 + 0x5c8 + iVar2 * 4) + 4 + iVar3 * 8);
    if (*(int *)(DAT_0097926c + 0x80) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
    }
    if ((int)(uint)*puVar1 < iVar5) {
      if (param_2 != 0x201) {
        return;
      }
      uVar4 = (uint)*puVar1;
      if (*(int *)(*(int *)(param_1 + 0x5dc + iVar2 * 4) + 4 + uVar4 * 8) == 0) {
        if (*(int *)(*(int *)(param_1 + 0x5e8 + iVar2 * 4) + 4 + uVar4 * 8) == 0) {
          return;
        }
        iVar5 = *(int *)(param_1 + -4);
        iVar3 = uVar4 * 3 + 4000;
      }
      else {
        iVar5 = *(int *)(param_1 + -4);
        iVar3 = (uVar4 + 1000) * 3;
      }
      (**(code **)(iVar5 + 0x20))(iVar2 + iVar3);
      return;
    }
    if (*(int *)(param_1 + 0x588) == iVar3) {
      return;
    }
    *(int *)(param_1 + 0x588) = iVar3;
    if (*(int *)(param_1 + 0x590) == 0) {
      FUN_00701905(1);
    }
    else if (*(int *)(param_1 + 0x594) != 0) {
      FUN_006fbe67();
    }
  }
  FUN_008161f1(0);
  return;
}


