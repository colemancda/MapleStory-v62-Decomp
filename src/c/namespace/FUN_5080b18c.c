/* FUN_5080b18c - 0x5080b18c in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __fastcall FUN_5080b18c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4));
  }
  return;
}


