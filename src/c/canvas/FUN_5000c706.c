/* FUN_5000c706 - 0x5000c706 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_5000c706(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  
  FUN_50003bdf(this);
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    puVar4 = FUN_500023f6();
    *(uint **)this = puVar4 + 1;
    *puVar4 = param_1;
    puVar1 = *(undefined4 **)this;
    puVar2 = puVar1;
    while (puVar5 = puVar2, puVar5 < puVar1 + param_1) {
      puVar2 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
      }
    }
    iVar3 = *(int *)this;
  }
  return iVar3;
}


