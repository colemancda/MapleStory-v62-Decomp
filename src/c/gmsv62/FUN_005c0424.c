/* FUN_005c0424 - 0x005c0424 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c0424(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = FUN_0042452b();
  iVar4 = (int)cVar1;
  if (DAT_00979178 == 0) {
    if (iVar4 == 2) {
      FUN_005c0936(param_1);
      return;
    }
    if (iVar4 != 3) {
      if (iVar4 != 5) {
        return;
      }
      FUN_005c04c0(param_1);
      return;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))(&DAT_00979468);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & DAT_00979178);
    if (piVar3 == (int *)0x0) {
      return;
    }
    if (iVar4 != 3) {
      if (iVar4 == 4) {
        FUN_005c0d6a(param_1);
        return;
      }
      if (iVar4 == 6) {
        (**(code **)(*piVar3 + 0x50))(param_1);
        return;
      }
      if (iVar4 == 9) {
        FUN_005c0eba(param_1);
        return;
      }
      if (iVar4 != 10) {
        (**(code **)(*piVar3 + 0x40))(iVar4,param_1);
        return;
      }
      FUN_005c0e03(param_1);
      return;
    }
  }
  FUN_005c0b0e(param_1);
  return;
}


