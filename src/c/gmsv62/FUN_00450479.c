/* FUN_00450479 - 0x00450479 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00450479(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)((-(uint)(iVar1 != 0) & iVar1 + 8U) + 4));
  }
  return;
}


