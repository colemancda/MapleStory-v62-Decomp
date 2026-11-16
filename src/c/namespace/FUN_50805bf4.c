/* FUN_50805bf4 - 0x50805bf4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 __thiscall FUN_50805bf4(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = FUN_508052c7(param_1);
    uVar3 = uVar3 % *(uint *)((int)this + 8);
    iVar1 = *(int *)((int)this + 4);
    puVar5 = *(undefined4 **)(iVar1 + uVar3 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      bVar2 = FUN_50803f09(puVar5 + 2,param_1);
      if (bVar2) {
        *(undefined4 *)(iVar1 + uVar3 * 4) = puVar5[1];
LAB_50805c54:
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      puVar4 = puVar5;
      for (puVar5 = (undefined4 *)puVar5[1]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        bVar2 = FUN_50803f09(puVar5 + 2,param_1);
        if (bVar2) {
          puVar4[1] = puVar5[1];
          goto LAB_50805c54;
        }
        puVar4 = puVar5;
      }
    }
  }
  return 0;
}


