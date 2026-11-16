/* FUN_50c09796 - 0x50c09796 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c09796(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_50c101c4(0x80004003);
  }
  FUN_50c0976f(*(int **)(param_1 + 0x20));
  return;
}


