/* FUN_007e7e7d - 0x007e7e7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007e7e7d(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_005f3a71(*(int *)(param_1 + 0x98));
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) != 0)) && (*(int *)(param_1 + 0x114) != 0)) {
      FUN_0043fd71();
    }
  }
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x690) == 0)) {
    *(int *)(param_1 + 0x68c) = *(int *)(param_1 + 0x68c) + 1;
    FUN_008161f1(0);
  }
  return;
}


