/* FUN_004fa81e - 0x004fa81e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004fa81e(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0042452b();
  iVar1 = FUN_0042459a();
  iVar2 = FUN_007d1e08();
  iVar2 = iVar2 + iVar1 * 1000;
  *(int *)(param_1 + 0x748) = iVar2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x748) = 1;
  }
  return;
}


