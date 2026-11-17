/* FUN_006c47ee - 0x006c47ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006c47ee(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iStack_14 = 0x6c480e;
    iVar2 = FUN_0045e2eb();
    iVar2 = iVar2 / 10000;
    if ((((iVar2 == 200) || (iVar2 == 0xc9)) || (iVar2 == 0xca)) ||
       (((iVar2 == 0xcd || (iVar2 == 0xdd)) || ((iVar2 == 0xec || (iVar2 == 0xee)))))) {
      iStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 10000;
      FUN_00679d22(&uStack_24,0xd15);
      FUN_007db3ad();
    }
    iStack_14 = param_2;
    uStack_18 = 0x6c4875;
    FUN_00609b69();
    *(undefined4 *)(param_1 + 0x578) = param_3;
    iStack_14 = 0;
    *(undefined4 *)(param_1 + 0x57c) = param_4;
    uStack_18 = 0x6c488f;
    FUN_008161f1();
    uVar1 = 1;
  }
  return uVar1;
}


