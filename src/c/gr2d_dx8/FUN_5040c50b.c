/* FUN_5040c50b - 0x5040c50b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __thiscall FUN_5040c50b(void *this,ulong *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = _lrotr(*param_1,5);
    uVar5 = uVar2 % *(uint *)((int)this + 8);
    puVar4 = *(undefined4 **)(*(int *)((int)this + 4) + uVar5 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      if (puVar4[2] == *param_1) {
        *(undefined4 *)(*(int *)((int)this + 4) + uVar5 * 4) = puVar4[1];
LAB_5040c560:
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
        return 1;
      }
      puVar1 = (undefined4 *)puVar4[1];
      puVar3 = puVar4;
      while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
        if (puVar4[2] == *param_1) {
          puVar3[1] = puVar4[1];
          goto LAB_5040c560;
        }
        puVar3 = puVar4;
        puVar1 = (undefined4 *)puVar4[1];
      }
    }
  }
  return 0;
}


