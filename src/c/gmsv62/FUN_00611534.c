/* FUN_00611534 - 0x00611534 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00611534(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 400);
  if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) < 4)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
    }
    iVar2 = iVar2 + -2;
  }
  FUN_004ad003(iVar2);
  return;
}


