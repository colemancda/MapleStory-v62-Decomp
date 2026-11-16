/* FUN_50c053d0 - 0x50c053d0 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c053d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_50c1084c(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


