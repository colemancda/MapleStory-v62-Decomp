/* FUN_5041dd3c - 0x5041dd3c in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5041dd3c(float *param_1,float *param_2,int param_3,uint param_4)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float local_54 [6];
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  undefined4 *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_4 == 6) {
    pfVar5 = (float *)&DAT_5042f9a4;
    local_20 = &DAT_5042f98c;
  }
  else {
    pfVar5 = (float *)&DAT_5042f96c;
    local_20 = (undefined4 *)&DAT_5042f94c;
  }
  uVar3 = 0;
  local_8 = 1.0;
  local_c = 0.0;
  if (param_4 == 8) {
    do {
      pfVar2 = (float *)(param_3 + uVar3 * 4);
      if (*pfVar2 < local_8) {
        local_8 = *pfVar2;
      }
      if (local_c < *pfVar2) {
        local_c = *pfVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  else {
    do {
      pfVar2 = (float *)(param_3 + uVar3 * 4);
      if ((*pfVar2 < local_8) && (_DAT_5042e144 < *pfVar2)) {
        local_8 = *pfVar2;
      }
      if ((local_c < *pfVar2) && (*pfVar2 < _DAT_5042e130)) {
        local_c = *pfVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  uVar3 = param_4 - 1;
  local_28 = (float)(int)uVar3;
  if ((int)uVar3 < 0) {
    local_28 = local_28 + _DAT_5042e134;
  }
  local_34 = uVar3;
  FUN_5041dc1f(pfVar2);
  local_24 = 0;
  while (_DAT_5042f948 <= local_c - local_8) {
    local_2c = local_28 / (local_c - local_8);
    if (param_4 != 0) {
      iVar4 = (int)local_20 - (int)pfVar5;
      pfVar2 = pfVar5;
      uVar6 = param_4;
      do {
        *(float *)(((int)local_54 - (int)pfVar5) + (int)pfVar2) =
             local_8 * *pfVar2 + local_c * *(float *)(iVar4 + (int)pfVar2);
        pfVar2 = pfVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_4 == 6) {
      local_3c = 0;
      local_38 = 0x3f800000;
    }
    uVar6 = 0;
    local_10 = 0.0;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = 0.0;
    do {
      pfVar2 = (float *)(param_3 + uVar6 * 4);
      fVar1 = (*pfVar2 - local_8) * local_2c;
      if (fVar1 < _DAT_5042e144 == (fVar1 == _DAT_5042e144)) {
        if (fVar1 < local_28) {
          local_30 = fVar1 + _DAT_5042e12c;
          local_34 = (uint)ROUND(fVar1 + _DAT_5042e12c);
        }
        else {
          local_34 = uVar3;
          if ((param_4 == 6) &&
             (fVar1 = (local_c + _DAT_5042e130) * _DAT_5042e12c,
             fVar1 < *pfVar2 != (fVar1 == *pfVar2))) goto LAB_5041df3f;
        }
LAB_5041defd:
        if (local_34 < param_4) {
          local_10 = (*pfVar2 - local_54[local_34]) * pfVar5[local_34] + local_10;
          local_18 = pfVar5[local_34] * pfVar5[local_34] + local_18;
          local_14 = (*pfVar2 - local_54[local_34]) * (float)local_20[local_34] + local_14;
          fVar1 = (float)local_20[local_34];
          local_1c = fVar1 * fVar1 + local_1c;
        }
      }
      else if ((param_4 != 6) || (local_8 * _DAT_5042e12c < *pfVar2)) {
        local_34 = 0;
        goto LAB_5041defd;
      }
LAB_5041df3f:
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    if (_DAT_5042e144 < local_18) {
      local_8 = local_8 - local_10 / local_18;
    }
    if (_DAT_5042e144 < local_1c) {
      local_c = local_c - local_14 / local_1c;
    }
    fVar1 = local_c;
    if (local_c < local_8) {
      local_c = local_8;
      local_8 = fVar1;
    }
    if (((local_10 * local_10 < _DAT_5042f944) && (local_14 * local_14 < _DAT_5042f944)) ||
       (local_24 = local_24 + 1, 7 < local_24)) break;
  }
  if (_DAT_5042e144 <= local_8) {
    if (_DAT_5042e130 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  *param_1 = local_8;
  if (_DAT_5042e144 <= local_c) {
    if (_DAT_5042e130 < local_c) {
      local_c = 1.0;
    }
  }
  else {
    local_c = 0.0;
  }
  *param_2 = local_c;
  return;
}


