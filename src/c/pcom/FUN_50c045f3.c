/* FUN_50c045f3 - 0x50c045f3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c045f3(int param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 0x10U);
  lpAddend = puVar2 + 1;
  LVar1 = InterlockedDecrement(lpAddend);
  if (LVar1 == 0) {
    InterlockedIncrement(lpAddend);
    FUN_50c03ec8(puVar2);
  }
  return;
}


