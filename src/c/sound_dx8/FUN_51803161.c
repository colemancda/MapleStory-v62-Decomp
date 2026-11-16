/* FUN_51803161 - 0x51803161 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51803161(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(*(int *)(param_1 + 4) + 4));
  if (LVar1 == 0) {
    InterlockedIncrement((LONG *)(*(int *)(param_1 + 4) + 4));
    FUN_51801982(*(undefined4 **)(param_1 + 4));
  }
  return;
}


