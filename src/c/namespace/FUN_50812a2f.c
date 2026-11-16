/* FUN_50812a2f - 0x50812a2f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50812a2f(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = &PTR_LAB_50818c7c;
  iVar1 = *param_1;
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_FUN_50818c78;
  return this;
}


