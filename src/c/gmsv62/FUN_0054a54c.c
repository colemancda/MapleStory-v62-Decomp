/* FUN_0054a54c - 0x0054a54c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0054a54c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d1e08();
  if (0x96 < iVar1 - *(int *)(param_1 + 0xa4)) {
    *(int *)(param_1 + 0xa4) = iVar1;
    FUN_008161f1(0);
  }
  return;
}


