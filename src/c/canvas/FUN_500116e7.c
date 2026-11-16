/* FUN_500116e7 - 0x500116e7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_500116e7(void *this,int *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = FUN_5000711d(param_1);
    for (iVar3 = *(int *)(*(int *)((int)this + 4) + (uVar2 % *(uint *)((int)this + 8)) * 4);
        iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      bVar1 = FUN_500064dd((void *)(iVar3 + 8),param_1);
      if (bVar1) {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = *(undefined4 *)(iVar3 + 0xc);
        }
        return iVar3 + 0xc;
      }
    }
  }
  return 0;
}


