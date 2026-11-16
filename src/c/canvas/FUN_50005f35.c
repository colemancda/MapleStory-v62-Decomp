/* FUN_50005f35 - 0x50005f35 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_50005f35(void *this,int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) == 0) {
    *param_1 = 0;
    uVar2 = *(uint *)((int)this + 8);
    uVar3 = FUN_50005d5a((int *)(iVar1 + 8));
    for (piVar4 = (int *)(*(int *)((int)this + 4) + 4 + (uVar3 % uVar2) * 4);
        piVar4 < (int *)(*(int *)((int)this + 4) + uVar2 * 4); piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        *param_1 = *piVar4;
        break;
      }
    }
  }
  else {
    *param_1 = *(int *)(iVar1 + 4);
  }
  if (param_2 != 0) {
    FUN_5000362c(iVar1 + 0x18);
    FUN_50003649(param_2);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x1c);
  }
  return iVar1 + 8;
}


