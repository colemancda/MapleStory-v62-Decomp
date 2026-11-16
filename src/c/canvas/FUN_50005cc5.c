/* FUN_50005cc5 - 0x50005cc5 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_50005cc5(void *this,int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = FUN_50005d5a(param_1);
    for (iVar3 = *(int *)(*(int *)((int)this + 4) + (uVar1 % *(uint *)((int)this + 8)) * 4);
        iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = FUN_50005d2a((void *)(iVar3 + 8),param_1);
      if (iVar2 != 0) {
        if (param_2 != 0) {
          FUN_5000362c(iVar3 + 0x18);
          FUN_50003649(param_2);
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar3 + 0x1c);
        }
        return iVar3 + 0x18;
      }
    }
  }
  return 0;
}


