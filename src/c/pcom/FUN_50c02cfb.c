/* FUN_50c02cfb - 0x50c02cfb in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


LONG FUN_50c02cfb(int param_1)

{
  int *piVar1;
  LONG LVar2;
  
  FUN_50c026fc();
  LVar2 = InterlockedIncrement((LONG *)(param_1 + 4));
  if (*(LONG *)(param_1 + 4) == 2) {
    InterlockedIncrement(&DAT_50c1ca34);
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return LVar2;
}


