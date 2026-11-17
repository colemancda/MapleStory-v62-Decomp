/* FUN_006916c0 - 0x006916c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006916c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xf0) < 6) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf0) + -4;
  }
  FUN_004ad003(iVar1);
  iVar1 = *(int *)(param_1 + 0xd0);
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


