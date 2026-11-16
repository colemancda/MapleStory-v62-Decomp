/* FUN_50c035e7 - 0x50c035e7 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


LONG FUN_50c035e7(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_50c0355f(param_1);
    FUN_50c02783(&DAT_50c21310,param_1);
  }
  return LVar1;
}


