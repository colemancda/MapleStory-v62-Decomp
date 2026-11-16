/* FUN_50006620 - 0x50006620 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * __thiscall FUN_50006620(void *this,int param_1,char param_2)

{
  uint *puVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  if ((param_2 == '\0') || (param_1 == 0)) {
    *(int *)this = param_1;
  }
  else {
    puVar1 = FUN_50006662(param_1,*(uint *)(param_1 + -4));
    *(uint **)this = puVar1;
    if (puVar1 == (uint *)0x0) {
      FUN_50012c97(0x8007000e);
    }
  }
  return this;
}


