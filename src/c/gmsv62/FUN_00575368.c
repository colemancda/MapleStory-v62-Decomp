/* FUN_00575368 - 0x00575368 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00575368(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 100) + 0x104)) {
    piVar2 = (int *)(param_1 + 0x32e8);
    do {
      if (*piVar2 != 0) {
        FUN_0043fd71();
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(*(int *)(param_1 + 100) + 0x104));
  }
  FUN_008162ff();
  return;
}


