/* FUN_5180194f - 0x5180194f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180194f(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_51801991(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_51802391();
  *(undefined4 *)(iVar1 + 4) = 1;
  *(uint *)(param_1 + 4) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  return;
}


