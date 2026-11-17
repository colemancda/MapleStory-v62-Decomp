/* FUN_00833302 - 0x00833302 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00833302(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x588) + 1) % *(int *)(*(int *)(param_1 + 0x57c) + 0x48);
  *(int *)(param_1 + 0x588) = iVar1;
  FUN_004b2699(iVar1);
  return;
}


