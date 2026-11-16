/* FUN_5080937e - 0x5080937e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_5080937e(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  while (piVar2 != (int *)0x0) {
    iVar1 = *(int *)((-(uint)(piVar2 != (int *)0x0) & (uint)(piVar2 + -4)) + 4);
    this_00 = (void *)FUN_50808827(this);
    FUN_50803d5b(this_00,piVar2);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0x10U);
  }
  return;
}


