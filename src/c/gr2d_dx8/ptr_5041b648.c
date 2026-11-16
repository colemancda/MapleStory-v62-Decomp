/* ptr_5041b648 - 0x5041b648 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall ptr_5041b648(void *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  pbVar2 = (byte *)(*(int *)((int)param_1 + 0x1050) * param_2 +
                    *(int *)((int)param_1 + 0x1054) * param_3 + *(int *)((int)param_1 + 0x18));
  pbVar3 = pbVar2 + *(int *)((int)param_1 + 0x1058);
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    puVar4 = (undefined4 *)((*pbVar2 + 3) * 0x10 + (int)param_1);
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    puVar1 = param_4 + 3;
    param_4[2] = puVar4[2];
    param_4 = param_4 + 4;
    *puVar1 = puVar4[3];
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FUN_50418f81(param_1,(uint)(param_4 + *(int *)((int)param_1 + 0x1058) * -4));
  }
  return;
}


