/* FUN_004030b1 - 0x004030b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


LONG __fastcall FUN_004030b1(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 8));
  if (LVar1 == 0) {
    if (param_1 != 0) {
      FUN_0040316a();
      FUN_00402b41(param_1);
    }
    LVar1 = 0;
  }
  else {
    LVar1 = *(LONG *)(param_1 + 8);
  }
  return LVar1;
}


