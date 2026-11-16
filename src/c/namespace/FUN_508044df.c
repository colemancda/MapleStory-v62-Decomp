/* FUN_508044df - 0x508044df in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_508044df(void *this,undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_508037a7(this);
  if (iVar1 < 0) {
    FUN_5080dfed(iVar1);
  }
  memcpy(this,param_1,0x10);
  *param_1 = 0;
  return;
}


