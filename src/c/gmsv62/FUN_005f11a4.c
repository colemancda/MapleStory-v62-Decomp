/* FUN_005f11a4 - 0x005f11a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005f11a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_2;
  local_c = param_1;
  iVar1 = FUN_004371d2(&local_8,&local_c);
  if ((iVar1 == 0) || (local_c == 0)) {
    iVar1 = FUN_005f17a1();
    uVar2 = FUN_0042459a();
    uVar2 = FUN_005f3a71(uVar2);
    uVar2 = FUN_005e8fa1(uVar2);
    FUN_005f16b3(uVar2);
    *(undefined1 *)(iVar1 + 0x18) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
    FUN_004d4ac9(&param_2,(undefined4 *)(iVar1 + 0x14));
    FUN_005e93b5(param_2,param_3);
    FUN_005ea669(1);
  }
  else if ((*(byte *)(local_c + 0x18) & 2) == 0) {
    *(byte *)(local_c + 0x18) = *(byte *)(local_c + 0x18) | 2;
    FUN_005ea669(1);
  }
  return;
}


