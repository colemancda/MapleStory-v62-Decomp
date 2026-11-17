/* FUN_004ad01d - 0x004ad01d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004ad01d(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) < 2) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else if (-1 < *(int *)(param_1 + 0x38)) {
    iVar1 = *(int *)(param_1 + 0x3c) + -1;
    if (iVar1 < *(int *)(param_1 + 0x38)) {
      *(int *)(param_1 + 0x38) = iVar1;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


