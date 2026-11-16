/* FUN_50c05fa6 - 0x50c05fa6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __thiscall FUN_50c05fa6(void *this,wchar_t *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  piVar1 = FUN_50c05fda(param_1);
  *(int **)this = piVar1;
  if ((piVar1 == (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    FUN_50c101c4(0x8007000e);
  }
  return this;
}


