/* FUN_006f93d1 - 0x006f93d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f93d1(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_006f94b9();
  if ((param_3 & 0x80000000) == 0) {
    if (iVar1 < 0) goto LAB_006f944b;
    if (param_2 == 9) {
      if (*(int *)(param_1 + 0x664) == 0) {
        iVar2 = *(int *)(param_1 + 0x640 + ((iVar1 + 1) % 2) * 8);
      }
      else {
        if (*(int *)(param_1 + 0x664) != 1) goto LAB_006f9447;
        iVar2 = *(int *)(param_1 + 0x650 + ((iVar1 + 1) % 3) * 8);
      }
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 4U;
    }
    else {
      if (param_2 != 0x1b) goto LAB_006f9447;
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar3 = 0;
    }
    FUN_00817f6e(uVar3);
  }
LAB_006f9447:
  if (-1 < iVar1) {
    return;
  }
LAB_006f944b:
  FUN_0078a38f(param_2,param_3);
  return;
}


