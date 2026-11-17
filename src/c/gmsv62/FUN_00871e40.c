/* FUN_00871e40 - 0x00871e40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00871e40(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_4;
  if (((*(int *)(param_1 + 0xc) != 0) &&
      (piVar1 = *(int **)(param_1 + 4), param_3 == (int *)*piVar1)) && (param_4 == piVar1)) {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_0097fca4) {
      do {
        FUN_00872550(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00402614(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_0097fca4);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_0097fca4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *param_2 = **(undefined4 **)(param_1 + 4);
    return;
  }
  do {
    if (param_3 == piVar2) {
      *param_2 = param_3;
      return;
    }
    if ((int *)param_3[2] == DAT_0097fca4) {
      piVar1 = (int *)param_3[1];
      piVar3 = param_3;
      if (param_3 == (int *)piVar1[2]) {
        do {
          piVar3 = piVar1;
          piVar1 = (int *)piVar3[1];
        } while (piVar3 == (int *)piVar1[2]);
      }
      if ((int *)piVar3[2] != piVar1) goto LAB_00871eee;
    }
    else {
      piVar1 = (int *)FUN_00872910((int *)param_3[2]);
LAB_00871eee:
      piVar3 = piVar1;
    }
    FUN_00872150(&param_4,param_3);
    param_3 = piVar3;
  } while( true );
}


