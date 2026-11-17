/* FUN_005d5682 - 0x005d5682 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005d5682(undefined4 param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_54 [10];
  undefined1 local_2c [16];
  int local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  *param_3 = param_2;
  param_2 = 1;
  piVar5 = param_3;
  local_18 = param_1;
  if (1 < param_4) {
    do {
      piVar2 = (int *)(**(code **)(*(int *)(*piVar5 + 4) + 0x10))();
      iVar4 = *piVar2;
      iVar6 = piVar2[1];
      if (param_5 == 0) {
        local_8 = iVar4;
        piVar2 = (int *)(**(code **)(*(int *)(*param_3 + 4) + 0x10))();
        iVar1 = iVar4 + 0x96;
        iVar4 = *piVar2 + 400;
        if (iVar1 < *piVar2 + 400) {
          iVar4 = iVar1;
        }
      }
      else {
        piVar2 = (int *)(**(code **)(*(int *)(*param_3 + 4) + 0x10))();
        local_8 = iVar4 + -0x96;
        if (iVar4 + -0x96 <= *piVar2 + -400) {
          local_8 = *piVar2 + -400;
        }
      }
      (*DAT_0097b504)(local_2c,local_8,iVar6 + -0x96,iVar4,iVar6 + 0x96);
      local_1c = FUN_005d528b(local_2c,local_54,10,*piVar5,0,0,0,0);
      if (local_1c == 0) {
        return param_2;
      }
      local_14 = 0;
      local_c = 0x7fffffff;
      local_8 = 0;
      if (local_1c < 1) {
        return param_2;
      }
      local_10 = local_54;
      do {
        iVar4 = 0;
        if (0 < param_2) {
          piVar2 = param_3;
          do {
            if (*piVar2 == *local_10) goto LAB_005d57c1;
            iVar4 = iVar4 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar4 < param_2);
        }
        piVar2 = (int *)(**(code **)(*(int *)(*local_10 + 4) + 0x10))();
        iVar4 = *piVar2;
        iVar6 = piVar2[1];
        piVar2 = (int *)(**(code **)(*(int *)(*piVar5 + 4) + 0x10))();
        iVar1 = *piVar2;
        iVar3 = (**(code **)(*(int *)(*piVar5 + 4) + 0x10))();
        iVar6 = iVar6 - *(int *)(iVar3 + 4);
        iVar4 = iVar6 * iVar6 + (iVar4 - iVar1) * (iVar4 - iVar1);
        if (iVar4 < local_c) {
          local_c = iVar4;
          local_14 = local_8;
        }
LAB_005d57c1:
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
      } while (local_8 < local_1c);
      if (local_c == 0x7fffffff) {
        return param_2;
      }
      param_2 = param_2 + 1;
      piVar5[1] = local_54[local_14];
      piVar5 = piVar5 + 1;
    } while (param_2 < param_4);
  }
  return param_2;
}


