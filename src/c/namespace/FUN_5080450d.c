/* FUN_5080450d - 0x5080450d in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_5080450d(void *this,undefined4 param_1,int *param_2,char param_3)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(int **)((int)this + 8) = param_2;
  *(undefined ***)this = &PTR_FUN_50818d30;
  if ((param_2 != (int *)0x0) && (param_3 != '\0')) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return this;
}


