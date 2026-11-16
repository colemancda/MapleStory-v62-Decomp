/* FUN_510011ac - 0x510011ac in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


LONG FUN_510011ac(int param_1)

{
  int *piVar1;
  LONG LVar2;
  
  FUN_510011e9();
  LVar2 = InterlockedIncrement((LONG *)(param_1 + 4));
  if (*(LONG *)(param_1 + 4) == 2) {
    InterlockedIncrement(&DAT_510092e4);
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return LVar2;
}


