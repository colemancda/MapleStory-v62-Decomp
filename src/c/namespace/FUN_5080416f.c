/* FUN_5080416f - 0x5080416f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_5080416f(void *this,int *param_1,short *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) == 0) {
    *param_1 = 0;
    uVar2 = *(uint *)((int)this + 8);
    uVar3 = FUN_508052c7((int *)(iVar1 + 8));
    for (piVar5 = (int *)(*(int *)((int)this + 4) + 4 + (uVar3 % uVar2) * 4);
        piVar5 < (int *)(*(int *)((int)this + 4) + uVar2 * 4); piVar5 = piVar5 + 1) {
      if (*piVar5 != 0) {
        *param_1 = *piVar5;
        break;
      }
    }
  }
  else {
    *param_1 = *(int *)(iVar1 + 4);
  }
  if (param_2 != (short *)0x0) {
    iVar4 = FUN_50803aab(param_2,(short *)(iVar1 + 0x10));
    if (iVar4 < 0) {
      FUN_5080dfed(iVar4);
    }
  }
  return iVar1 + 8;
}


