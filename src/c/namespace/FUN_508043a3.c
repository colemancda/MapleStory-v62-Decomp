/* FUN_508043a3 - 0x508043a3 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


short * __thiscall FUN_508043a3(void *this,short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_50803aab(this,param_1);
  if (iVar1 < 0) {
    FUN_5080dfed(iVar1);
  }
  return this;
}


