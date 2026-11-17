/* FUN_006bc926 - 0x006bc926 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006bc926(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x584) + 0x28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
  }
  FUN_004ad003(iVar1 + -3);
  iVar1 = iVar1 + -4;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  FUN_004acfe9(iVar1);
  return;
}


