/* FUN_5041387d - 0x5041387d in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_5041387d(float *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,
                    int param_6)

{
  float fVar1;
  float fVar2;
  
  switch(((param_6 != 0) << 1 | param_5 != 0) << 1 | param_4 != 0) {
  case '\0':
    break;
  case '\x01':
    break;
  case '\x02':
    break;
  case '\x03':
    goto LAB_5041394e;
  case '\x04':
    break;
  case '\x05':
    goto LAB_5041394e;
  case '\x06':
    goto LAB_5041394e;
  case '\a':
    thunk_FUN_5041193b();
LAB_5041394e:
    thunk_FUN_5041193b();
  }
  thunk_FUN_50411348();
  if (param_3 != (int *)0x0) {
    fVar2 = (float)param_3[2];
    if (param_3[2] < 0) {
      fVar2 = fVar2 + _DAT_5042e134;
    }
    fVar1 = (float)*param_3;
    if (*param_3 < 0) {
      fVar1 = fVar1 + _DAT_5042e134;
    }
    *param_1 = fVar1 + fVar2 * (*param_1 + _DAT_5042e130) * _DAT_5042e12c;
    fVar2 = (float)param_3[3];
    if (param_3[3] < 0) {
      fVar2 = fVar2 + _DAT_5042e134;
    }
    fVar1 = (float)param_3[1];
    if (param_3[1] < 0) {
      fVar1 = fVar1 + _DAT_5042e134;
    }
    param_1[1] = fVar1 + fVar2 * (1.0 - param_1[1]) * _DAT_5042e12c;
    param_1[2] = ((float)param_3[5] - (float)param_3[4]) * param_1[2] + (float)param_3[4];
  }
  return param_1;
}


