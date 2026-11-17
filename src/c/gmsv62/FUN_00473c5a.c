/* FUN_00473c5a - 0x00473c5a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00473c5a(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00473cbe(param_2);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  iVar2 = *(int *)((-(uint)(iVar1 != 0) & iVar1 - 0x10U) + 4);
  *(uint *)(param_1 + 0x20) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
  FUN_00473ce6(iVar1);
  return;
}


