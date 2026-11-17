/* FUN_00646ff3 - 0x00646ff3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00646ff3(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xc0;
  if (*(int *)(*(int *)(param_1 + 0x94) + 0x3c) == 0) {
    iVar1 = param_1 + 0xbc;
  }
  return iVar1;
}


