/* FUN_51407e88 - 0x51407e88 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __thiscall FUN_51407e88(void *this,undefined4 param_1)

{
  int *piVar1;
  
  FUN_5140126a();
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = param_1;
  piVar1 = (int *)((int)this + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}


