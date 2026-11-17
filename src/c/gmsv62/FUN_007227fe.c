/* FUN_007227fe - 0x007227fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007227fe(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 0x580) + 0x48) != 0) {
    iVar1 = FUN_00722abd(0);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      if (*(int *)(iVar1 + 8) != 0) {
        iVar2 = *(int *)(*(int *)(iVar1 + 8) + -4);
      }
      iVar2 = iVar2 + -3;
    }
  }
  FUN_004ad003(iVar2);
  return;
}


