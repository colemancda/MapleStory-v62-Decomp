/* ptr_50420fe0 - 0x50420fe0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined8 *
ptr_50420fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            float param_5,float param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 1);
  uVar2 = *param_3;
  fVar4 = (float)*param_2;
  fVar5 = (float)((ulonglong)*param_2 >> 0x20);
  uVar3 = *param_4;
  *(float *)(param_1 + 1) =
       (*(float *)(param_3 + 1) - fVar1) * param_5 + fVar1 +
       (*(float *)(param_4 + 1) - fVar1) * param_6;
  *param_1 = CONCAT44(((float)((ulonglong)uVar2 >> 0x20) - fVar5) * param_5 + fVar5 +
                      ((float)((ulonglong)uVar3 >> 0x20) - fVar5) * param_6,
                      ((float)uVar2 - fVar4) * param_5 + fVar4 + ((float)uVar3 - fVar4) * param_6);
  return param_1;
}


