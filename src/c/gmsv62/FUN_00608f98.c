/* FUN_00608f98 - 0x00608f98 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00608f98(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00815f0f(param_2,param_3,param_4);
  if (iVar1 != 0) {
    if ((param_4 != (int *)0x0) && (*param_4 != 0)) {
      iVar2 = (**(code **)(*(int *)(*param_4 + 4) + 0x28))();
      if (iVar2 != 0) {
        return iVar1;
      }
      *param_4 = 0;
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x84);
    if (iVar1 == 0) {
      iVar1 = FUN_00604b00(param_2,param_3);
      return iVar1;
    }
    if (iVar1 == 1) {
      iVar1 = FUN_006074c4(param_2,param_3);
      return iVar1;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_00605bfb(param_2,param_3);
      return iVar1;
    }
  }
  return 0;
}


