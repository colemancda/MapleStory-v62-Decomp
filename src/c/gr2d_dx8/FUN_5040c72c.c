/* FUN_5040c72c - 0x5040c72c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_5040c72c(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  FUN_50401895();
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x14) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


