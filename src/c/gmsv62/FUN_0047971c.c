/* FUN_0047971c - 0x0047971c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0047971c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 / 1000 + *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1 / 0x3c;
  *(int *)(param_1 + 0xc) = iVar1 % 0x3c;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) / 0x3c;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) % 0x3c;
  *(int *)(param_1 + 4) = iVar1 % 0x18;
  return iVar1 / 0x18;
}


