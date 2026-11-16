/* FUN_508026bf - 0x508026bf in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


LONG FUN_508026bf(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_508025ca();
    FUN_50803c7e(&DAT_5081e9e0,param_1);
  }
  return LVar1;
}


