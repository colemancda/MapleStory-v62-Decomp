/* FUN_5080d697 - 0x5080d697 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080d697(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_5080dfed(0x80004003);
  }
  FUN_5080d6b4(*(int **)(param_1 + 0x1c));
  return;
}


