/* FUN_004b57b6 - 0x004b57b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b57b6(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_00457cda(uVar1);
  (**(code **)(*param_1 + 0x44))(param_2);
  return;
}


