/* FUN_50003c6f - 0x50003c6f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_50003c6f(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  FUN_500024f7();
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x14) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


