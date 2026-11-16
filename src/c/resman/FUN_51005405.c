/* FUN_51005405 - 0x51005405 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


short * __thiscall FUN_51005405(void *this,short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_51005067(this,param_1);
  if (iVar1 < 0) {
    FUN_5100581a(iVar1);
  }
  return this;
}


