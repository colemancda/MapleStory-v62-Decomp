/* FUN_51802f4b - 0x51802f4b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


LONG FUN_51802f4b(int param_1)

{
  int *piVar1;
  LONG LVar2;
  
  FUN_518017b5();
  LVar2 = InterlockedIncrement((LONG *)(param_1 + 4));
  if (*(LONG *)(param_1 + 4) == 2) {
    InterlockedIncrement(&DAT_5181f8a0);
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return LVar2;
}


