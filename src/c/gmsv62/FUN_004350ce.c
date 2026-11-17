/* FUN_004350ce - 0x004350ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004350ce(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = FUN_00434f04(*param_2);
    uVar3 = uVar3 % *(uint *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 4);
    puVar5 = *(undefined4 **)(iVar1 + uVar3 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      cVar2 = FUN_00434f2c(*param_2);
      if (cVar2 != '\0') {
        *(undefined4 *)(iVar1 + uVar3 * 4) = puVar5[1];
LAB_00435134:
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        return 1;
      }
      puVar4 = puVar5;
      for (puVar5 = (undefined4 *)puVar5[1]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        cVar2 = FUN_00434f2c(*param_2);
        if (cVar2 != '\0') {
          puVar4[1] = puVar5[1];
          goto LAB_00435134;
        }
        puVar4 = puVar5;
      }
    }
  }
  return 0;
}


