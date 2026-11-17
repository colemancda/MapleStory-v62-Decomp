/* FUN_004a2946 - 0x004a2946 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a2946(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a275b(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  FUN_004a2298(0,0,0);
  FUN_004b3daf();
  return;
}


