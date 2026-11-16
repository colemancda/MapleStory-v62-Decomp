/* ptr_51405138 - 0x51405138 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __thiscall ptr_51405138(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_51404f95(param_1);
  (**(code **)(*piVar1 + 0x1c))(param_2,param_3);
  return;
}


