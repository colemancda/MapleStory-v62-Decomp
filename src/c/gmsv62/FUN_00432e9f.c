/* FUN_00432e9f - 0x00432e9f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00432e9f(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = 0;
  param_1[2] = 1;
  iVar1 = FUN_00432f42();
  iVar2 = FUN_00432f42();
  iVar3 = FUN_00403075(0,(iVar2 + iVar1) * 2);
  *param_1 = iVar3;
  if (iVar3 == 0) {
    if (iVar2 + iVar1 == 0) {
      return param_1;
    }
    FUN_00878dfb(0x8007000e);
  }
  if ((int *)*param_2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)*param_2;
  }
  if (iVar3 != 0) {
    FUN_00879c20(*param_1,iVar3,iVar1 * 2 + 2);
  }
  if ((int *)*param_3 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)*param_3;
  }
  if (iVar3 != 0) {
    FUN_00879c20(*param_1 + iVar1 * 2,iVar3,iVar2 * 2 + 2);
  }
  return param_1;
}


