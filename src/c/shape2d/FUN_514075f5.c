/* FUN_514075f5 - 0x514075f5 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_514075f5(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  FUN_5140126a();
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + param_1;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + param_2;
  *(undefined4 *)((int)this + 0x54) = 0;
  piVar1 = (int *)((int)this + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return;
}


