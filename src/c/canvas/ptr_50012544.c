/* ptr_50012544 - 0x50012544 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __thiscall ptr_50012544(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_500123a1(param_1);
  (**(code **)(*piVar1 + 0x1c))(param_2,param_3);
  return;
}


