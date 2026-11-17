/* FUN_0051c099 - 0x0051c099 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0051c099(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042459a();
  *(int *)(param_1 + 900) = iVar1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 900) = *(int *)(DAT_00978134 + 0x1c);
  }
  return;
}


