/* FUN_508122cc - 0x508122cc in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_508122cc(void *this,int *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) == 0) {
    *param_1 = 0;
    uVar2 = *(uint *)((int)this + 8);
    uVar3 = FUN_508052c7((int *)(iVar1 + 8));
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
  if (param_2 != (void *)0x0) {
    FUN_5081286b(param_2,(undefined4 *)(iVar1 + 0xc));
  }
  return iVar1 + 8;
}


