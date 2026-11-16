/* FUN_51404c3e - 0x51404c3e in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall FUN_51404c3e(void *this,int *param_1)

{
  if ((*(byte *)((int)this + 8) & 8) == 0) {
    FUN_5140530b(this,param_1);
  }
  else {
    FUN_514053b2(this,*param_1);
  }
  return;
}


