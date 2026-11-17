/* FUN_0058e780 - 0x0058e780 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0058e780(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x7c)) {
    do {
      FUN_004991c5(0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x7c));
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x7c))) {
    FUN_004991c5(1);
  }
  return;
}


