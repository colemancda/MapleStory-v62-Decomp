/* FUN_5100192b - 0x5100192b in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


LONG FUN_5100192b(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_51001852();
    FUN_51001bce(&DAT_510097f0,param_1);
  }
  return LVar1;
}


