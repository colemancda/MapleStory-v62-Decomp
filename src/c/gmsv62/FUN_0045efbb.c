/* FUN_0045efbb - 0x0045efbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_0045efbb(int *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    pcVar1 = (char *)*param_1;
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      iVar5 = param_3;
      uVar2 = FUN_00415015(param_3,0);
      FUN_00879c20(uVar2,param_2,iVar5);
      FUN_004150c0(param_3);
    }
    else {
      iVar5 = *(int *)(pcVar1 + -4);
      for (iVar3 = *(int *)(pcVar1 + -8); iVar3 < iVar5 + param_3; iVar3 = iVar3 * 2) {
      }
      iVar3 = FUN_00415015(iVar3,1);
      if (*param_1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*param_1 + -4);
      }
      FUN_00879c20(iVar4 + iVar3,param_2,param_3);
      FUN_004150c0(iVar5 + param_3);
    }
  }
  return param_1;
}


