/* ptr_0070cc2c - 0x0070cc2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0070cc2c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((0x14 < param_3) && (iVar1 = FUN_0070e29f(), -1 < iVar1)) {
    if (param_1[0x1e] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1[0x1e] + -4);
    }
    uVar2 = FUN_0070e29f();
    if (uVar2 < uVar3) {
      iVar1 = FUN_0070e29f();
      uVar4 = *(undefined4 *)(param_1[0x1e] + iVar1 * 4);
      iVar1 = (**(code **)(*param_1 + 0x30))(uVar4);
      param_3 = iVar1 + 0x14 + param_3;
      iVar1 = (**(code **)(*param_1 + 0x2c))(param_3);
      FUN_0074d755(iVar1 + 0x14 + param_2,param_3,uVar4);
      return 0;
    }
  }
  FUN_0074d6fb();
  return 0;
}


