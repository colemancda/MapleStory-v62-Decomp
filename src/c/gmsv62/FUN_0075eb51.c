/* FUN_0075eb51 - 0x0075eb51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0075eb51(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar1 = param_2;
  param_2 = 0;
  iVar4 = 0x1a;
  do {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x7c) + -4);
    }
    if (uVar2 <= (uint)(*(int *)(*(int *)(param_1 + 0x78) + 0x38) + param_2)) {
      return -1;
    }
    local_14 = 0;
    local_10 = 0xc;
    local_c = 0x8a;
    local_8 = iVar4;
    iVar3 = (*DAT_0097b57c)(&local_14,uVar1,param_3);
    if (iVar3 != 0) {
      return *(int *)(*(int *)(param_1 + 0x78) + 0x38) + param_2;
    }
    param_2 = param_2 + 1;
    iVar4 = iVar4 + 0xe;
  } while (iVar4 < 0x60);
  return -1;
}


