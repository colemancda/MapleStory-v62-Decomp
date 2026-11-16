/* FUN_51801991 - 0x51801991 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51801991(int param_1)

{
  LONG *lpAddend;
  LONG LVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(-(uint)(*(int *)(param_1 + 4) != 0) & *(int *)(param_1 + 4) - 0x10U);
  lpAddend = puVar2 + 1;
  LVar1 = InterlockedDecrement(lpAddend);
  if (LVar1 == 0) {
    InterlockedIncrement(lpAddend);
    FUN_51801982(puVar2);
  }
  return;
}


