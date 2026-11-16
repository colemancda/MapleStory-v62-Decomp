/* FUN_510053b4 - 0x510053b4 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined2 * __thiscall FUN_510053b4(void *this,wchar_t *param_1)

{
  int *piVar1;
  
  *(undefined2 *)this = 8;
  piVar1 = FUN_5100520f(param_1);
  *(int **)((int)this + 8) = piVar1;
  if ((piVar1 == (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    FUN_5100581a(0x8007000e);
  }
  return this;
}


