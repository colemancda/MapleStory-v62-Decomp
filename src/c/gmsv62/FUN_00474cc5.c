/* FUN_00474cc5 - 0x00474cc5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00474cc5(int param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar4 = *(uint *)(param_1 + 0xc);
    uVar2 = *(uint *)(param_1 + 8);
    if ((*(uint *)(param_1 + 0x24) <= uVar4) &&
       ((*(uint *)(param_1 + 0x24) < uVar4 || (*(uint *)(param_1 + 0x20) <= uVar2)))) {
      if (param_3 == 0) {
        if ((*(byte *)(param_1 + 0x34) & 4) != 0) {
          param_3 = *(int *)(param_1 + 0x28) - uVar2;
LAB_00474d1f:
          uVar2 = (**(code **)(*param_2 + 0x14))
                            (*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18),param_3);
          puVar1 = (uint *)(param_1 + 8);
          uVar4 = *puVar1;
          *puVar1 = *puVar1 + uVar2;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(uVar4,uVar2);
          return;
        }
      }
      else {
        uVar4 = uVar4 + CARRY4(uVar2,param_3);
        if ((uVar4 <= *(uint *)(param_1 + 0x2c)) &&
           ((uVar4 < *(uint *)(param_1 + 0x2c) || (uVar2 + param_3 <= *(uint *)(param_1 + 0x28)))))
        goto LAB_00474d1f;
      }
    }
  }
  uVar5 = 0x10000;
  uVar3 = FUN_00475a9d(0x10000);
  FUN_004743fa(param_2,param_3,uVar3,uVar5);
  return;
}


