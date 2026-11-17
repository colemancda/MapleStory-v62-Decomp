/* FUN_0052606b - 0x0052606b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052606b(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_34 [16];
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
LAB_00526074:
  uVar1 = (int)param_2 - (int)param_1;
  if ((int)(uVar1 & 0xfffffff0) < 0x101) {
    return;
  }
  piVar2 = param_1 + (((int)uVar1 >> 4) - ((int)uVar1 >> 0x1f) >> 1) * 4;
  piVar2 = (int *)FUN_0052621f(local_34,*param_1,param_1[1],param_1[2],param_1[3],*piVar2,piVar2[1],
                               piVar2[2],piVar2[3],param_2[-4],param_2[-3],param_2[-2],param_2[-1]);
  local_14 = *piVar2;
  iStack_10 = piVar2[1];
  iStack_c = piVar2[2];
  iStack_8 = piVar2[3];
  piVar2 = param_2;
  piVar4 = param_1;
  do {
    if (local_14 <= *piVar4) {
      do {
        piVar3 = piVar2;
        piVar2 = piVar3 + -4;
      } while (local_14 < *piVar2);
      if (piVar2 <= piVar4) break;
      local_24 = *piVar4;
      iStack_20 = piVar4[1];
      iStack_1c = piVar4[2];
      iStack_18 = piVar4[3];
      *piVar4 = *piVar2;
      piVar4[1] = piVar3[-3];
      piVar4[2] = piVar3[-2];
      piVar4[3] = piVar3[-1];
      *piVar2 = local_24;
      piVar3[-3] = iStack_20;
      piVar3[-2] = iStack_1c;
      piVar3[-1] = iStack_18;
    }
    piVar4 = piVar4 + 4;
  } while( true );
  if ((int)((int)piVar4 - (int)param_1 & 0xfffffff0U) <
      (int)((int)param_2 - (int)piVar4 & 0xfffffff0U)) {
    FUN_0052606b(param_1,piVar4,0);
    param_1 = piVar4;
  }
  else {
    FUN_0052606b(piVar4,param_2,0);
    param_2 = piVar4;
  }
  goto LAB_00526074;
}


