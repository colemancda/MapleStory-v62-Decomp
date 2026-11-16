/* FUN_5080fd4e - 0x5080fd4e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_5080fd4e(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  FUN_50805dff(this);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = FUN_50803b07();
    *(uint **)this = puVar2 + 1;
    *puVar2 = param_1;
    iVar1 = *(int *)this;
  }
  return iVar1;
}


