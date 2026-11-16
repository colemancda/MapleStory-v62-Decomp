/* FUN_510040cb - 0x510040cb in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 __thiscall FUN_510040cb(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar3 = FUN_51005629(param_1);
    uVar3 = uVar3 % *(uint *)((int)this + 8);
    iVar1 = *(int *)((int)this + 4);
    puVar5 = *(undefined4 **)(iVar1 + uVar3 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      bVar2 = FUN_510051a7(puVar5 + 2,param_1);
      if (bVar2) {
        *(undefined4 *)(iVar1 + uVar3 * 4) = puVar5[1];
LAB_5100412b:
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      puVar4 = puVar5;
      for (puVar5 = (undefined4 *)puVar5[1]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        bVar2 = FUN_510051a7(puVar5 + 2,param_1);
        if (bVar2) {
          puVar4[1] = puVar5[1];
          goto LAB_5100412b;
        }
        puVar4 = puVar5;
      }
    }
  }
  return 0;
}


