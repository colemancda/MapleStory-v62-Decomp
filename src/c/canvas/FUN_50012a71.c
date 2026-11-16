/* FUN_50012a71 - 0x50012a71 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall FUN_50012a71(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_50012c97(0x80004003);
  }
  piVar1 = *(int **)((int)this + 0x20);
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1);
  if (iVar2 < 0) {
    FUN_50012ca5(iVar2,piVar1,&DAT_500195b0);
  }
  return;
}


