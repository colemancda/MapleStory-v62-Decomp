/* FUN_00579af3 - 0x00579af3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00579af3(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    return;
  }
  if (param_2 == 1000) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0x13c);
    if (iVar1 == 2) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 4) {
        FUN_005697ac(1,0);
        goto LAB_00579ba8;
      }
      if ((DAT_00979414 != 0) && (FUN_00815de9(), DAT_00979414 != 0)) {
        (*(code *)**(undefined4 **)(DAT_00979414 + 8))(1);
      }
      if ((DAT_00979418 != 0) && (FUN_00815de9(), DAT_00979418 != 0)) {
        (*(code *)**(undefined4 **)(DAT_00979418 + 8))(1);
      }
      uVar2 = 1;
    }
    FUN_005699cf(uVar2);
  }
  else if (param_2 == 0x3e9) {
    (*DAT_0097b514)(0);
  }
  else if ((param_2 == 0x3ea) && (iVar1 = FUN_00579f0d(), iVar1 != 0)) {
    FUN_00579f3b(1);
  }
LAB_00579ba8:
  if (DAT_00978364 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0x13c);
    if ((0 < iVar1) && (iVar1 < 3)) {
      FUN_00817f6e(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x158));
    }
  }
  return;
}


