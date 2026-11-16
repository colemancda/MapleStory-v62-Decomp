/* FUN_51403baa - 0x51403baa in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51403baa(void *this,int *param_1)

{
  if (*param_1 < *(int *)((int)this + 0x24)) {
    *(int *)((int)this + 0x24) = *param_1;
  }
  if (*(int *)((int)this + 0x2c) < param_1[2]) {
    *(int *)((int)this + 0x2c) = param_1[2];
  }
  if (param_1[1] < *(int *)((int)this + 0x28)) {
    *(int *)((int)this + 0x28) = param_1[1];
  }
  if (*(int *)((int)this + 0x30) < param_1[3]) {
    *(int *)((int)this + 0x30) = param_1[3];
  }
  return;
}


