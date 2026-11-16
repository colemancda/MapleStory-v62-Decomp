/* FUN_500119b0 - 0x500119b0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_500119b0(void *this,int param_1,int param_2)

{
  if (param_2 == 0) {
    *(int *)((int)this + 0xc) = param_1;
  }
  else {
    if (param_2 != 1) {
      param_2 = 0x57;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&param_2,(ThrowInfo *)&DAT_50016da8);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
  }
  return;
}


