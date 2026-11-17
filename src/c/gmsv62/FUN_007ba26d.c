/* FUN_007ba26d - 0x007ba26d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007ba26d(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(int *)((-(uint)(param_1[0x35d] != 0) & param_1[0x35d] - 0xcU) + 0x110) != 0) ||
       (iVar1 = FUN_00614c6f(), iVar1 != 0)) && (iVar1 = FUN_006158e9(), iVar1 == 0)) &&
     (iVar1 = FUN_00615923(), iVar1 == 0)) {
    (**(code **)(*param_1 + 4))();
    iVar1 = FUN_00793618();
    if ((iVar1 != 0) && (iVar1 = FUN_007b04b6(), iVar1 == 0)) {
      uVar2 = FUN_007a93ea(param_2,param_3,0,0,0,0);
      return uVar2;
    }
  }
  return 0;
}


