/* FUN_51807ca2 - 0x51807ca2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51807ca2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4));
  }
  return;
}


