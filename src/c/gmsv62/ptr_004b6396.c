/* ptr_004b6396 - 0x004b6396 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004b6396(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004b5a68(param_2);
  FUN_004245d2(param_1 + 0x28,0xd);
  FUN_0042452b();
  uVar1 = FUN_004b8c01();
  *(undefined4 *)(param_1 + 0x37) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x3f) = uVar1;
  FUN_0042452b();
  uVar1 = FUN_004b8c01();
  *(undefined4 *)(param_1 + 0x45) = uVar1;
  FUN_004245d2(param_1 + 0x59,8);
  FUN_00424561();
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x4d) = uVar1;
  FUN_00424561();
  uVar1 = FUN_004b8d93();
  *(undefined4 *)(param_1 + 0x55) = uVar1;
  return;
}


