/* FUN_0051c073 - 0x0051c073 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0051c073(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042459a();
  *(int *)(param_1 + 0x380) = iVar1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x380) = *(int *)(DAT_00978134 + 0x18);
  }
  return;
}


