/* FUN_5140466c - 0x5140466c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_5140466c(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8);
  if (uVar2 >> 1 < param_1) {
    for (uVar1 = *(uint *)((int)this + 0x10); (uVar2 = uVar2 - 1, param_1 < uVar2 && (uVar1 != 0));
        uVar1 = *(int *)(uVar1 - 8) + 0x10U & -(uint)(*(int *)(uVar1 - 8) != 0)) {
    }
  }
  else {
    uVar2 = *(uint *)((int)this + 0xc);
    uVar1 = 0;
    if (param_1 != 0) {
      do {
        if (uVar2 == 0) {
          return;
        }
        uVar1 = uVar1 + 1;
        uVar2 = *(int *)(uVar2 - 0xc) + 0x10U & -(uint)(*(int *)(uVar2 - 0xc) != 0);
      } while (uVar1 < param_1);
    }
  }
  return;
}


