/* ptr_500124dd - 0x500124dd in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall ptr_500124dd(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_500123a1(param_1);
  (**(code **)(*piVar1 + 0x14))(param_2,param_3);
  return;
}


