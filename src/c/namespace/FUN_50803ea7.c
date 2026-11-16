/* FUN_50803ea7 - 0x50803ea7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_50803ea7(void *this,int *param_1,short *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = FUN_508052c7(param_1);
    for (iVar4 = *(int *)(*(int *)((int)this + 4) + (uVar2 % *(uint *)((int)this + 8)) * 4);
        iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
      bVar1 = FUN_50803f09((void *)(iVar4 + 8),param_1);
      if (bVar1) {
        if ((param_2 != (short *)0x0) &&
           (iVar3 = FUN_50803aab(param_2,(short *)(iVar4 + 0x10)), iVar3 < 0)) {
          FUN_5080dfed(iVar3);
        }
        return iVar4 + 0x10;
      }
    }
  }
  return 0;
}


