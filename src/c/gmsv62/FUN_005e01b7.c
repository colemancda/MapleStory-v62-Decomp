/* FUN_005e01b7 - 0x005e01b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_005e01b7(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (0 < (int)param_3) {
    iVar1 = *(int *)(param_1 + 0xa0);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = *(uint *)(iVar1 + -4);
    }
    if (param_3 <= uVar3) {
      piVar2 = *(int **)(*(int *)(param_1 + 0xa0) + -4 + param_3 * 4);
      *param_2 = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        return param_2;
      }
      (**(code **)(*piVar2 + 4))(piVar2);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}


