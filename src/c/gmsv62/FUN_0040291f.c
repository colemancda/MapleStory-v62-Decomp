/* FUN_0040291f - 0x0040291f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0040291f(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(*(int *)(param_1 + 4) + 4));
  if (LVar1 == 0) {
    InterlockedIncrement((LONG *)(*(int *)(param_1 + 4) + 4));
    FUN_0040294d(*(undefined4 *)(param_1 + 4));
  }
  return;
}


