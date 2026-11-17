/* FUN_0046febf - 0x0046febf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0046febf(int *param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 != 0) {
    psVar1 = (short *)*param_1;
    if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
      iVar3 = param_3 * 2;
      uVar2 = FUN_0041903e(param_3,0);
      FUN_00879c20(uVar2,param_2,iVar3);
      FUN_004190dc(param_3);
    }
    else {
      iVar5 = (*(uint *)(psVar1 + -2) >> 1) + param_3;
      for (iVar3 = *(int *)(psVar1 + -4); iVar3 < iVar5; iVar3 = iVar3 * 2) {
      }
      iVar3 = FUN_0041903e(iVar3,1);
      if (*param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(*param_1 + -4) >> 1;
      }
      FUN_00879c20(iVar3 + uVar4 * 2,param_2,param_3 * 2);
      FUN_004190dc(iVar5);
    }
  }
  return param_1;
}


