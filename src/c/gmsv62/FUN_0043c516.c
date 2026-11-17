/* FUN_0043c516 - 0x0043c516 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0043c516(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + param_2 * 4);
  iVar3 = *(int *)(param_3 * 4 + iVar1);
  *(int *)(iVar1 + param_2 * 4) = iVar3;
  *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4) = param_2;
  *(int *)(*(int *)(param_1 + 0x10) + param_3 * 4) = iVar2;
  *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4) = param_3;
  return;
}


