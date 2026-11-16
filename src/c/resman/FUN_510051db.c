/* FUN_510051db - 0x510051db in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 * __thiscall FUN_510051db(void *this,wchar_t *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  piVar1 = FUN_5100520f(param_1);
  *(int **)this = piVar1;
  if ((piVar1 == (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    FUN_5100581a(0x8007000e);
  }
  return this;
}


