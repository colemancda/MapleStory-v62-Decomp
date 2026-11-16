/* FUN_5080d8fe - 0x5080d8fe in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080d8fe(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_5080dfed(0x80004003);
  }
  FUN_5080d530(*(int **)(param_1 + 0x20));
  return;
}


