/* FUN_007acc49 - 0x007acc49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007acc49(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0044dddc(*(undefined4 *)(param_1 + 0x4a4));
  if (param_2 == 0x406849) {
    *(undefined4 *)(param_1 + 0x1e84) = 0x406849;
    *(undefined4 *)(param_1 + 0x1e88) = uVar1;
    iVar2 = FUN_007d1e08();
    *(int *)(param_1 + 0x1e8c) = iVar2 + param_3;
    *(undefined4 *)(param_1 + 0x1e90) = param_4;
  }
  else {
    *(undefined4 *)(param_1 + 0x1e84) = 0;
  }
  return;
}


