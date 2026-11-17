/* FUN_007055ef - 0x007055ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007055ef(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = param_3;
  *param_3 = -1;
  *param_2 = -1;
  param_3 = (int *)0x0;
  puVar3 = (undefined4 *)(param_1 + 4);
  do {
    if (*piVar1 < 0) {
      iVar2 = (**(code **)(*(int *)*puVar3 + 4))();
      if (iVar2 != 0) {
        *piVar1 = (int)param_3;
      }
    }
    else if (*param_2 < 0) {
      iVar2 = (**(code **)(*(int *)*puVar3 + 4))();
      if (iVar2 == 0) {
        *param_2 = (int)param_3 + -1;
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)*puVar3 + 4))();
      if (iVar2 != 0) {
        return 0;
      }
    }
    param_3 = (int *)((int)param_3 + 1);
    puVar3 = puVar3 + 2;
  } while ((int)param_3 < 3);
  if ((-1 < *piVar1) && (*param_2 < 0)) {
    *param_2 = 2;
  }
  return 1;
}


