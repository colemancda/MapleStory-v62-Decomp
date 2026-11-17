/* FUN_00773206 - 0x00773206 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00773206(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  if (*(int *)(param_1 + 0x1c) <= iVar1) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}


