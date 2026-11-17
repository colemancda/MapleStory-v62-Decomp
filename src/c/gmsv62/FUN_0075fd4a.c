/* FUN_0075fd4a - 0x0075fd4a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0075fd4a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + *(int *)(param_1 + 0x9c) * 8);
  if (iVar1 != 0) {
    local_8 = 0;
    iVar4 = 0x2c;
    do {
      iVar3 = *(int *)(iVar1 + 0x7c);
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = *(uint *)(iVar3 + -4);
      }
      if (uVar2 <= (uint)(*(int *)(*(int *)(param_1 + 0x88) + 0x38) + local_8)) {
        return -1;
      }
      local_18 = 0;
      local_14 = 0x1e;
      local_10 = 0x8a;
      local_c = iVar4;
      iVar3 = (*DAT_0097b57c)(&local_18,param_2,param_3);
      if (iVar3 != 0) {
        return *(int *)(*(int *)(param_1 + 0x88) + 0x38) + local_8;
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0xe;
    } while (iVar4 < 0x80);
  }
  return -1;
}


