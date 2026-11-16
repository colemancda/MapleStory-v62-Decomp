/* FUN_50c0b77a - 0x50c0b77a in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0b77a(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  while (uVar2 != 0) {
    iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
    this_00 = (void *)FUN_50c0b92b(this);
    FUN_50c0dbf1(this_00,uVar2);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  return;
}


