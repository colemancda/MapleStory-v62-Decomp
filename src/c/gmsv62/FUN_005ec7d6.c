/* FUN_005ec7d6 - 0x005ec7d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_005ec7d6(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x140) = *(int *)(iVar1 + 0x20) + *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x144) = *(int *)(iVar1 + 0x24) + *(int *)(param_1 + 0x134);
  *(int *)(param_1 + 0x148) = *(int *)(iVar1 + 0x28) + *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 0x14c) = *(int *)(iVar1 + 0x2c) + *(int *)(param_1 + 0x134);
  return param_1 + 0x140;
}


