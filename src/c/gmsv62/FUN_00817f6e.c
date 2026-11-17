/* FUN_00817f6e - 0x00817f6e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00817f6e(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_00979164), iVar1 == 0)
     ) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = param_2 + -1;
  }
  if (piVar3 == (int *)0x0) {
    if ((param_2 == (int *)0x0) ||
       (iVar1 = (**(code **)(*param_2 + 0x48))(&DAT_0097c228), iVar1 == 0)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = param_2 + -1;
    }
  }
  else {
    piVar4 = (int *)piVar3[9];
  }
  FUN_00818069(piVar4);
  if ((*(int **)(param_1 + 0x78) == piVar4) &&
     ((((param_2 == (int *)0x0 || (iVar1 = (**(code **)(*param_2 + 0x20))(), iVar1 != 0)) &&
       (*(int **)(param_1 + 0x80) != param_2)) &&
      ((param_2 == (int *)0x0 || (iVar1 = (**(code **)(*param_2 + 4))(1), iVar1 != 0)))))) {
    piVar4 = *(int **)(param_1 + 0x80);
    if (DAT_009784c0 != 0) {
      if ((piVar3 == (int *)0x0) ||
         (iVar1 = (**(code **)(piVar3[1] + 0x48))(&DAT_00979144), piVar2 = piVar3, iVar1 == 0)) {
        piVar2 = (int *)0x0;
      }
      FUN_005265cf(piVar2 == (int *)0x0);
    }
    *(int **)(param_1 + 0x80) = param_2;
    if (piVar3 != (int *)0x0) {
      FUN_008164fd(piVar3);
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(0);
    }
  }
  return;
}


