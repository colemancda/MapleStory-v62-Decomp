/* FUN_004aa461 - 0x004aa461 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004aa461(int param_1)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      ((iVar1 = *(int *)(param_1 + 0x44), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4))) &&
      (*(int *)(iVar1 + uVar2 * 4) <= *(int *)(param_1 + 0x40))); uVar2 = uVar2 + 1) {
  }
  return uVar2 - 1;
}


