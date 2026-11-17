/* FUN_0072c6a4 - 0x0072c6a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0072c6a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 == 0) {
    if (param_2 < *(int *)(param_1 + 0x9c)) {
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      if (param_2 != 0) {
        iVar1 = *(int *)(param_1 + 0x9c) + -1;
        if (param_2 < iVar1) goto LAB_0072c6d9;
        if (param_2 != iVar1) {
          if (param_2 <= iVar1) {
            return;
          }
          goto LAB_0072c6f5;
        }
      }
      uVar2 = 1;
      goto LAB_0072c6f7;
    }
    if ((iVar1 != 2) && (iVar1 != 3)) {
      return;
    }
    if (param_2 < *(int *)(param_1 + 0x9c)) {
LAB_0072c6d9:
      uVar2 = 2;
      goto LAB_0072c6f7;
    }
  }
LAB_0072c6f5:
  uVar2 = 3;
LAB_0072c6f7:
  FUN_0072c57c(uVar2);
  return;
}


