/* FUN_50c02a85 - 0x50c02a85 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


LONG __fastcall FUN_50c02a85(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_50c02ab6(param_1);
      FUN_50c02783(&DAT_50c21310,param_1);
    }
    LVar1 = 0;
  }
  else {
    LVar1 = param_1[2];
  }
  return LVar1;
}


