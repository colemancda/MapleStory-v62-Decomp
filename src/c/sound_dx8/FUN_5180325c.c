/* FUN_5180325c - 0x5180325c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


LONG FUN_5180325c(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_51803226(param_1);
    FUN_51801ac1(&DAT_5181fdb0,param_1);
  }
  return LVar1;
}


