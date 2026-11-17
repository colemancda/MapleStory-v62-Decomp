/* FUN_00498d76 - 0x00498d76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00498d76(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (param_4 < iVar1) {
    return;
  }
  if (*(int *)(param_1 + 0x18) - iVar1 <= param_4) {
    return;
  }
  if (param_5 < iVar1) {
    return;
  }
  if (param_5 < *(int *)(param_1 + 0x1c) - iVar1) {
    if (param_2 != 0x201) {
      if (param_2 == 0x202) {
        if ((*(int *)(param_1 + 0x20) == 0) ||
           (iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 0x48))(&DAT_0097be40),
           iVar1 == 0)) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x20);
        }
        if ((iVar1 == 0) || (*(int *)(param_1 + 0x10) != 1000)) {
          uVar2 = 4;
        }
        else {
          uVar2 = 6;
        }
        FUN_00526a75(uVar2);
        FUN_0049941b();
        return;
      }
      if (param_2 != 0x203) {
        return;
      }
    }
    FUN_004993f7();
    return;
  }
  return;
}


