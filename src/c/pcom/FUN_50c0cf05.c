/* FUN_50c0cf05 - 0x50c0cf05 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0cf05(void *this,int param_1)

{
  void *this_00;
  
  this_00 = (void *)FUN_50c0deff((void *)((int)this + 0x3c));
  FUN_50c0dbf1(this_00,param_1);
  *(void **)(*(int *)(param_1 + 4) + 0x28) = this_00;
  FUN_50c0dd18();
  return;
}


