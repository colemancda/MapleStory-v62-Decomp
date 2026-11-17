/* FUN_0066a3d0 - 0x0066a3d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0066a3d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00879c20(param_1 + 4,param_2 + 0x118,0x20);
  uVar1 = FUN_00413367(param_2 + 0xb8,*(undefined4 *)(param_2 + 0xc0));
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xd0,*(undefined4 *)(param_2 + 0xd8));
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00413367(param_2 + 0xe8,*(undefined4 *)(param_2 + 0xf0));
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_00413367(param_2 + 0x94,*(undefined4 *)(param_2 + 0x9c));
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}


