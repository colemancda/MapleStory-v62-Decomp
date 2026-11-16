/* FUN_5080251c - 0x5080251c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080251c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_508032a9(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_508045b2();
  *(undefined4 *)(iVar1 + 4) = 1;
  *(uint *)(param_1 + 4) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  return;
}


