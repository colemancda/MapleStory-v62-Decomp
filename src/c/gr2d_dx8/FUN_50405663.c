/* FUN_50405663 - 0x50405663 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_50405663(void *this,void *param_1)

{
  memmove(param_1,(void *)((int)param_1 + 0x5c),
          (((*(int *)(*(int *)this + -4) * 0x5c - (int)param_1) + -0x5c + *(int *)this) / 0x5c) *
          0x5c);
  *(int *)(*(int *)this + -4) = *(int *)(*(int *)this + -4) + -1;
  return;
}


