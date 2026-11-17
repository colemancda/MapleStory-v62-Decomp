/* FUN_00811e74 - 0x00811e74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00811e74(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) < 6)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
    }
    iVar2 = iVar2 + -4;
  }
  FUN_004ad003(iVar2);
  iVar1 = *(int *)(param_1 + 0xac);
  if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) < 5)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
    }
    iVar2 = iVar2 + -3;
  }
  FUN_004ad003(iVar2);
  return;
}


