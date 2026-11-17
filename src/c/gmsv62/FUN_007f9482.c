/* FUN_007f9482 - 0x007f9482 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f9482(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x240) != 0) {
    uVar1 = FUN_004133f0();
    iVar2 = uVar1 % 3000 + 3000;
    if (iVar2 < *(int *)(param_1 + 0x248)) {
      *(int *)(param_1 + 0x248) = iVar2;
    }
  }
  return;
}


