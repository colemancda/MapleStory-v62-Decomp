/* FUN_50011e65 - 0x50011e65 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __thiscall FUN_50011e65(void *this,wchar_t *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  piVar1 = FUN_50011d2b(param_1);
  *(int **)this = piVar1;
  if ((piVar1 == (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    FUN_50012c97(0x8007000e);
  }
  return this;
}


