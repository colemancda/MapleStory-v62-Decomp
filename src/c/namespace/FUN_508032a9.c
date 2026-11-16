/* FUN_508032a9 - 0x508032a9 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_508032a9(int param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 0x10U);
  lpAddend = puVar2 + 1;
  LVar1 = InterlockedDecrement(lpAddend);
  if (LVar1 == 0) {
    InterlockedIncrement(lpAddend);
    FUN_5080254f(puVar2);
  }
  return;
}


