/* FUN_004b62ee - 0x004b62ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b62ee(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_004b5a10(param_2);
  FUN_00457fa0(param_1 + 0x28,0xd);
  uVar1 = FUN_0045f03e(param_1 + 0x35,*(undefined4 *)(param_1 + 0x37));
  FUN_00457cda(uVar1);
  uVar2 = FUN_0045f084(param_1 + 0x3b,*(undefined4 *)(param_1 + 0x3f));
  FUN_0045d247(uVar2);
  uVar1 = FUN_0045f03e(param_1 + 0x43,*(undefined4 *)(param_1 + 0x45));
  FUN_00457cda(uVar1);
  FUN_00457fa0(param_1 + 0x59,8);
  uVar2 = FUN_0045f084(param_1 + 0x49,*(undefined4 *)(param_1 + 0x4d));
  FUN_0045d247(uVar2);
  uVar2 = FUN_004b8d24(param_1 + 0x51,*(undefined4 *)(param_1 + 0x55));
  FUN_0045d247(uVar2);
  return;
}


