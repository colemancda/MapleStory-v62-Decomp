/* FUN_500059fc - 0x500059fc in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void * __thiscall FUN_500059fc(void *this,int *param_1)

{
  FUN_50006469(this,param_1);
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  return this;
}


