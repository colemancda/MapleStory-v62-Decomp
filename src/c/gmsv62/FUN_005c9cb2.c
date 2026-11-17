/* FUN_005c9cb2 - 0x005c9cb2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005c9cb2(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(*(int *)(param_1 + 0x15c) + 0x1f0)) {
    iVar1 = _rand();
    return iVar1 % *(int *)(*(int *)(param_1 + 0x15c) + 0x1f0) + 6;
  }
  return -1;
}


