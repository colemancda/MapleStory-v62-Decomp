/* FUN_00416a5f - 0x00416a5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00416a5f(int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00416948(param_2);
    uVar1 = uVar1 % *(uint *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 4);
    puVar5 = *(undefined4 **)(iVar3 + uVar1 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      iVar2 = _memcmp(puVar5 + 2,param_2,0xc);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar3 + uVar1 * 4) = puVar5[1];
LAB_00416acb:
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        return 1;
      }
      puVar4 = puVar5;
      for (puVar5 = (undefined4 *)puVar5[1]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        iVar3 = _memcmp(puVar5 + 2,param_2,0xc);
        if (iVar3 == 0) {
          puVar4[1] = puVar5[1];
          goto LAB_00416acb;
        }
        puVar4 = puVar5;
      }
    }
  }
  return 0;
}


