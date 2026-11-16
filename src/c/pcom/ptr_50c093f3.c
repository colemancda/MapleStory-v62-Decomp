/* ptr_50c093f3 - 0x50c093f3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall ptr_50c093f3(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_50c09250(param_1);
  (**(code **)(*piVar1 + 0x1c))(param_2,param_3);
  return;
}


