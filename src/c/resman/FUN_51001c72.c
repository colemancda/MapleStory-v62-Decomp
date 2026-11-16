/* FUN_51001c72 - 0x51001c72 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int __thiscall FUN_51001c72(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  FUN_51001c50(this);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = FUN_51001acd();
    *(uint **)this = puVar2 + 1;
    *puVar2 = param_1;
    iVar1 = *(int *)this;
  }
  return iVar1;
}


