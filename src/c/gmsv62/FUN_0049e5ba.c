/* FUN_0049e5ba - 0x0049e5ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0049e5ba(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_0049e52b();
  *(undefined4 *)(param_1 + 0x60) = param_2;
  FUN_004b3daf();
  uVar1 = FUN_0049e5a8(*(undefined4 *)(param_1 + 0x60));
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(*(undefined4 *)(param_1 + 0x14),600,uVar1);
  return;
}


