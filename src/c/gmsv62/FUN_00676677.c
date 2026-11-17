/* FUN_00676677 - 0x00676677 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00676677(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xac) < 6) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac) + -4;
  }
  FUN_004ad003(iVar1);
  return;
}


