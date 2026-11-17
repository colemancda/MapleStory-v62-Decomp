/* FUN_00435553 - 0x00435553 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_00435553(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != param_2) {
    FUN_00438c5b();
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + -4), iVar1 != 0)) {
      piVar4 = (int *)FUN_004029b9(iVar1 * 4 + 4);
      *param_1 = (int)(piVar4 + 1);
      *piVar4 = iVar1;
      param_2 = (int *)*param_2;
      piVar4 = param_2;
      piVar5 = (int *)*param_1;
      while (piVar3 = piVar5, piVar2 = piVar4, piVar2 < param_2 + iVar1) {
        piVar5 = piVar3 + 1;
        piVar4 = piVar2 + 1;
        if (piVar3 != (int *)0x0) {
          piVar2 = (int *)*piVar2;
          *piVar3 = (int)piVar2;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 4))(piVar2);
          }
        }
      }
    }
  }
  return param_1;
}


