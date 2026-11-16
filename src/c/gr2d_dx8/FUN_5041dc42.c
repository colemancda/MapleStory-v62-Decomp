/* FUN_5041dc42 - 0x5041dc42 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_5041dc42(float *param_1)

{
  float local_1c;
  float local_18;
  float local_14;
  
  if (_DAT_5042e144 <= *param_1) {
    if (_DAT_5042e130 < *param_1) {
      local_1c = 1.0;
    }
    else {
      local_1c = *param_1;
    }
  }
  else {
    local_1c = 0.0;
  }
  if (_DAT_5042e144 <= param_1[1]) {
    if (_DAT_5042e130 < param_1[1]) {
      local_18 = 1.0;
    }
    else {
      local_18 = param_1[1];
    }
  }
  else {
    local_18 = 0.0;
  }
  if (_DAT_5042e144 <= param_1[2]) {
    if (param_1[2] <= _DAT_5042e130) {
      local_14 = param_1[2];
    }
    else {
      local_14 = 1.0;
    }
  }
  else {
    local_14 = 0.0;
  }
  FUN_5041dc1f(param_1);
  return ((int)ROUND(local_1c * _DAT_5042e1d4 + _DAT_5042e12c) << 6 |
         (int)ROUND(local_18 * _DAT_5042e1d0 + _DAT_5042e12c)) << 5 |
         (int)ROUND(local_14 * _DAT_5042e1d4 + _DAT_5042e12c);
}


