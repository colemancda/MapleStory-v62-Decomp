/* FUN_51402860 - 0x51402860 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51402860(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  FUN_5140126a();
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x14) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


