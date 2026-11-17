/* FUN_005f1584 - 0x005f1584 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005f1584(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = FUN_0042459a();
  local_8 = local_c;
  iVar1 = FUN_004371d2(&local_c,&local_10);
  if ((iVar1 == 0) || (local_10 == 0)) {
    iVar1 = FUN_005f17a1();
    uVar2 = FUN_0042459a();
    uVar2 = FUN_005f3a71(uVar2);
    uVar2 = FUN_005e8fa1(uVar2);
    FUN_005f16b3(uVar2);
    *(undefined1 *)(iVar1 + 0x18) = 1;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x2c);
    FUN_004d4ac9(&local_8,(undefined4 *)(iVar1 + 0x14));
    FUN_005e93b5(local_8,param_2);
  }
  else {
    *(byte *)(local_10 + 0x18) = *(byte *)(local_10 + 0x18) | 1;
  }
  return;
}


