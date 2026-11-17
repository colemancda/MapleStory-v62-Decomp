/* FUN_0040298a - 0x0040298a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0040298a(int param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  uint uVar2;
  
  uVar2 = -(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 0x10U;
  lpAddend = (LONG *)(uVar2 + 4);
  LVar1 = InterlockedDecrement(lpAddend);
  if (LVar1 == 0) {
    InterlockedIncrement(lpAddend);
    FUN_0040294d(uVar2);
  }
  return;
}


