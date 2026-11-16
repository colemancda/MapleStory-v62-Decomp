/* FUN_5040cb78 - 0x5040cb78 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_5040cb78(void *this,int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    *(int *)((int)this + 0x10) = param_1;
  }
  uVar1 = 0xffffffff;
  if (*(int *)((int)this + 0x10) != -1) {
    uVar1 = (uint)(*(int *)((int)this + 8) * *(int *)((int)this + 0x10)) >> 7;
  }
  *(uint *)((int)this + 0x14) = uVar1;
  return;
}


