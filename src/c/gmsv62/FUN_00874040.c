/* FUN_00874040 - 0x00874040 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00874040(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1650) != 0x619) {
    if (((*(int *)(param_1 + 0x164c) == param_2) && (*(int *)(param_1 + 0x1650) == param_3)) &&
       (*(int *)(param_1 + 0x1654) == param_4)) {
      uVar2 = *(int *)(param_1 + 0x1658) + 1;
      *(uint *)(param_1 + 0x1658) = uVar2;
      if (2 < uVar2) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1658) = 0;
    }
    *(int *)(param_1 + 0x164c) = param_2;
    *(int *)(param_1 + 0x1650) = param_3;
    *(int *)(param_1 + 0x1654) = param_4;
  }
  uVar1 = FUN_00873e20(param_2,param_3,param_4);
  return uVar1;
}


