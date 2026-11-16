/* FUN_51004d80 - 0x51004d80 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __thiscall FUN_51004d80(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)(iVar1 + param_1 * 4);
  iVar3 = *(int *)(param_2 * 4 + iVar1);
  *(int *)(iVar1 + param_1 * 4) = iVar3;
  *(int *)((-(uint)(iVar3 != 0) & iVar3 - 0x10U) + 4) = param_1;
  *(int *)(*(int *)((int)this + 0x10) + param_2 * 4) = iVar2;
  *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4) = param_2;
  return;
}


