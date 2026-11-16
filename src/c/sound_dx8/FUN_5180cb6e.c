/* FUN_5180cb6e - 0x5180cb6e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


LONG FUN_5180cb6e(int *param_1)

{
  LONG LVar1;
  
  LVar1 = FUN_51809c1e();
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x34))(1);
  }
  return LVar1;
}


