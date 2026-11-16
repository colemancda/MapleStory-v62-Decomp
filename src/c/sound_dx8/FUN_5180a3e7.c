/* FUN_5180a3e7 - 0x5180a3e7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_5180a3e7(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_51803161(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_5180a44d();
  *(undefined4 *)(iVar1 + 4) = 1;
  *(int *)(param_1 + 4) = iVar1;
  return;
}


