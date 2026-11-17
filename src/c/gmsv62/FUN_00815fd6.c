/* FUN_00815fd6 - 0x00815fd6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00815fd6(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x50);
  do {
    do {
      if (uVar4 == 0) {
        return 1;
      }
      iVar3 = *(int *)(uVar4 + 4);
      iVar2 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
      uVar4 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      if ((iVar3 == 0) ||
         (iVar1 = (**(code **)(*(int *)(iVar3 + 4) + 0x48))(&DAT_00979154), iVar2 = iVar3,
         iVar1 == 0)) {
        iVar2 = 0;
      }
    } while (iVar2 == 0);
    if (*(int *)(iVar3 + 0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(iVar3 + 0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar3 = *(int *)(iVar2 + 4);
    iVar2 = FUN_00424f08(param_4);
    iVar2 = FUN_00424ee1(param_3 - iVar2);
    iVar3 = (**(code **)(iVar3 + 0x10))(param_2 - iVar2);
  } while (iVar3 == 0);
  return 1;
}


