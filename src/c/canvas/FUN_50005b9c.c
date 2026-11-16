/* FUN_50005b9c - 0x50005b9c in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_50005b9c(void *this,ushort *param_1,undefined4 *param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = _lrotr((uint)*param_1,5);
    iVar2 = *(int *)(*(int *)((int)this + 4) + (uVar1 % *(uint *)((int)this + 8)) * 4);
    if (iVar2 != 0) {
      do {
        if (*(ushort *)(iVar2 + 8) == *param_1) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = *(undefined4 *)(iVar2 + 0xc);
            param_2[1] = *(undefined4 *)(iVar2 + 0x10);
            param_2[2] = *(undefined4 *)(iVar2 + 0x14);
          }
          return iVar2 + 0xc;
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != 0);
    }
  }
  return 0;
}


