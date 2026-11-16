/* FUN_508040b6 - 0x508040b6 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


LONG __fastcall FUN_508040b6(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_508041e2(param_1);
      FUN_50803c7e(&DAT_5081e9e0,param_1);
    }
    LVar1 = 0;
  }
  else {
    LVar1 = param_1[2];
  }
  return LVar1;
}


