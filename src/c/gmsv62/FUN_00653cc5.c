/* FUN_00653cc5 - 0x00653cc5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00653cc5(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1 + 0x39;
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0x137);
  if (iVar2 != 0) {
    if (param_2 == 1) {
      return 0x2f785a;
    }
    if (param_2 == 2) {
      return 0x2f785d;
    }
  }
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
  iVar2 = FUN_006545ca((int)sVar1,0x141);
  if (iVar2 != 0) {
    if (param_2 == 1) {
      return 0x30fefa;
    }
    if (param_2 == 2) {
      return 0x30fefd;
    }
  }
  sVar1 = FUN_0045f084(iVar3,*(undefined4 *)(param_1 + 0x3d));
  iVar3 = FUN_006545ca((int)sVar1,0xe7);
  if ((iVar3 == 0) || (param_2 != 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x23435e;
  }
  return uVar4;
}


