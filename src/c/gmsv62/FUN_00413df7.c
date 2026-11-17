/* FUN_00413df7 - 0x00413df7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00413df7(int param_1,int *param_2)

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
      if (puVar4[2] == *param_2) {
        *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4) = puVar4[1];
LAB_00413e4c:
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        return 1;
      }
      puVar1 = (undefined4 *)puVar4[1];
      puVar3 = puVar4;
      while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
        if (puVar4[2] == *param_2) {
          puVar3[1] = puVar4[1];
          goto LAB_00413e4c;
        }
        puVar3 = puVar4;
        puVar1 = (undefined4 *)puVar4[1];
      }
    }
  }
  return 0;
}


