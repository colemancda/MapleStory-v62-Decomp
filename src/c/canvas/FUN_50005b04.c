/* FUN_50005b04 - 0x50005b04 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int __thiscall FUN_50005b04(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  FUN_50005b3c(this);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = FUN_500023f6();
    *(uint **)this = puVar2 + 1;
    *puVar2 = param_1;
    iVar1 = *(int *)this;
  }
  return iVar1;
}


