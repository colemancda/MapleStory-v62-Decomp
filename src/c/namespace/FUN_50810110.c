/* FUN_50810110 - 0x50810110 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall FUN_50810110(void *this,int *param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  if (*param_1 != 0) {
    iVar1 = FUN_50810ca5(this,param_1);
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      FUN_5080dfed(iVar1);
    }
  }
  return this;
}


