/* ptr_50414237 - 0x50414237 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50414237(undefined4 *param_1,undefined4 *param_2,float *param_3,undefined4 param_4,
                 float *param_5,float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_44;
  undefined4 uStack_38;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fStack_24 = *param_6;
  fStack_20 = param_6[1];
  fStack_1c = param_6[2];
  fStack_18 = param_6[3];
  fVar1 = fStack_24 + *param_5;
  fVar5 = fStack_20 + param_5[1];
  fVar4 = fStack_1c + param_5[2];
  fVar3 = fStack_18 + param_5[3];
  fVar2 = *param_5 - fStack_24;
  fVar6 = param_5[1] - fStack_20;
  fVar7 = param_5[2] - fStack_1c;
  fVar8 = param_5[3] - fStack_18;
  if (fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 <
      fVar2 * fVar2 + fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) {
    fStack_24 = -fStack_24;
    fStack_20 = -fStack_20;
    fStack_1c = -fStack_1c;
    fStack_18 = -fStack_18;
  }
  fVar1 = fStack_20 - *(float *)(param_7 + 4);
  fVar2 = fStack_1c - *(float *)(param_7 + 8);
  thunk_FUN_50412d94();
  thunk_FUN_50412c25();
  FUN_50412e5b();
  thunk_FUN_50412c25();
  FUN_50412e5b();
  FUN_50412edf();
  thunk_FUN_50412c25();
  *param_1 = uStack_44;
  param_1[1] = fStack_90 + fVar1;
  param_1[2] = fStack_8c + fVar2;
  param_1[3] = uStack_38;
  thunk_FUN_50412d94();
  thunk_FUN_50412c25();
  FUN_50412e5b();
  thunk_FUN_50412c25();
  FUN_50412e5b();
  FUN_50412edf();
  thunk_FUN_50412c25();
  *param_2 = uStack_44;
  param_2[1] = fStack_90 + fVar1;
  param_2[2] = fStack_8c + fVar2;
  param_2[3] = uStack_38;
  *param_3 = fStack_24;
  param_3[1] = fStack_20;
  param_3[2] = fStack_1c;
  param_3[3] = fStack_18;
  return;
}


