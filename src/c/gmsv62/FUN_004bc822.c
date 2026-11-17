/* FUN_004bc822 - 0x004bc822 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004bc822(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 & 0x80000000) == 0) {
    if (param_2 == 9) {
      uVar2 = FUN_005265f8(0x10);
      FUN_004bc72a(uVar2);
    }
    else {
      if (param_2 == 0xd) {
        iVar1 = FUN_00816395(1);
        if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x20))(), iVar1 == 0)) {
          return;
        }
        iVar1 = *(int *)(param_1 + -4);
        uVar2 = 1;
      }
      else {
        if (param_2 != 0x1b) {
          return;
        }
        iVar1 = FUN_00816395(2);
        if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x20))(), iVar1 == 0)) {
          return;
        }
        iVar1 = *(int *)(param_1 + -4);
        uVar2 = 2;
      }
      (**(code **)(iVar1 + 0x34))(uVar2);
    }
  }
  return;
}


