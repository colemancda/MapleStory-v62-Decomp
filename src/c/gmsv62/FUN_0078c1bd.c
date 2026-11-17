/* FUN_0078c1bd - 0x0078c1bd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0078c1bd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x528) = 5000;
  uVar1 = FUN_0043f6fe();
  if (uVar1 < 0x80000000) {
LAB_0078c224:
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044dddc(*(undefined4 *)(param_1 + 0x4a4));
    iVar3 = FUN_0065431f(*(undefined4 *)(param_1 + 0x4b0),uVar2,param_2,param_4,param_5);
    if (iVar3 == 0) {
      iVar3 = FUN_0065429b(*(undefined4 *)(param_1 + 0x4b0),uVar2,param_2,param_4,param_5);
      if (iVar3 == 0) goto LAB_0078c224;
    }
    *(undefined4 *)(param_1 + 0x530) = param_2;
    (**(code **)(*(int *)(param_1 + 0x78) + 0x10))(param_3,100,0);
    uVar2 = 1;
  }
  return uVar2;
}


