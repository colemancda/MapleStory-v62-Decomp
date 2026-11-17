/* FUN_004aacfd - 0x004aacfd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004aacfd(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004aaac3(param_2,param_3);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(*(undefined4 *)(param_1 + 0x14),900,0);
  FUN_004aa5f9(0,0,0);
  FUN_004b3daf();
  return;
}


