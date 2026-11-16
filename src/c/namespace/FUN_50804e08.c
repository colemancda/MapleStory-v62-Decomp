/* FUN_50804e08 - 0x50804e08 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50804e08(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = &PTR_LAB_508177c4;
  iVar1 = *param_1;
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  Ordinal_8((int)this + 0x10);
  *(undefined ***)this = &PTR_FUN_508177c0;
  return this;
}


