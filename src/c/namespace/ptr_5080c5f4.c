/* ptr_5080c5f4 - 0x5080c5f4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall ptr_5080c5f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_5080c4b8(param_1);
  (**(code **)(*piVar1 + 0x14))(param_2,param_3);
  return;
}


