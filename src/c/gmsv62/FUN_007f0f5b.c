/* FUN_007f0f5b - 0x007f0f5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007f0f5b(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)(param_1 + 0x140);
  FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  FUN_004f1993(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60));
  FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
  uVar1 = FUN_0048bb31(param_1 + 0x11c,*(undefined4 *)(param_1 + 0x124));
  uVar6 = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    if (*(int *)(param_1 + 0x118) != 0) {
      uVar6 = 0xf;
    }
  }
  else {
    uVar6 = 0x11;
  }
  uVar2 = __ftol(uVar7,param_2);
  uVar3 = __ftol(uVar2);
  uVar4 = __ftol(uVar3);
  uVar5 = __ftol(uVar4);
  FUN_005e475b(uVar6,*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118),uVar1,uVar5,
               uVar4,uVar3,uVar2,uVar7,param_2);
  return;
}


