/* FUN_50005eb8 - 0x50005eb8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __thiscall FUN_50005eb8(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = FUN_50005d5a(param_1);
    uVar1 = uVar1 % *(uint *)((int)this + 8);
    iVar3 = *(int *)((int)this + 4);
    puVar5 = *(undefined4 **)(iVar3 + uVar1 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      iVar2 = FUN_50005d2a(puVar5 + 2,param_1);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar3 + uVar1 * 4) = puVar5[1];
LAB_50005f18:
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      puVar4 = puVar5;
      for (puVar5 = (undefined4 *)puVar5[1]; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[1]) {
        iVar3 = FUN_50005d2a(puVar5 + 2,param_1);
        if (iVar3 != 0) {
          puVar4[1] = puVar5[1];
          goto LAB_50005f18;
        }
        puVar4 = puVar5;
      }
    }
  }
  return 0;
}


