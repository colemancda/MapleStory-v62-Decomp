/* ptr_004b6248 - 0x004b6248 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_004b6248(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_0045f03e(param_2 + 0x35,*(undefined4 *)(param_2 + 0x37));
  uVar1 = FUN_004b8c01();
  *(undefined4 *)(param_1 + 0x37) = uVar1;
  FUN_0045f084(param_2 + 0x3b,*(undefined4 *)(param_2 + 0x3f));
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x3f) = uVar1;
  FUN_0045f03e(param_2 + 0x43,*(undefined4 *)(param_2 + 0x45));
  uVar1 = FUN_004b8c01();
  *(undefined4 *)(param_1 + 0x45) = uVar1;
  FUN_0045f084(param_2 + 0x49,*(undefined4 *)(param_2 + 0x4d));
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x4d) = uVar1;
  FUN_004b8d24(param_2 + 0x51,*(undefined4 *)(param_2 + 0x55));
  uVar1 = FUN_004b8d93();
  *(undefined4 *)(param_1 + 0x55) = uVar1;
  return;
}


