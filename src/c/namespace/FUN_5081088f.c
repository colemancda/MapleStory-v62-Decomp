/* FUN_5081088f - 0x5081088f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_5081088f(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = &PTR_LAB_50818bf4;
  iVar1 = *param_1;
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_FUN_50818bf0;
  return this;
}


