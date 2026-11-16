/* FUN_50c0dc53 - 0x50c0dc53 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0dc53(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4));
  }
  return;
}


