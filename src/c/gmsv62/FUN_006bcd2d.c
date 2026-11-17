/* FUN_006bcd2d - 0x006bcd2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006bcd2d(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int aiStack_2c [5];
  int local_8;
  
  if ((*(int *)(param_1 + 0x594) == 0) || (param_3 == 0)) {
    aiStack_2c[4] = 0x6bcd84;
    FUN_00445a30();
    local_8 = 0x50b810;
    do {
      aiStack_2c[4] = local_8;
      aiStack_2c[3] = 0x6bcd96;
      iVar1 = FUN_008496ef();
      if (iVar1 != 0) {
        aiStack_2c[4] = 0xffffffff;
        aiStack_2c[3] = 0x6bcdac;
        piVar2 = (int *)FUN_0045f1e3();
        *piVar2 = local_8 + -0x50b7ac;
      }
      iVar1 = local_8 + -0x50b80f;
      local_8 = local_8 + 1;
    } while (iVar1 < 7);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x59c) = 0;
      *(undefined4 *)(param_1 + 0x5a0) = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x584) + 0x24);
      if (iVar1 < 3) {
        *(int *)(param_1 + 0x59c) = iVar1;
LAB_006bcdd9:
        *(int *)(param_1 + 0x5a0) = iVar1;
      }
      else {
        *(undefined4 *)(param_1 + 0x59c) = 0;
        *(undefined4 *)(param_1 + 0x5a0) = 0;
        for (uVar3 = 0;
            (iVar1 = *(int *)(param_1 + 0x674), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
            uVar3 = uVar3 + 1) {
          if (*(int *)(*(int *)(param_1 + 0x584) + 0x24) == *(int *)(iVar1 + uVar3 * 4)) {
            *(uint *)(param_1 + 0x59c) = uVar3 + 3;
            iVar1 = *(int *)(*(int *)(param_1 + 0x584) + 0x24);
            goto LAB_006bcdd9;
          }
        }
      }
    }
    aiStack_2c[4] = param_3;
    aiStack_2c[3] = param_2;
    aiStack_2c[2] = 0x6bce38;
    FUN_006bad31();
  }
  else {
    aiStack_2c[4] = 0;
    aiStack_2c[3] = 0;
    aiStack_2c[2] = 0;
    aiStack_2c[1] = 0;
    aiStack_2c[0] = param_1;
    FUN_00679d22(aiStack_2c,0xe42);
    FUN_007db3ad();
  }
  return;
}


