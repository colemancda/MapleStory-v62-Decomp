/* FUN_50413a0a - 0x50413a0a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_50413a0a(float *param_1,float *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  
  switch(((param_6 != 0) << 1 | param_5 != 0) << 1 | param_4 != 0) {
  case '\0':
    goto switchD_50413a47_default;
  case '\x01':
    goto LAB_50413ae5;
  case '\x02':
    goto LAB_50413ae5;
  case '\x03':
    break;
  case '\x04':
    goto LAB_50413ae5;
  case '\x05':
    break;
  case '\x06':
    break;
  case '\a':
    thunk_FUN_5041193b();
    break;
  default:
    goto switchD_50413a47_default;
  }
  thunk_FUN_5041193b();
LAB_50413ae5:
  thunk_FUN_50411e47();
switchD_50413a47_default:
  if (param_3 != (int *)0x0) {
    fVar1 = (float)*param_3;
    if (*param_3 < 0) {
      fVar1 = fVar1 + _DAT_5042e134;
    }
    fVar2 = (float)param_3[2];
    if (param_3[2] < 0) {
      fVar2 = fVar2 + _DAT_5042e134;
    }
    fVar2 = (*param_2 - fVar1) / fVar2;
    *param_1 = (fVar2 + fVar2) - _DAT_5042e130;
    fVar1 = (float)param_3[1];
    if (param_3[1] < 0) {
      fVar1 = fVar1 + _DAT_5042e134;
    }
    fVar2 = (float)param_3[3];
    if (param_3[3] < 0) {
      fVar2 = fVar2 + _DAT_5042e134;
    }
    fVar2 = (param_2[1] - fVar1) / fVar2;
    param_1[1] = -((fVar2 + fVar2) - _DAT_5042e130);
    param_1[2] = (param_2[2] - (float)param_3[4]) / ((float)param_3[5] - (float)param_3[4]);
  }
  thunk_FUN_50411348();
  return param_1;
}


