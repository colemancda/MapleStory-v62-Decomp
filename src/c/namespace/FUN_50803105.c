/* FUN_50803105 - 0x50803105 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_50803105(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_508032a9(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


