/* FUN_004aa4e2 - 0x004aa4e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004aa4e2(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 200) != 0) {
    iVar1 = FUN_004aa480();
    FUN_004ad003((iVar1 - *(int *)(param_1 + 0x90)) + 1);
    iVar2 = FUN_004aa461();
    iVar1 = *(int *)(*(int *)(param_1 + 200) + 0x38);
    if (iVar2 < iVar1 + *(int *)(param_1 + 0x90)) {
      if (*(int *)(param_1 + 0x48) <= iVar2) {
        return;
      }
      iVar2 = (iVar1 - *(int *)(param_1 + 0x48)) + iVar2;
    }
    else {
      iVar2 = (iVar2 - *(int *)(param_1 + 0x90)) + 1;
    }
    FUN_004acfe9(iVar2);
    FUN_004aa48c(*(undefined4 *)(*(int *)(param_1 + 200) + 0x38));
  }
  return;
}


