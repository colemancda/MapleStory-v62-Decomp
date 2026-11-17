/* FUN_0049e7d6 - 0x0049e7d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0049e7d6(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (((int *)*param_1 == (int *)0x0) || (iVar3 = *(int *)*param_1, iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + -4) >> 1;
  }
  if (uVar2 == 0) {
    FUN_00402e8e(param_2);
    FUN_00408b49();
    FUN_00402fa6();
    *param_1 = (int)param_2;
    piVar6 = param_2;
  }
  else {
    if (param_2 == (int *)0x0) {
      return param_1;
    }
    iVar3 = FUN_0087a007(param_2);
    piVar6 = (int *)*param_1;
    if ((piVar6 == (int *)0x0) || (*piVar6 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*piVar6 + -4) >> 1;
    }
    if (piVar6 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar6;
    }
    iVar4 = FUN_00402df5(iVar4,uVar2 + iVar3);
    if (iVar4 == 0) {
      FUN_00878dfb(0x8007000e);
    }
    if (((int *)*param_1 == (int *)0x0) || (iVar1 = *(int *)*param_1, iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(iVar1 + -4) >> 1;
    }
    FUN_00879c20(iVar4 + uVar2 * 2,param_2,iVar3 * 2);
    puVar5 = (undefined4 *)FUN_00402ee6(iVar4,0);
    param_2 = (int *)*puVar5;
    if (param_2 != (int *)0x0) {
      InterlockedIncrement(param_2 + 2);
    }
    FUN_00402f41(&param_2);
    piVar6 = param_1;
    if (param_2 != (int *)0x0) {
      FUN_004030b1();
      param_2 = (int *)0x0;
    }
  }
  if (piVar6 != (int *)0x0) {
    FUN_004030b1();
  }
  return param_1;
}


