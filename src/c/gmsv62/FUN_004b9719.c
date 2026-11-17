/* FUN_004b9719 - 0x004b9719 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004b9719(int param_1,short *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = FUN_0087a024(*param_2,5);
    uVar2 = uVar2 % *(uint *)(param_1 + 8);
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar2 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      if (*(short *)(puVar4 + 2) == *param_2) {
        *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4) = puVar4[1];
LAB_004b9772:
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        return 1;
      }
      puVar1 = (undefined4 *)puVar4[1];
      puVar3 = puVar4;
      while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
        if (*(short *)(puVar4 + 2) == *param_2) {
          puVar3[1] = puVar4[1];
          goto LAB_004b9772;
        }
        puVar3 = puVar4;
        puVar1 = (undefined4 *)puVar4[1];
      }
    }
  }
  return 0;
}


