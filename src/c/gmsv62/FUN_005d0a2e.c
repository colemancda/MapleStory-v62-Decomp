/* FUN_005d0a2e - 0x005d0a2e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005d0a2e(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xe8) + 8);
    if (iVar1 != 0) {
      FUN_0048bbbd(iVar1);
    }
    FUN_005d142e(*(undefined4 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}


