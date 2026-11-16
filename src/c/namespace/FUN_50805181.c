/* FUN_50805181 - 0x50805181 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50805181(void *this,wchar_t *param_1)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  piVar1 = FUN_508051b5(param_1);
  *(int **)this = piVar1;
  if ((piVar1 == (int *)0x0) && (param_1 != (wchar_t *)0x0)) {
    FUN_5080dfed(0x8007000e);
  }
  return this;
}


