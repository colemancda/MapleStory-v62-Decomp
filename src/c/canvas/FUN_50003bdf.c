/* FUN_50003bdf - 0x50003bdf in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50003bdf(int *param_1)

{
  void *pvVar1;
  void *this;
  
  this = (void *)*param_1;
  if (this != (void *)0x0) {
    pvVar1 = (void *)((int)this + *(int *)((int)this + -4) * 4);
    for (; this < pvVar1; this = (void *)((int)this + 4)) {
      FUN_500040c1(this,0);
    }
    FUN_5000257e(&DAT_50081f98,(undefined4 *)(*param_1 + -4));
    *param_1 = 0;
  }
  return;
}


