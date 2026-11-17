/* FUN_00414f29 - 0x00414f29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00414f29(int *param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  
  if (*param_1 != 0) {
    lpAddend = (LONG *)(*param_1 + -0xc);
    LVar1 = InterlockedDecrement(lpAddend);
    if (LVar1 < 1) {
      FUN_0041c438(lpAddend);
    }
    *param_1 = 0;
  }
  return;
}


