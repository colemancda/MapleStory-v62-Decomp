/* FUN_00458c4f - 0x00458c4f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00458c4f(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 < 1) || (5 < param_3)) goto LAB_00458d1f;
  if (param_3 == 1) {
    if ((param_4 == 0) || ((param_4 < -0x30 && (-0x65 < param_4)))) {
LAB_00458d1f:
      *(undefined4 *)(param_2 + 4) = 0;
      return param_2;
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 999) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 999) + -4);
    }
    if ((iVar2 + -1 < param_4) || (param_4 < -0x94)) goto LAB_00458d1f;
    if (param_4 < -100) {
      iVar2 = *(int *)(param_1 + param_4 * -8 + -0xc1);
    }
    else {
      if (-1 < param_4) {
        iVar2 = *(int *)(*(int *)(param_1 + 999) + 4 + param_4 * 8);
        goto LAB_00458ce3;
      }
      iVar2 = *(int *)(param_1 + param_4 * -8 + 0xd7);
    }
    *(int *)(param_2 + 4) = iVar2;
  }
  else {
    if (param_4 < 1) goto LAB_00458d1f;
    piVar1 = (int *)(param_1 + 0x3e3 + param_3 * 4);
    iVar2 = *piVar1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (iVar3 + -1 < param_4) goto LAB_00458d1f;
    iVar2 = *(int *)(*piVar1 + 4 + param_4 * 8);
LAB_00458ce3:
    *(int *)(param_2 + 4) = iVar2;
  }
  if (iVar2 == 0) {
    return param_2;
  }
  InterlockedIncrement((LONG *)(iVar2 + 4));
  return param_2;
}


