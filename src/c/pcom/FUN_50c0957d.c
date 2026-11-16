/* FUN_50c0957d - 0x50c0957d in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0957d(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_50c101c4(0x80004003);
  }
  FUN_50c08650(*(int **)(param_1 + 0x1c));
  return;
}


