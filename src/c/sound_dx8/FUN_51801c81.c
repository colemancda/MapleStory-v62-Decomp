/* FUN_51801c81 - 0x51801c81 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __thiscall FUN_51801c81(void *this,ulong *param_1)

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
LAB_51801cd6:
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
          goto LAB_51801cd6;
        }
        puVar3 = puVar4;
        puVar1 = (undefined4 *)puVar4[1];
      }
    }
  }
  return 0;
}


