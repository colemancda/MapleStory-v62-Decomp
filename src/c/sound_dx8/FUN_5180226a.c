/* FUN_5180226a - 0x5180226a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180226a(int param_1)

{
  LONG LVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  LVar1 = InterlockedExchange((LONG *)(param_1 + 8),0);
  if (LVar1 != 0) {
    (*DAT_5181f9c0)(LVar1);
  }
  return;
}


