/* ptr_5080e6a0 - 0x5080e6a0 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * __thiscall ptr_5080e6a0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 2) == 0) {
    FUN_5080e6f4();
    puVar1 = param_1;
    if ((param_2 & 1) != 0) {
      FUN_50803c7e(&DAT_5081e9e0,param_1);
    }
  }
  else {
    puVar1 = param_1 + -1;
    FUN_5080e15c(param_1,0x40,param_1[-1],FUN_5080e6f4);
    if ((param_2 & 1) != 0) {
      FUN_50803c7e(&DAT_5081e9e0,puVar1);
    }
  }
  return puVar1;
}


