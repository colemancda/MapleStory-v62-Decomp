/* FUN_006bc967 - 0x006bc967 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_006bc967(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14 [4];
  
  if (param_2 != 0x201) {
    return;
  }
  if (*(int *)(param_1 + 0x590) != 0) {
    local_14[0] = 0x16;
    local_14[1] = 0x67;
    local_14[2] = 0x16e;
    local_14[3] = 0x86;
    iVar1 = (*DAT_0097b57c)(local_14,param_4,param_5);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x578) = 0;
      goto LAB_006bca27;
    }
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x588) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x588) + -4);
  }
  local_18 = iVar1 * 0x1f + 0x86;
  local_20 = 0x86;
  local_24 = 0x16;
  local_1c = 0x16e;
  iVar1 = (*DAT_0097b57c)(&local_24,param_4,param_5);
  if ((((iVar1 == 0) || (uVar2 = (param_5 + -0x86) / 0x1f, (int)uVar2 < 0)) ||
      (iVar1 = *(int *)(param_1 + 0x588), iVar1 == 0)) || (*(uint *)(iVar1 + -4) <= uVar2)) {
    iVar1 = 0;
    iVar4 = 0x1be;
    do {
      local_14[0] = iVar4 + -0x14;
      local_14[1] = 0xf6;
      local_14[3] = 0x10a;
      local_14[2] = iVar4;
      iVar3 = (*DAT_0097b57c)(local_14,param_4,param_5);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x598) = iVar1;
        *(int *)(param_1 + 0x59c) = iVar1;
        goto LAB_006bcadf;
      }
      iVar4 = iVar4 + 0x17;
      iVar1 = iVar1 + 1;
    } while (iVar4 < 0x203);
    uVar2 = 0;
    iVar1 = 0x203;
    while( true ) {
      if (*(int *)(param_1 + 0x670) == 0) {
        return;
      }
      if (*(uint *)(*(int *)(param_1 + 0x670) + -4) <= uVar2) {
        return;
      }
      local_14[0] = iVar1 + -0x14;
      local_14[1] = 0xf6;
      local_14[3] = 0x10a;
      local_14[2] = iVar1;
      iVar4 = (*DAT_0097b57c)(local_14,param_4,param_5);
      if (iVar4 != 0) break;
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x17;
    }
    *(uint *)(param_1 + 0x598) = uVar2 + 3;
    *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(*(int *)(param_1 + 0x670) + uVar2 * 4);
LAB_006bcadf:
    FUN_008161f1(0);
    return;
  }
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(*(int *)(iVar1 + 4 + uVar2 * 8) + 0xc);
LAB_006bca27:
  FUN_006bd313();
  return;
}


